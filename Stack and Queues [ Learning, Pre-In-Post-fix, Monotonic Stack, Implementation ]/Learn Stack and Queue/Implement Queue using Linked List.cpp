/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

// Function to push an element into the queue.
void MyQueue::push(int x)
{
    QueueNode *element = new QueueNode(x);
    if (front == nullptr)
    {
        front = element;
        rear = element;
    }
    else
    {
        rear->next = element;
        rear = element;
    }
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    if (front == NULL)
        return -1;
    QueueNode *temp = front;
    int poppedData = temp->data;
    front = front->next;
    delete temp;
    return poppedData;
}