
#include <stdio.h>
#include <stdlib.h>


 void my()
 {
     printf("\t**********************************\t\n");
 }

int main()
{
    double x1,x2,delta,x3;
    unsigned int i=1,N;
    unsigned char V;
    printf("What your variant 1 or 2? : \n");
    scanf("%c",&V);
    if(V=='1')
    {
    //1 variant
    printf("First value : \n");
    scanf("%lf",&x1);

    printf("Last value : \n");
    scanf("%lf",&x2);

    printf("Count of steps : \n");
    scanf("%d",&N);

    printf("Start: %.2lf\nFinish: %.2lf\nCount of steps: %d\n",x1,x2,N );
    my();
    printf("\t*     N    *     X    *   F(X)   *\t\n");
    my();

    for(i; i<=N; i++)
      {
        x3=x1*1;
        //my function F(x)=x1*1
        printf("\t|     %d    |   %.2lf  |   %.2lf  |\t\n",i,x1,x3);
        printf("\t+----------+----------+----------+\t\n");
        x1++;
      }
    }
   else if(V=='2')
   {
    //2 variant
    printf("\nFirst value : ");
    scanf("%lf",&x1);

    printf("\nLast value : ");
    scanf("%lf",&x2);

    printf("\nStep : ");
    scanf("%lf",&delta);

    printf("Start: %.2lf\nFinish: %.2lf\nStep: %.2lf\n", x1,x2,delta );
    my();
    printf("\t*     N    *     X    *   F(X)   *\t\n");
    my();

    for(i; i<=x2; i++)
    {
        x3=x1*1;
        //my function F(x)=x1*1
        printf("\t|     %d    |   %.2lf  |   %.2lf   |\t\n",i,x1,x3);
        printf("\t+----------+----------+----------+\t\n");
        x1=x1+delta;
    }
   }
    return 0;
}