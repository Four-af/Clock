#include<stdio.h>
#include<windows.h>

int main()
{
    int hour,minute,second;
    int delay=1000;//delay of 1000 milisec to use in sleep
    printf("__Set the Time__ \n\nHour: ");
    scanf("%d",&hour);
    printf("\nMinute: ");
    scanf("%d",&minute);
    printf("\nSecond:");
    scanf("%d",&second);
 //int h,m,s;
    // h=hour;
    
    // m=minute;
    // s=second;
    if (hour>12||minute>60||second>60)
    {
        printf("\nInvalid time entered\n");
        exit(0);
    }
    while(1)
    {
        //printf("\nTime Entered-> %02d : %02d : %02d",h,m,s);
        second++;
        if (second>59)
        {
            minute++;
            second=0;
        }
        if (minute>59)
        {
            hour++;
            minute=0;
        }
        if (hour>23)
        {
            hour=0;
        }
        printf("\n\n__Clock__\n\n");
        printf("%02d : %02d : %02d",hour,minute,second);
        Sleep(delay);
        system("cls");
   }   
}