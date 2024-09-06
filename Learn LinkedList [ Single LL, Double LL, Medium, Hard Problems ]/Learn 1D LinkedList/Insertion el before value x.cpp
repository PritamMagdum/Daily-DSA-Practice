class solution
{
public:
    Node *insertBeforeVal(Node *head, int el, int val)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->data == val)
        {
            return new Node(el, head);
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == val)
            {
                Node *x = new Node(el, temp->next);
                temp->next = x;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
}
