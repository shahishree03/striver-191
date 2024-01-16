#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size();
    int m = b.size();
    
    for(int i = 0; i < n; ++i){
		int flag = i;
		int least = a[i];
		
		// Finding the minimum among the remaining elements of 'A'.
		for(int j = i; j < n; ++j){
			if(a[j] < least){
				least = a[j];
				flag = j;
			}
		}
		
		// Finding the minimum among the elements of 'B'.
		for(int j = 0; j < m; ++j){
			if(b[j] < least){
				least = b[j];
				flag = j;
			}
		}
		
		// Swapping 'A[i]' with the least element.
		if(flag < n && flag >= i && a[flag] == least)
			swap(a[i], a[flag]);
		else
			swap(a[i], b[flag]);
	}
	
	// Sorting the array 'B'.
	sort(b.begin(), b.end());
	

}
