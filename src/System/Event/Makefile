OBJ = 
OBJDIR = ../../../obj/System/Event/

EMITTER = Emitter
EVENT = Event
INPUT = Input

all : childs $(OBJ)

childs:
	@(cd $(EMITTER) && $(MAKE))
	@(cd $(EVENT) && $(MAKE))
	@(cd $(INPUT) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)