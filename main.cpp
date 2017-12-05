/*Să se genereze toate numerele naturale de 3 cifre
pentru care cifra sutelor este egală cu suma cifrelor zecilor şi unităţilor. */
#include <iostream>
using namespace std;
int main(){
    int uc, uc2;
    int x, aux, sumcif;
    cout<<"Numerele cu proprietatea ceruta sunt: "<<endl;
    for(x=100;x<=999;x++){
        aux=x;
        uc=x%10;
        x=x/10; //din moment ce x este int, operatorul div ('/') noul x va fi tot nr. intreg.
                //div returneaza CATUL impartirii ex: int a = 3 / 2; (a=1) VS. float a = 3 / 2; (a=1.5)
        uc2=x%10;
        sumcif=uc2+uc;
        x=x/10;
        if(x==sumcif)
            cout<<aux<<" ";
    }
return 0;
}
