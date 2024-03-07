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
    vector<int> vec(n);
    map<int, int> map;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // map[a]=bの時、aの後ろにbが並んでいる
    for (int i = 0; i < n; i++) {
        map[vec[i]] = i + 1;
    }

    int start;
    for (int i = 0; i < n; i++) {
        if (vec[i] == -1) {
            start = i + 1;
        }
    }

    int cnt = 0;
    while (cnt < n) {
        cout << start << " ";
        start = map[start];
    }
    cout << start << endl;
}