#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) {
        return false;  
    }
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            return true;  
        }
    }
    return false;  
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectSquare(number)) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }

    return 0;
}