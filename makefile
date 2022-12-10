
PRG = mathlib.exe
OBJS = obj/main.o obj/add.o obj/sub.o

CC = g++
CFLAGS = 
LFLAGS = 

.PHONY: all clean

# Build executable by default
all: bin/${PRG}

# Create build output directories if they don't exist
bin obj:
	@[ -d "$@" ] && true || mkdir "$@"

# Compile object files for executable
obj/%.o: src/%.c | obj
	${CC} -I./include ${CFLAGS} -c "$<" -o "$@"

# Build the executable
bin/${PRG}: ${OBJS} | bin
	${CC} -static-libgcc -o "$@" ${OBJS} ${LFLAGS}

# Delete all build output
clean:
	@[ -d ./obj ] && rm -r ./obj || true
#	@[ -f ./bin/${PRG} ] && rm ./bin/${PRG} || true

# Run the executable
run:
	@./bin/${PRG}
