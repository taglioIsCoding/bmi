#include <iostream>

using namespace std;

int main()
{
    int peso;
    double altezza;
    double bmi;
    do{
        cout<<"djewjf"<<endl;
        cin>>altezza;
    }while(altezza<0);
    do{
        cout<<"inserisci peso"<<endl;
        cin>>peso;
    }while(peso<=0);
    bmi=peso/(altezza*altezza);
    if(bmi<16.00);
    {
        cout<<"il tuo bmi e'"<< bmi<<"e sei sottopeso";
    }
    else if(bmi>16.00||bmi<25.00);
    {
        cout<<"il tuo bmi e'"<< bmi<<"e sei peso forma";
    }
    else if(bmi>25.00)
    {
        count<<"il tuo peso e'"<<bmi<<"e sei obeso";
    }


    return 0;

}
