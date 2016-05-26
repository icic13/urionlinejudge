#include <iostream>
using namespace std;

int main(){
    int S,T,F,result;
    cin>>S>>T>>F;

    result = S+T+F;

    if(result==24)
        result = 0;
    else if(result<0)
        result+=24;
    else if(result>24)
        result%=24;
    cout<<result<<endl;




}
