OBJ = $(OBJDIR)NRE_LinuxSystem.o 
OBJDIR = ../../../../obj/System/OS/Linux/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)