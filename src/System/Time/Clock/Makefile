OBJ = $(OBJDIR)NRE_Clock.o 
OBJDIR = ../../../../obj/System/Time/Clock/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)