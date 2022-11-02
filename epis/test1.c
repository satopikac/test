#include<stdio.h>
int main()
{
    int array[101][101];
int row,col;
scanf("%d %d",&row,&col);
int i,j;
for ( i = 0; i < row; i++)
{
    for ( j = 0; j < col; j++)
    {
      scanf("%d",&array[i][j]);
    }
}
int len=0;int height=0;
int work=1;
for ( i = 0; i < col*row; i++)
{   
   if(work=1)
    {
         
        printf("%d\n",array[len][height]);
        array[len][height]=0;
        if (array[len][height+1]!=0)
        {
            height++;
            printf("%d\n",array[len][height]);
            array[len][height]=0;
            continue;
        }
        else
        {
          len++;
          work=2;
        }
    }
    if (work=2)
    {
        printf("%d\n",array[len][height]);
        array[len][height]=0;
        if(array[len+1][height]!=0)
        {
            len++;
            printf("%d\n",array[len][height]);
            array[len][height]=0;
            continue;
        }
        else 
        {
            height--;
            work=3;
            
        }

    }
    if (work=3)
    {
     printf("%d\n",array[len][height]);
     array[len][height]=0;
        if(array[len-1][height]!=0)
        {
           height--;
            printf("%d\n",array[len][height]);
            array[len][height]=0;
            continue;
        }
        else 
        {
            len--;
            work=4;
        }
    }
    if (work=4)
    {
     printf("%d\n",array[len][height]);
     array[len][height]=0;
        if(array[len-1][height]!=0)
        {
           height++;
            printf("%d\n",array[len][height]);
            array[len][height]=0;
            continue;
        }
        else 
        {
            len++;
            work=1;
        }
    }
    }
    
    



}