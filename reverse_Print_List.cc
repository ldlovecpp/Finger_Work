//从尾到头打印链表
#include<vector>
using std::vector;
struct ListNode{
   ListNode* next;
   int val;
   ListNode(int v=0)
     :next(nullptr),
     val(v)
  {}
};
class Solution {
  public:
    vector<int> printListFromTailToHead(ListNode* head) {
      vector<int>res;
      ListNode* cur = head;
      while(cur)
      {
        res.push_back(cur->val);
        cur=cur->next;
      }
      reverse(res.begin(),res.end());
      return res;
    }
};
