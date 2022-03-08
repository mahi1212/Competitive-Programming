#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[6], avg = 0;
    int cnt=0;
    //taking input
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    //check weather positive and add them
    for(int i = 0; i < 6; i++){
        if(arr[i]>0){
            avg+= arr[i];
            cnt++;
        }
    }

    cout << cnt << " valores positivos" << endl;
    cout << fixed << setprecision(1) << (float)avg/cnt << endl;

    return 0;
}
