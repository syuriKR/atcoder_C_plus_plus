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

ll calculate(ll a) {
    ll result = 1;
    for (int i = 0; i < a; i++) {
        result *= a;
    }
    return result;
}
int main() {
    ll b;
    cin >> b;

    vector<ll> vec(20);
    for (ll i = 0; i < 18; i++) {
        vec[i] = calculate(i);
    }

    int ans = -1;
    for (int i = 0; i < 18; i++) {
        if (vec[i] == b) {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}