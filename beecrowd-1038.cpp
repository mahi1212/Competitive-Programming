#include<bits/stdc++.h>
using namespace std;

int main(){
    int code, unit;
    cin >> code >> unit;
    float p;

    if(code == 1){
        p = 4.00 * unit;
    }else if(code == 2){
        p = 4.50 * unit;
    }else if(code == 3){
        p = 5.00 * unit;
    }else if(code == 4){
        p = 2.00 * unit;
    }else{
        p = 1.50 * unit;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << p << endl;

    return 0;
}
