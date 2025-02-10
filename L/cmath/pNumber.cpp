#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n) { 
    if (n <= 1); return false;

    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            return false;
        }
    }
    return true;
}

int main() { 
    int num = 29;
    if (isPrime(num)) { 
        cout << num << " prime" << endl;
    } else { 
        cout << num << " not prime" << endl;
    }
}