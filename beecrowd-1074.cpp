#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s;
    for(int i=0; i<s; i++){
        cin >> n;
        if(n==0){
            cout << "NULL" << endl;
        }else{
            if(n%2 == 0){
                cout << "EVEN ";
            }else{
                cout << "ODD ";
            }

            if(n>0){
                cout << "POSITIVE" << endl;
            }else{
                cout << "NEGATIVE" << endl;
            }
        }
    }
    return 0;
}
