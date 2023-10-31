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
    string s;
    cin >> s;

    vector<string> vec;
    vec.push_back("dream");
    vec.push_back("dreamer");
    vec.push_back("erase");
    vec.push_back("eraser");

    reverse(s.begin(), s.end());
    fore(a, vec) reverse(a.begin(), a.end());

    while (s != "") {
        bool matched = false;
        fore(a, vec) {
            if (s.find(a) == 0) {
                int len = a.size();
                s = s.substr(len);
                matched = true;
                break;
            }
        }
        if (!(matched))
            break;
    }
    if (s == "") {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
    return 0;
}