CC := loongarch64-linux-gnu-gcc
CFLAGS := -I/opt/lib/la64-castor-lib
LDFLAGS := -L/opt/lib/la64-castor-lib/alsa
####################################################################################################
#CC := gcc
#CFLAGS := -I/opt/lib/la64-castor-lib
#LDFLAGS := -L/opt/lib//usr/lib/x86_64-linux-gnu

LIBS := -lasound  # 链接 libasound 库
####################################################################################################
all: radio

radio:radio.c cas_alsa.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)

clean:
	rm -f radio

tp:
	scp radio 192.168.1.6:/home/
