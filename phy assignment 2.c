#include <stdio.h>

int main() {
    double m1=3,lembda1=530e-9,theta=65.0;

    double theta1=theta*3.1416/180;
    double sine= sin(theta1);

    double d= m1*lembda1/sine;


    double m2=2,lembda2=700e-9;

    double solve= asin((m2*lembda2)/d);

    double answer=solve*180/3.1416;

    printf("%lf\n",answer);


}
