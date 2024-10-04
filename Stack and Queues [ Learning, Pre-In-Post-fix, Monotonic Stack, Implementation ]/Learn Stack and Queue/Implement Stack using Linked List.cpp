class MyStack
{
private:
    StackNode *top;

public:
    void push(int x)
    {
        StackNode *element = new StackNode(x);
        element->next = top;
        top = element;
    }

    int pop()
    {
        if (top == NULL)
            return -1;
        int topData = top->data;
        StackNode *temp = top;
        top = top->next;
        delete temp;
        return topData;
    }

    MyStack() { top = NULL; }
};