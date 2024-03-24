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
    int glid[9][9];
    rep(i, 0, 9) {
        rep(j, 0, 9) {
            cin >> glid[i][j];
        }
    }

    bool judge = true;

    rep(i, 0, 9) {
        set<int> set;
        rep(j, 0, 9) {
            set.insert(glid[i][j]);
        }
        if (set.size() != 9) {
            judge = false;
        }
    }

    rep(i, 0, 9) {
        set<int> set;
        rep(j, 0, 9) {
            set.insert(glid[j][i]);
        }
        if (set.size() != 9) {
            judge = false;
        }
    }

    for (int i = 0; i < 3; i++) {
        set<int> set;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                set.insert(glid[j + 3 * i][k + 3 * i]);
            }
        }
        if (set.size() != 9) {
            judge = false;
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}