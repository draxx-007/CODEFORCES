#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> yash(n);
   for(int i=0;i<n;i++){
      cin>>yash[i];
   }
    sort(yash.begin(),yash.end());
    int sum=0;
    for(int i=0;i<m;i++){
        if(yash[i]!=abs(yash[i])){
            sum+=abs(yash[i]);
        }
    }
    cout << sum;
    return 0;
}