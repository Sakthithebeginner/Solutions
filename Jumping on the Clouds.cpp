#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(int c[],int n) {
    int j=0;
    for(int i = 0; i < n; i++){
        if(i<n-2 && c[i+2]==0) i++;
        j++;
    }
    return --j;
}

int main(){
    int n;
    cin>>n;
    int c[n],j;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    j= jumpingOnClouds(c,n);
    cout<<j;
}    
    
