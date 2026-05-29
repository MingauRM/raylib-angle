# Raylib with OpenGL ES 2.0

Link to original repositories:<br>
[ANGLE](https://github.com/google/angle)<br>
[Raylib](https://github.com/raysan5/raylib)

## File structure

SOURCE-FOLDER/ <br>
├── include/ <br>
│   ├── EGL/ (egl.h, eglext.h, eglplatform.h) (From [Khronos headers](https://registry.khronos.org/EGL))<br>
│   ├── GLES2/ (gl2.h, gl2ext.h, gl2platform.h) (From [Khronos headers](https://registry.khronos.org/OpenGL/index_es.php#headers2))<br>
│   ├── raylib/ (raylib.h, raymath.h, rlgl.h) (From [Raylib repo](https://github.com/raysan5/raylib))<br>
│   └── khrplatform.h<br>
├── lib/<br>
│   └── libraylib.a (Manually compiled with GRAPHICS_API_OPENGL_ES2)<br>
├── libEGL.dll (Copied from Google Chrome)<br>
├── libGLESv2.dll (Copied from Google Chrome)<br>
└── main.c<br>

## GCC Command

gcc <your_main_file.c> -o <executable_name.exe> -Iinclude -Iinclude/raylib -Llib -lraylib -lGLESv2 -lEGL -lopengl32 -lgdi32 -lwinmm


## License

This repository/project has no license (All rights reserved), feel free to use it where you want, it's just a pre-compiled version of Raylib + ANGLE to use it on older devices, so you don't need to go through it. Just clone this repository and start working.
