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
    int glid[n][n];

    // direction
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    int directionKey = 0;

    // initialization
    int x = 0;
    int y = 0;
    int num = 1;
    rep(i, 0, n) {
        rep(j, 0, n) {
            glid[i][j] = 0;
        }
    }
    glid[0][0] = 1;

    while (num < n * n) {
        int x_next = x + dx[directionKey];
        int y_next = y + dy[directionKey];
        if (0 <= x_next && 0 <= y_next && x_next < n && y_next < n && glid[y_next][x_next] == 0) {
            num++;
            glid[y_next][x_next] = num;
            x = x_next;
            y = y_next;
        } else {
            directionKey = (directionKey + 1) % 4;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) {
                cout << " ";
            }
            if (glid[i][j] != n * n) {
                cout << glid[i][j];
            } else {
                cout << "T";
            }
            if (j == n - 1) {
                cout << endl;
            }
        }
    }
    return 0;
}