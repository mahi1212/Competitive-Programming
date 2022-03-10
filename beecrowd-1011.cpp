#include<bits/stdc++.h>
using namespace std;

int main(){
    double r, vol;
    cin >> r;
    cout << fixed << setprecision(3);
    vol = (4/3.0)*3.14159*r*r*r;
    cout << "VOLUME = " << vol << endl;

    return 0;
}
