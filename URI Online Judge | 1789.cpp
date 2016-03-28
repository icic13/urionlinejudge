#include <iostream>
using namespace std;
int main(){
    int l,maximum,num;
    while(cin>>l){
            maximum = 0;
        for(int i = 0; i<l; i++){

            cin>>num;
            if(num>maximum)
                maximum = num;

        }

        if(maximum<10)
            cout<<1<<endl;
        else if(maximum>=10&&maximum<20)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }

}
