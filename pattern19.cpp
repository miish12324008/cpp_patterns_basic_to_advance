// * * * * 
//   * * * 
//     * * 
//       * 
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    while(n>=1){
        int space = i-1;
        int count = n;
        while(space>=1){
            cout<<" "<<" ";
            space-=1;
        }
        while(count>=1){
            cout<<"*"<<" ";
            count-=1;
        }
        cout<<endl;
        n-=1;
        i+=1;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
