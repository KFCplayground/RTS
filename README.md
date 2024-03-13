# RTS
## Real Time Strategy project
## Started 13 III 2024
## Authors: okryp@github.com, JustKurayy@github.com

- [dependencies](#dependencies)
- [building](#building)

### dependencies:

- cc comes in the box with debian
- raylib is built on the system, this is mandatory for the build process
make and git
`sudo apt install build-essential git`

ALSA for audio, Mesa for OpenGL accelerated graphics, and X11 for windowing system
`sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev`

### building:

using make you have the options of:

`make build`

which creates a compiled executable in the root directory by the name rts. Runnable by running `./rts`

`make clean`

removes all build files
