# Курсовая работа. Операционные системы.

`led_blinker.c` - программа для переключения светодиодов через заданное время и по нажатию кнопки, также выводится время нажатия.

`color_sense.c` - программа для считывания цвета с датчика цвета и вывода значения в консоль и именованый канал.

Сборка проекта производится с помощью файла Makefile и команды `make`.

`sudo ./color_sense -q > color_data` - активация программы `color_sense`, данные передаются в именнованый канал `color_data`
 
