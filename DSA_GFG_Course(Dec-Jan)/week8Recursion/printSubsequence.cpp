Problem : Print Subsequence       (this is different from get subsequence because here we are not storing the whole outcome, instead we are printing it in the function only)
// in the previous problem it wont be possible to display the outcome of the string size/length 31 or 32 because the it would have took 32 gb of space 
//calculations:
//length of string = 32
// no of string in outcome = 2^32
// no of pairs in outcome = 2^31
// each pair would contain 32 characters 
// implies total characters in outcome = 2^31 * 32
// 2^31 ~ 10^9  which implies 32*10^9 bytes ~ 32 gb of space required

#include <bits/stdc++.h>
using namespace std;

void getSubSeq(string str, string ans)
{
	if(str.size()==0)
	{	
		cout << ans << " ";
		return;
	}
	char fst = str[0];
	string ros = str.substr(1);
	getSubSeq(ros, ans+"");
	getSubSeq(ros, ans+fst); 
}

int main ()
{
    string s = "abc";
   	getSubSeq(s, "");
}
