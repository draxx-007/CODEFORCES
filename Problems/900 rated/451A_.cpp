#include <iostream>
using namespace std;

int main() {
    int h,v;
    cin>>h>>v;

    if(min(h,v)%2==1){
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }
}