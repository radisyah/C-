
#include <iostream>
#include <chrono>
#include <memory>

//#define MAX(x, y)   (x) > (y) ? (x) : (y)
#define MAX(...) std::max(__VA_ARGS__)


enum class Location
{
    Root,
    Left,
    Right
};

template<typename T> requires requires(T t) { t.value; t.left; t.right; }
void PrintTree(T* node_, std::string indent, Location loc_) {
    if (node_) {
        std::cout << indent;

        switch (loc_)
        {
        case Location::Root:
            std::cout << "ROOT----";
            indent += "   ";
            break;
        case Location::Left:
            std::cout << "L----";
            indent += "|  ";
            break;
        case Location::Right:
            std::cout << "R----";
            indent += "   ";
            break;
        }

        std::cout << node_->value << std::endl;
        PrintTree(node_->left, indent, Location::Left);
        PrintTree(node_->right, indent, Location::Right);
    }
}

namespace vz
{
    enum class HouseCondition : uint8_t
    {
        Good = 2,
        Normal = 1,
        Bad = 0
    };

    enum class HouseLocation : uint8_t
    {
        Strategic = 4,
        Urban = 3,
        Suburb = 2,
        Rural = 1,
    };

    struct House
    {
        using price_t = float;

        uint32_t landSize;  // in square meter
        float priceEachMeter;    // in million
        HouseLocation location;
        HouseCondition condition;

        [[nodiscard]] constexpr price_t GetPrice() const   // in million
        {
            auto const normalPrice = priceEachMeter * static_cast<float>(landSize);
            if (condition == HouseCondition::Bad)
                return normalPrice * static_cast<float>(static_cast<uint8_t>(location)) + normalPrice * 0.5f;
            
            return normalPrice * static_cast<float>(static_cast<uint8_t>(location)) + normalPrice * static_cast<float>(static_cast<uint8_t>(condition));
        }
    };

    template <typename T>
    struct Node
    {
        T value{};
        Node<T>* left{}, * right{};
    };

    template<typename T>
    struct AVLNode
    {
        using height_t = int32_t;

        T value{};
        AVLNode<T>* left{}, * right{};
        height_t height{ 1 };
    };

    template<typename T>
    class BST
    {
    public:
        BST() = default;

        void Insert(T value_)
        {
            m_root = Int_Insert(m_root, std::forward<T>(value_));
        }

        Node<T>* Search(T value_)
        {
            return Int_Search(m_root, std::forward<T>(value_));
        }
        Node<T>* m_root;

    private:
        Node<T>* Int_Insert(Node<T>* node_, T value_)
        {
            if (!node_)
                return new Node<T>{ std::forward<T>(value_) };

            if (value_ > node_->value)
                node_->right = Int_Insert(node_->right, std::forward<T>(value_));
            else
                node_->left = Int_Insert(node_->left, std::forward<T>(value_));

            return node_;
        }

        Node<T>* Int_Search(Node<T>* node_, T value_)
        {
            //if (!node_)
            //{
            //    return nullptr;
            //}
            //if (node_->value == value_)
            //{
            //    return node_;
            //}

            if (node_ && node_->value != value_)
            {
                // search
                if (value_ > node_->value)
                    return Int_Search(node_->right, std::forward<T>(value_));

                return Int_Search(node_->left, std::forward<T>(value_));
            }

            return node_;
        }

    private:
    };

    template<typename T>
    class AVL
    {
    public:
        using height_t = typename AVLNode<T>::height_t;

        AVL() = default;

        /// Operation
        void Push(T&& value_)
        {
            m_root = Int_Push(m_root, std::forward<T>(value_));
        }

        void Delete(T&& value_)
        {
            m_root = Int_Delete(m_root, std::forward<T>(value_));
        }

        AVLNode<T>* Get(T&& value_)
        {
            return Int_Get(m_root, std::forward<T>(value_));
        }

        void Update(T&& value_, T&& newValue_)
        {
            if (auto node = Int_Get(m_root, std::forward<T>(value_)))
            {
                node->value = std::forward<T>(newValue_);
            }
            // Give error messages
        }

