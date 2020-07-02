#include <iostream> 
using namespace std;  
int c=0;
void sort(int arr[],int n){
     for(int i=0; i<n; i++){
        while(arr[i] != i+1) {
            int temp = arr[i];
            arr[i] = arr[temp-1];
            arr[temp-1] = temp;  
            c++;
        }
    }
}  
int main(){  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr, n);  
    cout<<c;   
    return 0;  
}  
