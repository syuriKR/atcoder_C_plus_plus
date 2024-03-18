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
    string s;
    cin >> s;

    string ans;

    fore(a, s) {
        ans += a;
        if (ans.size() >= 3 && ans.substr(ans.size() - 3) == "ABC") {
            ans.erase(ans.end() - 3, ans.end());
        }
    }
    cout << ans << endl;
    return 0;
}
