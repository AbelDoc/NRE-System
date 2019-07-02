OBJ = $(OBJDIR)NRE_GraphicsDriver.o 
OBJDIR = ../../../../obj/System/Graphics/Driver/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)