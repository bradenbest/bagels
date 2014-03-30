all:
	cd src && $(MAKE)
	mv src/bagels ./
clean:
	cd src && $(MAKE) clean
install: bagels
	mv $^ usr/local/bin
uninstall:
	rm usr/local/bin/bagels
build: bagels
	mv $^ installer/build/

bagels: all

.PHONY: all clean install uninstall build
