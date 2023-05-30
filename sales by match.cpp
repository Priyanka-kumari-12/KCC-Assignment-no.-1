#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std ;
int n,a[100+3];
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[x]++;
        
    }
    int ans=0;
    for(int i=1; i<=100; i++)
      ans +=a[i]/2;
      cout<<ans<<endl;
      return 0;
}
