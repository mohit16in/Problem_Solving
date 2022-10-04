//Problem: Intro to Lists ( ~ Doubly Linked List)
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front(g) – Adds a new element ‘g’ at the beginning of the list.
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
begin() and end() - function returns an iterator pointing to the first and last element of the list.
empty() – Returns whether the list is empty(1) or not(0).
insert() – Inserts new elements in the list before the element at a specified position.
reverse() – Reverses the list.
size() – Returns the number of elements in the list.
sort() – Sorts the list in increasing order.

#include <bits/stdc++.h>
using namespace std;

void showlist (list <int> temp)
{
    list <int> :: iterator it;
    for (it = temp.begin(); it != temp.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

int main ()
{
    list <int> list1, list2;
    for (int i=1; i<11; ++i)
    {
        list1.push_back(i*2);  
        list2.push_front(i*3);  
    }
    showlist(list1);    // 2 4 6 8 10 12 14 16 18 20
    showlist(list2);    // 30 27 24 21 18 15 12 9 6 3
    cout << list1.back() << endl;   //20 
    cout << list1.front() << endl;  //2
    cout << list1.size() << endl;   //10
    list1.pop_front();
    cout << list1.size() << endl;   //9

    list2.reverse();        //3 6 9 12 15 18 21 24 27 30
    cout << list2.front();  //3
}