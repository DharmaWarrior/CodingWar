#include<iostream>
using namespace std;

//https://leetcode.com/problems/linked-list-cycle-ii/

//Concept => finding length of cycle then using two pointer approach move length times the one pointer and then move both pointer step by step

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        int length=0;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow){
                ListNode* temp=slow;
                do{
                    temp=temp->next;
                    length++;
                }
                while(temp!=slow);
                break;
            }   
        }
        
        ListNode* f=head;
        ListNode* s=head;
        
        if(length==0){
            return NULL;
        }
        
        while(length>0){
            s=s->next;
            length--;
        }
        
        while(f!=s){
            f=f->next;
            s=s->next;
        }
        
        return s;
    }
};