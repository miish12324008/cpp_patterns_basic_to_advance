#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        char ch = 'A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch+=1;
            j++;
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

