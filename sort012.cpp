//optimal approach is using the dutch national flag algorithm
//use 3 pointers first take low =0,mid=0,high=n-1;
//then if(arr[mid]==0){ swap(arr[low],arr[mid] low++ mid++;
//else if (arr[mid]==1) mid++;
//else swap(arr[mid],arr[high] high--;

vector <int> sort012 (vector <int> &arr)
{
  int n = nums.size();
  int low = 0,mid=0;
  int high = n-1;
  while(arr[mid]==0)
{
  swap(arr[low],arr[mid]
low++;
mid++;
}
else if
{(arr[mid]==1) 
  mid++;

else
{swap(arr[mid],arr[high]
  high--;
}
}
}
};
