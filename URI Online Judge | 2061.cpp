#include <iostream>
#include <string>
using namespace std;

int main(){
    int counter,N,M,close = 0,
    clicked = 0;
    string action;
    cin>>N>>M;
    for(counter  = 0; counter<5; counter++){
            cin>>action;
        if(action=="fechou")
            close++;
        if(action=="clicou")
            clicked++;



    }

    cout<<N-close-clicked+close*2<<endl;




}
