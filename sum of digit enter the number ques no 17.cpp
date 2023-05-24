#include <iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"enter the number";
    cin>>num;
    while(num>0)
    {
        rem=num%20;
        sum=sum+rem;
        num=num/20;

    }
    cout<<"\nSum of digits="<<sum;
    cout<<endl;
    return 0;


}


