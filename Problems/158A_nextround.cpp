#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int yash[n];
    for(int i=0; i<n; i++) {
        cin >> yash[i];
    }
    int ish=yash[k-1];
    int count=0;
    for(int i=0; i<n; i++){
        if(yash[i]>= ish && yash[i]>0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}