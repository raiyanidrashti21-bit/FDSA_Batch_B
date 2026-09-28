#include <iostream>
using namespace std;

#define MAX 5

int main() {
    int stack[MAX];
    int top = -1;
    int n;

    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string operation;
        int tray;

        cout << "Enter operation (place/take): ";
        cin >> operation;

        if (operation == "place") {
            cin >> tray;

            if (top == MAX - 1) {
                cout << "Error: Stack is full" << endl;
            } else {
                top++;
                stack[top] = tray;
                cout << "Top tray: " << stack[top] << endl;
            }
        }
        else if (operation == "take") {
            if (top == -1) {
                cout << "Error: Stack is empty" << endl;
            } else {
                cout << "Taken tray: " << stack[top] << endl;
                top--;

                if (top == -1)
                    cout << "Top tray: None" << endl;
                else
                    cout << "Top tray: " << stack[top] << endl;
            }
        }
    }

    return 0;
}
