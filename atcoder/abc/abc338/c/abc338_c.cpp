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
    vector<ll> vec_q, vec_a, vec_b;
    rep(i, 0, n) {
        ll q;
        cin >> q;
        vec_q.push_back(q);
    }
    rep(i, 0, n) {
        ll a;
        cin >> a;
        vec_a.push_back(a);
    }
    rep(i, 0, n) {
        ll b;
        cin >> b;
        vec_b.push_back(b);
    }

    // 作った人数分の料理
    ll ans = 0;
    ll a_max;
    ll b_max = 100100100;

    // Aの人数を回すfor文
    for (ll i = 0; i <= 1000000; i++) {
        a_max = i;
        // 材料を回すfor文
        for (ll j = 0; j < n; j++) {
            if (vec_q[j] >= vec_a[j] * i) {
                if (vec_b[j] != 0) {
                    b_max = min((vec_q[j] - vec_a[j] * i) / vec_b[j], b_max);
                }
            } else {
                break;
            }
            if (j == n - 1) {
                ans = max(ans, a_max + b_max);
            }
        }
    }
    cout << ans << endl;
    return 0;
}