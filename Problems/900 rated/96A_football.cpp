#include <iostream>
using namespace std;

int main(){
    string yash;
    cin>> yash;
    int co=1;
    for(int i=0;i+1<yash.size();i++){
        if(yash[i]==yash[i+1]){
            co++;
        }else{
             co=1;
        }
        if(co==7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;

}