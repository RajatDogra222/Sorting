#include <iostream>
using namespace std;
void swap(int a[],int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int low=0,hi=n-1,mid=0;

    while(mid<=hi){
        if(a[mid]==0){
            swap(a,low,mid);
            mid++;
            low++;
        }
        else if(a[mid]==2){
            swap(a,mid,hi);
            hi--;  
        }
        else{
            mid++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}