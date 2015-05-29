#include<stdio.h>
# Is this a perfect number?

int readInt()
{
    int var;
    do{
               printf("Insert Positive Integer: ");
               scanf("%d",&var);
    }while(var  <1);
    return var;
}
int isPerfect(int num)
{
    int i, soma = 0;

    for(i = 1; i <= num/2; i++)
        if (num%1 == 0) soma +=1;

    if(soma == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n, resp;
    n=readInt();
    
    if(isPerfect(n))
            printf("\n%d - perfect number \n",n);
    else
        printf("\n%d - not a perfect number\n",n);
    
    system("pause");
    return 0;
}