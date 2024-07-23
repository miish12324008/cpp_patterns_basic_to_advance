// 1 2 3 4 5 6 6 5 4 3 2 1 
// 1 2 3 4 5 * * 5 4 3 2 1 
// 1 2 3 4 * * * * 4 3 2 1 
// 1 2 3 * * * * * * 3 2 1 
// 1 2 * * * * * * * * 2 1 
// 1 * * * * * * * * * * 1 
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    int temp = n;
    int temp1 = n;
    while(i <= n){
        int j = 1;
        int space = i-1;
        int space1 = i-1;
        int temp3 = n-i+1;
        while(j<=temp){
            cout<<j<<" ";
            j+=1;
        }
        while(space>=1){
            cout<<"* ";
            space-=1;
        }
        while(space1>=1){
            cout<<"* ";
            space1-=1;
        }
        while(temp3>=1){
            cout<<temp3<<" ";
            temp3-=1;
        }
        cout<<endl;
        i+=1;
        temp-=1;
        temp3-=1;
    }
}

int main(){
    int n = 0;
    cin>>n;
    pattern(n);
    return 0;
}