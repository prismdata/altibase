# platform_hpux.GNU,v 4.14 1999/03/08 21:36:07 shuston Exp

debug = 1

# First, extract the OS version number.
HPVERS_WORDS := $(subst ., ,$(shell uname -r))
HPUX_VERS       := $(join $(word 2,$(HPVERS_WORDS)),$(word 3,$(HPVERS_WORDS)))
#

CC              = /bin/cc
CXX             = /usr/bin/CC -pta -ti,/bin/true -tr,/bin/true
CFLAGS          = -Aa -z +a1
CCFLAGS         = $(CFLAGS) -D_REENTRANT -DPDL_LACKS_PRAGMA_ONCE -DHPUX_VERS=$(HPUX_VERS)
DCFLAGS         += -g
CDLD            = /bin/cc
DLD             = /usr/bin/CC
LD              = /usr/bin/CC
PIC             = +Z
ARFLAGS         = ruv
RANLIB          = echo
LDFLAGS         = -L$(PD_DIR)/pdl -Wl,+s
LIBS            += -lxti
SOFLAGS         = -b
SOEXT           = sl
SOBUILD     = @echo ""; \
  echo "$(COMPILE.cc) $(PIC) -o $(VSHDIR)$*.o $<"; \
  $(COMPILE.cc) $(PIC) -o $(VSHDIR)$*.o $<; \
  echo "$(SOLINK.cc) -o $@ $(VSHDIR)$*.o"; \
  $(SOLINK.cc) -o $@ $(VSHDIR)$*.o





