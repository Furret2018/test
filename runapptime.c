#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(int argc, char* argv[])
{
    clock_t begin, end;  // 存储时钟打点数  两次，用于计算代码运行耗时   
    begin = clock();
    printf("Begin: %d \n", begin);
    
    // 获取时间戳  since 00:00 hours, Jan 1, 1970 UTC
    time_t uiElapsedSeconds;       
    time(&uiElapsedSeconds); 
    uiElapsedSeconds = 1;
    printf("Timestampe : %d \n", uiElapsedSeconds);
    
    struct tm * ptm;
    ptm = localtime(&uiElapsedSeconds);   // Convert 
    printf("Year %d, Month %d, day %d \n", ptm->tm_year, ptm->tm_mon, ptm->tm_mday);
    
    
    HWND hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    
    if(hConsoleOut!=INVALID_HANDLE_VALUE){
        printf("OK, get the handle %d \n", hConsoleOut);
    }
    
    end = clock();
    printf("End: %d \n", end);

    return 0;
}
