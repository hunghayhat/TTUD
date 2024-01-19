#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[n];
    stack<int> c;
    queue<int> h;
    for (int i=0;i<n;i++){
        cin >> p[i];
    }
    for (int i=n-1;i>=0;i--){
        c.push(p[i]);
    }
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++){
        if (s[i] == 'C' && c.size()>0){
            h.push(c.top());
            c.pop();
        }
        if (s[i] == 'H' && h.size()>0){
            c.push(h.front());
            h.pop();
        }
    }
    for (int i=0;i<n;i++){
        cout << c.top() << " ";
        c.pop();
    }
}