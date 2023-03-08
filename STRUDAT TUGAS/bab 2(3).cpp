#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru ke dalam linked list
void insert(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;

    // Jika linked list kosong, node baru akan menjadi head dan nextnya
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        // Mencari node terakhir dalam linked list
        Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        // Menghubungkan node terakhir dengan node baru
        last->next = newNode;
        newNode->next = *head;
    }
}

// Fungsi untuk menghapus node dari linked list
void deleteNode(Node** head, int data) {
    Node* temp = *head, *prev = NULL;

    // Jika node yang akan dihapus adalah node pertama
    if (temp != NULL && temp->data == data) {
        Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        // Menghubungkan node terakhir dengan node selanjutnya
        if (temp->next == *head) {
            *head = NULL;
            delete temp;
        } else {
            *head = temp->next;
            last->next = *head;
            delete temp;
        }
        return;
    }

    // Mencari node yang akan dihapus
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // Jika data tidak ditemukan dalam linked list
    if (temp == NULL) return;

    // Menghapus node
    prev->next = temp->next;
    delete temp;
}

// Fungsi untuk mencari node dalam linked list
Node* search(Node* head, int data) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data)
            return temp;
        temp = temp->next;
        if (temp == head) {
            break;
        }
    }
    return NULL;
}

// Fungsi untuk menampilkan isi dari linked list
void view(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
        if (temp == head) {
            break;
        }
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    int pilihan, data;
    do {
        cout << "Pilih menu: " << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. View" << endl;
        cout << "5. Exit" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data yang akan ditambahkan: ";
                cin >> data;
                insert(&head, data);
                break;
            case 2:
                cout << "Masukkan data yang akan dihapus: ";
                cin >> data;
                deleteNode(&head, data);
                break;
            case 3:
                cout << "Masukkan data yang dicari: ";
                cin >> data;
                if (search(head, data) != NULL) {
                    cout << "Data ditemukan" << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            case 4:
                cout << "Isi dari linked list: ";
                view(head);
                break;
            case 5:
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }
    } while (pilihan != 5);

    return 0;
}

