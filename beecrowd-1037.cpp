#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin >> n;
    string s = "Intervalo ";
    if(n>100 || n<0){
        cout << "Fora de intervalo" << endl;
    }else if( n>=0 && n<=25 ){
        cout << s+"[0,25]" << endl;
    }else if( n>25 && n<=50 ){
        cout << s+"(25,50]" << endl;
    }
    else if( n>50 && n<=75 ){
        cout << "(50,75]" << endl;
    }else{
        cout << s+"(75,100]" << endl;
    }

    return 0;
}
