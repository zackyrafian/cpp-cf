#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    int original = x;
    long long reversed = 0; 

    while (x > 0) {
        int last_digit = x % 10;
        reversed = reversed * 10 + last_digit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int x;
    cin >> x;
    cout << (isPalindrome(x) ? "true" : "false") << endl;
    return 0;
}
