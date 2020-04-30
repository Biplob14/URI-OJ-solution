#include<iostream>
using namespace std;

int final_ratio(unsigned int a, unsigned int b){
    if(b==0) return a;

    else
        return final_ratio(b, a%b);

}

int print_out(int n3, int d3){
    int mini = final_ratio(n3, d3);
           int n4 = n3/mini;
            int d4 = d3/mini;

            cout<<n3<<'/'<<d3<<" "<<'='<<" "<<n4<<'/'<<d4<<endl;
}
int main()
{
    int n1, n2, d1, d2,n3, d3, n4, d4, t, i=0, mini;
    char c1, c2, c3;

    cin>>t;

    while(i!=t){
        cin>>n1>>c1>>d1>>c2>>n2>>c3>>d2;
        if(c2 == '/'){
            n3 = n1*d2;
            d3 = n2*d1;
            print_out(n3, d3);

        }
        else if(c2 == '*'){
            n3 = n1*n2;
            d3 = d1*d2;
            print_out(n3, d3);

        }
        else if(c2 == '+'){
            n3 = ((n1*d2)+(n2*d1));
            d3 = (d1*d2);
            print_out(n3, d3);

        }
        else if(c2 == '-'){
            n3 = ((n1*d2)-(n2*d1));
            d3 = d1*d2;

            print_out(n3, d3);
        }

        i++;
    }

    return 0;
}
