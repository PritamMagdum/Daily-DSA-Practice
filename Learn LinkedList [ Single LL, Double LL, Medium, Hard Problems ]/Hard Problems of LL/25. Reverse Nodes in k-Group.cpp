class Solution
{
public:
    ListNode *reverseLinkedList(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while (temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode *findKthNode(ListNode *temp, int k)
    {
        k -= 1;
        while (temp != NULL && k > 0)
        {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
            return NULL;
        ListNode *temp = head;
        ListNode *prevLast = NULL;
        ListNode *newHead = NULL;
        while (temp != NULL)
        {
            ListNode *kthNode = findKthNode(temp, k);
            if (kthNode == NULL)
            {
                // if(prevLast) prevLast = temp->next;
                break;
            }

            ListNode *nextNode = kthNode->next;
            kthNode->next = NULL;

            ListNode *reversedHead = reverseLinkedList(temp);
            if (newHead == NULL)
                newHead = reversedHead;

            // if(temp == head){
            //     head = kthNode;
            // }else{
            //     prevLast->next = kthNode;
            // }
            if (prevLast != NULL)
            {
                prevLast->next = reversedHead;
            }

            prevLast = temp;
            temp = nextNode;
            prevLast->next = temp;
        }
        return newHead == NULL ? head : newHead;
    }
};