OBJ = $(OBJDIR)NRE_LinuxEventSystem.o 
OBJDIR = ../../../../obj/OS/Linux/Event/

INPUT = Input

all : childs $(OBJ)

childs:
	@(cd $(INPUT) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)