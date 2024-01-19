#include <bits/stdc++.h>
#define X 1000000007
using namespace std;
// Idea
// 1. ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
// 2. Fermat's little theorem: If m mod (p - 1) = n mod (p - 1) then a^m mod p = a^n mod p
int main(){
    unsigned long long int a, b, ans = 1;
    cin >> a >> b;
    a %= X;
    b %= X - 1;
    for (int i = 1; i <= b; i++){
        ans *= a;
        ans = ans % X;
    }
    cout << ans << endl;
    return 0;
}