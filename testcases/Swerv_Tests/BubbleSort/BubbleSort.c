void main()
{
  int array[6]={56,120,87,300,202}, n=5, c, d, swap;


  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

 

  for (c = 0; c < n; c++)
        array[c];
      
}
