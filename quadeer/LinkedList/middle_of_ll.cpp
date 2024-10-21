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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        int c = 0;
        ListNode *temp = head; 
        while(temp){
            c++;
            temp = temp -> next;
        }
        temp =head;
        cout<<c<<endl;
        int i =0;
        while(i<(c/2)){
            temp = temp -> next;
            i++;
        }
        return temp;
    }
};
