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
    int k, g, m;
    cin >> k >> g >> m;

    int g_now = 0;
    int m_now = 0;

    rep(i, 0, k) {
        if (g_now == g) {
            g_now = 0;
        } else if (m_now == 0) {
            m_now = m;
        } else {
            if (g_now + m_now > g) {
                m_now = g_now + m_now - g;
                g_now = g;
            } else {
                g_now = g_now + m_now;
                m_now = 0;
            }
        }
    }

    cout << g_now << ' ' << m_now << endl;
    return 0;
}