#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int maximum1 = (a+b+abs(a-b))/2;
    int maximum = (maximum1+c+abs(maximum1-c))/2;
    cout << maximum << " eh o maior" << endl;

    return 0;
}
