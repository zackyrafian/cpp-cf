#include <iostream>
using namespace std;

int main() {
    long long N, K, X;
    cin >> N >> K >> X;

    long long minV = N * (-K);
    long long maxV = N * K;

    if (minV <= X && X <= maxV) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }

    return 0;
}