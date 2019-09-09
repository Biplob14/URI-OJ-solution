#include<iostream>
using namespace std;

int main()
{
    string s1, s2, s3, s;
    cin>>s1>>s2>>s3;
    if(s1 == "vertebrado"){
        if(s2 == "ave"){
            if(s3 == "carnivoro")
                cout<<"aguia"<<endl;
            if(s3 == "onivoro")
                cout<<"pomba"<<endl;
        }
        if(s2 == "mamifero"){
            if(s3 == "onivoro")
                cout<<"homem"<<endl;
            if(s3 == "herbivoro")
                cout<<"vaca"<<endl;
        }
    }
    if(s1 == "invertebrado"){
        if(s2 == "inseto"){
            if(s3 == "hematofago")
                cout<<"pulga"<<endl;
            if(s3 == "herbivoro")
                cout<<"lagarta"<<endl;
        }
        if(s2 == "anelideo"){
            if(s3 == "hematofago")
                cout<<"sanguessuga"<<endl;
            if(s3 == "onivoro")
                cout<<"minhoca"<<endl;
        }
    }
    return 0;
}
