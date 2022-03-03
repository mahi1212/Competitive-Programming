#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp;
    int arr[3];
    int order[3];
    // take input
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    //copy to a new Array
    copy(begin(arr), end(arr), begin(order)); //

    //find ascending order
    for(int i=0; i<3; i++){
       for(int j=i+1; j<3; j++){
            if(arr[j] < arr[i]){ //swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
       }
    }

    // print in ascending order
    for(int i=0; i<3; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    // print output
    for(int i=0; i<3; i++){
        cout << order[i] << endl;
    }

    return 0;
}
