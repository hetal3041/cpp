#include<iostream>
using namespace std;


// half pyramid after 180 degree rotation 

int main(){

    int n;
    cin>>n;

    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (j<=n-i){
                cout<<" ";
            }
            else{
            cout<<"*";
        }
    cout<<endl;
    }
return 0;
}
