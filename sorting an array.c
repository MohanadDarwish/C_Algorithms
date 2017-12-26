/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
     
void swap(char* ,char*);
void bubblesort(char*,char);

int main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
///////////////////////////////////////////////////////////// 
    
    printf("Hello World\n");
    char i=0;
    char arr[7]={3,2,2,4,9,7,1};
    bubblesort(arr,sizeof arr);
    while(i<7) printf("arr[%d] = %d \n",i,arr[i++]);

////////////////////////////////////////////////////////////
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf(" time = %u",cpu_time_used);
    return 0;
}
void bubblesort(char* arr1,char size)
{
    char i=0,j=0,Flag1=0,Flag2=0;
    for (;i<size;i++) {
        /* code */
        for(j=0;j<size-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                swap( arr1+j , arr1+(1+j) );
                Flag1=1;
            }else if(Flag1 ==0){
                Flag2=1;
                break;
            }
            if(Flag2==1)
                break;
        }
    }
}
void swap(char* x,char* y)
{
    char temp=0;
    temp = *x;
    *x=*y;
    *y=temp;
}


