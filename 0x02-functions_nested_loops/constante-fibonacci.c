
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Nombres de Fibonacci, récursivité brutale, exponentiel en temps, linéaire en place */
unsigned long FIBONACCI1(int n)
{
   if(n==0) return 0;
   if(n==1) return 1;
   return (FIBONACCI1(n-1)+FIBONACCI1(n-2));
}

/* Nombres de Fibonacci, calcul dans un tableau, linéaire en temps, linéaire en place */
unsigned long FIBONACCI2(int n)
{
   unsigned long fibo[n+1];
   int i;
   if(n==0) return 0;
   if(n==1) return 1;
   fibo[0]=0; fibo[1]=1;
   for(i=2;i<=n;i++) fibo[i]=fibo[i-1]+fibo[i-2];
   return fibo[n];
}

/* Nombres de Fibonacci, calcul récurrent, linéaire en temps, constant en place */
unsigned long FIBONACCI3(int n)
{
   unsigned long tempo,fi_1,fi_2;
   int i;
   if(n==0) return 0;
   if(n==1) return 1;
   fi_1=1; fi_2=0;
   for(i=2;i<=n;i++)
   {
      tempo=fi_1+fi_2;
      fi_2=fi_1;
      fi_1=tempo;
   }
   return tempo;
}

/* Nombres de Fibonacci, exponentiation de matrice, logarithmique en temps, constant en place */
void EXPONENT(unsigned long A[2][2], int n)
/* Calcule A^n sur place, en temps logaritmique, où A est une matrice 2x2 */
{
   unsigned long A1[2][2], B[2][2], C[2][2];
   unsigned long element;
   int i,j,k,l;
   for(i=0;i<2;i++) for(j=0;j<2;j++) A1[i][j]=A[i][j]; /* recopie A dans A1 */
   B[0][0]=B[1][1]=1; B[0][1]=B[1][0]=0; /* matrice identite Id */
   if(n==0) for(i=0;i<2;i++) for(j=0;j<2;j++)
   {
      A[i][j]=B[i][j]; /* A^0=Id */
      return;
   }
   for(l=n;l>0;l=l/2)
   {
      if(l%2==1)
      {
         for(i=0;i<2;i++) for(j=0;j<2;j++) /* Calcul de C=B*A1 */
         {
            element=0;
             for(k=0;k<2;k++) element=element+B[i][k]*A1[k][j];
            C[i][j]=element;
         }
         for(i=0;i<2;i++) for(j=0;j<2;j++) B[i][j]=C[i][j]; /* B=C */
      }
      for(i=0;i<2;i++) for(j=0;j<2;j++) /* Calcul de C=A1^2 */
      {
         element=0;
         for(k=0;k<2;k++) element=element+A1[i][k]*A1[k][j];
         C[i][j]=element;
      }
      for(i=0;i<2;i++) for(j=0;j<2;j++) A1[i][j]=C[i][j]; /* A1=C */
   }
   for(i=0;i<2;i++) for(j=0;j<2;j++) A[i][j]=B[i][j]; /* A=B */
}

unsigned long FIBONACCI4(int n)
{
   unsigned long A[2][2];
   if(n==0) return 0;
   A[0][0]=0; A[0][1]=A[1][0]=A[1][1]=1;
   EXPONENT(A,n-1);
   return A[1][1];
}



int main(void)
{
   unsigned long f;
   int i,n;
   unsigned long temps1,temps2;
/*   printf("Entrer un entier : ");
   scanf("%d",&n);
*/
   for(n=1;n<13;n++)
   {
      temps1=clock();
      for(i=0;i<1000000;i++) /* Pour rendre le temps de calcul appréciable */
      f=FIBONACCI1(n);
      temps2=clock();
      printf("FIBONACCI1(%d)=%ld\n",n,f);
      printf("temps d'execution : %ld \n",(temps2-temps1));
   }

   for(n=1;n<21;n++)
   {
      temps1=clock();
      for(i=0;i<1000000;i++) /* Pour rendre le temps de calcul appréciable */
      f=FIBONACCI2(n);
      temps2=clock();
      printf("FIBONACCI2(%d)=%ld\n",n,f);
      printf("temps d'execution : %ld \n",(temps2-temps1));
   }
   for(n=1;n<21;n++)
   {
      temps1=clock();
      for(i=0;i<1000000;i++) /* Pour rendre le temps de calcul appréciable */
      f=FIBONACCI3(n);
      temps2=clock();
      printf("FIBONACCI3(%d)=%ld\n",n,f);
      printf("temps d'execution : %ld \n",(temps2-temps1));
   }
   for(n=1;n<21;n++)
   {
      temps1=clock();
      for(i=0;i<1000000;i++) /* Pour rendre le temps de calcul appréciable */
      f=FIBONACCI4(n);
      temps2=clock();
      printf("FIBONACCI4(%d)=%ld\n",n,f);
      printf("temps d'execution : %ld \n",(temps2-temps1));
   }
}
