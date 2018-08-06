/**
 * @input A : 2D integer array
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 *
 * @Output Void. Just modifies the args passed by reference
 *
 * go to this link for question
 */void rotate(int** a, int n11, int n12) {

    int i,j,temp,n=n11;

    for(i=0;i<n11/2;i++)
    { for(j=i;j<n12-1-i;j++)
       {
           temp=a[i][j] ;
           a[i][j]=a[n-1-j][i] ;
           a[n-1-j][i]=a[n-1-i][n-1-j] ;
           a[n-1-i][n-1-j]=a[j][n-1-i] ;
           a[j][n-1-i]=temp ;

         }
    }

    return 0 ;
}
