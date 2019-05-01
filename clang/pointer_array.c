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
     printf("The value of list[5]:%d or %d or %d. The pointer is:%p or %p or %p.\n",*ptrl+5,*(ptrl+5),*list+5,ptrl+5,ptrl+5,list+5);
     printf("The value of array[0][0]:%d or %d. The pointer is:%p. \n",*ptr,**array,ptr);
     printf("The value of array[1][0]:%d or %d. The pointer is:%p or %p. \n",*(ptr+3),**(array+1),ptr+3,*(array+1));
     printf("The value of array[1][1]:%d or %d. The pointer is:%p or %p. \n",*(ptr+4),*(*(array+1)+1),ptr+4,*(array+1)+1);
     printf("The address of array[1][1]:%p or %p. \n",&(*(ptr+4)),&(*(*(array+1)+1)));
     printf("The value of array[2][1]:%d or %d. The pointer is:%p or %p. \n",*(ptr+7),*(*(array+2)+1),ptr+7,*(array+2)+1);
     for (i=0;i<3;i++)
       for (j=0;j<3;j++)
         printf("array[%d][%d]=%d\n",i,j,*(*(array+i)+j));
     for (i=0;i<10;i++)
       {
         printf("The value of list[%d] is:%d.\n",i,*ptrl);
         ptrl++;
       }
     printf("The pointer of array is:%p. The value of array is:%d. \n",*array,**array);
  }
