OBJ = $(OBJDIR)NRE_System.o 
OBJDIR = ../../obj/System/

CPUID = CpuID
EVENT = Event
GRAPHICS = Graphics
INFO = Info
TIME = Time

all : childs $(OBJ)

childs:
	@(cd $(CPUID) && $(MAKE))
	@(cd $(EVENT) && $(MAKE))
	@(cd $(GRAPHICS) && $(MAKE))
	@(cd $(INFO) && $(MAKE))
	@(cd $(TIME) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)