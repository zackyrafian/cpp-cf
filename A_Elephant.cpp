#include <iostream>
#include <vector>
using namespace std;

int main () { 
    int x = 0;
    int e; cin >> e;

    vector<int> steps = {5, 4, 3, 2, 1};

    for (int i = 0; i < steps.size(); i++) { 
        x += e / steps[i];
        e %= steps[i];
    }
    cout << x << endl;
}
