/* go to this link for question
   https://www.interviewbit.com/problems/spiral-order-matrix-ii/ */
int ** generateMatrix(int A, int *len1, int *len2) {
    *len1=A ;
    *len2=A ;
    int **a=(int **) malloc(A*sizeof(int*)) ;
    int k,w=1 ;
    for(k=0;k<A;k++)
     {
         a[k]=(int *) malloc(A*sizeof(int)) ;
     }
     int i,j,t=0,b=A-1,l=0,r=A-1 ;
     while(t<=b&&l<=r)
       {
           for(i=l;i<=r;i++)
             {
                a[t][i]=w ;

                 w++ ;

             }
             t++;
             for(i=t;i<=b;i++)
               {
                   a[i][r]=w ;

                   w++ ;

               }
                 r-- ;
               for(i=r;i>=l;i--)
                {
                    a[b][i]=w ;
                   //  printf("%d ",w) ;
                    w++ ;

                }
                 b-- ;
                for(i=b;i>=t;i--)
                {
                    a[i][l]=w ;
                    w++ ;

                }
                l++ ;
       }

       return a ;

}
