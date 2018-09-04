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
//https://www.interviewbit.com/problems/palindrome-list/
int lPalin(listnode* A) {
    listnode * fast = A, * slow = A, * mid, * prev = NULL, * nxt = NULL, * curr, * head ;
    int flag = 1 ;

    while(fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next ;
        slow = slow->next ;
    }
    if(fast->next == NULL)
    {
        flag = 0 ;
    }
    mid = slow ;

    if(flag == 0)
    {
       curr = mid ;
     }
    else
    {
       curr  = mid->next;
    }
    while(curr != NULL)
    {
        nxt = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nxt ;
    }
    head = prev ;
    while(head != NULL)
    {
        if(head->val != A->val)
        {
            return  0 ;
        }
        head = head->next ;
        A = A->next ;
    }
    return 1 ;
}
