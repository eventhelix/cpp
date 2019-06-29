cmake_minimum_required(VERSION 3.0.0)
project(CPP VERSION 0.1.0)

#Lambda expressions
add_executable(lambda-simple lambda-expressions/simple-lambda-expression.cpp)
add_executable(lambda-value lambda-expressions/lambda-expression-value-capture.cpp)
add_executable(lambda-reference lambda-expressions/lambda-expression-reference-capture.cpp)
add_executable(lambda-this lambda-expressions/lambda-expression-this-capture.cpp)
