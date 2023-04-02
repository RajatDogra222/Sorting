#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int mn,int mx,int n){
    int N=mx-mn+1;
    int freq[N]={0};
    for(int i=0; i<n; i++){
        freq[a[i]-mn]++;
    }

    for(int i=1; i<N; i++){
        freq[i]+=freq[i-1];
    }

    int ans[n];

    for(int i=n-1; i>=0; i--){
         int pos=freq[a[i]-mn];
         pos=pos-1;
         ans[pos]=a[i];
         freq[a[i]-mn]--;
    }

    for(int i=0; i<n; i++){
       a[i]=ans[i];
    }
}
int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int mn=a[0];
    int mx=a[0];
    for(int i=0; i<n; i++){
        mn=min(a[i],mn);
        mx=max(a[i],mx);
    }

    countSort(a,mn,mx,n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}