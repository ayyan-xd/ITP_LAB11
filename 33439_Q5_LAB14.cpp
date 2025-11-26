#include<iostream>
using namespace std;
int *mergeArrays(int *a, int sizeA, int *b, int sizeB){
int*c = new int[sizeA + sizeB];
    for(int i=0 ; i<sizeA ; i++){
        *(c+i)=*(a+i);
}
    for(int i=0 ; i<sizeB ; i++){
        *(c+sizeA+i)=*(b+i);
    }
    return c;
}
int main(){
    int sizeA , sizeB;
    cout<<"Enter size of first array : ";
    cin>>sizeA;
    int* a=new int[sizeA];
    cout<<"Enter elements of first array : ";
    for(int i=0 ; i<sizeA ; i++){
        cin>>*(a+i);
    }
    cout<<"Enter size of second array : ";
    cin>>sizeB;
    int* b=new int[sizeB];
    cout<<"Enter elements of second array : ";
    for(int i=0 ; i<sizeB ; i++){
        cin>>*(b+i);
    }
    cout<<"Merged array is : ";
    int*c = mergeArrays(a , sizeA , b , sizeB);
    for(int i=0 ; i<sizeA+sizeB ; i++) cout<<*(c+i)<<" ";
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;    
}