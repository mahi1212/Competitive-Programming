#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, res;
    cin >> n;
    cout << n << endl;
    cout << n/100 << " nota(s) de R$ 100,00" << endl;
    res = n%100;
    cout << res / 50 << " nota(s) de R$ 50,00" << endl;
    res = res%50;
    cout << res / 20 << " nota(s) de R$ 20,00" << endl;
    res = res%20;
    cout << res / 10 << " nota(s) de R$ 10,00" << endl;
    res = res%10;
    cout << res / 5 << " nota(s) de R$ 5,00" << endl;
    res = res%5;
    cout << res / 2 << " nota(s) de R$ 2,00" << endl;
    res = res%2;
    cout << res / 1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
