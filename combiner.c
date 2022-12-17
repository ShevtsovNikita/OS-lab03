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

//int red, green, blue;
char color[1];
char color_read[14];                             //буфер для чтения из color_sense
int i = 1;
int fd = open(argv[1], O_RDONLY);
int fdd = open(argv[2], O_RDONLY);

while (1) {
        if(i%2 == 1)
        printf("%d)\n", i/2 + 1);
        read(fd, color_read, 14);
        if(i%2 == 1){
        printf("from color_sense: ");
        puts(color_read);
        color_read[0] = '\0';
        fflush(stdin);
        fflush(stdout);
        //printf("%d", fd);
        }
        read(fdd, color, 1);
        if(i%2 == 1){
        printf("from led_blinker: ");
        puts(color);
        printf("\n");
        //color[0] = '\0';
        fflush(stdin);
        fflush(stdout);
        }
        i = i + 1;
        usleep(1000000);
        }
return 0;
}
