cmake_minimum_required(VERSION 3.18)
project(lexer C)

#set(OPTIONS )
set(CMAKE_C_STANDARD 11)

include_directories(src/include)

add_executable(lexer
        src/include/ast.h
        src/include/lexer.h
        src/include/main.h
        src/include/parser.h
        src/include/token.h
        src/include/visitor.h
        src/include/io.h
        src/ast.c
        src/lexer.c
        src/main.c
        src/parser.c
        src/token.c
        src/visitor.c
        src/io.c)

#target_compile_options(constructor PRIVATE ${OPTIONS})