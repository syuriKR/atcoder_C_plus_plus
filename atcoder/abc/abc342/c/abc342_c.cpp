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
    int n, q;
    string s;
    cin >> n >> s >> q;

    map<char, char> map;
    rep(i, 0, q) {
        char a, b;
        cin >> a >> b;
        if (!(map.count(a))) {
            map[a] = b;
        }
        fore(x, map) {
            if (x.second == a) {
                x.second = b;
            }
        }
    }
    fore(a, s) {
        if (map.count(a)) {
            cout << map[a];
        } else
            cout << a;
    }
    return 0;
}
