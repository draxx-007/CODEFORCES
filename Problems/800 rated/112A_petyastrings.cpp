#include <iostream>
using namespace std;

int main() {
   string yash,ish;
   cin >> yash >> ish;
    for(int i=0;i<yash.length();i++){
        if(tolower(yash[i])>tolower(ish[i])){
            cout << "1" << endl;
            return 0;
        }
        if(tolower(yash[i])<tolower(ish[i])){
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}