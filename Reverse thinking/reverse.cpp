#include <bits/stdc++.h>
using namespace std ;
#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <bitset>
#include <map>

#include <deque>
#include <string>

#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>

#include <ctime>
#include <cmath>
#define rep(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)

#define per(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
#define each(a, x) for (auto &a : x)
#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())
#include <numeric>
#include "string"
#define rall(my) my.rbegin(), my.rend()
#define ll long long
#define el "\n"
#define ull unsigned long long
#define dd double
#define ld long double
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void reversally(int n )
{
    //   **Reverse thinking** 
    //       is a problem-solving technique that involves working backwards from the end goal. In programming, this could mean starting with the desired 
    //       output and figuring out what inputs or processes would lead to that result. This method is particularly useful when the steps needed to achieve a goal are not
    //       immediately obvious.like sieve and the way he made his theorem based on the divisors to the numbers themselves.
    // ==================================================================================
    // reverse thinking ...
    // here we need the sum of the number of divisors from 1 to N 
    // Instead of brute-forcing through all possible values(like getting the divisors first and then add and etc.. ) , we can do u it reversally
    // ===================================================================================================
    //  we wiil go from the divisors to => numbers, here is the code // trace it for more understanding.
    // ===================================================================================================
    vector<int> num_factors(n+1) ;
    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= n; j+=i)
            num_factors[j]++;

    int rs {};

    for (int i = 1; i <= n; ++i)
        rs += num_factors[i] ;

    cout << rs << el ;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t{1};
    //cin >> t;

    while (t--) {
      //  solve_test_case();
        int in; cin >> in ; reversally(in);
    }

    return 0;
}
