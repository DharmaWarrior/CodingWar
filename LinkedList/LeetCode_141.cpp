#include<iostream>
using namespace std;

//https://leetcode.com/problems/linked-list-cycle/

//Concept => Always use slow & fast in which fast moves two times the slow.


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
    bool hasCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;
        
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        if(f==s){
            return true;
        }
        }
        return false;
    }
};