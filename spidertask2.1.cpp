#include <iostream>
#include <cmath>
#include <string>
  using namespace std;

  int fun(string s)
  { int i,count=0,p=0;
    int l=s.size();
  for(i=0;i<l;i++)
     { if(s[i]=='<') count--;
       else count++;
       if(count>0) return 0;
       else if(count==0) p=i+1;
     }
     return p;
  }

  int main()
  {  int n,i,value;
     cout<<"enter no of strings\n";
      cin>>n;
      string s[n];
      cout<<"enter all string\n";
      for(i=0;i<n;i++)
        { cin>>s[i];
        }
        for(i=0;i<n;i++){
        value=fun(s[i]);
        cout<<endl<<value;
        }
     return 0;
  }
