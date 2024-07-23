#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    int temp = 65;
    while(i <= n){
        int j = 1;
        while(j <=n){
            cout<<char(temp)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
        temp+=1;
    }
    // cout<<'A'+1;
}

int main(){
    int n = 0;
    cin>>n;
    pattern(n);
    return 0;
}