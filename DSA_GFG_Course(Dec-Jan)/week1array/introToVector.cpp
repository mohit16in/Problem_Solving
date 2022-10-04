//Problem: Intro to vectors
begin() – Returns an iterator pointing to the first element in the vector.
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector.
size() – Returns the number of elements in the vector.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
empty() – Returns whether the container is empty.
push_back() – It push the elements into a vector from the back.
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position.
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type and size.
clear() – It is used to remove all the elements of the vector container.
emplace() – It extends the container by inserting new element at position.
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector.
reverse() - reverse the vector and store the elements in the same vector.

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> v;
    int n;
    cin >> n;
    int a;
    for (int i=0; i<n; ++i)
    {
        cin >> a;
        v.push_back(a);         // adding elements to vector 
    }
    // cout << v.size();        // print out the size of the vector
    auto temp = v.begin();      // temp variable will point to the element at the begining  (most probably temp is pointer of some kind of data type)
    cout << *temp << endl;      // print out the value stored at the beginning of the vector using *

    
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    
    cout << endl;
    v.emplace(v.end(), 5);
    auto help = v.end();
    cout << *(help-3) << endl;


    auto = vector<int> :: iterator it
    for (it=v.begin(); it!=v.end(); ++it)
    {
        cout << *it << endl;
    }


    v.pop_back();       // pop out the last element from the vector
    for (auto element:v)
    {
        cout << element << endl;
    }

    cout <<endl;

    vector <int> b(3, 50);      // b contains 3 elements each of whose value is 50          50  50  50
}