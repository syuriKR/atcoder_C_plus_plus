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
    int dp[105][105];
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            dp[i][j] = 1e9;
        }
    }
    dp[0][0] = 0;

    string t;
    cin >> t;
    int tl = t.size();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 105; j++) {
            dp[i + 1][j] = dp[i][j];
        }
        int m;
        cin >> m;
        while (m > 0) {
            m--;
            string s;
            cin >> s;
            int sl = s.size();
            for (int j = 0; j + sl <= tl; j++) {
                bool ok = true;
                for (int k = 0; k < sl; k++) {
                    if (t[j + k] != s[k]) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    dp[i + 1][j + sl] = min(dp[i + 1][j + sl], dp[i][j] + 1);
                }
            }
        }
    }
    if (dp[n][tl] > 5e8) {
        dp[n][tl] = -1;
    }
    cout << dp[n][tl] << "\n";
    return 0;
}