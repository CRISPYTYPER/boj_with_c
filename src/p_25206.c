#include <stdio.h>
#include <string.h>

struct Score {
    char className[51];
    double hakjum;
    char dunggup[3];
};

int main(void) {
    struct Score scores[20];
    double total = 0;
    double hakjums = 0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", scores[i].className, &(scores[i].hakjum),
              scores[i].dunggup);
        char *c = scores[i].className;
        double h = scores[i].hakjum;
        char *d = scores[i].dunggup;

        if (strcmp(scores[i].dunggup, "P") != 0) {
            if (strcmp(scores[i].dunggup, "A+") == 0) {
                total += h * 4.5;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "A0") == 0) {
                total += h * 4.0;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "B+") == 0) {
                total += h * 3.5;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "B0") == 0) {
                total += h * 3.0;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "C+") == 0) {
                total += h * 2.5;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "C0") == 0) {
                total += h * 2.0;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "D+") == 0) {
                total += h * 1.5;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "D0") == 0) {
                total += h * 1.0;
                hakjums += h;
            }
            if (strcmp(scores[i].dunggup, "F") == 0) {
                total += h * 0.0;
                hakjums += h;
            }
        }
    }
    printf("%lf\n", total / hakjums);

    return 0;
}