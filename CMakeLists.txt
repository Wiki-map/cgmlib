cmake_minimum_required(VERSION 3.10.0)
project(cgmlib VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB_RECURSE MY_SOURCES CONFIG_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_library(cgmlib)
target_include_directories(cgmlib PUBLIC "${CMAKE_SOURCE_DIR}/include/")
target_sources(cgmlib PRIVATE "${MY_SOURCES}")




# testing
enable_testing()

add_executable(vec2add "${CMAKE_SOURCE_DIR}/tests/vec2/vec2add.cpp")
target_link_libraries(vec2add cgmlib)

add_test(
    NAME vec2add
    COMMAND $<TARGET_FILE:vec2add>
)


add_executable(vec2minus "${CMAKE_SOURCE_DIR}/tests/vec2/vec2minus.cpp")
target_link_libraries(vec2minus cgmlib)

add_test(
    NAME vec2minus
    COMMAND $<TARGET_FILE:vec2minus>
)


add_executable(vec2mul "${CMAKE_SOURCE_DIR}/tests/vec2/vec2mul.cpp")
target_link_libraries(vec2mul cgmlib)

add_test(
    NAME vec2mul
    COMMAND $<TARGET_FILE:vec2mul>
)


add_executable(vec2div "${CMAKE_SOURCE_DIR}/tests/vec2/vec2div.cpp")
target_link_libraries(vec2div cgmlib)

add_test(
    NAME vec2div
    COMMAND $<TARGET_FILE:vec2div>
)


add_executable(vec2eql "${CMAKE_SOURCE_DIR}/tests/vec2/vec2eql.cpp")
target_link_libraries(vec2eql cgmlib)

add_test(
    NAME vec2eql
    COMMAND $<TARGET_FILE:vec2eql>
)

add_executable(vec2neql "${CMAKE_SOURCE_DIR}/tests/vec2/vec2neql.cpp")
target_link_libraries(vec2neql cgmlib)

add_test(
    NAME vec2neql
    COMMAND $<TARGET_FILE:vec2neql>
)

add_executable(vec2len "${CMAKE_SOURCE_DIR}/tests/vec2/vec2len.cpp")
target_link_libraries(vec2len cgmlib)

add_test(
    NAME vec2len
    COMMAND $<TARGET_FILE:vec2len>
)

add_executable(vec2norm "${CMAKE_SOURCE_DIR}/tests/vec2/vec2norm.cpp")
target_link_libraries(vec2norm cgmlib)

add_test(
    NAME vec2norm
    COMMAND $<TARGET_FILE:vec2norm>
)


add_executable(vec2dot "${CMAKE_SOURCE_DIR}/tests/vec2/vec2dot.cpp")
target_link_libraries(vec2dot cgmlib)

add_test(
    NAME vec2dot
    COMMAND $<TARGET_FILE:vec2dot>
)




#vec3
add_executable(vec3add "${CMAKE_SOURCE_DIR}/tests/vec3/vec3add.cpp")
target_link_libraries(vec3add cgmlib)

add_test(
    NAME vec3add
    COMMAND $<TARGET_FILE:vec3add>
)


add_executable(vec3minus "${CMAKE_SOURCE_DIR}/tests/vec3/vec3minus.cpp")
target_link_libraries(vec3minus cgmlib)

add_test(
    NAME vec3minus
    COMMAND $<TARGET_FILE:vec3minus>
)


add_executable(vec3mul "${CMAKE_SOURCE_DIR}/tests/vec3/vec3mul.cpp")
target_link_libraries(vec3mul cgmlib)

add_test(
    NAME vec3mul
    COMMAND $<TARGET_FILE:vec3mul>
)


add_executable(vec3div "${CMAKE_SOURCE_DIR}/tests/vec3/vec3div.cpp")
target_link_libraries(vec3div cgmlib)

add_test(
    NAME vec3div
    COMMAND $<TARGET_FILE:vec3div>
)


add_executable(vec3eql "${CMAKE_SOURCE_DIR}/tests/vec3/vec3eql.cpp")
target_link_libraries(vec3eql cgmlib)

add_test(
    NAME vec3eql
    COMMAND $<TARGET_FILE:vec3eql>
)


add_executable(vec3neql "${CMAKE_SOURCE_DIR}/tests/vec3/vec3neql.cpp")
target_link_libraries(vec3neql cgmlib)

add_test(
    NAME vec3neql
    COMMAND $<TARGET_FILE:vec3neql>
)


add_executable(vec3len "${CMAKE_SOURCE_DIR}/tests/vec3/vec3len.cpp")
target_link_libraries(vec3len cgmlib)

add_test(
    NAME vec3len
    COMMAND $<TARGET_FILE:vec3len>
)


add_executable(vec3norm "${CMAKE_SOURCE_DIR}/tests/vec3/vec3norm.cpp")
target_link_libraries(vec3norm cgmlib)

add_test(
    NAME vec3norm
    COMMAND $<TARGET_FILE:vec3norm>
)


add_executable(vec3dot "${CMAKE_SOURCE_DIR}/tests/vec3/vec3dot.cpp")
target_link_libraries(vec3dot cgmlib)

add_test(
    NAME vec3dot
    COMMAND $<TARGET_FILE:vec3dot>
)


add_executable(vec3cross "${CMAKE_SOURCE_DIR}/tests/vec3/vec3cross.cpp")
target_link_libraries(vec3cross cgmlib)

add_test(
    NAME vec3cross
    COMMAND $<TARGET_FILE:vec3cross>
)





#vec4
add_executable(vec4add "${CMAKE_SOURCE_DIR}/tests/vec4/vec4add.cpp")
target_link_libraries(vec4add cgmlib)

add_test(
    NAME vec4add
    COMMAND $<TARGET_FILE:vec4add>
)


add_executable(vec4minus "${CMAKE_SOURCE_DIR}/tests/vec4/vec4minus.cpp")
target_link_libraries(vec4minus cgmlib)

add_test(
    NAME vec4minus
    COMMAND $<TARGET_FILE:vec4minus>
)


add_executable(vec4mul "${CMAKE_SOURCE_DIR}/tests/vec4/vec4mul.cpp")
target_link_libraries(vec4mul cgmlib)

add_test(
    NAME vec4mul
    COMMAND $<TARGET_FILE:vec4mul>
)


add_executable(vec4div "${CMAKE_SOURCE_DIR}/tests/vec4/vec4div.cpp")
target_link_libraries(vec4div cgmlib)

add_test(
    NAME vec4div
    COMMAND $<TARGET_FILE:vec4div>
)


add_executable(vec4mulmat4 "${CMAKE_SOURCE_DIR}/tests/vec4/vec4mulmat4.cpp")
target_link_libraries(vec4mulmat4 cgmlib)

add_test(
    NAME vec4mulmat4
    COMMAND $<TARGET_FILE:vec4mulmat4>
)


add_executable(vec4eql "${CMAKE_SOURCE_DIR}/tests/vec4/vec4eql.cpp")
target_link_libraries(vec4eql cgmlib)

add_test(
    NAME vec4eql
    COMMAND $<TARGET_FILE:vec4mulmat4>
)


add_executable(vec4neql "${CMAKE_SOURCE_DIR}/tests/vec4/vec4neql.cpp")
target_link_libraries(vec4neql cgmlib)

add_test(
    NAME vec4neql
    COMMAND $<TARGET_FILE:vec4mulmat4>
)


add_executable(vec4norm "${CMAKE_SOURCE_DIR}/tests/vec4/vec4norm.cpp")
target_link_libraries(vec4norm cgmlib)

add_test(
    NAME vec4norm
    COMMAND $<TARGET_FILE:vec4norm>
)


add_executable(vec4len "${CMAKE_SOURCE_DIR}/tests/vec4/vec4len.cpp")
target_link_libraries(vec4len cgmlib)

add_test(
    NAME vec4len
    COMMAND $<TARGET_FILE:vec4len>
)


add_executable(vec4dot "${CMAKE_SOURCE_DIR}/tests/vec4/vec4dot.cpp")
target_link_libraries(vec4dot cgmlib)

add_test(
    NAME vec4dot
    COMMAND $<TARGET_FILE:vec4dot>
)