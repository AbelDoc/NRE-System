export CXX = g++.exe
export LD = g++.exe

export CFLAGS = -pedantic -Wno-virtual-move-assign -Winline -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17
export LDFLAGS = -static -static-libgcc -static-libstdc++

export INC = -I"C:/lib/MinGW64_7.3/include" -I"C:/Users/abell/Documents/GitHub/NRE-Math/src" 
export LIB = "-lmingw32" "-lPsapi" "-lNRE-Math" 
export LIBDIR = -L"C:/lib/MinGW64_7.3/x86_64-w64-mingw32/lib" -L"C:/lib/WindowsKits/10/Lib/10.0.17763.0/um/x64" -L"C:/lib/NRE" 

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)NRE_Main.o $(OBJDIR)OS/Windows/NRE_WindowsSystem.o $(OBJDIR)OS/Windows/Graphics/Window/Internal/NRE_WindowsInternalWindow.o $(OBJDIR)System/NRE_System.o $(OBJDIR)System/CpuID/NRE_CpuID.o $(OBJDIR)System/Info/NRE_SystemInfo.o 
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
	@mkdir obj/OS/
	@mkdir obj/System/
	@mkdir obj/OS/Windows/
	@mkdir obj/OS/Windows/Graphics/
	@mkdir obj/OS/Windows/Graphics/Window/
	@mkdir obj/OS/Windows/Graphics/Window/Internal/
	@mkdir obj/System/CpuID/
	@mkdir obj/System/Info/
	@echo "obj-Tree creation done."
	@echo "Clean done."
