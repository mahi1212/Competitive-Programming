#include<bits/stdc++.h>
using namespace std;

int main(){
    float s,n,p;
    cin >> s;

    if(s >=0 && s<=400.00){
        p = 15;
        n = s*p/100;
        cout << "Novo salario: " << fixed << setprecision(2) << s + n<< endl;
        cout << "Reajuste ganho: "<< fixed << setprecision(2) << n << endl;
        cout << "Em percentual: "<< fixed << setprecision(0) << p << " %" << endl;
    }else if(s>=400.01 && s<=800.00){
        p = 12;
        n = s*p/100;
        cout << "Novo salario: "<< fixed << setprecision(2) << s + n<< endl;
        cout << "Reajuste ganho: "<< fixed << setprecision(2) << n << endl;
        cout << "Em percentual: "<< fixed << setprecision(0) << p << " %" << endl;
    }else if(s >=800.01 && s <= 1200.00){
        p = 10;
        n = s*p/100;
        cout << "Novo salario: "<< fixed << setprecision(2) << s + n<< endl;
        cout << "Reajuste ganho: "<< fixed << setprecision(2) << n << endl;
        cout << "Em percentual: "<< fixed << setprecision(0) << p << " %" << endl;
    }
    else if(s >= 1200.01 && s <= 2000.00){
        p = 7;
        n = s*p/100;
        cout << "Novo salario: "<< fixed << setprecision(2) << s + n<< endl;
        cout << "Reajuste ganho: "<< fixed << setprecision(2) << n << endl;
        cout << "Em percentual: "<< fixed << setprecision(0) << p << " %" << endl;
    }
    else{
        p = 4;
        n = s*p/100;
        cout << "Novo salario: "<< fixed << setprecision(2) << s + n<< endl;
        cout << "Reajuste ganho: "<< fixed << setprecision(2) << n << endl;
        cout << "Em percentual: "<< fixed << setprecision(0) << p << " %" << endl;
    }

    return 0;
}
