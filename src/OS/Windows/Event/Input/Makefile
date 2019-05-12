OBJ = $(OBJDIR)NRE_WindowsInputManager.o 
OBJDIR = ../../../../../obj/OS/Windows/Event/Input/

KEYS = Keys

all : childs $(OBJ)

childs:
	@(cd $(KEYS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)