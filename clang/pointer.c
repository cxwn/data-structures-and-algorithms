# include<stdio.h>
void main()
  {
//     int array[3][3]={{11,12,13},{21,22,23},{31,32,33}};
     int array[] = {11,12,13};
     int *ptr;
     int sum(int * a);
     printf("Total is:%d\n",sum(array));
     ptr = array;
     printf("Array length:%d\n",(sizeof array)/(sizeof array[0]));
     printf("%d\n",*(++ptr));
  }
int sum(int * a)
  {
    int i;
    int total = 0;
    for ( i=0;i<=(sizeof a)/(sizeof a[0]);i++)
      {
        printf("Array[%d] is:%d \n",i,a[i]);
        total += a[i];
        printf("Total is:%d\n",total);
      }
    return total;
  }
