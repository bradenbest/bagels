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
	tar zcf installer.tar.gz installer/
	zip -r installer.zip installer/

bagels: all

.PHONY: all clean install uninstall build
