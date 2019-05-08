OBJ = $(OBJDIR)NRE_GraphicsSystem.o 
OBJDIR = ../../../obj/System/Graphics/

WINDOW = Window

all : childs $(OBJ)

childs:
	@(cd $(WINDOW) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)