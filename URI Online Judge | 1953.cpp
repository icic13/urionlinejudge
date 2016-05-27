#include <iostream>

using namespace std;

int main()
{
    long long int n,number,EHD,EPR,INTRUSOS;
    string studentClass;
    while(cin>>n)
    {
        EHD = 0;
        EPR = 0;
        INTRUSOS = 0;


        for(int i = 0 ; i<n; i++)
        {
            cin>>number>>studentClass;
            if(studentClass=="EPR")
                EPR++;
            else if(studentClass=="EHD")
                EHD++;
            else
                INTRUSOS++;
        }
        cout<<"EPR: "<<EPR<<endl;
        cout<<"EHD: "<<EHD<<endl;
        cout<<"INTRUSOS: "<<INTRUSOS<<endl;

    }


}
