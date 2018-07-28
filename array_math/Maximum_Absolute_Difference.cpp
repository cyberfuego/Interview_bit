/* GO to this link for question
    https://www.interviewbit.com/problems/maximum-absolute-difference/   */
int maxArr(int* A, int n1) {
    int i=0,j=0 ;
     long int max2=INT_MIN,min2=INT_MAX,max=INT_MIN,min=INT_MAX;
    int  a[n1],b[n1] ;
    for(i=0;i<n1;i++)
     {  a[i]=A[i]+i ;
        b[i]=A[i]-i ;

     }
     for(i=0;i<n1;i++)
     { if(a[i]>max)
         {
             max=a[i] ;
         }
         if(a[i]<min)
          {
              min=a[i] ;
          }
          if(b[i]>max2)
           {
               max2=b[i] ;
           }
           if(b[i]<min2)
           {
               min2=b[i] ;
           }

     }

     max=abs(max-min) ;
     max2=abs(max2-min2) ;

     if(max2>=max)
     {
         return max2 ;
     }
     else

     return max;
}
