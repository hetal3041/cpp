#include<iostream>
 using namespace std;


//------------jumps in loops ==  break(terminate) and contineu(next iteration) to control flow of loops

int main(){

    int pocketmoney=3000;
    for(int date=1; date<=30; date++){

        if(date%2==0){
            continue;
        }
        if (pocketmoney==0){
            break;
        }
        cout<<"go out today"<<endl;
        pocketmoney=pocketmoney -300;
    }

    return 0;
    
}
