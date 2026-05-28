#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int capa=-1;
    int p=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;

        int abhi=y-x+p;
        p=abhi;
        capa=max(capa,abhi);
    }
    cout << capa << endl;
    return 0;
}