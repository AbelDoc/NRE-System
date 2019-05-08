OBJ = $(OBJDIR)NRE_System.o 
OBJDIR = ../../obj/System/

CPUID = CpuID
INFO = Info
OS = OS

all : childs $(OBJ)

childs:
	@(cd $(CPUID) && $(MAKE))
	@(cd $(INFO) && $(MAKE))
	@(cd $(OS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)