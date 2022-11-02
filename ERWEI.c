#include <stdio.h>
int main()
{
    int array[100][100];
    int row, col;
    scanf("%d %d", &row, &col);
    int i, j;
    for (i = 0; i < row; i++)
    {
          for (j = 0; j < col; j++)
 
        {
               scanf("%d", &array[i][j]);
             
        }
    }
    //缺陷 无法解决列数为1的情况，需要额外补充该情况。
    if (col==1)
    {
        for ( i = 0; i < row; i++)
        {
            printf("%d\n",array[i][0]);
        }
        
    }
    else
    {




    int k = 0;
    for (i = 0; i < col - 1; i++)
    {
          for (j = i; j < col - i - 1; j++)
 
        {
               printf("%d\n", array[i][j]);
               k++;
               if (k == row * col)
  
            {
                    goto CUT;
                  
            }
               
 
        }
          for (j = i; j < row - i; j++)
 
        {
                printf("%d\n", array[j][col - i - 1]);
                k++;
                 if (k == row * col)
  
            {
                    goto CUT;
                  
            }
             
        }
          for (j = col - i - 2; j > i; j--)
 
        {
                printf("%d\n", array[row - 1 - i][j]);
                k++;
                 if (k == row * col)
  
            {
                    goto CUT;
                  
            }
             
        }
          for (j = row - 1 - i; j > i; j--)
 
        {
                printf("%d\n", array[j][i]);
                k++;
                 if (k == row * col)
  
            {
                    goto CUT;
                  
            }
         }
    }
}    
CUT:
    return 0;
}