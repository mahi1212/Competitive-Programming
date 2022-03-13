#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    double sal, total, extra;
    cin >> name;
    cin >> sal;
    cin >> total;

    extra = (total* 15)/100;

    cout << "TOTAL = R$ " << sal +extra << endl;
    return 0;
}
