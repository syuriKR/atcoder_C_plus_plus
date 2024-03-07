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
    int h, w, k;
    cin >> h >> w >> k;
    int x[200001], d[200001];
    char glid[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> glid[i][j];
        }
    }

    int ans = 1e9;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            x[j + 1] = x[j];
            d[j + 1] = d[j];
            if (glid[i][j] == 'x')
                x[j + 1]++;
            if (glid[i][j] == '.')
                d[j + 1]++;
        }
        for (int i = 0; i < w - k + 1; i++) {
            if (x[i + k] - x[i] == 0) {
                ans = min(ans, d[i + k] - d[i]);
            }
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            x[j + 1] = x[j];
            d[j + 1] = d[j];
            if (glid[j][i] == 'x')
                x[j + 1]++;
            if (glid[j][i] == '.')
                d[j + 1]++;
        }
        for (int i = 0; i < h - k + 1; i++) {
            if (x[i + k] - x[i] == 0) {
                ans = min(ans, d[i + k] - d[i]);
            }
        }
    }

    if (ans > k)
        ans = -1;
    cout << ans << endl;

    return 0;
}