#include<iostream>
using namespace std;
int main(){
    int h1,m1,h2,m2;
    int stime,etime,duration;
    int H,M;
    cin>>h1>>m1>>h2>>m2;
    stime = (h1*60)+m1;
    etime = (h2*60)+m2;
    if(etime>stime)
        duration = etime - stime;
    if(etime<=stime){
        duration = 1440 - stime + etime;
    }
    H = duration/60;
    M = duration%60;
    cout<<"O JOGO DUROU "<<H<<" HORA(S) E "<<M<<" MINUTO(S)"<<endl;
    return 0;
}
