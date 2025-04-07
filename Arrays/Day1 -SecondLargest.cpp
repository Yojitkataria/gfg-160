class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        int n = arr.size();
        //optimal solution
        int largest = -1 , secondlrg = -1;
        
        for(int i = 0 ; i <n ; i++){
            if(arr[i] > largest){
                secondlrg = largest;
                largest = arr[i];
            }
            
            else if(arr[i] < largest && arr[i] > secondlrg){
                secondlrg = arr[i];
            }
        }
        return secondlrg;
    }
};
