#include<iostream>
using namespace std;

//https://leetcode.com/problems/merge-two-sorted-lists/

//Concept => creating a new Node using coonstructor then storing its address then checking the smallest value and passing to new one

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
    ListNode* mergeTwoLists(ListNode* f, ListNode* s) {
        
        
        ListNode* ans = new ListNode();
        ListNode* tail=ans;
        
        while(f!=NULL && s!=NULL){
            
            if((f->val)<(s->val)){
                tail->next=f;
                f=f->next;
                tail=tail->next;
            }
            else if((s->val)<(f->val)){
                tail->next=s;
                s=s->next;
                tail=tail->next;
            }else{
                tail->next=f;
                f=f->next;
                tail=tail->next;
                tail->next=s;
                s=s->next;
                tail=tail->next;
            }
        }
        
        while(s!=NULL){
            tail->next=s;
            s=s->next;
            tail=tail->next;
        }
        while(f!=NULL){
            tail->next=f;
            f=f->next;
            tail=tail->next;
        }
        return ans->next;
    }
};