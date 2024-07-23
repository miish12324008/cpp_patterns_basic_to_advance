#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n = 0;
    cin>>n;
    pattern(n);
    return 0;
}