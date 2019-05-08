OBJ = $(OBJDIR)NRE_LinuxGraphicsDriver.o 
OBJDIR = ../../../../../obj/OS/Linux/Graphics/Driver/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)