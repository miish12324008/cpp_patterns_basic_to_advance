//       1 
//     2 3 
//   4 5 6 
// 7 8 9 10 
#include<iostream>
using namespace std;

void pattern(int n){
    int i = 1;
    int temp = n;
    int count = 1;
    while(temp>=1){
        int space = n-i;
        int num = i;
        while(space >= 1){
            cout<<"  ";
            space-=1; 
        }
        while(num >= 1){
            cout<<count<<" ";
            count+=1;
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