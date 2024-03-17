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
    vector<int> vec_a, vec_b, vec_c;

    int n;
    cin >> n;
    rep(i, 0, n) {
        int a;
        cin >> a;
        vec_a.push_back(a);
    }

    int m;
    cin >> m;
    rep(i, 0, m) {
        int b;
        cin >> b;
        vec_b.push_back(b);
    }

    int l;
    cin >> l;
    rep(i, 0, l) {
        int c;
        cin >> c;
        vec_c.push_back(c);
    }

    set<ll> set;
    fore(a, vec_a) {
        fore(b, vec_b) {
            fore(c, vec_c) {
                set.insert(a + b + c);
            }
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        if (set.count(x)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}