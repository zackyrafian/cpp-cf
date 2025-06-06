// #include <bits/stdc++.h>
// using namespace std;

// int LCM (int a, int b) { 
//     int greater = max(a, b); 
//     int smallest = min(a, b); 
    
//     int i = greater;

//     for (i; ; i += greater) { 
//         if (i % smallest == 0) return i;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int a = 10, b = 5;

//     cout << "LCM of " << a << "and "
//         << b << " is " << LCM(a, b);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b) { 
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) { 
    return (a / gcd(a, b) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 15, b = 20;
    cout << "LCM of " << a << " and "
        << b << " is " << lcm(a,b);

    return 0;
}