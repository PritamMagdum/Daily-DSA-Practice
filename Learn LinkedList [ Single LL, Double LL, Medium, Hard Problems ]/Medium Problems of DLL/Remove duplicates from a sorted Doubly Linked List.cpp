Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *nextNode = temp->next;
        while (nextNode != NULL && temp->data == nextNode->data)
        {
            Node *duplicate = nextNode;
            nextNode = nextNode->next;
            delete duplicate;
        }
        temp->next = nextNode;
        if (nextNode != NULL)
            nextNode->prev = temp;

        temp = temp->next;
    }
    return head;
}