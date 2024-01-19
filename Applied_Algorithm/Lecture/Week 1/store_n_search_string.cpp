#include <bits/stdc++.h> 
using namespace std;
int main() { 
    set<string> key;
    string s;
    // Read input
    while (true) {
        cin >> s;
        if (s == "*") break;
        else key.insert(s);
    }
    // Read cmd
    string cmd;
    while (true){
        cin>>cmd>>s;
        if (cmd == "***") break;
        else if (cmd == "find"){
            if (key.find(s) != key.end()) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else if (cmd == "insert"){
            if (key.find(s) != key.end()) cout<<0<<endl;
            else {
                key.insert(s);
                cout<<1<<endl;
            }
        }
    }
    return 0;
}