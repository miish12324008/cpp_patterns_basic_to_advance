#include<iostream>
using namespace std;

void pattern(){
    int i = 1;
    while(i <= 4){
        int j = 1;
        while(j <= i){

                cout<<i<<" ";
                j+=1;
        }
        i+=1;
        cout<<endl;
    }
}

int main(){
    pattern();
    return 0;
}