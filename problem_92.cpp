/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        vector<ListNode*>v;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp);
            temp=temp->next;
        }
        int i=left-1;
        int j=right-1;
        while(i<j)
        {
          swap(v[i],v[j]);
          i++;j--;
        }
        ListNode*answer=v[0];
        for(int i=0;i<=v.size()-1;i++)
        {
          if(i==0)
          {
            answer=v[0];
          }
          if(i==v.size()-1)
          {
             v[i]->next=NULL;
             break;
          }
          v[i]->next=v[i+1];
        }
         return answer;
    }
};