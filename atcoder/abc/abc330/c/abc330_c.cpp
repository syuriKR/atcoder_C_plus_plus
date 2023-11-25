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
    ll d;
    cin >> d;
    ll sqrt_d = sqrt(d) + 1;

    ll ans = 100100100100100;
    ll now;

    for (ll i = 0; i <= sqrt_d; i++) {
        ll num = d - i * i;
        if (num < 0) {
            now = abs(num);
        } else {
            ll sqrt_num = sqrt(num);
            now = min(abs(num - sqrt_num * sqrt_num), abs(num - (sqrt_num + 1) * (sqrt_num + 1)));
        }
        ans = min(now, ans);
    }
    cout << ans << endl;
    return 0;
}