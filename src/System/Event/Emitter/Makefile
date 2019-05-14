OBJ = $(OBJDIR)NRE_AbstractEventEmitter.o 
OBJDIR = ../../../../obj/System/Event/Emitter/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)