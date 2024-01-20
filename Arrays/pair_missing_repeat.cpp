#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(), arr.end());
	int A;
	int i=0, right =arr.size()-1;
	int B=(n*(n+1))/2;
	int left =0; 
	//int mid = left +(right-)
	int sum=0;
	int mid = arr.size()%2!=0?(left +(right-left)/2):0;
	//cout<<"mid:"<<mid<<endl;
    while(left<right)
    {
        sum+=arr[left]+arr[right];
       
        ++left;
        --right;
    }
    if(arr.size()%2!=0){
        sum+=arr[mid];
    }
    
	left =0, right =1;
	while(left<right && right<=arr.size()-1)
	{
      if(arr[left]==arr[right])
	  {
		  A=arr[left];
		  break;
	  }
	  else 
	  {
		  left++;
		  right++;
	  }
	}
	//cout<<"A: "<<A<<" SUM: "<<sum<<" B "<<B<<endl;
	if(sum>B)
	{
		B=abs((sum-B)-A);
	}
	else{
		B= abs((B-sum)+A);
	}

	return make_pair(B , A);
	
}
