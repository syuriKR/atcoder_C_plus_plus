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
    // input
    int h, w, n;
    cin >> h >> w >> n;
    char glid[h][w];
    rep(i, 0, h) {
        rep(j, 0, w) {
            glid[i][j] = '.';
        }
    }
    int h_now = 0;
    int w_now = 0;
    int h_direction[] = {-1, 0, 1, 0};
    int w_direction[] = {0, 1, 0, -1};
    int directionKey = 0;

    for (int i = 0; i < n; i++) {
        if (i != 0) {
            h_now = (h_now + h_direction[directionKey]) % h;
            w_now = (w_now + w_direction[directionKey]) % w;
            if (h_now == -1) {
                h_now = h - 1;
            }
            h_now %= h;
            if (w_now == -1) {
                w_now = w - 1;
            }
            w_now %= w;
        }
        if (glid[h_now][w_now] == '.') {
            glid[h_now][w_now] = '#';
            directionKey = (directionKey + 1) % 4;
        } else {
            glid[h_now][w_now] = '.';
            if (directionKey == 0) {
                directionKey = 3;
            } else {
                directionKey = directionKey - 1;
            }
        }
    }

    // output
    rep(i, 0, h) {
        rep(j, 0, w) {
            cout << glid[i][j];
        }
        cout << endl;
    }
    return 0;
}