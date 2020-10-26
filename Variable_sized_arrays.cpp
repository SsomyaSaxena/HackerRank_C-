#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,s=0;
    cin>>n;
    cin>>q;
    int arr[n];

    while(n>0)
    {
      int l;
      cin>>l;
      arr[s] = new int[];
      for(int i=0;i<l;i++)
      {
          cin>>arr[s][i];
      }
      s++;
    }

    while(q>0)
    {
      int a,b;
      cin>>a>>b;
      cout<<arr[a][b]<<endl;
      q--;
    }     
    return 0;
}
