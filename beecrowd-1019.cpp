#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0,m=0,h=0,remainingHour,remainingMin;
    cin >> n;

    h = n / 3600;
    remainingHour = n-(h*3600);

    m = remainingHour / 60;
    remainingMin = remainingHour % 60;

    s = remainingMin;

    cout << h << ":"<< m << ":"<< s << endl;

    return 0;
}
