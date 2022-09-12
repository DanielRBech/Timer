#include <stdio.h>

int main() {
    int seconds,
        minutes,
        hours,
        days,
        weeks;


    printf("this program computes time from seconds \n");
    printf("Type the amout of seconds: ");
    scanf("%d", &seconds);

        minutes = seconds/60;
        seconds = seconds%60;
        hours = minutes/60;
        minutes = minutes%60;
        days = hours/24;
        hours = hours%24;
        weeks = days/7;
        days = days%7;

    printf("%d weeks, %d days, %d hours, %d minutes, %d seconds", weeks, days, hours, minutes, seconds);
    return 0;

}
