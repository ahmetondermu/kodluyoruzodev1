#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int dizi[] = {22,27,16,2,18,6}; 

    int i,j;
    int gecici;

    for(i=0;i<6;i++)
    {
     for(j=0;j<i;j++)
     {
        if(dizi[i]< dizi[j])
         {
             gecici= dizi[i];
             dizi[i]=dizi[j];
             dizi[j]=gecici;
            }
        }
    }
  for(i=0; i<6;i++){
    printf(" %d ",dizi[i]);
  }

  



    return 0;
}