#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> blue(n);
    for (int i=0; i<n; i++) {
        cin >> blue[i];
    }
    cin >> m;
    vector<string> red(m);
    for (int i=0; i<m; i++) {
        cin >> red[i];
    }
    auto calc = [&](string s){
        int buf = 0;
        for (string t: blue) {
            if (s == t) buf++;
        }
        for (string t: red) {
            if (s == t) buf--;
        }
        return buf;
    };
    int ans = 0;
    for (string t: blue) {
        ans = max(ans, calc(t));
    }
    cout << ans << endl;
    return 0;
}