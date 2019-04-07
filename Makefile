export CXX = g++
export LD = g++

export CFLAGS = -pedantic -Wno-virtual-move-assign -Winline -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17
export LDFLAGS =

export INC =
export LIB =
export LIBDIR =

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)NRE_Main.o $(OBJDIR)System/Info/NRE_SystemInfo.o $(OBJDIR)System/OS/NRE_AbstractSystem.o $(OBJDIR)System/OS/Linux/NRE_LinuxSystem.o
OUT = Linux/NRE-System

all : childs out

childs :
	@(cd $(SRC) && $(MAKE))

out : $(OBJ)
	@$(LD) $(LIBDIR) -o $(BIN)$(OUT) $^ $(LDFLAGS) $(LIB)
	@echo "Jobs done."

clean :
	@echo "Clear of obj/"
	@rm -r obj
	@mkdir obj
	@mkdir obj/System/
	@mkdir obj/System/Info/
	@mkdir obj/System/OS/
	@mkdir obj/System/OS/Linux/
	@mkdir obj/System/OS/Windows/
	@echo "obj-Tree creation done."
	@echo "Clean done."