        void Show()
        {
            Int_Show(m_root);
        }

        void Visualize()
        {
            PrintTree(m_root, "", Location::Root);
        }

    private:
        /// Internal Operation
        AVLNode<T>* Int_Push(AVLNode<T>* node_, T value_)
        {
            // Insert New Node
            if (!node_)
                return new AVLNode<T>{ value_ };

            // Set position to insert new node
            if (value_ > node_->value)
                node_->right = Int_Push(node_->right, std::forward<T>(value_));
            else if (value_ < node_->value)
                node_->left = Int_Push(node_->left, std::forward<T>(value_));


            // Balancing
            node_->height = MAX(GetHeight(node_->left), GetHeight(node_->right)) + 1;
            auto bf = GetBalanceFactor(node_);
            if (bf > 1) // Unbalanced
            {
                // determine subtree
                if (value_ < node_->left->value)
                    return RightRotate(node_);
                // subtree is not aligned
                node_->left = LeftRotate(node_->left);
                return RightRotate(node_);
            }
            if (bf < -1) // Unbalanced
            {
                if (value_ > node_->right->value)
                    return LeftRotate(node_);
                // subtree is not aligned
                node_->right = RightRotate(node_->right);
                return LeftRotate(node_);
            }

            return node_;
        }

        AVLNode<T>* Int_Delete(AVLNode<T>* node_, T value_)
        {
            if (!node_) return node_;

            if (value_ < node_->value)
                node_->left = Int_Delete(node_->left, std::forward<T>(value_));
            else if (value_ > node_->value)
                node_->right = Int_Delete(node_->right, std::forward<T>(value_));
            else
            {
                // value is same
                auto right = node_->right;
                if (!node_->right)
                {
                    auto left = node_->left;
                    delete node_;
                    node_ = left;
                }
                else if (!node_->left)
                {
                    delete node_;
                    node_ = right;
                }
                else
                {
                    // get most left
                    while (right->left)
                        right = right->left;

                    node_->value = right->value;
                    node_->right = Int_Delete(node_->right, right->value);
                }
            }


            if (!node_) return node_;

            // Balancing
            node_->height = MAX(GetHeight(node_->left), GetHeight(node_->right)) + 1;
            auto bf = GetBalanceFactor(node_);
            if (bf > 1) // Unbalanced
            {
                // determine subtree
                if (GetHeight(node_->right) < GetHeight(node_->left))
                    return RightRotate(node_);
                // subtree is not aligned
                node_->left = LeftRotate(node_->left);
                return RightRotate(node_);
            }
            if (bf < -1) // Unbalanced
            {
                if (GetHeight(node_->left) < GetHeight(node_->right))
                    return LeftRotate(node_);
                // subtree is not aligned
                node_->right = RightRotate(node_->right);
                return LeftRotate(node_);
            }

            return node_;
        }

        AVLNode<T>* Int_Get(AVLNode<T>* node_, T value_)
        {
            if (node_->value == value_) return node_;

            if (value_ > node_->value)
                return Int_Get(node_->right, std::forward<T>(value_));
            if (value_ < node_->value)
                return Int_Get(node_->left, std::forward<T>(value_));

            return nullptr;
        }
        /// Rotation
        
        AVLNode<T>* RightRotate(AVLNode<T>* node_)
        {
            auto left = node_->left;
            auto rightOfLeft = left->right;

            left->right = node_;
            node_->left = rightOfLeft;

            left->height = MAX(GetHeight(left->left), GetHeight(left->right)) + 1;
            node_->height = MAX(GetHeight(node_->left), GetHeight(node_->right)) + 1;

            return left; // becoming top
        }

        AVLNode<T>* LeftRotate(AVLNode<T>* node_)
        {
            auto right = node_->right;
            auto leftOfRight = right->left;

            right->left = node_;
            node_->right = leftOfRight;


            right->height = MAX(GetHeight(right->left), GetHeight(right->right)) + 1;
            node_->height = MAX(GetHeight(node_->left), GetHeight(node_->right)) + 1;

            return right; // becoming top
        }


        /// Utility
        
