
void main()
{
    int i, j, temp,number=13,a[14]={45,67,12,89,44,23,88,11,90,72,78,34,66};
    
    for(i = 1; i <= number - 1; i++)
    {
        for(j = i; j > 0 && a[j - 1] > a[j]; j--)
        {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
        }
    }

}
