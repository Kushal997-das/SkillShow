#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* l3=new ListNode(-1);
        ListNode* t3=l3;

        while(t1 != NULL && t2 != NULL){
            if(t1->val<t2->val){
                t3->next = t1;
                t3=t1;
                t1=t1->next;
            } 
            else{
                t3->next = t2;
                t3=t2;
                t2=t2->next;
            }
        }
        if (t1) t3->next = t1;
        else t3->next = t2;
        

        return l3->next;
    }
};
int main(){
    Solution s;
    ListNode* l1=new ListNode(1);
    ListNode* l12=new ListNode(2);
    ListNode* l13=new ListNode(4);
    l1->next=l12;
    l12->next=l13;
    
    ListNode* l2=new ListNode(1);
    ListNode* l22=new ListNode(3);
    ListNode* l23=new ListNode(4);

    l2->next=l22;
    l22->next=l23;
    
    ListNode* temp=s.mergeTwoLists(l1,l2);
    // cout<<temp->val<<" "<<temp->next->val<<;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
    }
    return 0;
}