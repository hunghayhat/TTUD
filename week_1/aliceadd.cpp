#include<iostream>
using namespace std;
int main (){
    int n;
    int a[2], sum;
    cout << "Insert n:" << endl;
    cin >> n;
    int sum_i[n];
    for (int i = 0; i < n; i++){
      sum = 0;
        for (int j = 0; j < 2; j++){
            cin >> a[j];
            sum += a[j];
        }
       sum_i[i] = sum;

    }
    for (int i = 0; i < n; i++)
    cout << sum_i[i] << endl;
}

