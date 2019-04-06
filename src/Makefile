OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

HEADER = Header
SYSTEM = System

all : childs $(OBJ)

childs:
	@(cd $(HEADER) && $(MAKE))
	@(cd $(SYSTEM) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)