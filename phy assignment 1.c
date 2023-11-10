#include<stdio.h>
int main()
{

    double m,d,theta,wavelength;
    char color[10];
    scanf("%lf %lf %lf",&m,&theta,&d);

    theta=theta*(3.1416/180);

    wavelength =(d*sin(theta))/m;
     if (wavelength >= 380*1e-9 && wavelength <= 449*1e-9) {
        strcpy(color, "violet");
    } else if (wavelength >= 450*1e-9 && wavelength <= 484*1e-9) {
        strcpy(color, "blue");
    } else if (wavelength >= 485*1e-9 && wavelength <= 499*1e-9) {
        strcpy(color, "cyan");
    } else if (wavelength >= 500*1e-9 && wavelength <= 564*1e-9) {
        strcpy(color, "green");
    } else if (wavelength >= 565*1e-9 && wavelength <= 589*1e-9) {
        strcpy(color, "yellow");
    } else if (wavelength >= 590*1e-9 && wavelength <= 624*1e-9) {
        strcpy(color, "orange");
    } else if (wavelength >= 625*1e-9 && wavelength <= 750*1e-9) {
        strcpy(color, "red");
    } else {
        strcpy(color, "unknown");
    }



    printf("%.2e\n",wavelength);
    printf("%s\n",color);



}
