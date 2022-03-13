#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, hour;
    float time;
    cin >> num;
    cin >> hour;
    cin >> time;

    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << hour*time << endl;

    return 0;
}
