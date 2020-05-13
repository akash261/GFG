#include <bits/stdc++.h>
using namespace std;

int main() {
  //vector<int> arr = {10,20,20,30,30,30};
	// vector<int> arr = {10,10,10};
	vector<int> arr = {10,20,30,40,50};

 int temp[( *max_element(arr.begin(),arr.end()))+1] = {0};
 int result = 0;
 	 for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		if (temp[*i] == 0)
		{
			temp[*i] = 1;
			result++;
		}
		 
	}
	
   cout<<result;cout<<"\n";       
    
    

	return 0;
}