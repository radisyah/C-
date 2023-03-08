#include <iostream>
#include <cstdio>

using namespace std;

struct Node {
int data;
Node* next;
Node* prev;
};

Node* head;

void insertAtFront(Node** head, int data) {
Node* temp = new Node();
temp->data = x;
temp->next = *head;
temp->prev = NULL;
if (*head != NULL)
*head->prev = temp;
*head = temp;
}

void insertAtEnd(int x) {
Node* temp = new Node();
temp->data = x;
temp->next = NULL;
if (head == NULL) {
temp->prev = NULL;
head = temp;
return;
}
Node* last = head;
while (last->next != NULL)
last = last->next;
last->next = temp;
temp->prev = last;
}

void deleteNode(int x) {
Node* temp = head;
if (temp == NULL) return;
if (temp->data == x && temp->next != NULL) {
head = temp->next;
head->prev = NULL;
delete temp;
return;
}
if (temp->data == x && temp->next == NULL) {
head = NULL;
delete temp;
return;
}
while (temp != NULL && temp->data != x)
temp = temp->next;
if (temp == NULL) return;
if (temp->next != NULL) {
temp->prev->next = temp->next;
temp->next->prev = temp->prev;
}
else {
temp->prev->next = NULL;
}
delete temp;
}

void search(int x) {
Node* temp = head;
int pos = 0;
while (temp != NULL) {
pos++;
if (temp->data == x) {
cout << "Data " << x << " ditemukan pada posisi ke-" << pos << endl;
return;
}
temp = temp->next;
}
cout << "Data " << x << " tidak ditemukan dalam circular double linked list" << endl;
}

void view() {
Node* temp = head;
cout << "Circular double linked list: ";
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next; 
}
cout << endl;
}

int main() {
    Node* head = NULL;

    int pilihan, x;
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
                cin >> x;
                insertAtFront(&head,data);
                break;
            // case 2:
            //     cout << "Masukkan data yang akan dihapus: ";
            //     cin >> data;
            //     deleteNode(&head, data);
            //     break;
            // case 3:
            //     cout << "Masukkan data yang dicari: ";
            //     cin >> data;
            //     if (search(head, data) != NULL) {
            //         cout << "Data ditemukan" << endl;
            //     } else {
            //         cout << "Data tidak ditemukan" << endl;
            //     }
            //     break;
            // case 4:
            //     cout << "Isi dari linked list: ";
            //     view(head);
            //     break;
            // case 5:
            //     break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }
    } while (pilihan != 5);

    return 0;
}