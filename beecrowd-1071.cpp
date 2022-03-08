
#include<bits/stdc++.h>
using namespace std;

int main(){
    int plusCnt = 0, minusCnt =0;
    int s;
    cin >> s;
    int arr[s];
    for(int i=0; i < s; i++){
        cin >> arr[i];
    }

    for(int i=0; i<s; i++){
        if(arr[i]>=10 and arr[i] <=20){
            plusCnt++;
        }else{
            minusCnt++;
        }
    }

    cout << plusCnt << " in" << endl;
    cout << minusCnt << " out" << endl;

    return 0;
}
