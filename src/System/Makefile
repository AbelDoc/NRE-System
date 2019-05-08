OBJ = $(OBJDIR)NRE_System.o 
OBJDIR = ../../obj/System/

CPUID = CpuID
INFO = Info

all : childs $(OBJ)

childs:
	@(cd $(CPUID) && $(MAKE))
	@(cd $(INFO) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)