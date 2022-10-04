// Implementation of Pairs
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	pair<int, string> p; 
	// p = make_pair(2, "abc");
	p = {2, "abcd"};
	pair<int, string> p1 = p;		// transfered as a copy
	// pair<int, string> &p1 = p;	// transfered as reference 
	p1.first = 3;
	cout << p.first << p.second << endl;

	auto it = p.first;
	p.erase(it);

	int a[]={1,2,3};
	int b[]={2,3,4};
	pair<int, int> p_array[3];
	p_array[0]={a[0],b[0]};
	p_array[1]={a[1],b[1]};
	p_array[2]={3,4};
	swap(p_array[0], p_array[2]);
	for(int i=0; i<3; ++i)
		cout << p_array[i].first << " " << p_array[i].second << endl;
}

------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of 2-D Vectors
#include <bits/stdc++.h>
using namespace std;

void printVec(vector <int> v)
{
	cout << v.size () << endl;
	for (int i=0; i<v.size(); ++i)
		cout  << v[i] << " ";
	cout << endl;
}

int main ()
{
	vector<vector<int> > v;
	int N;
	cin >> N;
	for (int i=0; i<N; ++i)
	{
		int n;
		cin >> n;
		vector <int> temp;
		for (int i=0; i<N; ++i)
		{
			int x;
			cin >> x;
			temp.push_back(	x);
		}
		v.push_back(temp);
	}
	// cout << v.size() << endl;
	for(int i=0; i<N; ++i)
	{
		// printVec(v[i]);
		for(int j=0; j<v[i].size(); ++j)
			cout << v[i][j] << " ";
		cout << endl;
	}
}

	------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of iteration in vectors
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	vector <int> v = {1,2,3,4,5};
	// vector <int> :: iterator it = v.begin();
	// cout << *(it+1);
	// for ( ; it != v.end(); ++it)
		// cout << *it << " ";

	// it++  vs  it=it+1
	// it++ == next iterator
	// it+1 == next location
	// this is same for vector but not for maps and other constianer
	// it++ is valid for maps and other	contianers

	// vector <pair<int, int> > v_p = {{1,2}, {2,3}, {3,4}};
	// vector <pair<int, int> > :: iterator it;
	// for (it=v_p.begin(); it!=v_p.end(); ++it)
	// {
	// 	cout << (it->first) << " " << (*it).second <<endl;
	// }

	for (int &value : v)
		cout << value << " ";
	auto it=v.begin();

}

------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of maps

#include <bits/stdc++.h>
using namespace std;

void mapprint(map<int, string> &m)
{
	cout << m.size() << endl;
	for (auto &pr : m)
		cout << pr.first << " " << pr.second << endl;
}

int main ()
{
	//red black trees
	map <int, string> m;
	m[1] = "abcfdfsdfsfdf";  //insertion opert. O(log n)
	m[5] = "cdc";
	m[3] = "acd";
	m.insert({4, "afg"});
	m.insert({7, "hij"});
	// map<int, string> :: iterator it;

	m[6];   //time comp. O(log n)

	auto it = m.find(5);
	cout << m[1].size() << endl << endl;

	// for(it = m.begin(); it!=m.end(); ++it)
	// 	cout << (it->first) << " " <<(it->second) << endl;
	m.erase(it);
	mapprint(m);

	// auto it = m.find(3); 	//return iterator of 3; else return m.end
	// cout << it->second;
}	

------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of unordered maps 

#include <bits/stdc++.h>
using namespace std;

void unmapprint(unordered_map<int, string> &p)
{
	cout << p.size() << endl;
	for(auto &e : p)
		cout << (e.first) << " " << (e.second) << endl;
}

int main ()
{
	unordered_map<int, string> m;
	// m[3] = "abc"; 	//time comp = O(1)avg (hash tables)
	// m[2] = "acd";
	// m.insert(make_pair(1, "mno"));
	// m.insert({5, "pqr"});
	// unmapprint(m);
	// auto it=m.find(2);	
	// cout << it->second;
}

------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of sets 

#include <bits/stdc++.h>
using namespace std;

void setprint(set<string> &s)
{
	for (string value : s)
		cout << value << " ";
}

int main ()
{
	// uses red black trees
	set<string> s;
	s.insert("abc");	//insert time comp O(log n)
	s.insert("bscd");	
	s.insert("asdj");

	auto it = s.find("abc");
	if(it!=s.end())
	{
		// cout << "value exists" << endl;
		s.erase(it);
	}
	setprint(s);
}

------------------------------------------------------------------------------------------------------------------------------------------------------

// Implementation of nesting of pairs and vectors in maps

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	map<pair<string, string>, vector<int> > m;
	int n;
	cin >> n;
	for (int i=0; i<n; ++i)
	{
		string fn, ln;
		int ct;
		cin >> fn >> ln >> ct;
		for (int j=0; j<ct; ++j)
		{
			int x;
			cin >> x;
			m[{fn, ln}].push_back(x); //m[{fn, ln}] == vector
		}
	}
	for (auto &pr : m)
	{
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout << full_name.first << " " << full_name.second << endl;
		cout << list.size() << endl;
		for(auto &ele : pr.second)
			cout << ele << " ";
		cout << endl;
	}
}