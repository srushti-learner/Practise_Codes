class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode(0);
        ListNode * current = head;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry!=0 )
        {
            int x,y;
            int sum=0;
            if(l1!=NULL && l2!=NULL)
            {
                x=l1->val;
                y=l2->val;
            }
            else if (l1!=NULL && l2==NULL)
            {
                x=l1->val;
                y=0;
            }
            else if(l2!=NULL && l1==NULL)
            {
                x=0;
                y=l2->val;
            }
            else if(l1==NULL && l2==NULL)
            {
                x=0;
                y=0;
            }
            sum=x+y+carry;
            carry=sum/10;
            cout<<carry<<endl;
            int num = sum%10;
            current->next = new ListNode(num);
            current=current->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return head->next;
        
        
        
    }
};
