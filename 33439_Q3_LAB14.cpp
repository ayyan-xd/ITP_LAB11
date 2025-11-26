#include<iostream>
using namespace std;
void update(float*x){
    *x=*x+10;
}
float *address(float*x){
    return x;
}
int main(){
    float* x = new float;
    cout<<"Enter a float value : ";
    cin>>*x;
    float* add=address(x);   
    cout<<"Value : "<<*x<<endl;
    cout<<"Address : "<<add<<endl;
    update(x);
    cout<<"Updated Value : "<<*x<<endl;
    delete x;
    return 0;
}
