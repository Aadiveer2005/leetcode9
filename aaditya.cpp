class Solution 
{
    public:
   void func(int ind,int XOR,vector<int> &nums,int &sum)
    {
        if(ind==nums.size())
        {
          sum+=XOR;
            return;
        }
          
        func(ind+1, XOR ^ nums[ind],nums,sum);//take
         func(ind+1, XOR,nums,sum);//nottake
    
}
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        func(0,0,nums,sum);
        return sum;
        
    }
};