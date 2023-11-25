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
    cin >> n >> q;

    vector<int> vec(200200);

    map<int, int> map;

    rep(i, 0, n) {
        int a;
        cin >> a;
        vec[i + 1] = a;
        if (map.count(a)) {
            map[a] = 1;
        } else {
            map[a]++;
        }
    }

    int ans;

    for (int i = 0; i < 1001001001; i++) {
        if (!(map.count(i))) {
            ans = i;
            break;
        }
    }

    rep(i, 0, q) {
        int i_order, x;
        cin >> i_order >> x;
        map[vec[i_order]]--;
        if (map.count(x)) {
            map[x] = 1;
        } else {
            map[x]++;
        }
        vec[i_order] = x;

        // if ((!(map.count(ans))) || (map[ans] == 0)) {
        // }

        for (int j = 0; j < 1001001001; j++) {
            if (!(map.count(j))) {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }
}