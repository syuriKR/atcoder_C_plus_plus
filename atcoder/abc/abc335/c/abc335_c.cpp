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
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> head;
    for (int i = n - 1; i >= 0; i--) {
        head.push_back(pair(1 + i, 0));
    }
    rep(i, 0, q) {
        int order;
        cin >> order;
        if (order == 1) {
            char orderDetail;
            cin >> orderDetail;
            switch (orderDetail) {
                case 'R':
                    head.push_back(pair(head[head.size() - 1].first + 1, head[head.size() - 1].second));
                    break;
                case 'L':
                    head.push_back(pair(head[head.size() - 1].first - 1, head[head.size() - 1].second));
                    break;
                case 'U':
                    head.push_back(pair(head[head.size() - 1].first, head[head.size() - 1].second + 1));
                    break;
                case 'D':
                    head.push_back(pair(head[head.size() - 1].first, head[head.size() - 1].second - 1));
                    break;
            }
        } else {
            int orderDetail;
            cin >> orderDetail;
            cout << head[head.size() - orderDetail].first << " " << head[head.size() - orderDetail].second << endl;
        }
    }

    return 0;
}