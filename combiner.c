#include <stdio.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void read_light(char color)
{
        int fd = fopen("/home/pi/IVT33_Shevtsov_Nikita/light", "r");
        fscanf(fd, &color);
        fclose(fd);
}

void detected_light(int red, int green, int blue)
{
        char str[20];
        int fd = fopen("/home/pi/IVT33_Shevtsov_Nikita/color_data", "r");
        fcanf("%d %d %d", &red, &green, &blue);
}

void main()
{
        char real;
        int red, grin, blue;
        while(1)
        {
        read_light(real);
        detected_light(red, green, blue);

        if(red > green & red > blue && real == "R"){
                printf("Red");
                fflush(stdout);
        }
        else
        if(green > red && green > blue && real == "G"){
                printf("Green");
                fflush(stdout);
        }
        else
        if(blue > red && blue > green && real == "B"){
                printf("Blue");
                fflush(stdout);
        }

        else{
                printf("Wrong detection");
                fflush(stdout);
        }
        usleep(100);
}



