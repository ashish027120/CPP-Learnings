#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int oddsum = 0;

    for(int i = 1; i<=n ; i++){
        if(i%2 != 0){
            
            oddsum = oddsum +i;
        }
    }

    cout<<"Sum of odd numbers is "<<oddsum;
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     int n = 10;
//     int sum = 0;

//     for(i = 1; i<=n ; i = i+2){
//         sum = sum+i;

//     }
//     cout<<" Sum of odd no.s "<<sum<<endl;
// }