#include<stdio.h>

int main()
{

        int a[][3]={1,2,3,
                        4,5,6};
        int (*ptr)[][3]; // = a;
        //ptr[0]=a;             //possible
        ptr = &a;               //possible

        for (int i=0;i<2;++i)
                {
                        for(int j=0;j<3;++j)
                        {
                        //      printf("value is :%d\n",(*ptr)[i][j]);
                        //      printf("value is :%d\n",(*ptr)(i+j));
                                printf("address of each element is :%p\n",&(*ptr)[i][j]);
                        }
                }
}

