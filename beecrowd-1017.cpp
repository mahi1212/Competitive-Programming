#include<bits/stdc++.h>
using namespace std;

int main(){
    int time,speed;
    cin >> time;
    cin >> speed;

    float fuel =((float)time*speed)/12;
    cout << fixed << setprecision(3) << fuel << endl;
    return 0;
}
