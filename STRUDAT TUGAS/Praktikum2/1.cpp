#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* next;
};

// Fungsi untuk menambahkan node baru ke dalam linked list
void insert(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Fungsi untuk menghapus node dari linked list
void deleteNode(Node** head, int data) {
    Node* temp = *head, *prev = NULL;

    // Jika node yang akan dihapus adalah node pertama
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        delete temp;
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
    }
    return NULL;
}

// Fungsi untuk menampilkan isi dari linked list
void view(Node* head) {
    cout << "Single linked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
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
		            cout << "Data ditemukan : " << data << endl;
		        } else {
		            cout << "Data tidak ditemukan: " << data << endl;
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
		}while(pilihan!=5);
}

