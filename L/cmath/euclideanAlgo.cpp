#include <bits/stdc++.h>

using namespace std;

int gcd (int a, int b) { 
    while (b != 0) { 
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a; 
}

int lcm (int a, int b) { 
    return a * b / gcd(a,b);
}

int main ()  {
    int a = 36, b = 60;
    cout << "GCD " << a << " & " << b << ": " << gcd(a, b) << endl;
    cout << "LCM " << a << " & " << b << ": " << lcm(a, b) << endl;
    return 0;
}