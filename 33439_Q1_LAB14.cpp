#include<iostream>
using namespace std;
int *findMax(int* arr , int size){
    int* maxPtr=arr;
    for(int i=1 ; i<size ; i++){
        if(*(arr+i)>*maxPtr){
            maxPtr=(arr+i);
        }
    }
    return maxPtr;
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
    int *maxPtr=findMax(arr , size);
    cout<<"Maximum element is : "<<*maxPtr;
    delete[] arr;
    return 0;
}