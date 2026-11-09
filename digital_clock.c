#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){

    // DIGITAL CLCOK

    time_t rawtime = 0; // Jan 1 1970 reference time (Epcoh)

    struct tm *p_time = NULL;
    bool is_running = true;

    printf("DIGITAL CLOCK\n");

    while(is_running){
        time(&rawtime);

        p_time = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", p_time->tm_hour, p_time->tm_min, p_time->tm_sec);

        Sleep(1000);
    }

    return 0;
}