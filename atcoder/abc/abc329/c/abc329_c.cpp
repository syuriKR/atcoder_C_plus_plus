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
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> map;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cnt = 1;
            map[s[i]] = cnt;
        } else {
            if (s[i] == s[i - 1]) {
                cnt++;
                if (map[s[i]] < cnt) {
                    map[s[i]] = cnt;
                }
            } else {
                cnt = 1;
                if (map[s[i]] < cnt) {
                    map[s[i]] = cnt;
                }
            }
        }
    }

    ll ans = 0;
    fore(a, map) {
        ans += a.second;
    }
    cout << ans << endl;

    return 0;
}