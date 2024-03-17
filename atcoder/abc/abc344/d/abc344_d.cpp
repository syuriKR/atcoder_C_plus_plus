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
    string t;
    cin >> t;

    int n;
    cin >> n;

    int dp[101][101];
    dp[0][0] = 0;

    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            dp[i][j] = INT_MAX;
        }
    }

    // n個の袋
    for (int i = 0; i < n; i++) {
        
    }
    return 0;
}