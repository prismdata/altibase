#=============================================================================
# Makefile
#=============================================================================

#-----------------------------------------------------------------------------
# tools
#-----------------------------------------------------------------------------
#CC        = /usr/bin/gcc
CC        = /usr/bin/g++

#-----------------------------------------------------------------------------
# Path
#-----------------------------------------------------------------------------
#INCS	  = -I../inc 
#LIB_PATH  = -L../../build/linux64/release
INCS	  = -I./ 
LIB_PATH  = -L./

#-----------------------------------------------------------------------------
# compile options
#-----------------------------------------------------------------------------
#LFLAGS    = -lm -laio -lsdm $(LIB_PATH)
LFLAGS    = -lsdm $(LIB_PATH)
CFLAGS    += -DDEBUG -g -D_UNIX -m64

#-----------------------------------------------------------------------------
# build directory and target
#-----------------------------------------------------------------------------
BUILD_DIR  = ./build
TARGET     = ./utest

#-----------------------------------------------------------------------------
# targets
#-----------------------------------------------------------------------------
SRCS	=	./utest.c
		
OBJS	=	$(addprefix $(BUILD_DIR)/,$(SRCS:.c=.o))

utest:		$(TARGET)

#-----------------------------------------------------------------------------
# link & Make Dynamic Lib
#-----------------------------------------------------------------------------
$(TARGET): $(OBJS)
	@echo ----------------------------------------
	@echo Link : $(TARGET) -- $(BUILD_DIR)
	@echo ----------------------------------------
	$(CC) $(OBJS) -o $(TARGET) $(LFLAGS)
	@echo


#-----------------------------------------------------------------------------
# compile
#-----------------------------------------------------------------------------
$(BUILD_DIR)/%.o : %.c
	@echo ----------------------------------------
	@echo Compile : $< $@ 
	@echo ----------------------------------------
	@test -d $(@D) || mkdir -p $(@D)
	$(CC) $(INCS) $(CFLAGS) -fPIC -c -o $@ $<
	@echo
	

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(TARGET)
