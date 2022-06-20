ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *temp = A;
    if(temp->next==NULL)
    {
        return temp;
    }
    while(temp != NULL && temp->next != NULL)
    {
        int d=temp->val;
        temp->val=temp->next->val;
        temp->next->val=d;
        temp=temp->next->next;
     
    }
    
    return A;
}
