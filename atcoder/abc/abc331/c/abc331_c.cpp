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
    vector<int> a(n);

    rep(i, 0, n) cin >> a[i];

    // それぞれのAをキー、実際にAが存在するインデックスの集合の配列を値とするmap
    map<int, vector<int>> map;

    for (int i = 0; i < n; i++) {
        map[a[i]].push_back(i);
    }

    // aという配列に含まれる全ての値の合計値がs
    ll s = accumulate(a.begin(), a.end(), 0LL);

    vector<ll> ans(n);

    // mapに対して範囲for文
    for (auto [v, i_list] : map) {
        // Aより大きな要素、つまりAは含まないので、Aの値*個数をsから引く
        s -= (ll)v * i_list.size();
        // Aのインデックスの集合であるi_listに対して範囲for文
        // i番目の入力値は全てAi, よってi番目の出力値は全てs
        for (auto i : i_list) {
            ans[i] = s;
        }
    }
    for(auto x:ans)cout << x << ' ';
    return 0;
}