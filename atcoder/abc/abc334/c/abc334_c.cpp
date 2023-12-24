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
    vector<int> a(k);
    fore(i, a) cin >> i;
    // 0番目からk番目までの配列
    vector<int> pre(k + 1), suf(k + 1);

    for (int i = 1; i <= k; i++) {
        pre[i] = pre[i - 1];
        if (i % 2 == 0)
            pre[i] += a[i - 1] - a[i - 2];
    }

    for (int i = k - 1; i >= 0; i--) {
        suf[i] = suf[i + 1];
        if ((k - i) % 2 == 0)
            suf[i] += a[i + 1] - a[i];
    }

    int ans = 1e9;
    for (int i = 0; i <= k; i += 2) {
        ans = min(ans, pre[i] + suf[i]);
    }
    cout << ans << endl;
    return 0;
}