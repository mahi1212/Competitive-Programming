#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0){
            return 0;
        }else{
            int arr[n];
            for(int i=1; i <=n; ++i){
                cout << i;
                if(i != n){
                    cout << " ";
                }
            }
            cout << endl;
        }

    }

    return 0;
}

