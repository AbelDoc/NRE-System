OBJ = $(OBJDIR)NRE_CpuID.o 
OBJDIR = ../../../obj/System/CpuID/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)