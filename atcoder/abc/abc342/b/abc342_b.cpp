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

    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        map[num] = i;
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;
        if (map[a] > map[b]) {
            cout << b << endl;
        } else
            cout << a << endl;
    }
    return 0;
}