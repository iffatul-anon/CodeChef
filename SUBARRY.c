#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        long long int a;
        long long int max1=-1000000000,max2=0;
        long long int min1=0,min2=1000000000;
        int flag1=0,flag2=0,flag3=0;
        for(int j=0;j<n;j++){
            scanf("%lld",&a);
            if(a==0){
                flag1=1;
            }
            if(a<0){
                flag2=1;
            }
            if(a>0){
                flag3=1;
            }
            if(max1<a && a<0){
                max1=a;
            }
            if(min1>a && a<0){
                min1=a;
            }
            if(max2<a && a>0){
                max2=a;
            }
            if(min2>a && a>0){
                min2=a;
            }
        }
        if(flag1==0 && flag2==0){
            printf("%lld %lld\n",min2*min2,max2*max2);
        }
        if(flag1==0 && flag3==0){
            printf("%lld %lld\n",max1*max1,min1*min1);
        }
        if(flag1==1 && flag2==0){
            printf("0 %lld\n",max2*max2);
        }
        if(flag1==1 && flag3==0){
            printf("0 %lld\n",min1*min1);
        }
        if(flag2==1 && flag3==1){
            if(max2>llabs(min1)){
                printf("%lld %lld\n",max2*min1,max2*max2);
            }
            else{
                printf("%lld %lld\n",max2*min1,min1*min1);
            }   
        }
    }
    return 0;
}