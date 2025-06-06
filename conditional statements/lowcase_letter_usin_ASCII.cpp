#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter character : ";
    cin>>ch;

    if(ch>=97 && ch<=122){
        cout<<"Lowercase character "<<endl;

    } else {
        cout<<"Uppercase character"<<endl;

    }

    return 0;
}