OBJ = 
OBJDIR = ../../../obj/System/OS/

LINUX = Linux
WINDOWS = Windows

all : childs $(OBJ)

childs:
	@(cd $(LINUX) && $(MAKE))
	@(cd $(WINDOWS) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)