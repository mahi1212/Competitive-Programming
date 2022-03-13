#include<bits/stdc++.h>
using namespace std;

int main(){
    float l=1;
    for(float i=0; i<=2.2; i+=0.2){
        for(float j=l; j<=3; j++){
            cout << "I=" << i << " J=" << j+i << endl;
        }

    }

    return 0;
}
