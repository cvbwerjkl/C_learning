TARGET = my_prog

BINDIR = bin
OBJDIR = obj

SOURCES = fifo/pop.c \
fifo/push.c \
fifo/isEmpty.c  \
tree/free_tree.c \
tree/print_tree.c \
tree/add_left_leaf.c \
tree/add_right_leaf.c \
tree/root.c \
tree/fill_tree.c

INC1 = fifo
INC2 = tree

ifeq ($(DEBUG), 1)
	override CFLAGS:=-g $(CFLAGS)
	override LDFLAGS:=-g $(LDFLAGS)
endif

ifeq ($(TESTS), 1)
	SOURCES += tests/main.c
else
	SOURCES += main.c
endif

WARNING = -Wall -Wextra -Wpedantic
CFLAGS = -c
LDFLAGS = 

BUILDDIR = $(BINDIR)/$(OBJDIR)


OBJECTS = $(addprefix $(BUILDDIR)/,$(patsubst %.c,%.o,$(notdir $(SOURCES))))
vpath %.c $(sort $(dir $(SOURCES)))

all: $(BUILDDIR) $(BINDIR)/$(TARGET)
	@echo Compiling done

$(BINDIR)/$(TARGET): $(OBJECTS)
	@echo LD       $@
	@gcc $(LDFLAGS) $(OBJECTS) -o $@ 

$(BUILDDIR)/%.o: %.c
	@echo CC       $^
	@gcc $(CFLAGS) $(WARNING) -I$(INC1) -I$(INC2) $< -o $@ 

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