OBJ = $(OBJDIR)NRE_WindowsEventSystem.o 
OBJDIR = ../../../../obj/OS/Windows/Event/

INPUT = Input

all : childs $(OBJ)

childs:
	@(cd $(INPUT) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)