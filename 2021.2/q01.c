/*Questão 01 prova 2021.2*/
#include <stdio.h>

int main()
{
    int num, p1, p2, p3, p4, vfinal, som1, som2, som3, som4;
    printf ("escreva um valor de no maximo 4 digitos //>");
    scanf ("%d", &num);
    p1=num/1000;
    p2=(num%1000)/100;
    p3=((num%1000)%100)/10;
    p4=(((num%1000)%100)%10);

    if (p1==2)
    som1=27;
    else if (p1==1)
    som1=0;
    else;

    if (p2==2)
    som2=9;
    else if (p2==1)
    som2=0;
    else if (p2==0)
    som2=-9;
    else;

    if (p3==2)
    som3=3;
    else if (p3==1)
    som3=0;
    else if (p3==0)
    som3=-3;
    else;

    if (p4==2)
    som4=1;
    else if (p4==1)
    som4=0;
    else if (p4==0)
    som4=-1;
    else;

    vfinal=som4+som3+som2+som1;
    printf ("o valor final é %d", vfinal);

}