#include<iostream>
 using namespace std;

//-----------do while---------it goes to body and then check condition atleast once body execute

int main(){
 
 int n;
 cin>>n;
 do{
     cout<<n<<endl;
     cin>>n;
 }
 while(n>0);
    return 0;

}
