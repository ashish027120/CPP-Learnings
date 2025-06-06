#include<iostream>
using namespace std;
int main(){

   bool isprime = true ;

   int n = 7;
   for( int i = 2; i*i<=n ; i++){   
    if(n%i==0){
        isprime = false;
        break;
    }
   }

   if(isprime == true ){
    cout<<"Prime No.";

   } else{
    cout<<" Non Prime No.";
   }

   return 0;
}