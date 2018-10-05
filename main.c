#include <stdio.h>
#include <math.h>
//Autor: Bruno Portilla
// CON ESTE PROGRAMA SACAREMOS TODOS LOS COMPONENTES TRIGONOMETRICOS DE UN ANGULO

void seno(double anglesen) {        //en cada void se hace una operacion trigonometrica y se muestra el resultado al final
    double sen = 0;
    sen = (sin(anglesen));
    printf("sin: %lf \n", sen);
}

void coseno(double anglec) {
    double cose = 0;
    cose = (cos(anglec));
    printf("cos: %lf \n", cose);
}

void tangente(double anglet) {
    double tang = 0;
    tang = (tan(anglet));
    printf("tan: %lf \n", tang);
}

void cotangente(double anglecot) {
    double cot = 0;
    cot = (1/tan(anglecot));
    printf("cot: %lf \n", cot);
}

void secante(double anglesec) {
    double sec = 0;
    sec = (1/cos(anglesec));
    printf("sec: %lf \n", sec);
}

void cosecante(double angle) {
    double csc = 0;
    csc = (1/sin(angle));
    printf("csc: %lf \n", csc);
}
int main() {
    double deegre;
    double radian;
    printf("Please insert an angle in deegres: \n");
    scanf("%lf", &deegre);

    radian = (deegre*0.0174533);    //converti en andulo a radianes

    printf("Here are the results: \n");

    seno(radian);
    coseno(radian);     //aqui mande mi angilo en radianes a cada una de las operaccines trigonomertricas
    tangente(radian);
    secante(radian);
    cotangente(radian);
    cosecante(radian);
}

