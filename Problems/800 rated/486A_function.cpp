#include <iostream> 
using namespace std;
int main(){
    long long y;
    cin>>y;
    
    if(y%2==0){
        cout <<y/2<<endl;
        return 0;
    }else{
        cout << -y/2-1<<endl;
        return 0;
    }
 
    
}