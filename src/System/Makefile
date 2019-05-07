CPUID = CpuID
INFO = Info
OS = OS

all : childs 

childs:
	@(cd $(CPUID) && $(MAKE))
	@(cd $(INFO) && $(MAKE))
	@(cd $(OS) && $(MAKE))

