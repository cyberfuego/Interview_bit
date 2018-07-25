/* go to this link  for question
https://www.interviewbit.com/problems/spiral-order-matrix-i/
*/
int* spiralOrder(const int** A, int n11, int n12, int *len1) {
    *len1=n11*n12 ;

    int *a=(int *) malloc(sizeof(int)*(n11*n12)) ;
    int i,t=0,b=n11-1,l=0,r=n12-1,w=0;
    while(t<=b && l<=r)
     {
         for(i=l;i<=r;i++)
             {
                a[w]=A[t][i] ;

                 w++ ;

             }
             t++;
             if(t>b)
              {
                  break ;
              }

             for(i=t;i<=b;i++)
               {
                   a[w]=A[i][r];

                  w++ ;

               }
                 r-- ;
                 if(l>r)
                  {
                      break ;
                  }
               for(i=r;i>=l;i--)
                {
                    a[w]=A[b][i];
                   //  printf("%d ",w) ;
                    w++ ;

                }
                 b-- ;
                for(i=b;i>=t;i--)
                {
                    a[w]=A[i][l] ;
                    w++ ;

                }
                l++ ;
     }
     return a ;

}
