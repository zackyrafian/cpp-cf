#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M; 
    while (cin >> N >> M) { 
        if (N == 0 && M == 0) break;
        set<int> freddie;
        bool AR = true;

        for (int i = 0; i < N; i++) { 
            int course; cin >> course;
            freddie.insert(course);
        }

        for (int i = 0; i < M; i++) { 
            int C, R; cin >> C >> R;
            int count = 0;
            for (int j = 0; j < C; j++) {
                int course; cin >> course;
                if (freddie.count(course)){ 
                    count++;
                }
            }
            if (count < R) { 
                AR = false;
            }
        }
        cout << (AR ? "yes" : "no") << endl;
    }
    return 0;
}