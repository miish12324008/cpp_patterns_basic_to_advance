//       * 
//     * * 
//   * * * 
// * * * * 
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(i <= n){
        int space = n-i;
        int j = 1;
        while(space>=1){
            cout<<" "<<" ";
            space-=1;
        }
        while(j<=i){
            cout<<"*"<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}