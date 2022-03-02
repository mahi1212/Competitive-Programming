#include<bits/stdc++.h>
using namespace std;

int main(){

    double x1,y1,x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    float f = pow((x2-x1),2);
    float s = pow((y2-y1),2);
    float d = sqrt(f+s);

    cout << fixed << setprecision(4)<< d << endl;
    return 0;
}
