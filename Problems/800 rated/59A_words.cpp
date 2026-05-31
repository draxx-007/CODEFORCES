#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int u=0;
    int l=0;

    for (char ch : s) {
        if (isupper(ch))
            u++;
        else
            l++;
    }

    if (u >l) {
        for (int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}