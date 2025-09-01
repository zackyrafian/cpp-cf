#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 40;
  int r = n / 2;
  int cx = r, cy = r;

  string shades = " .:-=+*#%@";

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      int dx = 2 * (x - cx);
      int dy = y - cy;
      int dist2 = dx * dx + dy * dy;

      if (dist2 <= r * r) {
        double z = sqrt(r * r - dist2);
        double norm = z / r;
        int idx = (int)(norm * (shades.size() - 1));
        cout << shades[idx];
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}
