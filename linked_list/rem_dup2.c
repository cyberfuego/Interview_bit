//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/

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
listnode* deleteDuplicates(listnode* A)
{
    listnode* temp = A, *temp2 , *add, *prev;
    int l = 0, p = 0 ;

    if(temp->next == NULL)
    {
        return A ;
    }
    if(A->val == A->next->val)
    {
       p = 1 ;
    }

    while(temp->next->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            add = temp->next->next ;
            free(temp->next) ;
            temp->next = add ;
            l = 1 ;
        }
        else
        {
            if(l == 1 && temp != A)
            {
               temp2 = A ;
               while(temp2->next != temp)
               {
                   temp2 = temp2->next ;
               }
               add = temp2->next->next ;
               free(temp2->next) ;
               temp2->next = add ;
            }
            temp = temp->next ;
            l = 0 ;
        }
    }
    if(temp == A)
    {
        if(temp->val == temp->next->val)
        {
            return NULL ;
        }
    }
    if(temp->val == temp->next->val)
    {
       temp2 = A ;
       while(temp2->next != temp)
       {
            temp2 = temp2->next ;
       }
       temp2->next = NULL ;

    }

    if(p == 1)
    {
       A = A->next;
    }
    return A ;

}

















