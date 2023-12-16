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
    map<char, int> map;
    map['A'] = 0;
    map['B'] = 1;
    map['C'] = 2;
    map['D'] = 3;
    map['E'] = 4;

    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;

    int num1, num2;

    num1 = abs(map[s1] - map[s2]);
    num2 = abs(map[t1] - map[t2]);

    num1 = min(5-num1,num1);
    num2 = min(5-num2,num2);

    if (num1 == num2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}