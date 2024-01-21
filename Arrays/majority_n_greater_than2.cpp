int majorityElement(vector<int> v) {
	int num,counter=0;
	for(auto x:v)
	{
		if(counter==0)
			num=x;
		counter+=(x==num ?1:-1);

		
	}
	counter=0;
	for(auto x:v)
	{
		if(x==num)
		counter++;
	}

	if(counter>v.size()/2) return num;
	else return -1;
}
