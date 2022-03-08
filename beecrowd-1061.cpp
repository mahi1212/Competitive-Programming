#include<bits/stdc++.h>
using namespace std;

int main(){
    string temp;
    int sd,sh,sm,ss,ed,eh,em,es, rem, slot1, slot2, diff, day, hour, mini, sec;
    // starting info
    cin >> temp >> sd ;
    cin >> sh >> temp >> sm >> temp >> ss;

    // ending info
    cin >> temp >> ed ;
    cin >> eh >> temp >> em >> temp >> es;

    // converting to second
    slot1 = ss + (sm*60) + (sh*60*60) + (sd*60*60*24);
    slot2 = es + (em*60) + (eh*60*60) + (ed*60*60*24);

    diff = slot2 - slot1;
    day = diff / 86400;
    diff = diff % 86400;
    hour = diff / 3600;
    diff = diff % 3600;
    mini = diff / 60;
    sec = diff % 60;

    cout << day << " dia(s)" << endl;
    cout << hour << " hora(s)" << endl;
    cout << mini << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;

    return 0;
}
