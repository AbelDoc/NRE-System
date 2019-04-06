OBJ = $(OBJDIR)NRE_SystemInfo.o 
OBJDIR = ../../../obj/System/Info/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)