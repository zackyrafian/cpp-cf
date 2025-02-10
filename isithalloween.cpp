#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string month; int day;
    cin >> month >> day;
    if (month == "OCT" && day == 31 || month == "DEC" && day == 25) { 
        cout << "yup";
    } else { 
        cout << "nope";
    }
    return 0;
}