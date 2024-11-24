// C++ code for calculating number of ways
// to distribute m mangoes amongst n people
// where all mangoes and people are identical
#include <bits/stdc++.h>
using namespace std;

// function used to generate binomial coefficient
// time complexity O(m)
int binomial_coefficient(int n, int m)
{
	int res = 1;

	if (m > n - m)
		m = n - m;

	for (int i = 0; i < m; ++i) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

// helper function for generating no of ways
// to distribute m mangoes amongst n people
int calculate_ways(int m, int n)
{
	// not enough mangoes to be distributed
	if (m < n) 
		return 0;
	
	// ways -> (n+m-1)C(n-1)
	int ways = binomial_coefficient(n + m - 1, n - 1);
	return ways;
}

// Driver function
int main()
{
	// m represents number of mangoes
	// n represents number of people
	int m = 1, n = 12;

	int result = calculate_ways(m, n);
	printf("%d\n", result);

	return 0;
}
