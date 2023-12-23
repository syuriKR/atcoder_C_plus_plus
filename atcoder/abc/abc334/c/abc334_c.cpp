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
    int n, k;
    cin >> n >> k;
    vector<int> vec(k);
    rep(i, 0, k) {
        cin >> vec[i];
    }

    ll ans, diff;

        if (k % 2 == 0) {
        for (int i = 0; i < k - 1; i += 2) {
            ans += vec[i + 1] - vec[i];
        }
    }
    else {
        for (int i = 0; i < k; i++) {
            if (int i = 0) {
            }
        }
    }
    cout << ans << endl;
    return 0;
}