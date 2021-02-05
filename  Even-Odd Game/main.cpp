#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// adding comment
int main()
{
    bool flag =false;
   int counter2=0,counter1=0,s,n;
   int suma=0,sumb=0;
  cin>>s;
  vector<int>v;
   for(int i=0; i<s;i++)
   {
     cin>>n;
     v.push_back(n);
   }
  for (auto i = v.begin(); i != v.end(); ++i) {
        if (*i % 2 == 0&&counter1==0) {
            suma+=*i;
            v.erase(i);
            i--;
            counter1++;
        }
        else
        {
            if(*i % 2 == 0&&counter2==0)
            {
            sumb+=*i;
            v.erase(i);
            i--;
            counter2++;
            }

        }

    }
   if (v.empty()==false)
   {
       for (auto i = v.begin(); i != v.end(); ++i)
     {
         flag =false;
           if (*i % 2 == 0)
           {
             flag=true;
             suma+=*i;
             v.erase(i);
             i--;
           }
           if(flag==false)
           {
            v.erase(i);
             i--;
           }

            if (*i % 2!=0)
            {
                flag=true;
              sumb+=*i;
             v.erase(i);
             i--;
            }
              if(flag==false)
           {
            v.erase(i);
             i--;
           }


     }
   }

     if(suma>sumb)
        cout<<"Alice"<<endl;
     if(suma<sumb)
        cout<<"Bob"<<endl;
     if(suma==sumb)
     cout<<"Tie"<<endl;
     cout<<suma<<endl;
     cout<<sumb<<endl;




    return 0;
}
