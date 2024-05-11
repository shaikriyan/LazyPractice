#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" = "; print(x); cout<<endl;

template<class T> void print(T a){ cout<<a;}

template<typename T>
void print(vector<T> v){
	cout<<"[ ";
	for(int i=0;i<v.size();i++){
		print(v[i]);
		cout<<" ";
	}
	cout<<"]";
}

int findLargestNumber(vector<int>& nums){
    int ans = INT_MIN;
    for(auto it : nums){
      ans = max(ans, it);
    }

    return ans;
} 

int main()
{
 cout<<"Largest number in the array : "<<endl;

  vector<int> nums = {2,3,5, 1, 4, 7, 3};

  int ans = findLargestNumber(nums);

  cout<<"ans : "<<ans<<endl;




	return 0;
}


