OBJ = $(OBJDIR)NRE_WindowsSystem.o 
OBJDIR = ../../../../obj/System/OS/Windows/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)