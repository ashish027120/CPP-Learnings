#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    // for upper case letter A to Z
    // since we are using character datatype , we have to store values inside sing inverted comma ' '

    if(ch >='A' && ch <='Z'){
        cout<<" Entered character "<<ch<<" is in uppercase"<<endl;
        
        }   else {
            cout<<"Entered character "<<ch<<" is in lowercase "<<endl;

        }

        return 0;
}