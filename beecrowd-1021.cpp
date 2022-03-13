#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    int rem,a,b,c,d,e,f,g,h,i,j,k,l;
    cin >> n;
    //NOTAS
    rem = n*100;
    a = rem/10000;
    rem = rem%10000;

    c = rem / 5000;
    rem = rem % 5000;

    d = rem / 2000;
    rem = rem % 2000;

    e = rem / 1000;
    rem = rem % 1000;

    f = rem / 500;
    rem = rem % 500;

    g = rem / 200;
    rem = rem % 200;

    // MOEDAS
    h = rem / 100;
    rem = rem % 100;

    i = rem / 50;
    rem = rem % 50;

    j = rem / 25;
    rem = rem % 25;

    k = rem / 10;
    rem = rem % 10;

    l = rem / 5;
    rem = rem % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", c);
    printf("%d nota(s) de R$ 20.00\n", d);
    printf("%d nota(s) de R$ 10.00\n", e);
    printf("%d nota(s) de R$ 5.00\n", f);
    printf("%d nota(s) de R$ 2.00\n", g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", h);
    printf("%d moeda(s) de R$ 0.50\n", i);
    printf("%d moeda(s) de R$ 0.25\n", j);
    printf("%d moeda(s) de R$ 0.10\n", k);
    printf("%d moeda(s) de R$ 0.05\n", l);
    printf("%d moeda(s) de R$ 0.01\n", rem);


    return 0;
}
