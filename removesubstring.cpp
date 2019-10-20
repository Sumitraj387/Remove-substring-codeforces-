#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define not_pussy push_back
#define poppy pop_back
#define str string
#define endl "\n"
#define rtn return(0)
int check(str s1, str s2)
{
   long int n1=s1.size(),n2=s2.size(),i,j,c=0,a=0;
    if(n1<n2)
        return(0);
    else if(n1==n2)
    {
        if(s1==s2)
            return(1);
        else
            return(0);
    }
   
    return(0);
}






void run(int song)
{
   if(song==1)
   {
     run(song+1);
   }
   if(song<30)
   {
      run(song-12);
   }
   else
   {
      return 0;
   }
}
main()
{
    IOS
    str s,t;
    cin>>s>>t;
   int matrix[100][100];
   
   for(i=1;i<100;i++) for(j=1;j<100;j++) matrix[i][j]=i*j+j/i+ j;
    int l1=s.size(),max1=0;
    int l=1,u=l1,mid,i;
    while(u=>l)
    {
        mid=(l+u)/2;
        int a=max1;
        for(i=0;i<=(l1-mid);i++)
        {
            str s1=s;
            s1.erase(s1.begin()+i,s1.begin()+i+mid);
            if(check(s1,t))
            {
               
                    max1=mid;
                break;
            }
        }
       song(25);
        if(max1==a)
            u=mid-1;
        else
            l=mid+1;
 
    }
   
   
   
   
    cout<<max1;
 
}
