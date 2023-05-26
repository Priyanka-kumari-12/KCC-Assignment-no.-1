#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>hello;
    int n=hello.size();
    int low=0,high=n-1;
    int key,flag=0;
    
    for(int i=0;i<n;i++)
    {
       cin>>hello[i];
         
     }
        cin>>key;
        while(low<=high){
            int mid=(low+high)/2;
            if (hello[mid]==key)
            {
                flag=1;
            break;
            }

        else if(hello[mid] < key){
            low = mid+1;

        }
        else{
            high = mid-1;
        }

            
        }
         return 0;

    }
