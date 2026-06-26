#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        int two=0;
        int three=0;

        while(n%2==0) {
            two++;
            n/=2;
        }

        while(n%3==0) {
            three++;
            n/=3;
        }

        if(n!=1 || three<two) {
            cout << -1 << endl;
        }
        else {
            cout << 2*three-two << endl;
        }
    }

    return 0;
}