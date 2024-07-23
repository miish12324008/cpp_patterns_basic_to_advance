//       1
//     2 2
//   3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    int temp = n;
    while(temp >= 1){
        int space = n-i;
        int num = i;
        while(space>=1){
            cout<<"  ";
            space-=1; 
        }
        while(num>=1){
            cout<<i<<" ";
            num-=1;
        }
        cout<<endl;
        temp-=1;
        i+=1;
    }
}

int main(){
    int n = 0;
    cin>>n;
    pattern(n);
    return 0;
}