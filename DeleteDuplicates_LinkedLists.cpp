ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode * temp=A;
    while(temp->next != NULL){
        if (temp->val == temp->next->val)
        {
            temp->next=temp->next->next;
            
        }
        else
        {
            temp=temp->next;
        }
    }
    return A;
}
