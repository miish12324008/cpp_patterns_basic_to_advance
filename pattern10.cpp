#include<iostream>
using  namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A'+j-1;
            cout<< ch <<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n = 1;
    cin>>n;
    pattern(n);
    return 0;
}