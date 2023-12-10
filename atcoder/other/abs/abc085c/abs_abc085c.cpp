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
    int n, y;
    cin >> n >> y;

    for (int i = 0; i <= y / 10000 + 1; i++) {
        for (int j = 0; j <= y / 5000 + 1; j++) {
            int n_1000 = y - 10000 * i - 5000 * j;
            if (n_1000 < 0) {
                continue;
            }
            n_1000 /= 1000;
            if (i + j + n_1000 == n) {
                cout << i << ' ' << j << ' ' << n_1000 << endl;
                return 0;
            }
        }
    }

    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    return 0;
}