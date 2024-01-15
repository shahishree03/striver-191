class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        int n =arr.size();
        if(n<=1)return ;

        reverse(arr.begin(),arr.end());

        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j<n)
            {
                swap(arr[i][j],arr[j][i]);
                j++;
            }

        }
    }
};
