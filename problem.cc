//给定两个字符串，将一个拼接到另外一个上，问有多少种方法可以成功拼成回文串
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool is_Palidrome(string s)
{
   //如果一个字符串和把它反转后的一样，那抹这个字符串就是回文串
   string tmp(s);
   reverse(tmp.begin(),tmp.end());
   return tmp==s;
}
int find_count(string& dest,string& sert)
{
  int count =0;
  for(int i=0;i<=dest.size();i++)
  {
    string tmp(dest);
    tmp.insert(i,sert);
    if(is_Palidrome(tmp))
      ++count;
  }
  return count;
}
int main()
{
   string dest;
   string sert;
   while(cin >> dest >> sert)
   {
    cout << find_count(dest,sert) <<endl;
   }
   return 0;
}
