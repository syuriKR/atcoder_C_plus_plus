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
    int n, t;
    cin >> n >> t;

    map<int, ll> people;
    map<ll, int> count;

    // 全員の点数を初期化
    for (int i = 0; i < n; i++) {
        people[i] = 0;
    }

    count[0] = n;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        a--;

        count[people[a]]--;
        if (count[people[a]] <= 0) {
            count.erase(people[a]);
        }
        people[a] += b;
        if (count.count(people[a])) {
            count[people[a]]++;
        } else {
            count[people[a]] = 1;
        }

        cout << count.size() << endl;
    }
    return 0;
}