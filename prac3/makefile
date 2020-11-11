# trying overkill makefile
# very suitable for this project given number of classes involved
### compile settings ###
CC = g++
CFLAGS = -std=c++11 -Wall -Werror -Wextra -pedantic

### project settings ###
SRCS = main Player Human Computer RandomComputer Bureaucrat
OBJS = $(SRCS:=.o)
EXE = main

### release settings ###
RELDIR = release
RELEXE = $(RELDIR)/$(EXE)
RELOBJS = $(addprefix $(RELDIR)/, $(OBJS))
RELCFLAGS = -O3 -DNDEBUG 

### debug settings ###
DBGDIR = debug
DBGEXE = $(DBGDIR)/$(EXE)
DBGOBJS = $(addprefix $(DBGDIR)/, $(OBJS))
DBGCFLAGS = -g -O0 -DDEBUG

### default build ###
all: prep release

### release build ###
release: $(RELEXE)

$(RELEXE): $(RELOBJS)
	$(CC) $(CFLAGS) $(RELCFLAGS) -o $@ $^

$(RELDIR)/%.o: %.cpp
	$(CC) -c $(CFLAGS) $(RELCFLAGS) -o $@ $^

### debug build ###
debug: $(DBGEXE)

$(DBGEXE): $(DBGOBJS)
	$(CC) $(CFLAGS) $(DBGCFLAGS) -o $@ $^

$(DBGDIR)/%.o: %.cpp
	$(CC) -c $(CFLAGS) $(DBGCFLAGS) -o $@ $^


### misc ###
.PHONY = all remake release debug prep clean

prep:
	@mkdir -p $(RELDIR) $(DBGDIR) 

remake: clean all

clean:
	rm -f $(RELEXE) $(RELOBJS) $(DBGEXE) $(DBGOBJS)

