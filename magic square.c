#include<stdio.h>
int main()
{ 
 int size;
 int a[10][10];
 printf("enter the size:");
 scanf("%d",&size);
 if(size%2==0)
 {
 printf("magic square not works for an odd numbered size\n");
 }
  else{
  int sqr=size*size;
        int i=0,j=size/2,k;
        for(k=1;k<=sqr;++k)
        {
            a[i][j]=k;
            i--;
            j++;
            if(k%size==0)
            {
                i+=2;
                --j;
            }
            else
            {
                if(j==size)
                {
                    j-=size;
                }
                else if(i<0)
                {
                    i+=size;
                }
            }
        }
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
}
}
