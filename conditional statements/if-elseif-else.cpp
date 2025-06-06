#include<iostream>
using namespace std;
int main (){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if( marks>=85 ){
        cout<<" You have got A+ Grade"<<endl;

    } else if( marks<85 && marks>=70 ) {
        cout<<" You Have Got B+ Grade "<<endl;

    } else {
        cout<<"You have scored less in Class Test";
    }

    return 0;
}