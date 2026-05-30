#include <iostream> 
using namespace std;
#include <vector>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> yash(n);
        for(int i=0;i<n;i++){
            cin>>yash[i];
        }
        int gre,small;
        for(int i=0;i<yash.size();i++){
            gre=0;
            small=0;
            for(int j=i+1;j<yash.size();j++){
                if(yash[j]>yash[i]){
                    small++;
                }
                else if(yash[i]>yash[j]){
                    gre++;
                }
            }
            int is=max(gre,small);
            cout << is << " ";
        }
        cout << endl;
    }
    return 0;
    
}