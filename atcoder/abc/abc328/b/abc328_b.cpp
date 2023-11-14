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

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        int d;
        cin >> d;
        for (int date = 1; date <= d; date++) {
            set<char> set;
            fore(j, to_string(i)) {
                set.insert(j);
            }

            fore(k, to_string(date)) {
                set.insert(k);
            }

            if (set.size() == 1) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}