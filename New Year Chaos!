#include <bits/stdc++.h>
using namespace std;
void q(int a[],int n){
    int b=0;
    int flag=0;
    for(int i=1;i<=n;i++){
        if((a[i-1]-i)<=2 && (a[i-1]-i)>0){
            int x;
            x=a[i-1]-i;
            b=b+x;
        }
        else if(abs(a[i-1]-i)>2){
           flag=1;
        }
    }
    if(flag==0){
        cout<<b<<endl;
    }
    else if(flag==1){
        cout<<"Too chaotic"<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        q(a,n);
    }
    return 0;
}
