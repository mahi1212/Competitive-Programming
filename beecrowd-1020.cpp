#include<bits/stdc++.h>
using namespace std;

int main(){

    int y=0,m=0,d=0, n, remYear, remMon;
    cin >> n;

    y = n/365;
    remYear = n-(y*365);

    m = remYear/30;
    remMon = remYear-(m*30);

    d = remMon;
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}
