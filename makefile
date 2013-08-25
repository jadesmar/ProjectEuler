BIN = ./bin
.PHONY: 001 002 003 004 005 006 007 008 009 010 011 012

all: 001 002 003 004 005 006 007 008 009 010 011 012

libs: 
	cd func; make
	cp func/*.a lib
	
001:
	cd 001; make
	cp 001/001 $(BIN)

002:
	cd 002; make
	cp 002/002 $(BIN)

003:
	cd 003; make
	cp 003/003 $(BIN)

004:
	cd 004; make
	cp 004/004 $(BIN)

005:
	cd 005; make
	cp 005/005 $(BIN)

006:
	cd 006; make
	cp 006/006 $(BIN)

007:
	cd 007; make
	cp 007/007 $(BIN)

008:
	cd 008; make
	cp 008/008 $(BIN)

009:
	cd 009; make
	cp 009/009 $(BIN)

010:
	cd 010; make
	cp 010/010 $(BIN)

011:
	cd 011; make
	cp 011/011 $(BIN)

012:
	cd 012; make
	cp 012/012 $(BIN)

clean:
	cd 001; make clean
	cd 002; make clean
	cd 003; make clean
	cd 004; make clean
	cd 005; make clean
	cd 006; make clean
	cd 007; make clean
	cd 008; make clean
	cd 009; make clean
	cd 010; make clean
	cd 011; make clean
	cd 012; make clean
