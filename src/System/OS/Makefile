OBJ = $(OBJDIR)NRE_AbstractSystem.o 
OBJDIR = ../../../obj/System/OS/

LINUX = Linux
WINDOWS = Windows

all : childs $(OBJ)

childs:
	@(cd $(LINUX) && $(MAKE))
	@(cd $(WINDOWS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)