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

    string s;
    cin >> s;

    vector<int> vec(n + 1);
    vec[0] = 0;
    vec[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (s[i - 2] == s[i - 1]) {
            vec[i] = vec[i - 1] + 1;
        } else {
            vec[i] = vec[i - 1];
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        cout << vec[r] - vec[l] << endl;
    }

    return 0;
}