#include<bits/stdc++.h>
using namespace std;

int main(){
    string month[] ={"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
    int n;
    cin >> n;
    int len = sizeof(month)/sizeof(month[0]);
    for(int i = 0; i < len; i++){
        cout << month[n-1] << endl;
        break;
    }

    return 0;
}
