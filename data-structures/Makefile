IDIR =./include
CXX=g++
CXXFLAGS=-I$(IDIR)

ODIR=obj
LDIR =./lib

_DEPS = dstest.h skiplist.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = dstest.o skiplist.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
		$(CXX) -c -o $@ $< $(CXXFLAGS)

dstest: $(OBJ)
		$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
		rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
