//#include <stdio.h>
//int fac(int); /* Prototipe fungsi */
//int main(void) {
// int n;
// printf("Menghitung factorial\n");
// printf("Masukkan sebuah bilangan bulat positif: ");
// scanf("%d", &n);
// printf("%d\n", fac(n));
// return 0;
//}
// /* implementasi dari fungsi factorial */
// int fac(int n) {
// if (n == 0)
// return 1;
// else
// return n * fac(n - 1); /* fungsi rekursif */
// }*/
#include <math.h>
#include <stdio.h>
#define N 10
float rata_rata(int [], int);
float stddev(int [], float);
int main(void) {
 int a,b,c;
 int arr[N] = {4, 5, 7, 3, 1, 2, 4, 1, 3, 10};
 float mean = rata_rata(arr, N);
 float sd = stddev(arr, mean);

 printf("Mean = %f \t Standard Deviasi = %f\n", mean, sd);
 return 0;
}
float rata_rata(int arrayku[], int N){
 return ...
}
float stddev (int myarr[], float mean){
 return ...
}
