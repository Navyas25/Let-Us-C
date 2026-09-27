//find the prime factors of entered positive integer
int checkPrime(int x){
    int check=1;
    if(x<=1)
    check=0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
        check=0;
        break;
        }
    }
    return check;
}
void primeFactors(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0&&checkPrime(i)==1){
            printf("%d\n",i);
        }
    }
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}
