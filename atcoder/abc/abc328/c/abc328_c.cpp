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

// 配列にvecのiにその文字までで直前の文字までと一致してきた数を記録、rとlの値を参照して引き算。
int main() {
    string n;
    int q;
    cin >> n >> q;

    vector<bool> vec;
    for (int i = 0; i < n.size(); i++)
        vec[i] = false;

    for (int i = 1; i < n.size(); i++) {
        if (n[i - 1] == n[i]) {
            vec[i] = true;
        }
    }

    return 0;
}