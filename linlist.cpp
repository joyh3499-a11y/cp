#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << "✅ Node inserted with value: " << value << endl;
}

void deleteNode(int value) {
    if (head == nullptr) {
        cout << "⚠️ List is empty. Nothing to delete.\n";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    if (temp != nullptr && temp->data == value) {
        head = temp->next;
        delete temp;
        cout << "🗑️ Node with value " << value << " deleted.\n";
        return;
    }

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "❌ Node with value " << value << " not found.\n";
        return;
    }

    // Unlink the node
    prev->next = temp->next;
    delete temp;
    cout << "🗑️ Node with value " << value << " deleted.\n";
}

void searchNode(int value) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "🔍 Value " << value << " found at position " << position << ".\n";
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "❌ Value " << value << " not found in the list.\n";
}

void displayList() {
    if (head == nullptr) {
        cout << "⚠️ List is empty.\n";
        return;
    }

    cout << "📜 Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Insert Node\n";
        cout << "2. Delete Node\n";
        cout << "3. Search Node\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "============================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertNode(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                searchNode(value);
                break;
            case 4:
                displayList();
                break;
            case 5:
                cout << "🚪 Exiting program...\n";
                break;
            default:
                cout << "❌ Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
