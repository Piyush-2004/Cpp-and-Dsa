#include<iostream>
using namespace std;

void reverse(int i, int j, int arr[]){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse(i+1,j-1,arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}