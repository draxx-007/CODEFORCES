#include <iostream> 
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int n;
    cin>>n;
    vector<int> yash(n);
    for(int i=0;i<n;i++){
        cin>>yash[i];
    }
    sort(yash.begin(),yash.end());
        for(int i=0;i<yash.size();i++){
        cout<<yash[i]<<" ";
    }
}