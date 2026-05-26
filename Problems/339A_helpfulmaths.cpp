#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string y;
    cin>>y;
    vector <char> yash;

    for(int i=0; i<y.length(); i++) {
        if(y[i]!='+') {
            yash.push_back(y[i]);
        }
    }
    sort(yash.begin(),yash.end());
    for(int i=0; i<yash.size(); i++) {
        cout<<yash[i];
        if(i<yash.size()-1) {
            cout<<"+";
        }
    }
    cout << endl;

    return 0;
}