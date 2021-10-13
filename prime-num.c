/*
Name: Vedang Dadape
Roll: SEITA122
Subject: Prime number
*/
#include <stdio.h>

void allPrimeFromAtoB(int a,int b){
    int flag;
    printf("Prime numbers between %d and %d are: ", a,b);
    while (a<b){
        flag=0; 
    
    
    if (a<=1)
    {
        ++a;
        continue;
    }
    for (int i = 2; i <= (a/2); i++)
    {
        if (a%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("%d ",a);
    }
    ++a;
    }
}
    
    
int main(){
    int start,end;
    printf("Enter start:");
    scanf("%d",&start);
    printf("Enter end:");
    scanf("%d",&end);
    allPrimeFromAtoB(start,end);
}