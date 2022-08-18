void main()
{
     // See LICENSE for license details.

  int array[11]={100,88,101,32,67,190,230,765,12,45}, n=10, c, d, position,t;

 

  

  for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }

 

  for (c = 0; c < n; c++)
    array[c];

}

