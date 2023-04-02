#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the size of the array";
     cin>>n;
     int a[n];
     cout<<"enter the elements of the array";
     for(int i=0; i<n; i++){
         cin>>a[i];
     }

     for(int i=0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
             if(a[j] < a[i]){
                 int temp=a[j];
                 a[j]=a[i];
                 a[i]=temp;
             }
         }
     }

     for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
     }

    return 0; 

}