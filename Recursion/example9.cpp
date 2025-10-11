#include<iostream>
using namespace std;

int fact(int n, int factorial){
    if(n==1) return factorial;
    return fact(n-1,factorial*n);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n,1);
}