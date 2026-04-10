# cgmlib - a lightweight mathematics library for graphics

## single header
### just include "cgm.h" and get going

## types:
```cpp
struct vec2;
struct vec3;
struct vec4;
struct mat4;
```

## matrix fuctions:
```cpp
mat4 translate(float x,float y,float z) -> translation matrix

mat4 scale(float x,float y,float z) -> scale matrix

mat4 ortho(float left,float right,float top,float bot,float near,float far); -> ortho matrix

mat4 perspectiv(float fov,float aspect,float near,float far); -> perspectiv matrix

mat4 lookat(vec3 eye, vec3 target,vec3 up) -> look at matrix
```

## building
### you can add it to your project with
```cmake
add_subdirectory(directory to cgm)
...
target_link_libraries(your_project cgm)
```
### or build it with cmake
```
>mkdir out
>cd out
>cmake ../cgm-main
>cmake --build
```