#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 10;
    int sum = 0;

    while(i<=n){
        if(i%2 != 0){
            sum = sum + i;
        }
        i++;
    }

    cout<<sum<<endl;

    return 0;
}