#include <iostream>

using namespace std;

void solve ()  {
    int a, b = 0; 
    cin >> a;
    cin >> b; 
    
    for (int i = 0; i < b; i++) { 
        if (a % 10 == 0) { 
            a /= 10;
        } else { 
            a--;
        }
    }

    cout << a << endl;
}

int main () { 
    solve();
}