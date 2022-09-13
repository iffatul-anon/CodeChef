#include<iostream>
using namespace std;
int main(){
    int t,n,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++){
        int sum=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(k=0;k<n;k++){
            int count=1;
            for(l=k+1;l<n;l++){
                if(a[k]==a[l]){
                    count++;
                    a[l]=a[n-1];
                    l--;
                    n--;
                }
            }
            sum=sum+(count*(count+1)/2);
        }
        cout<<sum<<endl;
    }
}