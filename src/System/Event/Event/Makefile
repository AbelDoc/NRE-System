OBJ = 
OBJDIR = ../../../../obj/System/Event/Event/

WINDOW = Window

all : childs $(OBJ)

childs:
	@(cd $(WINDOW) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)