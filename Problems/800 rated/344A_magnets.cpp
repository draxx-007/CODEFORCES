#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ish="";
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        ish+=x;
    }
    int g=1;
    for(int i=1;i<ish.size();i++){
        if(ish[i]==ish[i-1]){
            g++;
        }
    }
    cout<<g<<endl;
    return 0;
}

