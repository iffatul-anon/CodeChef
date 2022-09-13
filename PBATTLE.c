#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],b[n],c[n];
        int max=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        for(int j=0;j<n;j++){
            int count=0;
            for(int k=0;k<n;k++){
                if(k==j){
                    continue;
                }
                if(a[j]>a[k]){
                    count++;
                }
                if(a[j]<a[k]){
                    if(b[j]>b[k]){
                        count++;
                    }
                }
            }
            if(max<count){
                max=count;
            }
            c[j]=count;
        }
        int count1=0;
        for(int j=0;j<n;j++){
            if(max==c[j]){
                count1++;
            }
        }
        printf("%d\n",count1);
    }
    return 0;
}