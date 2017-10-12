CFLAGS += -ansi -Wall

all: nonononoyes yesyesyesyesno
clean: ; rm -rf nonononoyes yesyesyesyesno
yesyesyesyesno: nonononoyes ; cp nonononoyes yesyesyesyesno
