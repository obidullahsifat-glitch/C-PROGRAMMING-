#include <stdio.h>
int main()
{
    float N1,N2,N3,N4;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    float average1=((2*N1)+(3*N2)+(4*N3)+(1*N4))/(2+3+4+1);
    printf("Media: %.1f\n",average1);
    if(average1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
      if(average1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
      if(average1>=5.0 && average1<=6.9)
    {
        printf("Aluno em exame.\n");
        float x;
        scanf("%f",&x);
        printf("Nota do exame: %.1f\n",x);

        float average2=(average1+x)/2.0;
      if(average2>=5.0)
    {
        printf("Aluno aprovado.\n");
    }
        if(average2<= 4.9)
    {
        printf("Aluno reprovado.\n");

    }

         printf("Media final: %.1f\n",average2);



    }


    return 0;
}
