#include <iostream>
using namespace std;

int main(){
    int yash;
    cin>>yash;

    string ish;
    cin>>ish;

    int raj=0,srh=0;

    for(int i=0;i<yash;i++){
        if(ish[i]=='A'){
            raj++;
        }else{
            srh++;
        }
    }

    if(raj>srh){
        cout<<"Anton";
    }else if(srh>raj){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}