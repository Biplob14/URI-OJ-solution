#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, avg=0, navg=0;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avg = ((n1*2.0)+(n2*3.0)+(n3*4.0)+n4)/10.0;
    printf("Media: %.1f\n", avg);

    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
    else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        navg = (avg+n5)/2.0;
        if(navg>=5.0)
            printf("Aluno aprovado.\n");
        else if(navg<=4.9)
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", navg);


        }

    return 0;
}
