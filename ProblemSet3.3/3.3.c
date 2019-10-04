
/*
C program to print all prime numbers from 1 to N.
gcc 3.3.c -o 3.3 && ./3.3
*/
 
#include <stdio.h>
 
int checkPrime(int num){
    int i;
    int f=0; // f is used to test if the checkprime function is true or not.
    /*if number (num) is divisble by any number from 2 to num/2
      number will not be prime.*/
    for(i=2;i<(num-1);i++)
    {
        if(num%i==0){
            f=300;
            break;
        }
    }
    if(f) return 0;
    
    else return 1;
}
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("All prime numbers are from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(checkPrime(i))
            printf("%d,",i);
    }
     
    return 0;
}