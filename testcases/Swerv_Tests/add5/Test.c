//#include <stdint.h>
//volatile uint32_t tohost = 0;
void main()
{
        int array1[5] = {11,29,83,109,9};
        int array2[5] = {89,62,73,90,7};
        int i,c=0;
         for(i=0;i<5;i++)
	    c=array1[i]+array2[i];
}
/*void _start()
{
  main();
  tohost = 1;
}*/
