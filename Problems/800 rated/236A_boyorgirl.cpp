#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>

int main(){
    string yash;
    cin >> yash;
    unordered_set <char> raj;
    for(int i=0;i<yash.length();i++){
        raj.insert(yash[i]);
    }
    if(raj.size()%2!=0){
        cout <<"IGNORE HIM!";
    }else{
        cout <<"CHAT WITH HER!";
    }
    return 0;
}