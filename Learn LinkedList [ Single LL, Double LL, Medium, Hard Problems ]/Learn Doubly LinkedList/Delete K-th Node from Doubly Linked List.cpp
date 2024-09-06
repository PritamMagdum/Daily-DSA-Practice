Node *delHead(Node *head)
{
    if (head == NULL || head->next == NULL)
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

Node *delTail(Node *head)
{
    if (head == nullptr)
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

Node *deleteNode(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    int cnt = 0;
    Node *kNode = head;
    while (kNode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        kNode = kNode->next;
    }

    Node *prev = kNode->prev;
    Node *front = kNode->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return delHead(head);
    }
    else if (front == NULL)
    {
        return delTail(head);
    }

    prev->next = front;
    front->prev = prev;

    kNode->next = nullptr;
    kNode->prev = nullptr;
    delete kNode;
    return head;
}