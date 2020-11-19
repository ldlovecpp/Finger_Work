#include<iostream>
#include<stack>
using namespace std;
template<class T>
class Myqueue
{
public:
  void push(T &val)
  {
    sk1.push(val);
  }
  T pop()
  {
    if(sk1.empty())
      return T();
    while(!sk1.empty())
    {
      sk2.push(sk1.top());
      sk1.pop();
    }
    T res = sk2.top();
    sk2.pop();
    while(!sk2.empty())
    {
      sk1.push(sk2.top());
      sk2.pop();
    }
    return res;
  }
private:
  stack<T>sk1;
  stack<T>sk2;
};
