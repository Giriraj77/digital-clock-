#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main(){

time_t rawtime = 0;
struct tm*pTime= NULL;
bool isRunning = true;


printf("DIGITAL CLOCK\n");
  
while(isRunning){
    
    time(&rawtime);

    pTime = localtime(&rawtime);

    printf("%02d:%02d:%02d\n",pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

    sleep(1);
}
return 0;

}