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

    int a[n + 1];
    int b[n + 1];
    int x[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> x[i];
    }

    // vec[i]はステージiに行くまでの最小移動時間
    vector<ll> vec(n + 1);
    for (int i = 2; i <= n; i++) {
        vec[i] = LONG_LONG_MAX;
    }
    vec[1] = 0;

    using P = pair<ll, int>;
    priority_queue<P, vector<P>, greater<P>> queue;
    queue.emplace(0, 1);

    while (!queue.empty()) {
        ll nowDistance = queue.top().first;
        int now = queue.top().second;
        queue.pop();

        if (nowDistance > vec[now])
            continue;

        if (nowDistance + a[now] < vec[now + 1]) {
            vec[now + 1] = nowDistance + a[now];
            if (now + 1 != n) {
                queue.emplace(vec[now + 1], now + 1);
            }
        }
        if (nowDistance + b[now] < vec[x[now]]) {
            vec[x[now]] = nowDistance + b[now];
            if (x[now] != n) {
                queue.emplace(vec[x[now]], x[now]);
            }
        }
    }
    cout << vec[n] << endl;
    return 0;
}