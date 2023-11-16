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
    string s;
    cin >> s;

    // どちらか片方のみの時-1
    set<char> set;
    fore(a, s) {
        set.insert(a);
    }
    if (set.size() == 1) {
        cout << -1 << endl;
        return 0;
    }

    fore(a, s) {
    }

    vector<int> vec(n + 1);
    vec[0] = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            vec[i + 1] = vec[i] + 1;
        } else
            vec[i + 1] = 0;
    }

    int ans = 0;
    fore(a, vec) {
        if (ans < a)
            ans = a;
    }

    cout << ans << endl;
    return 0;
}