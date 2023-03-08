class BST{
  
  private:

    struct  node
    {
      int key;
      node* left;
      node* right;
    };
    node* root;

    void AddLeafPrivate(int key, node* Ptr);
    void PrintInOrderPrivate(node* Ptr);

  public:

    BST();
    node* CreateLeaf(int key);
    void AddLeaf(int key);
    void PrintInOrder();


  
};