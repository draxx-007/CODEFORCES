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
    sort(yash.begin(), yash.end());
    int sum=0;
    for(int i=0;i<yash.size();i++){
        sum+=yash[i];
    }
    int half=sum/2;
    int co=0;
    for(int i=yash.size()-1;i>=0;i--){
        co+=yash[i];
        if(co>half){
            cout << yash.size()-i << endl;
            return 0;
        }
    }
    return 0;
}