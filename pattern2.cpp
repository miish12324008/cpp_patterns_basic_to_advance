#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <=n){
        int j = 1;
        while(j <=n){
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    pattern(n);
    return 0;
}