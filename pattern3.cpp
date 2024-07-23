// 1 2 3 
// 4 5 6 
// 7 8 9 

#include<iostream>
using namespace std;


void pattern(int n){
    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n = 3;
    pattern(n);
    return 0;
}