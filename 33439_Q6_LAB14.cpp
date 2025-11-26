#include<iostream>
using namespace std;
void replaceChar(char *text , char oldC , char newC){
    while(*text!='\0'){
        if(*text==oldC){
            *text=newC; 
        }
        text++;  
     }
}
int main(){
    char str[100];
    char oldC , newC;
     cout<<"Enter a string : ";
    cin.getline(str , 100);
    cout<<"Enter character to be replaced : ";
    cin>>oldC;
    cout<<"Enter new character : ";
    cin>>newC;
    replaceChar(str , oldC , newC);
    cout<<"Updated string : "<<str<<endl;
    return 0;
}
