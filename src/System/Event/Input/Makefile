OBJ = $(OBJDIR)NRE_InputManager.o 
OBJDIR = ../../../../obj/System/Event/Input/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)