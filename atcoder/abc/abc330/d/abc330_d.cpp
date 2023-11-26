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
    vector<vector<char>> table(2010, vector<char>(2010));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }

    vector<ll> row(2020);
    vector<ll> column(2020);

    for (int i = 0; i < n; i++) {
        ll cnt = 0;
        for (int j = 0; j < n; j++) {
            if (table[i][j] == 'o') {
                cnt++;
            }
        }
        row[i] = cnt;
    }

    for (int i = 0; i < n; i++) {
        ll cnt = 0;
        for (int j = 0; j < n; j++) {
            if (table[j][i] == 'o') {
                cnt++;
            }
        }
        column[i] = cnt;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == 'o') {
                ans += (row[i] - 1) * (column[j] - 1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
