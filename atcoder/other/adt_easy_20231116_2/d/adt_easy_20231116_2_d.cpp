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
    int n, k;
    cin >> n >> k;

    set<int> light;
    rep(i, 0, k) {
        int num;
        cin >> num;
        light.insert(num);
    }

    vector<pair<ll, ll>> people(2000);
    for (int i = 1; i <= n; i++) {
        cin >> people[i].first >> people[i].second;
    }
    long double ans = 0;

    for (int i = 1; i <= n; i++) {
        if (light.count(i)) {
            continue;
        }
        long long nowlength = 8800800800800800800;
        fore(a, light) {
            long long length = ((people[a].first - people[i].first) * (people[a].first - people[i].first) + (people[a].second - people[i].second) * (people[a].second - people[i].second));
            if (nowlength > length) {
                nowlength = length;
            }
        }
        if (ans < nowlength)
            ans = nowlength;
    }

    cout << setprecision(15) << sqrt(double(ans)) << endl;
    return 0;
}