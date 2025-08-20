#include <bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) { 
    vector<string> res; 
    
    for (int i = 1; i <= n; i++) { 
        string s = "";
        if (i % 3 == 0) { 
            s.append("Fizz");
        }else if (i % 5 == 0) { 
            s.append("Buzz");
        }

        if (s.empty()) { 
            s.append(to_string(i));
        }

        res.push_back(s);
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 20;
    vector<string> res = fizzBuzz(n);

    for (const string &s : res) { 
        cout << s << " ";
    }


    return 0;
}