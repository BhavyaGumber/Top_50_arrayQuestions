class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int i=0,j=n-1;
       int mid;
       while(i<=j){
          mid = (i+j)/2;
         if((mid==0 || arr[mid-1]<=arr[mid]) and (mid==n-1 || arr[mid+1]<=arr[mid])){
             break;
         }
         if(mid>0 and arr[mid-1]>arr[mid]){
             j=mid-1;
         }
         else{
             i=mid+1;
         }
       }
       return mid;
    }
};
