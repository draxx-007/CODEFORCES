#include <iostream>
using namespace std;

int main(){
    long long yash;
    cin >> yash;
    int c=0;
    long long n=yash;
    while(n>0){
        int x=n%10;
        if(x==4 || x==7){
            c++;
        }
        n=n/10;
    }
    if(c==4 || c==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}