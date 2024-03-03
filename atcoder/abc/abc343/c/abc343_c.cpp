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
    ll ans;
    for (ll i = 0; i * i * i <= n; i++) {
        ll now = i * i * i;
        string now_string = to_string(now);
        string copy = now_string;
        reverse(now_string.begin(), now_string.end());
        if (copy == now_string) {
            ans = now;
        }
    }
    cout << ans << endl;
    return 0;
}