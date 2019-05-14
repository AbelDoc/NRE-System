OBJ = 
OBJDIR = ../../../obj/System/Event/

EMITTER = Emitter
INPUT = Input

all : childs $(OBJ)

childs:
	@(cd $(EMITTER) && $(MAKE))
	@(cd $(INPUT) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)