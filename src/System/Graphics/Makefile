OBJ = $(OBJDIR)NRE_GraphicsSystem.o 
OBJDIR = ../../../obj/System/Graphics/

DRIVER = Driver
WINDOW = Window

all : childs $(OBJ)

childs:
	@(cd $(DRIVER) && $(MAKE))
	@(cd $(WINDOW) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)