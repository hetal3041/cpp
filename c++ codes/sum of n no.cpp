 #include<iostream>
 using namespace std;
//?--------------- for(initializartion ; condition ; update){//body} ...........we will care about iteration we maintain counter variable which take care of iteration 

//----------sum uptil n no-----------

int main(){

    int n ;
    cin>>n;

    int sum=0;
    for(int counter; counter<=n ; counter++){
        sum = sum+counter;
    }
    cout<<sum<<endl;
    return 0;
}

