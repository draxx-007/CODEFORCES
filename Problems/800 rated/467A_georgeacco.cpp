#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n--){
        int y,i;
        cin>>y>>i;
        if(i-y>=2)
            x++;
    }
    cout<<x<<endl;
    return 0;
}