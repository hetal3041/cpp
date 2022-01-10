 #include<iostream>
 using namespace std;
//------------------max no------------

nt main(){
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}

