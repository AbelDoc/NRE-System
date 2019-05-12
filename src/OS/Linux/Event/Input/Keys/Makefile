OBJ = $(OBJDIR)NRE_LinuxKeyTranslater.o 
OBJDIR = ../../../../../../obj/OS/Linux/Event/Input/Keys/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)