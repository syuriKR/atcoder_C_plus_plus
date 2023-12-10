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
    string s;
    cin >> s;

    int shirts = 0;
    int shirts_logo = 0;

    int ans = 0;

    rep(i, 0, n) {
        if (s[i] == '0') {
            shirts = 0;
            shirts_logo = 0;
        } else if (s[i] == '1') {
            shirts++;
            ans = max(ans, shirts_logo + max(0, shirts - m));
        } else {
            shirts_logo++;
            ans = max(ans, shirts_logo + max(0, shirts - m));
        }
    }

    cout << ans << endl;
    return 0;
}