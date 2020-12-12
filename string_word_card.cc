#include<iostream>
using namespace std;
bool is_suitable(string& s1,string& s2,int idx1,int idx2)
{
  if(idx1==s1.size() && idx2==s2.size())
    return true;
  if(idx1==s2.size() || idx2==s2.size())
    return false;
  if(s1[idx1]=='?'||s1[idx1]==s2[idx2])
  {
   return    is_suitable(s1,s2,idx1+1,idx2+1);
  }
  else if(s1[idx1]=='*')
  {
   return    is_suitable(s1,s2,idx1+1,idx2+1)
      ||  is_suitable(s1,s2,idx1,idx2+1)
      ||  is_suitable(s1,s2,idx1+1,idx2);
  }
  return false;
}
int main()
{
  string s1,s2;
  while(cin >> s1 >> s2)
  {
    if(is_suitable(s1,s2,0,0))    
      cout << "true" <<endl;
    else 
      cout << "false" <<endl;
  }
}
