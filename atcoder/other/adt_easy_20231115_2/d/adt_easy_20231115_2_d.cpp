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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(100100);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    rep(i, 0, n) {
        cout << vec[i + 1].size();
        sort((vec[i + 1]).begin(), vec[i + 1].end());
        fore(a, vec[i + 1]) {
            cout << " " << a;
        }

        cout << endl;
    }
    return 0;
}