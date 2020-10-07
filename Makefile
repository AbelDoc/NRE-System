export CXX = g++.exe
export LD = g++.exe

export CFLAGS =  -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -O3 -std=c++20
export LDFLAGS = -static -static-libgcc -static-libstdc++

export INC = -I"C:/lib/MinGW64_10.2/include" -I"C:/lib/Glew/include" -I"C:/Users/abell/Documents/GitHub/NRE-Math/src" -I"C:/Users/abell/Documents/GitHub/NRE-Core/src" 
export LIB = "-lmingw32" "-lPsapi" "-lgdi32" "-lOpenGL32" "C:\lib\Glew\lib\libglew32.dll.a" 
export LIBDIR = -L"C:/lib/MinGW64_10.2/x86_64-w64-mingw32/lib" -L"C:/lib/WindowsKits/10/Lib/10.0.17763.0/um/x64" -L"C:/lib/NRE" -L"C:/lib/Glew/lib" 

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)OS/Windows/NRE_WindowsSystem.o $(OBJDIR)OS/Windows/Event/NRE_WindowsEventSystem.o $(OBJDIR)OS/Windows/Graphics/Driver/Context/NRE_WindowsContext.o $(OBJDIR)OS/Windows/Graphics/Window/Internal/NRE_WindowsInternalWindow.o $(OBJDIR)OS/Windows/Graphics/Window/Style/NRE_WindowsWindowStyle.o $(OBJDIR)System/NRE_System.o $(OBJDIR)System/CpuID/NRE_CpuID.o $(OBJDIR)System/Event/Emitter/NRE_AbstractEventEmitter.o $(OBJDIR)System/Event/Event/Window/NRE_WindowCloseEvent.o $(OBJDIR)System/Event/Input/NRE_InputManager.o $(OBJDIR)System/Graphics/NRE_GraphicsSystem.o $(OBJDIR)System/Graphics/Driver/NRE_GraphicsDriver.o $(OBJDIR)System/Graphics/Window/NRE_Window.o $(OBJDIR)System/Graphics/Window/Attributes/NRE_WindowAttributes.o $(OBJDIR)System/Graphics/Window/Style/NRE_WindowStyle.o $(OBJDIR)System/Info/NRE_SystemInfo.o $(OBJDIR)System/Time/Clock/NRE_Clock.o 
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
	@mkdir obj/OS/Windows/Event/
	@mkdir obj/OS/Windows/Graphics/
	@mkdir obj/OS/Windows/Graphics/Driver/
	@mkdir obj/OS/Windows/Graphics/Window/
	@mkdir obj/OS/Windows/Graphics/Driver/Context/
	@mkdir obj/OS/Windows/Graphics/Window/Internal/
	@mkdir obj/OS/Windows/Graphics/Window/Style/
	@mkdir obj/System/CpuID/
	@mkdir obj/System/Event/
	@mkdir obj/System/Graphics/
	@mkdir obj/System/Info/
	@mkdir obj/System/Time/
	@mkdir obj/System/Event/Emitter/
	@mkdir obj/System/Event/Event/
	@mkdir obj/System/Event/Input/
	@mkdir obj/System/Event/Event/Window/
	@mkdir obj/System/Graphics/Driver/
	@mkdir obj/System/Graphics/Window/
	@mkdir obj/System/Graphics/Window/Attributes/
	@mkdir obj/System/Graphics/Window/Style/
	@mkdir obj/System/Time/Clock/
	@echo "obj-Tree creation done."
	@echo "Clean done."
