// 1 2 3 4 
//   2 3 4 
//     3 4 
//       4 
#include<iostream>
using namespace std;

void pattern(int n){
    int temp = n;
    int i = 1;
    while(n>=1){
        int space = i-1;
        int num = i;
        while(space>=1){
            cout<<"  ";
            space-=1;
        }
        while(num <= temp){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
        i+=1;
        n-=1;
    }
}

int main(){
    int n = 0;
    cin>>n;
    pattern(n);
    return 0;
}