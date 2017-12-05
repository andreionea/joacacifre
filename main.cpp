/*Să se genereze toate numerele naturale de 3 cifre
pentru care cifra sutelor este egală cu suma cifrelor zecilor şi unităţilor. */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int uc, uc2;
    int x, aux, sumcif;
    cout<<"Numerele cu proprietatea ceruta sunt: "<<endl;
    for(x=100;x<=999;x++){
        aux=x;
        uc=x%10;
        x=x/10;
        x=floor(x);
        uc2=x%10;
        sumcif=uc2+uc;
        x=x/10;
        x=floor(x);
        if(x==sumcif)
            cout<<aux<<" ";
    }
return 0;
}
