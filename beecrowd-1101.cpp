#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,big,small, sum=0;
    while(1){
        cin >> m >> n;
        if(m > n){
            big = m;
            small = n;
        }else{
            big = n;
            small = m;
        }

        if(m <=0 || n <= 0){
            break;
        }else{
            for(int i = small; i<=big; i++){
                cout << i << " " ;
                sum+=i;
            }
            cout << "Sum=" << sum << endl;
            sum = 0;
        }
    }

    return 0;
}
