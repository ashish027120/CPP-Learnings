#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    // for lower case letter a to z
    // since we are using character datatype , we have to store values inside sing inverted comma ' '

    if(ch >='a' && ch <='z'){
        cout<<"Entered character "<<ch<<" is in lowercase "<<endl;

        }   else {
            cout<<" Entered character "<<ch<<" is in uppercase"<<endl;
        }

        return 0;
}