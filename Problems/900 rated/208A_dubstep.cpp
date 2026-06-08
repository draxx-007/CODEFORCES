#include <iostream>
using namespace std;
#include <string>
int main(){
    string s;
    cin>>s;
    string yash="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(yash.size()>0 && yash[yash.size()-1]!=' '){
                yash+=' ';
            }
        }else{
            yash+=s[i];
        }
    }
    cout <<yash<< endl;
    return 0;
}