#include<iostream>
using namespace std;
char *front;
char *back;

int reverse(char arr[]){
    if(front>=back) { 
        return 1; }
        else{
            *front == *back;
            front++;
            back--;
        }
    reverse(arr);
}

int main(){
    char arr[5] = {'m','a','d','a','m'};
    front = arr;
    back = arr + 4;
   int a = reverse(arr);

   cout<<a;

}