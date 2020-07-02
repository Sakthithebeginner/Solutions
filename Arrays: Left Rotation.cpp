#include <bits/stdc++.h>
using namespace std;
void rot(int a[],int n,int r){
    int i;
    for(i=0;i<n;i++){
        cout<<a[(i+r)%n]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n],r;
    cin>>r;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rot(a,n,r);
    return 0;
}
