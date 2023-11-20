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

    vector<set<int>> vec(n);

    rep(i, 0, n) {
        int c;
        cin >> c;
        vec[i].insert(c);
    }

    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if (vec[a].size() < vec[b].size()) {
            fore(ball, vec[a]) {
                vec[b].insert(ball);
            }
            vec[a].clear();
            cout << vec[b].size() << endl;
        } else {
            fore(ball, vec[b]) {
                vec[a].insert(ball);
            }
            vec[b].clear();
            cout << vec[a].size() << endl;
            swap(vec[a], vec[b]);
        }
    }
    return 0;
}