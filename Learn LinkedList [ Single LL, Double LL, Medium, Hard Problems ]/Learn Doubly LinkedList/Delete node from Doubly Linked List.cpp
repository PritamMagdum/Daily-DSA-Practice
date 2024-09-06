void deleteNode(Node *node)
{
    Node *prev = node->prev;
    Node *front = node->next;

    if (front == NULL)
    {
        prev->next = nullptr;
        node->prev = nullptr;
        free(node);
        return;
    }

    prev->next = front;
    front->prev = prev;

    node->next = node->prev = NULL;
    free(node);
}