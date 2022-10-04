//Example: 4 - (Get Keypad Combination)  (a bit advanced of the above question)
#include <bits/stdc++.h>
using namespace std;

//example: 678
// expec: all combinations of characters of the string present on 6 7 8
// faith: will get all combinations of 7 8

// to meet expec using faith you need to merge all characters present on key 6 to the result

// since key 7 and key 8 contains string of 4 and 3 charcters respectively. so the possible combinations would be 4*3 = 12
// and since key 6 contains string of 3 characters. so the possible combinations would be 12*3 = 36 


vector<pair<int, string>> v;                                //declared a global vector for storing keypad   
//                                                            could have used array of strings to store the same and that would be easy too
vector<string> combination(string dgts)
{
    if(dgts.size()==0)
    {
        vector<string> bres;
        bres.pb("");
        return bres;  
    }
    int fst = dgts[0]-'0';                          //segregate the first character from the string and convert it to its integer value. (initially, missed to minus char value of 0)
    string ros = dgts.substr(1);                    //rest of the other string excluding the first character
    vector<string> rres = combination(ros);         //called recursion and stored it in rres(recusive result)
//                                                    will work till here until the size of the string reaches 0. (then for the first time it will return i.e., empty string)
    vector<string> mres;                            //mres (merged result) to store the result that will be produced after merging the characters 
    string fst_int = v[fst-1].second;               //get the string of fst_element in some string variable
    for(int i=0; i<fst_int.size(); ++i)             //1st loop traverse from 0 to size of string of fst element
    {
        for(string pr : rres)                       //traverse the result and keep merging the character to result obtained for the ros
            mres.pb(fst_int[i] + pr);
    }
    return mres; 
}

int main ()
{
    v.pb(mp(1, ""));
    v.pb(mp(2, "abc"));
    v.pb(mp(3, "def"));
    v.pb(mp(4, "ghi"));
    v.pb(mp(5, "jkl"));
    v.pb(mp(6, "mno"));
    v.pb(mp(7, "pqrs"));
    v.pb(mp(8, "tuv"));
    v.pb(mp(9, "wxyz"));                            //pushed keypad values to the global vector
    string digits;
    cin >> digits;                                  //input of the string 
    vector<string> f_result = combination(digits);  //called the function for the first time from main and used vector of string to store the result
    for(string val : f_result)
        cout << val << " ";                         //display the output
}