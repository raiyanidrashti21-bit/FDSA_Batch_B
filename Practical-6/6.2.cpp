#include <iostream>
using namespace std;

struct Node {
    string page;
    Node* next;
};

int main() {
    Node* top = NULL;
    int n;

    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string operation;
        cout << "Enter operation (visit/back): ";
        cin >> operation;

        if (operation == "visit") {
            string page;
            cin >> page;

            Node* newNode = new Node();
            newNode->page = page;
            newNode->next = top;
            top = newNode;

            cout << "Current page: " << top->page << endl;
        }
        else if (operation == "back") {
            if (top == NULL) {
                cout << "Error: No history left" << endl;
            } else {
                Node* temp = top;
                top = top->next;

                delete temp;

                if (top == NULL)
                    cout << "Current page: None" << endl;
                else
                    cout << "Current page: " << top->page << endl;
            }
        }
    }

    return 0;
}
