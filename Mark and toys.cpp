#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int nooftoy(int a[],int n,int money){
    sort(a,n);
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=a[i];
        if(sum>money){
            return i;
        }
    }
    return i;
}
int main(){
    int n,money;
    cin>>n>>money;
    int toy[n];
    for(int i=0;i<n;i++){
        cin>>toy[i];
    }
    int nos=nooftoy(toy,n,money);
    cout<<nos;
    return 0;
}
