/* go to this link for question
  https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/ */
vector<int> Solution::getRow(int A) { int m=A+1 ;
    vector<int>b(m) ;
    int l ;
    for(int i=0;i<m;i++)
     { if(i==0 || i==m-1)
         {
             b[i]=1 ;
             l=1 ;
         }
         else
           { l=l*((m-1)-i+1)/i ;
             b[i]=l ;

           }

     }
     return b ;
}
