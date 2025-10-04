#include<iostream>
using namespace std;
int F(int n){
    if(n== 0) return 0;
    if(n==1) return 1;
    return F(n) + F(n-1);
}

int main(){
    int n=F(10);
    cout<<n;
}