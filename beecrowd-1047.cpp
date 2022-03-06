#include<bits/stdc++.h>
using namespace std;

int main(){
     int sh, sm, eh, em;
     cin >> sh >> sm >> eh >> em;
     int diffHour = 24*abs(sh-eh);
     int diffMin = abs(sm-em);
     if(em < sm){
         cout << "O JOGO DUROU "<< 1-(diffHour/24) << " HORA(S) E "<< 60 - diffMin <<" MINUTO(S)" << endl;
     }
     else{
        if(diffHour==0 && diffMin==0){
            cout << "O JOGO DUROU "<< 24 << " HORA(S) E "<< 0 <<" MINUTO(S)" << endl;
        }else{
            cout << "O JOGO DUROU "<< diffHour/24 << " HORA(S) E "<< diffMin <<" MINUTO(S)" << endl;
        }
     }

     return 0;
}
