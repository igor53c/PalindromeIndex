// PalindromeIndex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int palindromeIndex(string);

int main()
{
	/*cout << palindromeIndex("aaab") << endl;
	cout << palindromeIndex("baa") << endl;
	cout << palindromeIndex("aaa") << endl;
	cout << palindromeIndex("bcbc") << endl;
	cout << palindromeIndex("abaa") << endl;*/
	/*cout << palindromeIndex("aaba") << endl;
	cout << palindromeIndex("aabaa") << endl;
	cout << palindromeIndex("a") << endl;
	cout << palindromeIndex("abab") << endl;
	cout << palindromeIndex("abcd") << endl;
	cout << palindromeIndex("abca") << endl;
	cout << palindromeIndex("abcca") << endl;
	cout << palindromeIndex("abbca") << endl;
	cout << palindromeIndex("abcbca") << endl;
	cout << palindromeIndex("accbca") << endl;*/
	/*cout << palindromeIndex("aabb") << endl;
	cout << palindromeIndex("aaaaaaabaaaaaaaa") << endl;
	cout << palindromeIndex("aaaaaaaaaaaaabaa") << endl;
	cout << palindromeIndex("aabcaa") << endl;
	cout << palindromeIndex("aabaa") << endl;
	cout << palindromeIndex("aabba") << endl;
	cout << palindromeIndex("aabbaa") << endl;
	cout << palindromeIndex("aaa") << endl;*/
	cout << palindromeIndex("zaaaaaaaaaaa") << endl;

	return EXIT_SUCCESS;
}

int palindromeIndex(string s) 
{
	int j = 0;
	int i = s.length() - 1;

	if (i == 0)
		return -1;

	while (i > j)
	{
		if (s[i] != s[j])
		{
			int ii = i;
			int jj = j;

			if (s[i] == s[j + 1] && i >= j + 1)
			{
				j++;

				while (i > j)
				{
					if (s[i] != s[j])
						return -1;
					j++;
					i--;
				}
				return jj;
			}

			i = ii;
			j = jj;

			if (s[i - 1] == s[j] && i - 1 >= j)
			{
				i--;

				while (i > j)
				{
					if (s[i] != s[j])
						return -1;
					j++;
					i--;
				}
				return ii;
			}

			return -1;
		}

		j++;
		i--;
	}

	return -1;
}
