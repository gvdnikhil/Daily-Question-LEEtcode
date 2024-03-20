class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {


         ios_base::sync_with_stdio(0);
        cin.tie(0);

        ListNode* start = NULL ;
        ListNode* end= NULL;
        ListNode* temp = list1;
        int count =0;
        while (temp != NULL && count <=b)
        {
            if ( count ==a-1)
            {
                start = temp;
            }
            
            temp = temp ->next;
            count ++;
        }
        // end node
        end = temp;


        start ->next = list2;
        count =0;
        temp = list2;
        while(temp ->next !=NULL)
        {
            temp = temp->next;
        }
        temp ->next = end;

    return list1;
    }
};
