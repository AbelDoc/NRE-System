OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

OS = OS
SYSTEM = System

all : childs $(OBJ)

childs:
	@(cd $(OS) && $(MAKE))
	@(cd $(SYSTEM) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)