Question Link - https://leetcode.com/problems/middle-of-the-linked-list/

 ListNode* middleNode(ListNode* head) {
     
        ListNode* slow = head;
        ListNode* fast = head;
        
        
        while(fast != NULL && fast->next != NULL){
            
            slow = slow ->next;
            fast = fast->next->next;
     
        }

        return slow;
    
        
    }
