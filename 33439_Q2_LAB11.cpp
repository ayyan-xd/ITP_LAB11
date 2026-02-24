#include<iostream>
using namespace std;
void reverseArray(int *arr, int size){
int* start=arr;
int* end=arr+size-1;
while(start<end){
    int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
}
}
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int* arr=new int[size];
    cout<<"Enter elements of array : ";
    for(int i=0 ; i<size ; i++){
        cin>>*(arr+i);
    }
    reverseArray(arr, size);
    cout<<"Reversed array is : ";
    for(int i=0 ; i<size ; i++){
        cout<<*(arr+i)<<" ";
    }
    delete[] arr;
    return 0;
}
