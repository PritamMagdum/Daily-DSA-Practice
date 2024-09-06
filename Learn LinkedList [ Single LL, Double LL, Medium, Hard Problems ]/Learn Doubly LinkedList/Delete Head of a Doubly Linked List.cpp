Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return NULL;
    }

    Node *prev = head;
    head = head->next;

    head->prev = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}