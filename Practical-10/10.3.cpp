
#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, x;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of student IDs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> x;

        int h1 = x % 10;
        int h2 = 7 - (x % 7);
        int index = h1;
        int count = 0;

        while (table[index] != -1 && count < 10) {
            index = (index + h2) % 10;
            count++;
        }

        if (count == 10)
            cout << "Hash table is full or no slot found\n";
        else
            table[index] = x;
    }

    cout << "\nHash Table:\n";

    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}