        [[nodiscard]] height_t GetBalanceFactor(AVLNode<T>* node_) const
        {
            if (!node_) return 0;
            return GetHeight(node_->left) - GetHeight(node_->right);    // + = left, - = right
        }

        [[nodiscard]] height_t GetHeight(AVLNode<T>* node_) const
        {
            if (!node_) return 0;
            return node_->height;
        }

        void Int_Show(AVLNode<T>* node_)
        {
            if (!node_) return;

            Int_Show(node_->left);
            std::cout << node_->value << " ";
            Int_Show(node_->right);
        }

    private:
        AVLNode<T>* m_root;
    };


    inline namespace dummy
    {
        std::vector<House> InputHouses()
        {
            std::vector<House> houses;

            houses.emplace_back(100, 4.5, HouseLocation::Strategic, HouseCondition::Good);
            houses.emplace_back(200, 1.1, HouseLocation::Rural, HouseCondition::Good);
            houses.emplace_back(500, 1.5, HouseLocation::Rural, HouseCondition::Normal);
            houses.emplace_back(130, 4.5, HouseLocation::Strategic, HouseCondition::Bad);
            houses.emplace_back(200, 1.0, HouseLocation::Rural, HouseCondition::Bad);
            houses.emplace_back(300, 2.9, HouseLocation::Urban, HouseCondition::Good);
            houses.emplace_back(400, 2.0, HouseLocation::Suburb, HouseCondition::Normal);
            houses.emplace_back(75, 1.2, HouseLocation::Rural, HouseCondition::Normal);
            houses.emplace_back(150, 2.1, HouseLocation::Strategic, HouseCondition::Normal);
            houses.emplace_back(250, 1.2, HouseLocation::Rural, HouseCondition::Good);
            houses.emplace_back(375, 2.5, HouseLocation::Suburb, HouseCondition::Bad);
            houses.emplace_back(800, 4.6, HouseLocation::Urban, HouseCondition::Bad);
            houses.emplace_back(300, 1.5, HouseLocation::Suburb, HouseCondition::Good);
            houses.emplace_back(620, 3.3, HouseLocation::Urban, HouseCondition::Normal);

            return houses;
        }
    }

    namespace detail
    {
        std::vector<House> InputHouses()
        {
            std::vector<House> houses;
            while (true)
            {
                House temp{};
                std::cout << "Land Size in M2: ";
                std::cin >> temp.landSize;

                std::cout << "Price Each M2: ";
                std::cin >> temp.priceEachMeter;

                std::cout << "1. Strategic\n";
                std::cout << "2. Urban\n";
                std::cout << "3. Suburb\n";
                std::cout << "4. Rural\n";
                std::cout << "[+]Location (1/2/3/4): ";
                int choose = 0;
                std::cin >> choose;
                temp.location = static_cast<HouseLocation>(choose);

                std::cout << "1. Good\n";
                std::cout << "2. Normal\n";
                std::cout << "3. Bad\n";
                std::cout << "[+]Condition (1/2/3): ";
                std::cin >> choose;
                temp.condition = static_cast<HouseCondition>(choose);

                std::cout << "Input more house? (y/n): ";
                char answer{};
                std::cin >> answer;

                houses.push_back(std::move(temp));

                if (std::toupper(answer) != 'Y')    break;

#ifdef _WIN32
                std::system("cls");
#else
                std::system("clear");
#endif
            }

            return houses;
        }
    }
}

int main()
{
    vz::AVL<vz::House::price_t> data{};
    auto houses = vz::InputHouses();
    for (auto& house : houses)
    {
        //std::cout << "=================================" << std::endl;
        //std::cout << house.GetPrice() << std::endl;
        //std::cout << house.landSize << std::endl;
        //std::cout << house.priceEachMeter << std::endl;
        //std::cout << "=================================" << std::endl;
        data.Push(house.GetPrice());
    }
    data.Visualize();

    data.Delete(180.f);
    data.Delete(2400.f);
    data.Delete(2700.f);

    data.Visualize();

    auto node =data.Get(1575.f);
    PrintTree(node, "", Location::Root);

    data.Update(1575.f, 9999.f);

    data.Visualize();

    return 0;
}