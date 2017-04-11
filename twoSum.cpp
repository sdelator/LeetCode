// twoSum LeetCode.cpp 
//Author:  Sandra De La Torre

/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums;
  nums.push_back(3);
  nums.push_back(2);
  nums.push_back(3);

  int total = 0, target =6;
  vector<int> result;

  for (int i = 0; i < nums.size(); i++)   
  {
	int j = i+1, total = 6; //= i + 1;
	
	if (j == nums.size())
	{
		cout << "return result NO MATCH"; //return result;
		return 0;
	}
	
	total = nums[i] + nums[j];
	
	while (target != total && j < nums.size())
	{
	  j++;                            
	  total = nums[i] + nums[j];    

	}

	if (target == total)
	{
	  result.push_back(i);
	  result.push_back(j);
	  cout << "TARGET FOUND " << "[" << result[0] << "," << result[1] << "]" << endl; //return result;
	  return 0;
	}
    }
  return 0;
}
	


