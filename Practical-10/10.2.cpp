
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> table[10];
    int n, x;

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter book code: ";
        cin >> x;

        int index = x % 10;
        table[index].push_back(x);
    }

    cout << "\nBook Shelves:\n";

    for (int i = 0; i < 10; i++) {
        cout << i << " : ";

        if (table[i].empty())
            cout << "Empty";

        for (int j = 0; j < table[i].size(); j++)
            cout << table[i][j] << " ";

        cout << endl;
    }

    return 0;
}
