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
    string s1, s2, s3, t;
    cin >> s1 >> s2 >> s3 >> t;

    string ans;

    fore(a, t) {
        if (a == '1') {
            ans += s1;
        } else if (a == '2') {
            ans += s2;
        } else
            ans += s3;
    }
    cout << ans << endl;
    return 0;
}