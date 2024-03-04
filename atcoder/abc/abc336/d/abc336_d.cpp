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
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    vector<int> max_left(n);
    vector<int> max_right(n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            max_left[i] = 1;
        } else {
            max_left[i] = min(max_left[i - 1] + 1, vec[i]);
        }
    }

    for (int i = n - 1; 0 <= i; i--) {
        if (i == n - 1) {
            max_right[i] = 1;
        } else {
            max_right[i] = min(max_right[i + 1] + 1, vec[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int now_ans = min(max_left[i], max_right[i]);
        ans = max(ans, now_ans);
    }
    cout << ans << endl;
    return 0;
}