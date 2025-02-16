#include <iostream>
using namespace std;

int main() {
    int width = 9;

    for (int i = 1; i <= width / 2 + 1; i++) {
        for (int j = width / 2 + 1; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++) {
        cout << "|";
        for (int j = 1; j <= width - 2; j++) {
            cout << " ";
        }
        cout << "|" << endl;
    }

    cout << "*********" << endl; 

    return 0;
}