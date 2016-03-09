#ifndef QUEUE_H_
#define QUEUE_H_

template <typename T>
class QueueTp
{
private:
    enum {Q_SIZE = 10};
    struct Node
    {
        T item;
        Node * next;
    };
    // class members
    Node * front;
    Node * rear;
    int items;
    const int qsize;
public:
    QueueTp(int qs = Q_SIZE);
    ~QueueTp();
    bool isempty() const { return items == 0; }
    bool isfull() const { return items == qsize; }
    int queuecount() const { return items; }
    bool enqueue(const T & item);
    bool dequeue(T & item);
};

template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template <typename T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename T>
bool QueueTp<T>::enqueue(const T & item)
{
    if(isfull())
        return false;
    Node * add = new Node;
    if (front == NULL)  // if queue is empty
    {
        add->item = item;
        add->next = NULL;
        front = rear = add;
    }
    else
    {
        add->item = item;
        add->next = NULL;
        rear->next = add;
        rear = add;
    }
    items++;

    return true;
}

template <typename T>
bool QueueTp<T>::dequeue(T & item)
{
    if(isempty())
        return false;

    item = front->item;
    Node * temp;
    temp = front;
    front = front->next;
    delete temp;
    items--;

    return true;
}
#endif
