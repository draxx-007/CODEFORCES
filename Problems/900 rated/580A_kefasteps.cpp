#include <iostream>
using namespace std;
#include <vector>
int main(){
    int n;
    cin>>n;
    vector <int> yash;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        yash.push_back(x);
    }
    int maxi=1;
    int c=1;
    for(int i=1;i<n;i++){
        
        if(yash[i]>=yash[i-1]){
            c++;
        }else{
            c=1;
        }
        maxi=max(maxi,c);
    }
   cout << maxi<< endl;
   return 0;
}