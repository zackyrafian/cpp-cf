#include <bits/stdc++.h>
using namespace std;

double Pow(double X, int N) { 
    if (N == 0) return 1.0;

    if (N < 0) { 
        X = 1 / X;
        N = -(N + 1);
        return X * Pow(X, N);
    }

    double half = Pow(X, N / 2);
    return (N % 2 == 0) ? half * half : X * half * half;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double X; 
    int N;




    return 0;
}