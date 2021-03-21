#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex div(complex n1, complex n2);
int main() {
    complex n1, n2, result,result1,result2,result3;

   printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
    
    result1 = sub(n1, n2);
    result2 = mul(n1, n2);
    result3 = div(n1, n2);


    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    printf("sub = %.1f + %.1fi\n", result1.real, result1.imag);
    printf("mul = %.1f + %.1fi\n", result2.real, result2.imag);
    printf("div = %.1f + %.1fi", result2.real, result2.imag);
    return 0;


}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2) {
    complex temp1;
    temp1.real = n1.real - n2.real;
    temp1.imag = n1.imag - n2.imag;
    return (temp1);
}
complex mul(complex n1, complex n2) {
    complex temp2;
    temp2.real = n1.real * n2.real;
    temp2.imag = n1.imag * n2.imag;
    return (temp2);
}
complex div(complex n1, complex n2) {
    complex temp3;
    temp3.real = n1.real / n2.real;
    temp3.imag = n1.imag / n2.imag;
    return (temp3);
}