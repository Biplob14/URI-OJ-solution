#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s, sf;
    cin>>s;
    if(s<=400){
        sf = s+s*.15;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sf<<endl<<"Reajuste ganho: "<<sf-s<<endl<<"Em percentual: 15 %"<<endl;
    }
    if(s>400 && s<=800){
        sf = s+s*.12;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sf<<endl<<"Reajuste ganho: "<<sf-s<<endl<<"Em percentual: 12 %"<<endl;
    }
    if(s>800 && s<=1200){
        sf = s+s*.10;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sf<<endl<<"Reajuste ganho: "<<sf-s<<endl<<"Em percentual: 10 %"<<endl;
    }
    if(s>1200 && s<=2000){
        sf = s+s*.07;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sf<<endl<<"Reajuste ganho: "<<sf-s<<endl<<"Em percentual: 7 %"<<endl;
    }
    if(s>2000){
        sf = s+s*.04;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sf<<endl<<"Reajuste ganho: "<<sf-s<<endl<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
