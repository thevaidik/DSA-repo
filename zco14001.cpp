#include<iostream>
using namespace std;
int main()
{
  int n,h,l=0,w=0;
  cin>>n>>h;
  int v[n];
  int s[200000];
  for(int p=0;p<n;p++)
  {
    cin>>v[p];
  }
  for(int p=0;p<200000;p++)
  {
    int s;
    cin>>s;
    if(s==0)
    {break;}
    else if(s==1)
    {
      if(l!=0)
      {l--;}
    }
    else if(s==2)
    {
      if(l!=n-1)
      {
        l++;
      }
    }
    else if(s==3)
    {
      if(w!=1)
      {
        if(v[l]>0)
        {v[l]-=1;
        w++;}
      }
    }
    else if(s==4)
    {
      if(w!=0)
      {
        if(v[l]<h)
        {
          v[l]+=1;
          w--;
        }
      }
    }

  }
  for(int p=0;p<n;p++)
  {
    cout<<v[p]<<" ";
  }
  cout<<endl;
  return 0;
}
