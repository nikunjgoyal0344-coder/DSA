class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1;
        int la=arr.size()-2;
        while(st<=la){
            int mid=st+(la-st)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
            return mid;
            if(arr[mid]>arr[mid-1])
            st = mid + 1;
            if(arr[mid]>arr[mid+1])
            la=mid - 1;

        }
    return -1;    
    }
};