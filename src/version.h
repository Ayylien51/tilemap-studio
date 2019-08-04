#ifndef VERSION_H
#define VERSION_H

#define PROGRAM_VERSION 0,3,0
#ifdef _DEBUG
#define PROGRAM_VERSION_STRING "0.3.0 [DEBUG]"
#else
#define PROGRAM_VERSION_STRING "0.3.0"
#endif

#ifdef _WIN32
#define PROGRAM_EXE "tilemapstudio.exe"
#else
#define PROGRAM_EXE "tilemapstudio"
#endif

#define PROGRAM_NAME "Tilemap Studio"

#define PROGRAM_AUTHOR "Rangi"

#define CURRENT_YEAR "2019"

#endif
