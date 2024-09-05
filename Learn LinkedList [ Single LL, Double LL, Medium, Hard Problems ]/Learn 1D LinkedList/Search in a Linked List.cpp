int searchInLinkedList(Node<int> *head, int k)
{
    Node<int> *temp = head;
    while (temp)
    {
        if (temp->data == k)
            return 1;
        temp = temp->next;
    }
    return 0;
}