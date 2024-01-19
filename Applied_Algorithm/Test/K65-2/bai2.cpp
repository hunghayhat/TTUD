#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int> a;
    int x;
    for (int i=0; i<n; i++){
        cin >> x;
        a.push(x);
    }
    string cmd;
    while(true){
        cin >> cmd;
        if (cmd == "insert"){
            cin >> x;
            a.push(x);
        }
        if (cmd == "delete-max"){
            cout << a.top();
            a.pop();
        }
        if (cmd == "*"){
            break;
        }
    }
    return 0;
}