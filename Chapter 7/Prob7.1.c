//menu based prog- 1.factorial 2.prime or not 3.odd or even 4.exit
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void factorial(int n)
{
    int fact=1;
    if(n==0)
    printf("factorial of 0 is 1\n");
    else{
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("factorial of %d is %d\n",n,fact);
    }
}
void checkPrime(int n)
{
    int check=1;
    if(n<=0||n==1){
        printf("not prime\n");
    }
    else{
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
          check=0;
      }
      if(check==1)
      printf("prime\n");
      else
      printf("not prime\n");
    }
}

void oddEven(int n)
{
    if(n%2==0)
    printf("even\n");
    else
    printf("odd\n");
}


int main()
{
    int n,choice;
    do{
        printf("-------MENU--------\n");
        printf("1.find factorial\n2.find if prime or not\n3.find if odd or even\n4.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the number:");
            scanf("%d",&n);
            factorial(n);
            break;
            
            case 2:
            printf("enter the number:");
            scanf("%d",&n);
            checkPrime(n);
            break;
            
            case 3:
            printf("enter the number:");
            scanf("%d",&n);
            oddEven(n);
            break;
            
            case 4:
            exit(0);
            
            default:
            printf("you entered an invalid choice!\n");
        }
    }while(choice!=4);
    return 0;
}
