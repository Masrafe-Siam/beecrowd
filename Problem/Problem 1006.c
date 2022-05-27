#include<stdio.h>
    int main()
    {
        double A,B,C,x;
        scanf("%lf %lf %lf", &A,&B,&C);
        x=(A*2+B*3+C*5)/(2+3+5);
        printf("MEDIA = %.1f\n",x);
        return 0;
    }
