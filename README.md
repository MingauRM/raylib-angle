# Raylib with OpenGL ES 2.0

## File structure

SOURCE-FOLDER/
├── include/
│   ├── EGL/ (egl.h, eglext.h, eglplatform.h) (From [Khronos headers](https://registry.khronos.org/EGL)
│   ├── GLES2/ (gl2.h, gl2ext.h, gl2platform.h) (From [Khronos headers](https://registry.khronos.org/OpenGL/index_es.php#headers2)))
│   ├── raylib/ (raylib.h, raymath.h, rlgl.h) (From [Raylib repo](https://github.com/raysan5/raylib))
│   └── khrplatform.h
├── lib/
│   └── libraylib.a (Manually compiled with GRAPHICS_API_OPENGL_ES2)
├── libEGL.dll (Copied from Google Chrome)
├── libGLESv2.dll (Copied from Google Chrome)
└── main.c

## GCC Command

*gcc main.c -o main.exe -Iinclude -Iinclude/raylib -Llib -lraylib -lGLESv2 -lEGL -lopengl32 -lgdi32 -lwinmm
