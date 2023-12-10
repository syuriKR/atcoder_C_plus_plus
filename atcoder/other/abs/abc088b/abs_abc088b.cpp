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

    rep(i, 0, n) {
        cin >> vec[i];
    }

    int alice = 0;
    int bob = 0;

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < n; i += 2) {
        alice += vec[i];
    }
    for (int i = 1; i < n; i += 2) {
        bob += vec[i];
    }

    cout << alice - bob << endl;
    return 0;
}