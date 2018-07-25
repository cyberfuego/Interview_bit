/* go to this link for question
 https://www.interviewbit.com/problems/max-sum-contiguous-subarray/ */

int Solution::maxSubArray(const vector<int> &A) {
    int sum=A[0],maxsum=A[0];
    int x=A.size() ;
    for(int i=1;i<x;i++)
    {
      if(sum+A[i]>A[i])
         { sum=sum+A[i] ;

         }
         else
         {
             sum=A[i];
         }
   if(sum>maxsum)
   {
       maxsum=sum ;
   }

    }
    return maxsum ;
}
