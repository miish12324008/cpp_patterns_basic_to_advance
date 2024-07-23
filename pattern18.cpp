// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// #include<iostream>
// using namespace std;

// void pattern(int n){
//     while(n>=1){
//         int i = 1;
//         while(i<=n){
//             cout<<"*"<<" ";
//             i+=1;
//         }
//         cout<<endl;
//         n-=1;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     pattern(n);
//     return 0;
// }


#include<iostream>
using namespace std;

void pattern(int n){
    while(n>=1){
        int i = 1;
        int count = n-i+1;
        while(count>=1){
            cout<<"*"<<" ";
            count-=1;
        }
        cout<<endl;
        n-=1;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
