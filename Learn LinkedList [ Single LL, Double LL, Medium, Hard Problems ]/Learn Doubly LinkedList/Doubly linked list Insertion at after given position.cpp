void addNode(Node *head, int pos, int data)
{
    Node *prev = head;
    int cnt = 0;
    while (prev != NULL)
    {
        if (cnt == pos)
            break;
        cnt++;
        prev = prev->next;
    }
    Node *next = prev->next;
    Node *newNode = new Node(data);
    newNode->next = next;
    prev->next = newNode;
    newNode->prev = prev;
    if (next != nullptr)
    {
        next->prev = newNode;
    }
}