OBJ = $(OBJDIR)NRE_System.o 
OBJDIR = ../../obj/System/

CPUID = CpuID
EVENT = Event
GRAPHICS = Graphics
INFO = Info

all : childs $(OBJ)

childs:
	@(cd $(CPUID) && $(MAKE))
	@(cd $(EVENT) && $(MAKE))
	@(cd $(GRAPHICS) && $(MAKE))
	@(cd $(INFO) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)