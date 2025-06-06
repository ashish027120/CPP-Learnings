#include<iostream>
using namespace std;
 int main(){

    int n = 11;
    int sum = 0; 
    for(int i= 1; i<=n; i++){
        if(i%3==0){
            sum = sum + i;
        }
    }

    cout<<sum<<endl;

    return 0;
}
