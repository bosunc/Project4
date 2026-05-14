#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Input 1~9: ";
    cin >> num;

    if (num < 1 || num > 9) {
        cout << "ERROR: Only numbers from 1 to 9 are allowed." << endl;
        return 1;
    }

    for (int i = 0; i <= 9; i++) {
        if (i == 0)
            cout << num;
        else
            cout << i << num;

        if (i != 9)
            cout << ", ";
    }

    cout << endl;

    return 0;
}