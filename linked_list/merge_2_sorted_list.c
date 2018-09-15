//https://www.interviewbit.com/problems/merge-two-sorted-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B)
{
    ListNode* C ;

    if(A->val < B->val)
    {
        C = A  ;
        A = A->next ;
    }
    else
    {
        C = B ;
        B = B->next ;
    }

    ListNode* temp = C ;

    while(A != NULL && B!= NULL)
    {
        if(A->val < B->val)
        {
            temp->next = A ;
            A = A->next ;
        }
        else
        {
            temp->next = B ;
            B = B->next ;
        }
        temp = temp->next ;
    }
    if(A == NULL && B == NULL)
    {
        return C ;
    }
    if(A == NULL)
    {
        temp->next = B ;
    }
    else if(B == NULL)
    {
        temp->next = A ;
    }
    return C ;
}
