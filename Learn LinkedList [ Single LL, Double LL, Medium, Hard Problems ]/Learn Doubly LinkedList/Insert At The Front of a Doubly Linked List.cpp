Node *insertAtFront(Node *head, int k)
{
    if (head == NULL)
    {
        Node *newHead = new Node(k);
        return newHead;
    }
    Node *newHead = new Node(k, nullptr, head);
    head->prev = newHead;
    return newHead;
}