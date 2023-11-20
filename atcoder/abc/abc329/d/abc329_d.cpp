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
    vector<int> vec(m);
    rep(i, 0, m) {
        cin >> vec[i];
    }

    vector<int> candidate(n + 1);

    int max = 0;
    int max_candidate = 0;

    fore(a, vec) {
        candidate[a]++;
        if (max == candidate[a]) {
            if (a < max_candidate) {
                max_candidate = a;
            }
        } else if (max < candidate[a]) {
            max = candidate[a];
            max_candidate = a;
        }
        cout << max_candidate << endl;
    }
    return 0;
}