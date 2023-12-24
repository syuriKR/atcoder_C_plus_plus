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
    vector<ll> vec(n);
    fore(a, vec) cin >> a;
    vector<ll> query(q);
    fore(a, query) cin >> a;

    sort(vec.begin(), vec.end());
    vector<ll> vec_sum(n);
    vec_sum[0] = vec[0];
    for (int i = 1; i < n; i++) {
        vec_sum[i] = vec_sum[i - 1] + vec[i];
    }
    fore(a, query) {
        cout << upper_bound(vec_sum.begin(), vec_sum.end(), a) - vec_sum.begin() << endl;
    }
    return 0;
}