#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        vector<int> a(k);

        for(int i = 0; i < k; i++) {
            cin >> a[i];
        }

        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> ans;

        bool done = false;

        while(!done) {

            done = true;

            for(int level = k; level >= 1; level--) {

                for(int i = 0; i < n; i++) {

                    if(b[i] == level) {

                        b[i]++;
                        ans.push_back(i + 1);
                        done = false;
                    }
                }
            }
        }
        cout << ans.size() << endl;
        for(int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}