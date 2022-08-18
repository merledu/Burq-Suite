    #include<stdio.h>
    void Bucket_Sort(int array[], int n) {
    	int i, j;
    	int count[n];
    	for (i=0; i < n; i++) {
    		count[i] = 0;
    	}
    	for (i=0; i < n; i++) {
    		(count[array[i]])++;
    	}
    	for (i=0,j=0; i < n; i++) {
    		for (; count[i]>0;(count[i])--) {
    			array[j++] = i;
    		}
    	}
    }
    void main() {
    	int array[14]={45,67,12,89,44,23,88,11,90,72,78,34,66};
    	int num=13;
    	int i;
    	Bucket_Sort(array, num);

    }