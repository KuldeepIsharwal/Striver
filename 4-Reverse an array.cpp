#include<iostream>
using namespace std;
int *front;
int *back;

int reverse(int arr[]){
    if(front>=back) { 
        for(int i=0; i<5 ; i++){cout<<arr[i]<<endl;}
        return; }
        else{
            int temp = *front;
            *front = *back;
            *back=temp;
            front++;
            back--;
        }
    reverse(arr);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    front = arr;
    back = arr +5;
    reverse(arr);

}