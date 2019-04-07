OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

SYSTEM = System

all : childs $(OBJ)

childs:
	@(cd $(SYSTEM) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)