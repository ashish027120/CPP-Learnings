#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 11;
    int sum = 0;

  while ( i<=n ){
    if(i%3==0){
        sum = sum +i;
    }
    i++;
  }

  cout<<sum;
    
}