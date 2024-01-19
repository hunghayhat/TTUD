#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int,vector<int>,greater<int>> D;
    int e;
    string cmd;
    while(true){
        cin >> cmd;
        if (cmd=="PUSH"){
            cin >> e;
            D.push(e);
        }
        if (cmd=="POP"){
            cout << D.top();
            D.pop();
        }
        if (cmd=="#") {
            break;
        }
    }
}