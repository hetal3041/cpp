
#include<iostream>
using namespace std;

// floyds triangle 
int main(){

    int n;
    cin>>n;
    int count =1;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
    cout<<endl;
    }
return 0;
}
