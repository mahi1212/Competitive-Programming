#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3;
    cin >> s1;

    if(s1 == "vertebrado"){
        cin >> s2;
        if(s2 == "ave"){
            cin >> s3;
            if(s3 == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            cin >> s3;
            if(s3 == "onivoro"){
                cout << "homen" << endl;
            }else{
                cout << "vasa" << endl;
            }
        }
    }else{
        cin >> s2;
        if(s2 == "inseto"){
            cin >> s3;
            if(s3 == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            cin >> s3;
            if(s3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
