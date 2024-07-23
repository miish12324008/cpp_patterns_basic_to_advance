//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        int space = n-i;
        int x = i-1;
        while(space >= 1){
            cout<<"  ";
            space-=1;
        }
        while(j <= i){
            cout<<j<<" ";
            j+=1;
        }
        while(x>=1){
            cout<<x<<" ";
            x-=1;
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
