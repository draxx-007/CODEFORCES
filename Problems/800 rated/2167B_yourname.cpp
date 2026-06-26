#include <iostream>
using namespace std;
#include <algorithm>

int main() {

    int q;
    cin >> q;

    while(q--) {
        int n;
        string s, t;

        cin >> n;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }

    return 0;
}