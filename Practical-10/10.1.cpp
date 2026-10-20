
#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, x;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of vehicles: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter registration number: ";
        cin >> x;

        int index = x % 10;
        int count = 0;

        while (table[index] != -1 && count < 10) {
            index = (index + 1) % 10;
            count++;
        }

        if (count == 10)
            cout << "Parking lot is full\n";
        else
            table[index] = x;
    }

    cout << "\nParking Slots:\n";
    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}
