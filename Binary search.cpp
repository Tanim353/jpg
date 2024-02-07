#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int i,n[a],mid,m[a];
    for(i=0; i<a; i++)
    {
      cin>>n[i];
    }
    for(i=0; i<a; i++)
    {
      m[i]=n[i];
    }
    sort(m,m+a);
    int left=0,right=a-1,c=0,p=0;
    while(left<=right)
    {
      mid=(left+right)/2;
      if(m[mid]==b)
      {
        c=1;
        cout<<"Item is found on ";
        break;
      }
      else if(m[mid]<b)
      left=mid+1;
      else
      right=mid-1;
    }
    if(c!=1)
    cout<<"ITEM IS NOT FOUND\n";
    else
    {
      for(i=0; i<a; i++)
      {
        if(n[i]==b)
        {
          p=i;
        }
      }
      cout<<p<<endl;
    }

    return 0;
}
