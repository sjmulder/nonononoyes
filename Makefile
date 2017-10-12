CFLAGS += -ansi -Wall

all: nonononoyes yesyesyesyesno yesnomaybe
clean: ; rm -rf nonononoyes yesyesyesyesno yesnomaybe
yesyesyesyesno:  nonononoyes ; cp nonononoyes yesyesyesyesno
yesnomaybe: nonononoyes ; cp nonononoyes yesnomaybe
