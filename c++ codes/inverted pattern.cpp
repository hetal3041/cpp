#include<iostream>
using namespace std;

// inverted pattern 

int main(){

    int n;
    cin>>n;

for(i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return 0;
}
