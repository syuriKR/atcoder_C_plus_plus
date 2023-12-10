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
    int h, w;
    cin >> h >> w;

    int ans = 0;

    vector<vector<int>> vec_a(h, vector<int>(w, 0));
    vector<vector<int>> vec_b(h, vector<int>(w, 0));

    map<int, int> map_a, map_b;

    rep(i, 0, h) {
        rep(j, 0, w) {
            int num;
            cin >> num;
            vec_a[i][j] = num;
            map_a[num]++;
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            int num;
            cin >> num;
            vec_b[i][j] = num;
            map_b[num]++;
        }
    }

    if (!(map_a == map_b)) {
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}