#include<bits/stdc++.h>
using namespace std;

void mergeSort(int a[],int l,int mid,int h){
    int n1=mid-l+1;
    int n2=h-mid;
    int b[n1];
    int c[n2];

    for(int i=0; i<n1; i++){
         b[i]=a[l+i];
    }
    for(int i=0; i<n2; i++){
        c[i]=a[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(b[i]<c[j]){
            a[k]=b[i];
            k++; i++;
        }
        else{
            a[k]=c[j];
            k++; j++;
        }
    }

    while(i<n1){
        a[k]=b[i];
        k++; i++;
    }

    while(j<n2){
        a[k]=c[j];
        k++; j++;
    }
}
void divide(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        divide(a,l,mid);
        divide(a,mid+1,h);

        mergeSort(a,l,mid,h);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    divide(a,0,n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}