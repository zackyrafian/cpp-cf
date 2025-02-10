#include <iostream>
using namespace std;

int main() {
    int t;
    
    while (cin >> t) {
        if (t == -1) {
            break;
        }
        
        int time = 0; 
        int result = 0;

        for (int i = 0; i < t; i++) {
            int s, tTime;
            cin >> s >> tTime;

            int timeDiff = tTime - time;
            result += s * timeDiff;
            time = tTime;
        }
        cout << result << " miles" << endl;
    }
    return 0;
}