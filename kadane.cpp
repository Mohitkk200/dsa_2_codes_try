//kadanes algo (get the maximum subarray sum)
vector <int> &arr(vector & arr)
{
int sum = 0;
int maxSum = INT_MIN;
int n = nums.size();
for(int i=0;i<n;i++)
{
sum = sum+arr[i];
maxSum = max(sum,maxSum);

if(sum<0)
{
sum=0;
}
}
return maxSum;
}
