#include "is_k_periodic.h"

bool is_k_periodic(const std::string& s, int k)
{
	if (k <= 0 || s.length() < k || s.length() % k != 0)
	{
		return false;
	}

	for (int i = k; i < s.length(); i++)
	{
		if (s[i] != s[i%k]) 
		{
			return false;
		}
	}
	return true;
}