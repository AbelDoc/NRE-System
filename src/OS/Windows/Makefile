OBJ = $(OBJDIR)NRE_WindowsSystem.o 
OBJDIR = ../../../obj/OS/Windows/

GRAPHICS = Graphics

all : childs $(OBJ)

childs:
	@(cd $(GRAPHICS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)