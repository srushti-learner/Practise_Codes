ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode * temp = A;
    if (temp==NULL || temp->next==NULL && B==1)
    {
        return NULL;
    }
    int count=0;
    while(temp->next != NULL)
    {
        count=count+1;
        temp=temp->next;
    }
    temp=A;
    int traverse = count-B;
    
    if(traverse <=0)
    {
        A=A->next;
        return A;
    }
    else{
    while(traverse>0 )
    {
        temp=temp->next;
        traverse=traverse-1;
    }

    if (temp->next->next==NULL && traverse !=0 )
    {
        temp->next=NULL;
        return A;
    }
    else
    {
        temp->next=temp->next->next;
        return A;       
    }}

    
}
