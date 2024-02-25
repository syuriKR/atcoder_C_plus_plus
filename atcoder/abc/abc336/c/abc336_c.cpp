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
    ll num;
    cin >> num;
    num--;
    ll ans = 0;
    int goodNum[] = {0, 2, 4, 6, 8};
    ll numTimes = 1;
    while (num > 0) {
        ll a = num % 5;
        ans += goodNum[a] * numTimes;

        num /= 5;
        numTimes *= 10;
    }
    cout << ans << endl;
    return 0;
}