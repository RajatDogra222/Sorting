#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void waveSort(int a[],int n){
    int i=1;
    while(i<n){
        if(a[i]>a[i-1]){
            swap(a,i,i-1);
        }
        if(a[i]>a[i+1] && i<=n-2){
            swap(a,i,i+1);
        }
        i+=2;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    waveSort(a,n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}