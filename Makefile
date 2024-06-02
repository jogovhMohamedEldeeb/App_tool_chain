

TCH = arm-none-eabi-
OPT = -mcpu=cortex-m3 -mthumb
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : app.hex

app.hex : app.elf
	$(TCH)objcopy -O ihex $< $@

app.elf : $(OBJ)
	$(TCH)ld -T LinkerScript.ld $(OBJ) -o $@

%.o : %.c
	$(TCH)gcc -c $(OPT) $< -o $@
		
clean : 
	del *.o *.hex *.elf