Node *deleteLastNode(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;

    delete tail;
    return head;
}