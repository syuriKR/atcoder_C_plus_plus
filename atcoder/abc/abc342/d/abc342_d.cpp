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
    ll n;
    cin >> n;
    // ここのmapを<int,int>にしてるとWAになる。
    // 下のmap.second*(map.second-1)のところでintの範囲超えそう
    // map.secondの最大値がnのため、n**2で4*10**10になる。
    map<int, ll> map;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if (a != 0) {
            for (int i = sqrt(200000) + 1; i > 0; i--) {
                if (a % (i * i) == 0) {
                    a /= (i * i);
                }
            }
        }

        if (map.count(a)) {
            map[a]++;
        } else {
            map[a] = 1;
        }
    }

    ll ans = 0;
    fore(a, map) {
        if (a.first == 0) {
            for (ll i = 1; i <= a.second; i++) {
                ans += n - i;
            }
        } else {
            ans += a.second * (a.second - 1) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}
