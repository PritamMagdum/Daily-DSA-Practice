Node *insertAtTail(Node *head, int k)
{
    if (head == NULL)
    {
        return new Node(k);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = new Node(k, tail, nullptr);
    tail->next = newTail;
    return head;
}