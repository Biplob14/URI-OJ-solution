#include<iostream>
using namespace std;
int main(){
    long long int d1,h1,m1,s1,d2,h2,m2,s2,stime,etime,duration;
    long long int rd,rh,rm,rs;
    string str;
    cin>>str;
    cin>>d1>>h1>>str>>m1>>str>>s1;
    cin>>str;
    cin>>d2>>h2>>str>>m2>>str>>s2;
    stime = ((d1*24*60*60)+(h1*60*60)+(m1*60))+s1;
    etime = ((d2*24*60*60)+(h2*60*60)+(m2*60))+s2;
    duration = etime - stime;
    rd = duration/86400;
    rh = (duration%86400)/3600;
    rm = ((duration%86400)%3600)/60;
    rs = ((duration%86400)%3600)%60;
    cout<<rd<<" dia(s)"<<endl;
    cout<<rh<<" hora(s)"<<endl;
    cout<<rm<<" minuto(s)"<<endl;
    cout<<rs<<" segundo(s)"<<endl;
    return 0;
}
