OBJ = $(OBJDIR)NRE_WindowsEventSystem.o 
OBJDIR = ../../../../obj/OS/Windows/Event/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)