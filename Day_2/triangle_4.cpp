// inverted triangle pattern of
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;

int main(){
    int n=3;
    int num=1;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int k=i; k<=n; k++){
            cout<<num;
        }
        num++;
        cout<<endl;
    }

    return 0;
}