// clang-format off
#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
// clang-format on

int main() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    map<char, set<char>> map;

    for (int i = 0; i < m; i++) {
        if (i == m - 1) {
            map[t[i]].insert(t[0]);
        } else {
            map[t[i]].insert(t[0]);
            map[t[i]].insert(t[i + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (s[i] != t[0]) {
                cout << "No" << endl;
                return 0;
            }
        }
        if (i == n - 1) {
            if (s[i] != t[m - 1]) {
                cout << "No" << endl;
                return 0;
            } else
                continue;
        }

        set<char> set = map[s[i]];
        if (!(set.count(s[i + 1]))) {
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}