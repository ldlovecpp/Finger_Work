//旋转数字的最小元素
#include<vector>
using std::vector;
class Solution
{
public:
  int minNumberInRotateArray(const vector<int>& arr)
  {
    int left  = 0 ;
    int right = arr.size()-1;
    while(left < right)
    {
       int mid = (right+left) /2;
       //mid在target的左边
       if(arr[mid]>=arr[0])
       {
        left = mid+1;
       }
       //mid在target的右边
       else 
       {
        right = mid;
       }
    }
    return arr[left];
  }
};

