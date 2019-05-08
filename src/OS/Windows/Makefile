OBJ = $(OBJDIR)NRE_WindowsSystem.o 
OBJDIR = ../../../obj/OS/Windows/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)