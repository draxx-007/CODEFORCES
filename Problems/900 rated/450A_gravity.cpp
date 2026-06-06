#include <iostream> 
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int n;
    cin>>n;
    vector<int> yash;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        yash.push_back(x);
    }
    sort(yash.begin(),yash.end());
        for(int i=0;i<yash.size();i++){
        cout<<yash[i]<<" ";
    }
    return 0;
}