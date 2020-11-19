//球斐波那契数列的第n项
class Solution
{
public:
  int Fib(int n)
  {
    int a = 0;
    int b  = 1;
    while(n)
    {
      int c = a;
      a+=b;
      b=c;
      --n;
    }
    return a;
  }
}
