#include <iostream>
using namespace std;
int main(){
    int y,i;
    cin >> y>>i;
    int c=y;
    for(int j=0;j<i;j++){
        int n=y%10;
        if(n!=0){
            y--;
        }else{
            y=y/10;
        }
    }
    cout << y << endl;
    return 0;
}