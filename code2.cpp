#include <iostream>
using namespace std;

int DectoBinary(int decnum)
{
   int ans=0;
   int pow=1;

    while(decnum>0)
    {
         int lastdigit=decnum%2;
         decnum=decnum/2;
         ans=ans+lastdigit*pow;
         pow=pow*10;
    } 
    return ans;
}

    int main ()
    {
        int n;
        cout<<"Enter a decimal number: ";
        cin>>n;

        cout<<DectoBinary(n)<<endl;
        return 0;
    }
