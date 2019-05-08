OBJ = $(OBJDIR)NRE_LinuxSystem.o 
OBJDIR = ../../../obj/OS/Linux/

GRAPHICS = Graphics

all : childs $(OBJ)

childs:
	@(cd $(GRAPHICS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)