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

ll calculate_repunit(ll n) {
    ll repunit = 0;
    while (n > 0) {
        repunit = repunit * 10 + 1;
        n--;
    }
    return repunit;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> vec(350);
    rep(i, 1, 19) {
        vec[i] = calculate_repunit(i);
    }

    set<ll> set;

    rep(i, 1, 19) {
        rep(j, i, 19) {
            rep(k, j, 19) {
                ll sum = vec[i] + vec[j] + vec[k];
                set.insert(sum);
            }
        }
    }

    ll count = 0;
    for (auto it = set.begin(); it != set.end(); ++it) {
        count++;
        if (count == n) {
            std::cout << *it << std::endl;
            break;
        }
    }
    return 0;
}