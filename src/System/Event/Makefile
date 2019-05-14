OBJ = 
OBJDIR = ../../../obj/System/Event/

EMITTER = Emitter

all : childs $(OBJ)

childs:
	@(cd $(EMITTER) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)