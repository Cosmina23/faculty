#include<stdio.h>

void bubblesort(tip_element a[], int n)
{
    tip_indice i,j; tip_element temp;
    for( i= 0; i < n; i ++)
    {                                            
      for( j= n-1; j>i; j --)
        if (a[j-1].cheie>a[j].cheie)
          {
            temp= a[j-1]; a[j-1]= a[j]; a[j]= temp;
          }  
    }  
}    /*Bubblesort*/

int main(void){
	return 0;
}
