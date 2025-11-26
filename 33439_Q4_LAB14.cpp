#include<iostream>
using namespace std;
int countEven(int* arr , int size){
    int count=0;
    for(int i=0 ; i<size ; i++){
    if(*(arr+i)%2==0) count++; 
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int *arr= new int[size];
    cout<<"Enter elements of array : ";
    for(int i=0 ;i<size ;i++){
        cin>>*(arr+i);
    }
int cnt=countEven(arr , size);
cout<<"Count of even numbers is : "<<cnt;
delete[] arr;
return 0;
}