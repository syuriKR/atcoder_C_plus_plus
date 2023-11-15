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

    set<string>set;

    rep(i,0,n){
        string s;
        cin >> s;

        if(!( (s[0]=='H' || s[0]=='D' || s[0]=='C' || s[0]=='S') && (s[1]=='A' || s[1]=='2' || s[1]=='3' || s[1]=='4' || s[1]=='5' || s[1]=='6' || s[1]=='7' || s[1]=='8' || s[1]=='9' || s[1]=='T' || s[1]=='J' || s[1]=='Q' || s[1]=='K') )){
            cout << "No" << endl;
            return 0;
        }
        set.insert(s);
    }
    
    int size = set.size();
    if(size!=n){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    
    return 0;
}