#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos=0, Max = 0;
    for(int i=1; i <= 10; i++){
        cin >> n;
        if(n > Max){
            Max = n;
            pos = i;
        }
    }
    cout << Max << endl << pos << endl;
    return 0;
}
