#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    time_t rawtime;
    struct tm * timeinfo;
    fp = fopen("mhaic", "a");
    setlocale(LC_TIME, "pt_BR.UTF-8");
    char dateInChar[60];
    char add[14];
    strncpy(add, " +1 inter. \n", 14);

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(dateInChar,60,"%c", timeinfo);
    fputs(dateInChar,fp);
    fputs(add,fp);

    fclose(fp);
    fp = NULL;


/*  %d    // dia do mes (01-31).
    %b    // nome do mês abreviado.
    %Y    // ano com seculo.
*/
    return 0;
}
