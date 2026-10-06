#include<stdio.h>
int main()
{
    int n,i,flag=0;
    print("enter a positive integer:");
    scanf("%d",&n);
    for(i=2;i<=n/2;++i){
        // condition for non-prime
        if(n%i=0){
            flag=1;
            break;
        }
    }
if(n==1){
    print("1 is neither prime nor composite.");
}
else{
    if(flag==0)
    print("%d is a prime number.",n);
else
print("%d is not a prime number.",n);
}
return0;
}