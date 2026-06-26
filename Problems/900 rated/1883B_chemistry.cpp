#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> freq(26,0);

        for (char ch : s) {
            freq[ch-'a']++;
        }

        int oddC=0;

        for (int x:freq) {
            if (x%2) {
                oddC++;
            }
        }

        int oddn=(n-k)%2;

        if (oddC- oddn <= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}