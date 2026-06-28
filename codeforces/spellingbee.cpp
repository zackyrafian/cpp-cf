#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    string letters;
    cin >> letters;

    char center = letters[0]; 
    set<char> allowed_letters(letters.begin(), letters.end());  

    int n;
    cin >> n;

    vector<string> result;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        if (word.length() < 4) continue;

        bool valid = true;
        for (char c : word) {
            if (allowed_letters.find(c) == allowed_letters.end()) {
                valid = false;
                break;
            }
        }

        if (valid && word.find(center) != string::npos) {
            result.push_back(word); 
        }
    }

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
