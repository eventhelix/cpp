cmake_minimum_required(VERSION 3.0.0)
project(CPP VERSION 0.1.0)

#Lambda functions
add_executable(lambda-simple lambda-functions/simple-lambda-function.cpp)
add_executable(lambda-value lambda-functions/lambda-function-value-capture.cpp)
add_executable(lambda-reference lambda-functions/lambda-function-reference-capture.cpp)
add_executable(lambda-this lambda-functions/lambda-function-this-capture.cpp)
