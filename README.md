# TinCan

## Building
When building it is important to have GLFW and GLEW installed. To build simply run the command ```make```
once done there should be an output file called Engine to run it call ```./Engine```
### How Do I Download GLFW?
To download GLFW first go to: https://www.glfw.org/download<br>
Then scroll down till you see "macOS pre-compiled binaries" download that and now you should see a few folders. Click on lib-x86_64(or if you are on the newer arm macbooks click on lib-arm) and there should be a file called libglfw.3.dylib put that in ```/usr/local/lib```<br>
Then go back to where you downloaded GLFW and you'll see that there is a folder called include click on it and drag the GLFW folder that is inside it to ```/usr/local/include``` then you should be done!

### How Do I Download GLEW?
To download GLEW go to this website: https://sourceforge.net/projects/glew/<br>
Now after is has downloaded click on the folder and you'll see a folder called include inside of the include folder there is a folder called GL drag that into ```/usr/local/include``` then you should open the terminal in the glew directory and run the command ```make``` then after it is done you should see a folder called lib inside of it there should be a file that is along the lines of glew2.2.0.dylib drag that into ```/usr/local/lib``` then you should be all set


## Project Structure
All of the source code is in Src inside of Src there is the actual code, and the folders Res, Tests, and Vendor. Res is where all of the assets are such as textures as well as shaders. Tests is where test code is to test out the engine. Finally last but not least Vendor is where all 3rd party libraries are such as ImGui and GLM
