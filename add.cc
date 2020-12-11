#include<iostream>
#include<algorithm>
using namespace std;
void add(string& s1,string& s2)
{
   string s;
   s.resize(s1.length() > s2.length()? s1.length() : s2.length() , 0);
   reverse(s1.begin(),s1.end());
   reverse(s2.begin(),s2.end());
   while(s1.length()<s2.length())
     s1.push_back('0');
   while(s1.length()>s2.length())
     s2.push_back('0');
   int cy =0 ;
   for(int i=0;i<s.size();i++)
   {
     int tmp = (s1[i]-'0') + (s2[i]-'0') + cy;
     s[i] = tmp%10 + '0';
     cy = tmp / 10;
   }
   if(cy)
     s.push_back(cy+'0');
   reverse(s.begin(),s.end());
   cout << s <<endl;
}
int main()
{
  string s1;
  string s2;
  while(cin >> s1 >> s2)
  {
    add(s1,s2);
  }
}
