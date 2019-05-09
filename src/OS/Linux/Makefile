OBJ = $(OBJDIR)NRE_LinuxSystem.o 
OBJDIR = ../../../obj/OS/Linux/

EVENT = Event
GRAPHICS = Graphics

all : childs $(OBJ)

childs:
	@(cd $(EVENT) && $(MAKE))
	@(cd $(GRAPHICS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)