#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x, y, average;
    int a;
    GT:
    cin>>x;
    if(x==2)
        return 0;
    while(x<0 || x>10.0){
        cout<<"nota invalida"<<endl;
        cin>>x;
    }
    cin>>y;
    while(y<0 || y>10.0){
        cout<<"nota invalida"<<endl;
        cin>>y;
    }
    average = (x+y)/2.0;
    cout<<fixed<<setprecision(2)<<"media = "<<average<<endl;
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>x;
    while(x<1 || x>2){
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>x;
    }
    if(x==2)
        return 0;
    else
        goto GT;
}
