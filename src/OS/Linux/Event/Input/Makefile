OBJ = 
OBJDIR = ../../../../../obj/OS/Linux/Event/Input/

KEYS = Keys

all : childs $(OBJ)

childs:
	@(cd $(KEYS) && $(MAKE))

$(OBJDIR)%.o : 
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)