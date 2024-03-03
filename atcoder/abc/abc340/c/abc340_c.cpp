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

map<ll, ll> m;
ll calc(ll n) {
    if (n == 1)
        return 0;
    if (m.count(n)) {
        return m[n];
    } else {
        m[n] = calc(n / 2) + calc((n + 1) / 2) + n;
        return m[n];
    }
}
int main() {
    ll n;
    cin >> n;
    ll ans = calc(n);
    cout << ans << endl;
    return 0;
}