int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* ptr1 = head1;
    SinglyLinkedListNode* ptr2 = head2;
    
    while(ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        
        if(ptr1 == NULL)
        {
            ptr1= head1;
        }
        if(ptr2 == NULL)
        {
            ptr2= head2;
        }
    }
    return ptr1->data;
}
