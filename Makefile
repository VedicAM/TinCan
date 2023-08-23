CC = clang++
CPPV = c++17
cflags = -Wall -std=$(CPPV) -framework CoreFoundation -framework OpenGL
vendorLink = Src/Vendor/stb_image/stb_image.o
libs = /usr/local/lib/libglfw.3.dylib /usr/local/lib/libGLEW.2.2.0.dylib $(vendorLink)
src = Src/*.cpp Src/Vendor/imgui/*.cpp Src/Tests/*.cpp
application =  Engine

build:
ifeq (,$(wildcard Src/Vendor/stb_image/stb_image.o))
	$(CC) -c Src/Vendor/stb_image/stb_image.cpp -o Src/Vendor/stb_image/stb_image.o
endif

	$(CC) $(cflags) $(src) $(libs) -o $(application)

clean:
	rm Engine