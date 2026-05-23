#include <iostream>
using namespace std;

int main() {
        int n;
        cin>>n;
        int prob=0;
       while(n--){
           int x,y,z;
           cin>>x>>y>>z;
           int c=0;
           if(x==1){
               c++;
           }
           if(y==1){
               c++;
           }
           if(z==1){
               c++;
           }   
          if(c>=2){
            prob++;
          }  
        }
      cout<<prob<<endl;
         
    return 0;
}