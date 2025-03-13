#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, A, B;
    cin >> N >> A >> B;
    
    int FizzBuzz = 0;
    int Fizz = 0;
    int Buzz = 0;

    for (int i = 1; i <= N; i++) { 
        if (i % A == 0 && i % B == 0) { 
            FizzBuzz++;
        } else if (i % A == 0) {
            Fizz++;
        } else  if (i % B == 0) { 
            Buzz++;
        } 
    }
    cout << Fizz << " " << Buzz << " " << FizzBuzz << endl;    
    return 0;
}