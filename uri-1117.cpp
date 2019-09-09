#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x,y=10.5,average;
    cin>>x;
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
    return 0;
}
