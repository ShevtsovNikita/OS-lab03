#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
int delay_micros;
//int red, green, blue;
char color[1];
char color_read[13];                             //буфер для чтения из color_sense

delay_micros = argc * 1000000;

while (1) {
        int fd = open(argv[1], O_RDONLY);
        printf("%d", fd);
        read(fd, color_read, 13);
        close(fd);
        printf("from color_sense: ");
        puts(color_read);
        printf("\n");
        fflush(stdin);
        fflush(stdout);
        int fdd = open(argv[2], O_RDONLY);
        printf("%d", fd);
        read(fdd, color, 1);
        close(fdd);
        printf("from led_blinker: %s\n", color);
        fflush(stdin);
        fflush(stdout);                                  //?

        usleep(delay_micros);
        }
return 0;
}


