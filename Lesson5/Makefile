TARGET = my_prog

BINDIR = bin
OBJDIR = obj

SOURCES = main.c \
src/pop.c \
src/push.c	

INC = inc

WARNING = -Wall
CFLAGS = -c
LDFLAGS = 

BUILDDIR = $(BINDIR)/$(OBJDIR)

OBJECTS = $(addprefix $(BUILDDIR)/,$(patsubst %.c,%.o,$(notdir $(SOURCES))))
vpath %.c $(sort $(dir $(SOURCES)))

all: $(BUILDDIR) $(BINDIR)/$(TARGET)
	@echo "Compiling done"

$(BINDIR)/$(TARGET): $(OBJECTS)
	@echo $^
	@echo 'LD      ' $@
	@gcc $(LDFLAGS) $(OBJECTS) -o $@ 

$(BUILDDIR)/%.o: %.c
	@echo $^
	@echo 'CC      ' $@
	@gcc $(CFLAGS) $(WARNING) -I$(INC) $< -o $@ 

$(BUILDDIR): $(BINDIR)
	@mkdir $</$(OBJDIR)

$(BINDIR):
	@mkdir $@

clean:
	@rm -f $(BINDIR)/my_prog
	@rm -f $(OBJECTS)
	@echo "Cleaning done"

print:
	@echo $(OBJECTS)
	@echo $(SOURCES)