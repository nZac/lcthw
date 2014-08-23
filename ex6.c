#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    printf("Download: [");

    for(int i = 0;  i < 30; i++)
    {

        int t = ceil(log10(i));
        int extra = 1;


        for(; t > 0; t--) {

            if (extra) {
                printf("\b\b");
                extra = 0;
            }

            printf("\b");
        }

        printf("= %i%%", i);
        fflush(stdout);
        sleep(0);

        if (i == 0) {
            printf("\b\b\b");
        }
    }
    printf("]\n");
    printf("");

    return 0;

}
