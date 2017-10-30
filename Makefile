SRC=$(wildcard src/*c)
TST=$(wildcard tst/*c)
OBJ=$(patsubst %c, %o, $(SRC))
TSTOBJ=(patsubst %c, %o, $(TST))

INC=inc/

CFLAGS=-I $(inc)

EXE=$(patsubst tst/%.c, exe/%.elf, $(TST))

.SECONDARY:

all: $(EXE)
	@for exe in $(EXE) ;\
	do \
		./$$exe ; \
	done

exe/%.elf: tst/%.o $(OBJ)
	gcc $(OBJ) $< -lm -o $@

%.o: %.c 	
	gcc -c $< -I inc/ -lm -lfftw3 -o $@

clean:
	rm -f $(OBJ) $(EXE) $(TSTOBJ)
