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
    int q;
    cin >> q;
    int cnt = 0;
    vector<int> vec;
    rep(i, -0, q) {
        int a, x;
        cin >> a >> x;
        if (a == 1) {
            vec.push_back(x);
            cnt++;
        } else {
            cout << vec[cnt - x] << endl;
        }
    }
    return 0;
}