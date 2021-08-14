class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>A;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int no=k-arr[i];
            if(no>0)
            {
                if(A.find(no)!=A.end())
                {
                    ans+=A[no];
                }
                A[arr[i]]++;
            }
        }
        return ans;
    }
};
