#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> p(m);
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    int ish=100000000;
    sort(p.begin(),p.end());
    for(int i=0;i+n-1<m;i++){
        int c=p[i+n-1]-p[i];
        ish=min(ish,c);
    }
    cout << ish << endl;
    return 0;
}