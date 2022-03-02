#include<bits/stdc++.h>
using namespace std;

int main(){
    double n1,n2,n3,n4,avg,exam,newAvg;

    cin >> n1 >> n2 >> n3 >> n4;
    avg =  (n1*2+n2*3+n3*4+n4)/10;

    cout << "Media: " << fixed << setprecision(1) << avg << endl;

    if(avg >= 7){
        cout << "Aluno aprovado."<< endl;
    }else if(avg>=5){
        cout << "Aluno em exame." << endl;
        cin >> exam;
        cout << "Nota do exame: " << exam << endl;
        newAvg = (avg+exam)/2.0;
        if( newAvg > 5 ){
            cout << "Aluno aprovado." << endl;
        }else{
            cout << "Aluno reprovado."  << endl;
        }
        cout << "Media final: " << fixed << setprecision(1)<< newAvg << endl;

    }else{
        cout << "Aluno reprovado."<< endl;
    }

    return 0;
}
