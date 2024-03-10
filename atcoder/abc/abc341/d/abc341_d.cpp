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

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll lcm_num = lcm(n, m);
    // loupの個数で公倍にぶつかる、n=2, m=3とかなら(2-1)+(3-1)=3でループ (2,3,4) (8,9,10)
    ll loup = (lcm_num / n - 1) + (lcm_num / m - 1);
    ll start = k / loup * lcm_num;
    ll nokori = k - (k / loup) * loup;
    if (nokori == 0) {
        start -= min(n, m);
    } else {
        ll n_now = n;
        ll m_now = m;
        for (int i = 0; i < nokori - 1; i++) {
            if (n_now < m_now) {
                n_now += n;
            } else {
                m_now += m;
            }
        }
        start += min(n_now, m_now);
    }
    cout << start << endl;
    return 0;
}