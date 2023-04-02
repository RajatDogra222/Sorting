#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the length of the array";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool sorted=false;
    for(int i=0; i<n-1; i++){
        sorted=true;
        for(int j=0; j<n-1-i; j++){
            if(a[j] >a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                sorted=false;
            }
        }
        if(sorted){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}