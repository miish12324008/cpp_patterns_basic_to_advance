#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = i;
        while(j >= 1){
            cout<<j<<" ";
            j-=1;
        }
        i+=1;
        cout<<endl;
    }
}

int main(){
    int n= 0;
    cin>>n;
    pattern(n);
    return 0;
}