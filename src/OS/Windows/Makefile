OBJ = $(OBJDIR)NRE_WindowsSystem.o 
OBJDIR = ../../../obj/OS/Windows/

EVENT = Event
GRAPHICS = Graphics

all : childs $(OBJ)

childs:
	@(cd $(EVENT) && $(MAKE))
	@(cd $(GRAPHICS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)