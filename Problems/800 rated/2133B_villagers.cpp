#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
    vector<int> yash(x);
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        yash[i]=y;
    }
    long long eme=0;
    sort(yash.begin(), yash.end());
    for(int i= x-1;i>=1;i-=2){
        eme+=yash[i];
        
    }
    if(x%2==1){
        eme+=yash[0];
    }
    cout<<eme<<endl;
    }
    return 0;
}