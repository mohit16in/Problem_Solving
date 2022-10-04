Example: 3 -      (Lecture 25: Get Subsequence) - Nice Question
#include <bits/stdc++.h>
using namespace std;

//excep: get all the subsequence of the string 'abc'
//faith: will get all the subsequence of the string 'bc'

/*to meet expec with faith what all we need to do is: 
1.      concatenate empty string to result of 'bc' 
2.      concatenate 'a' to the result of 'bc' subsequence */


//gss: get subsequence
//fst: first character
//ros: rest of string 
//rres: recursive result
//mres: merge result
//bres: base result
vector<string> gss(string s)
{
    if(s.size()==0)
    {
        std::vector<string> bres;
        bres.pb("");
        return bres;
    }
    char fst = s[0];                        //stores the first character in a char variable
    string ros = s.substr(1);               //makes another substring of string 's' from index 1 to end
    vector<string> rres = gss(ros);         //recursive call to the function and storing the end result in vector of string

    vector<string> mres;                    //merging the empty string & character to the result, using loop 
    for(string val : rres)                  //merge empty string to all the v[i]'s 
    {
        mres.pb(""+val);
    } 
    for(string val : rres)                  //merge character to all the v[i]'s
    {
        mres.pb(fst+val);
    } 
    return mres;
}

//Some observations: 
//Total No. of items in the final outcome = 2^n
//Total No. of Pairs in the final outcome = 2^n/2 = 2^(n-1)
//Total No. of characters in the outcome  = 2^(n-1) * size of the input string  =  2^(n-1) * n 

int main ()
{
    string str;
    cin >> str;                 //input the string 
    vector<string> v = gss(str);        //will recieve the vector returned from the function in "v"
    for(string val : v)
        cout << val << " ";         //output of recieved vector of string
    cout <<endl<<v.size();
}