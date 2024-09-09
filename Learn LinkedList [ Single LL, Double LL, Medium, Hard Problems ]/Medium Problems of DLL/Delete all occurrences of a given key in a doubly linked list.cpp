// Class Node Approach
Node *deleteAllOccurrences(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            if (temp == head)
            {
                head = temp->next;
            }
            Node *nextNode = temp->next;
            Node *prevNode = temp->prev;
            if (nextNode != NULL)
                nextNode->prev = prevNode;
            if (prevNode != NULL)
                prevNode->next = nextNode;
            free(temp);
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

// Struct Node** Approach
class Solution
{
public:
    void deleteAllOccurOfX(struct Node **head_ref, int x)
    {
        Node *head = *head_ref;
        Node *curr = head;
        while (curr != NULL)
        {
            if (curr->data == x)
            {
                if (curr->prev != NULL)
                {
                    curr->prev->next = curr->next;
                }
                else
                {
                    *head_ref = curr->next;
                }

                if (curr->next != NULL)
                {
                    curr->next->prev = curr->prev;
                }
            }
            curr = curr->next;
        }
    }
};