export CXX = g++
export LD = g++

export CFLAGS = -pedantic -Wno-virtual-move-assign -Winline -Wall -Wextra -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -std=c++17
export LDFLAGS = -lstdc++

export INC = -I"/mnt/c/Users/abell/Documents/GitHub/NRE-Math/src" -I"/mnt/c/Users/abell/Documents/GitHub/NRE-Utility/src" 
export LIB = "-lX11" "-lNRE-Math" 
export LIBDIR = -L"/mnt/c/lib/NRE" -L"/usr/X11R6/lib" 

OBJDIR = obj/
BIN = bin/
SRC = src
OBJ = $(OBJDIR)NRE_Main.o $(OBJDIR)OS/Linux/NRE_LinuxSystem.o $(OBJDIR)OS/Linux/Event/NRE_LinuxEventSystem.o $(OBJDIR)OS/Linux/Event/Input/NRE_LinuxInputManager.o $(OBJDIR)OS/Linux/Event/Input/Keys/NRE_LinuxKeyTranslater.o $(OBJDIR)OS/Linux/Graphics/Driver/NRE_LinuxGraphicsDriver.o $(OBJDIR)OS/Linux/Graphics/Window/Internal/NRE_LinuxInternalWindow.o $(OBJDIR)OS/Linux/Graphics/Window/Style/NRE_LinuxWindowStyle.o $(OBJDIR)System/NRE_System.o $(OBJDIR)System/CpuID/NRE_CpuID.o $(OBJDIR)System/Event/Emitter/NRE_AbstractEventEmitter.o $(OBJDIR)System/Event/Input/NRE_InputManager.o $(OBJDIR)System/Graphics/NRE_GraphicsSystem.o $(OBJDIR)System/Graphics/Driver/NRE_GraphicsDriver.o $(OBJDIR)System/Graphics/Window/NRE_Window.o $(OBJDIR)System/Graphics/Window/Attributes/NRE_WindowAttributes.o $(OBJDIR)System/Graphics/Window/Style/NRE_WindowStyle.o $(OBJDIR)System/Info/NRE_SystemInfo.o $(OBJDIR)System/Time/Clock/NRE_Clock.o 
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
	@mkdir obj/OS/
	@mkdir obj/System/
	@mkdir obj/OS/Linux/
	@mkdir obj/OS/Linux/Event/
	@mkdir obj/OS/Linux/Graphics/
	@mkdir obj/OS/Linux/Event/Input/
	@mkdir obj/OS/Linux/Event/Input/Keys/
	@mkdir obj/OS/Linux/Graphics/Driver/
	@mkdir obj/OS/Linux/Graphics/Window/
	@mkdir obj/OS/Linux/Graphics/Window/Internal/
	@mkdir obj/OS/Linux/Graphics/Window/Style/
	@mkdir obj/System/CpuID/
	@mkdir obj/System/Event/
	@mkdir obj/System/Graphics/
	@mkdir obj/System/Info/
	@mkdir obj/System/Time/
	@mkdir obj/System/Event/Emitter/
	@mkdir obj/System/Event/Input/
	@mkdir obj/System/Graphics/Driver/
	@mkdir obj/System/Graphics/Window/
	@mkdir obj/System/Graphics/Window/Attributes/
	@mkdir obj/System/Graphics/Window/Style/
	@mkdir obj/System/Time/Clock/
	@echo "obj-Tree creation done."
	@echo "Clean done."
