int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int low = mat[0][0];
  int high = mat[n-1][n-1];
  if(k==n*n)    return high;
  while(low<high){
      int mid = (low+high)/2;
      int smaller = 0;
      for(int i=0; i<n; i++){
          smaller += (lower_bound(mat[i], mat[i]+n, mid) - mat[i]);
      }
      if(smaller<k) low = mid+1;
      else if(smaller>=k)   high = mid;
  }
  return low-1;
}