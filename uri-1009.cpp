#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string name;
    float fixed_salary, total_sale;

    cin>>name>>fixed_salary>>total_sale;

    printf("TOTAL = R$ %.2f\n", fixed_salary+(15.00*total_sale)/100);

    return 0;
}
