/* go to this link for question
https://www.interviewbit.com/problems/add-one-to-number/ */

int* plusOne(int* A, int n1, int *len1) {
   int i,j=0 ;
    len1=(int *)malloc((n1+1)*sizeof(int)) ;
    A[n1-1]++ ;
  for( i=n1-1;i>0;i--)
    { if(A[i]>9)
        {
          A[i]=0 ;
          A[i-1]++ ;
         }
    }
   i=0,j=0 ;
    int k,l ;
   for( k=0;k<n1;k++)
     {
         if(A[k]==0)
          {
              for(l=k;l<n1-1;l++)
                 {
                     A[l]=A[l+1] ;
                 }
                 n1-- ;
                 k=-1 ;
          }
          else
          {
              break ;
          }
     }
       if(A[0]>9)
           {   A[0]=0 ;
               n1=n1+1 ;
               len1[0]=1 ;
               i=1 ;
             }
       for(;i<n1;i++)
        {
            len1[i]=A[j] ;
            j++ ;
        }
     for(i=0;i<n1;i++)
     {
         printf("%d ",len1[i]) ;
     }
           return len1 ;
}
