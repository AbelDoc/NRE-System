OBJ = $(OBJDIR)NRE_AbstractSystem.o 
OBJDIR = ../../../obj/System/OS/

WINDOWS = Windows

all : childs $(OBJ)

childs:
	@(cd $(WINDOWS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)