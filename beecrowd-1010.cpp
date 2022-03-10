#include<bits/stdc++.h>
using namespace std;

int main(){
    int c1,c2,v1,v2;
    float p1,p2;
    cin >> c1 >> v1 >> p1;
    cin >> c2 >> v2 >> p2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << v1*p1 + v2*p2 << endl;

    return 0;
}
