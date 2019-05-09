OBJ = $(OBJDIR)NRE_EventSystem.o 
OBJDIR = ../../../obj/System/Event/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)