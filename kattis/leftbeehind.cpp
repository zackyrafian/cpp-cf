#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int X, Y;
    while (true) { 
        cin >> X >> Y;

        if (X == 0 && Y == 0) { 
            break;
        }

        if (X + Y == 13) { 
            cout << "Never speak again." << endl;
        } else if (X > Y) { 
            cout << "To the convention." << endl;
        } else if (X < Y) { 
            cout << "Left beehind." << endl;
        } else { 
            cout << "Undecided." << endl;
        }
    }
    return 0;
}