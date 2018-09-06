//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 *
 * @Output head pointer of list.
 */
listnode* deleteDuplicates(listnode* A) {
    listnode * temp = A ;
    listnode * prev  ;

    if(temp->next == NULL)
    {
        printf("%d",temp->val) ;
        return A ;
    }
    while(temp->next->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            prev = temp->next->next ;
            free(temp->next) ;
            temp->next = prev ;
        }
        else
        {
            temp = temp->next ;
        }
    }
    if(temp->val == temp->next->val)
    {
        temp->next = NULL ;
    }
    return A ;
}
