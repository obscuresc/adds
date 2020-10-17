### this makefile is overkill but I wanted to try it ###
CPC = g++
CFLAGS = -Wall -Werror -Wextra

### project files ###
SRCS = main.cpp PrefixConverter.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = main

### release build settings ###
RELDIR = release
RELEXE = $(RELDIR)/$(EXECUTABLE)
RELOBJS = $(addprefix $(RELDIR)/, $(OBJS))
RELCFLAGS = -O3 -DNDEBUG

### debug build settings ###
DBGDIR = debug
DBGEXE = $(DBGDIR)/$(EXECUTABLE)
DBGOBJS = $(addprefix $(DBGDIR)/, $(OBJS))
DBGCFLAGS = -g -O0 -DDEBUG


### default build ###
all: prep release

### release build ###
release: $(RELEXE)

$(RELEXE): $(RELOBJS)
	$(CPC) $(CFLAGS) $(RELCFLAGS) -o $@ $^

$(RELDIR)/%.o: %.cpp
	$(CPC) -c $(CFLAGS) $(RELCFLAGS) -o $@ $^

### debug build ###
debug: $(DBGEXE)

$(DBGEXE): $(DBGOBJS)
	$(CPC) $(CFLAGS) $(DBGCFLAGS) -o $@ $^

$(DBGDIR)/%.o: %.cpp
	$(CPC) -c $(CFLAGS) $(DBGCFLAGS) -o $@ $^

### extra ###

.PHONY: all clean debug prep release remake

prep:
	@mkdir -p $(DBGDIR) $(RELDIR)

remake: clean all

clean:
	rm -f $(RELEXE) $(RELOBJS) $(DBGEXE) $(DBGOBJS)


