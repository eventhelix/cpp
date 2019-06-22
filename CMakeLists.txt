cmake_minimum_required(VERSION 3.0.0)
project(CPP VERSION 0.1.0)



add_executable(lambda-ref lambda-expressions/lambda-expression-reference-capture.cpp)
add_executable(lambda-val lambda-expressions/lambda-expression-value-capture.cpp)
add_executable(lambda-simple lambda-expressions/simple-lambda-expression.cpp)

