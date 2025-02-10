#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minTestDays(vector<int>& allergens) {
    sort(allergens.rbegin(), allergens.rend());
    
    int days = 0;
    for (int i = 0; i < allergens.size(); i++) {
        days = max(days, i + allergens[i]);
    }
    
    return days;
}

int main() {
    int n;
    cin >> n; 
    
    vector<int> allergens(n);
    for (int i = 0; i < n; i++) {
        cin >> allergens[i];
    }
    
    cout << minTestDays(allergens) << endl;
    
    return 0;
}
