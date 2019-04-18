# include<stdio.h>
void main()
  {
     int array[3][3]={{11,12,13},{21,22,23},{31,32,33}};
     int *ptr;
     int i,j;
     int list[10]={1,2,3,4,5,6,7,8,9,0};
     int *ptrl;
     ptrl = list;
     ptr = *array; // ptr = &array[0][0];
     printf("The value of list[5]:%d or %d or %d.\n",*ptrl+5,*(ptrl+5),*list+5);
     printf("The value of array[0][0]:%d or %d.\n",*ptr,**array);
     printf("The value of array[1][0]:%d or %d.\n",*(ptr+3),**(array+1));
     printf("The value of array[2][1]:%d or %d.\n",*(ptr+7),*(*(array+2)+1));
     for (i=0;i<3;i++)
       for (j=0;j<3;j++)
         printf("array[%d][%d]=%d\n",i,j,*(*(array+i)+j));
     for (i=0;i<10;i++)
       {
         printf("The value of list[%d] is:%d.\n",i,*ptrl);
         ptrl++;
       }
  }
