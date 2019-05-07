export CXX = g++.exe
export LD = g++.exe

export CFLAGS = -pedantic -Wno-virtual-move-assign -Winline -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17
export LDFLAGS = -static -static-libgcc -static-libstdc++

export INC = -I"C:\lib\MinGW64_7.3\include"
export LIB = "-lmingw32" "-lPsapi"
export LIBDIR = -L"C:\lib\MinGW64_7.3\x86_64-w64-mingw32\lib" -L"C:\lib\WindowsKits\10\Lib\10.0.17763.0\um\x64"

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)NRE_Main.o $(OBJDIR)System/CpuID/NRE_CpuID.o $(OBJDIR)System/Info/NRE_SystemInfo.o $(OBJDIR)System/OS/NRE_AbstractSystem.o $(OBJDIR)System/OS/Windows/NRE_WindowsSystem.o 
OUT = Windows/NRE-System

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
	@mkdir obj/System/CpuID/
	@mkdir obj/System/Info/
	@mkdir obj/System/OS/
	@mkdir obj/System/OS/Linux/
	@mkdir obj/System/OS/Windows/
	@echo "obj-Tree creation done."
	@echo "Clean done."
