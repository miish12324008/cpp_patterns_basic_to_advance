#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    int num = 0;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A'+num;
            cout<<ch<<" ";
            num+=1;
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