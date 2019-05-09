OBJ = $(OBJDIR)NRE_Window.o 
OBJDIR = ../../../../obj/System/Graphics/Window/

ATTRIBUTES = Attributes
STATUS = Status
STYLE = Style

all : childs $(OBJ)

childs:
	@(cd $(ATTRIBUTES) && $(MAKE))
	@(cd $(STATUS) && $(MAKE))
	@(cd $(STYLE) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)