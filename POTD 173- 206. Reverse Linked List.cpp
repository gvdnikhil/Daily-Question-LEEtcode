
  ListNode* reverseList(ListNode* head) {

        if ( head == NULL) return NULL;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fut= head ;

        while(fut!= NULL)
        {
                fut = curr->next;
                curr->next = prev;
                prev = curr;
                curr= fut;

        }
        head = prev;
    return head;
        
    }

