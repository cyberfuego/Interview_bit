/* go this link for question
    https://www.interviewbit.com/problems/pascal-triangle/
 */
int ** solve(int A, int *len1, int *len2) {
    int **a=(int **)malloc(A*sizeof(int)) ;
    int i,j ;
    for(i=0;i<A;i++)
      {
          a[i]=(int *)malloc(i*sizeof(int)) ;
      }
      for(i=0;i<A;i++)
      {
          for(j=0;j<=i;j++)
           {
               printf("%d",a[i][j]) ;
           }
           printf("\n") ;
      }
      for( i=0;i<A;i++)
        {
            for( j=0;j<=i;j++)
              {
                  if(j==0||j==i)
                    {
                        a[i][j]=1 ;
                    }
                    else
                    {
                        a[i][j]=a[i-1][j-1]+a[i-1][j] ;
                    }
              }
        }
        return a ;
}
