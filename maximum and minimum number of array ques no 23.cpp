#include <iostream>
using namespace std;
int main()
{
    int arr[5],max,min,i;
    cout<<"Enter the element of array:";
    for(i=0;i<5;i++)
    cin>>arr[i];

    cout<<"for array";
    for(i=0;i<5;i++)
    cout<<arr[i]<<"";


    max=arr[0];
    min=arr[0];
    for(i=0;i<5;i++)
     if(max<arr[i])
      max=arr[i];
    else if(min>arr[i])
       min=arr[i];


    cout<<"\nMaximum element of an array"<<max;
    cout<<"\nMinimum element of an array"<<min;
    return 0;

    
}
