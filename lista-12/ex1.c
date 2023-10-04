#include <stdio.h>

void segundosParaHMS (int total_segundos, int *h, int *m, int *s);

int main()
{
    int seg, hora, min;

    scanf("%d", &seg);

    segundosParaHMS(seg, &hora, &min, &seg);
    printf("%02d:%02d:%02d\n", hora, min, seg);

    return 0;
}

void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
{
    *h = total_segundos/3600;
    *m = (total_segundos%3600)/60;
    *s = (total_segundos%60);
}