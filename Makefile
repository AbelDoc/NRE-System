export CXX = g++.exe
export LD = g++.exe

export CFLAGS = -pedantic -Wno-virtual-move-assign -Winline -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17
export LDFLAGS = -lpsapi

export INC = -I"C:\lib\MinGW64_7.3\include" 
export LIB = "C:\lib\MinGW64_7.3\x86_64-w64-mingw32\lib\libmingw32.a" 
export LIBDIR = -L"C:\lib\MinGW64_7.3\lib" 

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)NRE_Main.o $(OBJDIR)System/Info/NRE_SystemInfo.o $(OBJDIR)System/OS/NRE_AbstractSystem.o $(OBJDIR)System/OS/Windows/NRE_WindowsSystem.o 
OUT = NRE-System

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
	@mkdir obj/Header/
	@mkdir obj/System/
	@mkdir obj/System/Info/
	@mkdir obj/System/OS/
	@mkdir obj/System/OS/Windows/
	@echo "obj-Tree creation done."
	@echo "Clean done."
