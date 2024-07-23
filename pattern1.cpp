#include<iostream>
using namespace std;

// void pattern(int n){
//     int i = 0;
//     while(i < n){
//         int j = 1;
//         while(j<=n){
//             cout<<j<<" ";
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

// int main(){
//     int n = 4;
//     pattern(n);
//     return 0;
// }

void pattern(){
    for(int i = 1 ; i <=4 ; i++){
        for(int j = 1 ; j <= 4 ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern();
    return 0;
}





