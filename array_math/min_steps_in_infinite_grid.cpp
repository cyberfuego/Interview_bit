/* go to this link for question
 https://www.interviewbit.com/problems/min-steps-in-infinite-grid*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int  x=A.size();
    int y=B.size() ;
    int k,count=0;
    int a,b,c,d ;
    for(int i=0;i<x-1;i++)
    { a=abs(A[i+1]-A[i]) ;
      b=abs(B[i+1]-B[i]) ;
      if(abs(a)>=abs(b))
        {
            count=count+abs(a) ;

        }
        else
        {
            count+=abs(b) ;
        }

    }

    return count ;
}
