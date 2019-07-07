OBJ = 
OBJDIR = ../../../../../obj/OS/Linux/Graphics/Driver/

CONTEXT = Context

all : childs $(OBJ)

childs:
	@(cd $(CONTEXT) && $(MAKE))

$(OBJDIR)%.o : 
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)