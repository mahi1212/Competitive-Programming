#include<bits/stdc++.h>
using namespace std;

int main(){
    float n,r,t;
    cin >> n;
    cout << fixed << setprecision(2);

    if(n <= 2000.00){
        cout << "Isento" << endl;
    }else{
        r = n - 2000;
        // find remaining and apply taxes
        if(r <= 1000.00){
            t = (r * 8)/100;
        }else if( r > 1000.00 && r <=2500.00){
            t = (1000*8)/100 + ((r-1000)*18)/100;
        }else if(r > 2500.00){
            t = (1000*8)/100 + (1500.00*18)/100 + ((r-2500)*28)/100;
        }
        cout << "R$ " << t << endl;
    }


    return 0;
}
