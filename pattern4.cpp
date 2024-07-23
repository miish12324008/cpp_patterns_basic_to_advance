#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
                cout<< "* ";
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