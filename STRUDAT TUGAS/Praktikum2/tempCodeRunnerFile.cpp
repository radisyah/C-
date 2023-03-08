void view() {
Node* temp = head;
cout << "Circular double linked list: ";
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}