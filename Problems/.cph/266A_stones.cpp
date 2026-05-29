#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string yash;
    cin >> yash;
    int c = 0;
    for(int i=1;i<n;i++) {
        if(yash[i]==yash[i-1]) {
            c++;
        }
    }
    cout << c;
    return 0;
}

