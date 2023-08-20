CC = clang++
cflags = -Wall -std=c++11 -framework CoreFoundation -framework OpenGL
vendorLink = Src/Vendor/stb_image/stb_image.o
libs = /usr/local/lib/libglfw.3.dylib /usr/local/lib/libGLEW.2.2.0.dylib $(vendorLink)
src = Src/*.cpp Src/Vendor/imgui/*.cpp Src/Tests/*.cpp
application =  Engine

build:
	$(CC) $(cflags) $(src) $(libs) -o $(application)
