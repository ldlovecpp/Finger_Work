//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
#include<vector>
using namespace std;
class Solution {
public:
 bool Find(int target, vector<vector<int> > array) {
   //左上角数字往下是变大,往左是最小
   int rows = 0;
   int cols = array[0].size()-1;
   while(rows<array.size()&&cols>=0)
   {
     if(array[rows][cols]==target)
     {
       return true;
     }
     else if(array[rows][cols]<target)
     {
       rows++;
     }
     else 
     {
       cols--;
     }
   }
   return false;
 }
};
