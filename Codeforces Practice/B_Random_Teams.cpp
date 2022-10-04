#include <bits/stdc++.h>
using namespace std;


#define mod                 1000000007
#define inf                 1e18
#define ll                  long long
#define pb                  push_back
#define w(t)                int t; cin >> t; while(t--)
#define vi                  vector<int>
#define pii                 pair<int, int>
#define mii                 map<int, int>
#define mci                 map<char, int>
#define mp                  make_pair


int main () 
{
	long long n, m;
	cin >> n >> m;
	if(n==m)
	{
		cout << "0" << " " << "0";
		return 0;
	}

	//it is given that every team must have 1 participant
	//so to get the minimum number of participant in each of the team we performed (total_participants / total_teams)
    long long rem = n%m;	//this will tell us the participants remaining that need to be distributed and will always be < m
	//that means we are supposed to divide them one by one in each team
	//so we got that "rem" are the number of teams that will have one member extra compared to minimum members

    long long s = n/m;	//minimum number of member to distributed in each team

	//in order to get the total pairs, say there were 4 palyers in a team 
	//then total pairs = 4C2 = 4!/(2!*2!) = 6
	//or 3+2+1 = 6

	//another example = say number of players = 6
	//total pairs = 6C2 = 6!/(2!*4!) = 15
	//or 5+4+3+2+1 = 15
	
	long long k = s-1;

	// if(n%m==0)
	// {
	// 	cout << m*((k*(k+1))/2) << " ";
	// }
	// else
	{
		cout << (rem*(s*(s+1))/2) + ((m-rem)*(k*(k+1))/2) << " ";
	}
	long long big_group = n-m;
	long long max_group = (big_group * (big_group+1))/2;
	cout << max_group; 
}