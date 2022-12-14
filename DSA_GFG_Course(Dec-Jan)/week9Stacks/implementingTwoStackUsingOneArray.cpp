// Implementing Two Stacks using one array
#include <bits/stdc++.h>
using namespace std;

class two_stacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    two_stacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
    void push1(int x)
    {
        top1++;
        if (top1 != top2)
        {
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void push2(int x)
    {
        top2--;
        if (top1 != top2)
        {
            arr[top2] = x;
        }
        else
        {
            cout << "Stack OVerflow" << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int pop2()
    {
        if (top2 < size)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
};

int main()
{
    two_stacks ts(5);

    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Popped element from stack1 is " << ts.pop1();

    ts.push2(40);

    cout << "\nPopped element from stack2 is " << ts.pop2();

    return 0;
}