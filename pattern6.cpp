#include<iostream>
using namespace std;

void pattern(){
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while(i <= n){
        int j=1;
        while(j<=i){
            cout << count <<" ";
            j+=1;
            count+=1;
        }
        i+=1;
        cout<<endl;
    }
}

int main(){
    pattern();
    return 0;
}