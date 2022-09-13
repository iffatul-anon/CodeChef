#include<stdio.h>
int solve(int n, int sum){
    for(int x=2;x<=n/2;x++){
        if(n%x==0){
            sum=sum+(n*x);            
        }
    }
    return sum;
}
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int sum=n,a;
        if(n==1){
            printf("%d\n",sum);
        }
        else{
        for(int j=0;j<k;j++){
            sum=solve(n,sum);
            sum=sum+(n*n);
            n=n*n;
        }
        printf("%d\n",sum);
        }
    }
    return 0;
}