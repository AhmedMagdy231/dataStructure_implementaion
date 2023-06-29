#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
template<class T>
class stack
{
    int top;
    T item[MAX_SIZE];
public:
    stack(): top(-1){}

    void push(T element)
    {
        if (top >= MAX_SIZE -1)
        {
            cout << "Stack is full !!" << endl;
        }
        else
        {
            item[++top] = element;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is Empty" << endl;
        }
        else
        {
            top--;
        }
    }

    void pop(T& value)
    {
        if (isEmpty())
        {
            cout << "stack is Empty" << endl;
        }
        else
        {
            value = item[top];
            top--;
        }
    }

    T getTop()
    {
        if (!isEmpty())
        {
            return item[top];
        }
        else
        {
            cout << "stack is Empty" << endl;
        }
    }

    void print()
    {
        cout << "[";
        for(int i=top; i>=0; i--)
        {
            cout << item[i] << " ";
        }
        cout << "]" << endl;
    }

};
