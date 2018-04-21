#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> result;
		int n = nums.size();
		for(int i = 0; i<n; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				if(nums[i]+nums[j] == target)
				{
					result.push_back(i);
					result.push_back(j);
				}
			}
		}
		return result;
	}
protected:
private:
};
int main()
{
	int arr[] = {2,7,11,3,15,6};
	int target = 9;
	int n = sizeof(arr)/sizeof(int);
	vector<int> nums(arr,arr+n);
	Solution s;
	vector<int> res;
	res = s.twoSum(nums,target);
	for(int i = 0;i < res.size();i+=2)
	{
		cout << "[" << res[i] << "," << res[i+1] << "]" << endl;
	}
	system("pause");
	return 0;
}
