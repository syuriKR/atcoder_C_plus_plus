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
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;

    char glid[h][w];
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> glid[i][j];
        }
    }

    int ans = 0;
    // 各マススタート地点、n会の移動パターン、計算量h*w*n
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (glid[i][j] == '#')
                continue;
            bool judge = true;
            int h_now = i;
            int w_now = j;
            fore(a, t) {
                if (a == 'L')
                    w_now--;
                if (a == 'R')
                    w_now++;
                if (a == 'U')
                    h_now--;
                if (a == 'D')
                    h_now++;
                if (glid[h_now][w_now] == '#' || h_now < 0 || h <= h_now || w_now < 0 || w <= w_now) {
                    judge = false;
                    break;
                }
            }
            if (judge)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}