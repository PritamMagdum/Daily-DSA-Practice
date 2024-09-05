// Delete Node with Particular Position GFG Problem
Node *deleteNode(Node *head, int pos)
{
    if (head == nullptr)
        return head;
    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt - 1 == pos)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}