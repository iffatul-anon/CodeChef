#include<stdio.h>
int main(){
    int t,a,b,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&x,&b,&y);
        float ax=a/x*(1.0);
        float by=b/y*(1.0);
        if(ax>by){
            printf("Alice\n");
        }
        else if(ax<by){
            printf("Bob\n");
        }
        else if(ax==by){
            printf("Equal\n");
        }
    }
    return 0;
}