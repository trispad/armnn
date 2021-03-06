#
# Copyright © 2021 Arm Ltd and Contributors. All rights reserved.
# SPDX-License-Identifier: MIT
#

# Read the CaffeParser version components from file
file(READ ${CMAKE_CURRENT_LIST_DIR}/../include/armnnCaffeParser/Version.hpp caffeVersion)

# Parse the CaffeParser version components
string(REGEX MATCH "#define CAFFE_PARSER_MAJOR_VERSION ([0-9]*)" _ ${caffeVersion})
set(CAFFE_PARSER_MAJOR_VERSION ${CMAKE_MATCH_1})
string(REGEX MATCH "#define CAFFE_PARSER_MINOR_VERSION ([0-9]*)" _ ${caffeVersion})
set(CAFFE_PARSER_MINOR_VERSION ${CMAKE_MATCH_1})

# Define LIB version
set(CAFFE_PARSER_LIB_VERSION "${CAFFE_PARSER_MAJOR_VERSION}.${CAFFE_PARSER_MINOR_VERSION}")

# Define LIB soversion
set(CAFFE_PARSER_LIB_SOVERSION "${CAFFE_PARSER_MAJOR_VERSION}")


# Read the OnnxParser version components from file
file(READ ${CMAKE_CURRENT_LIST_DIR}/../include/armnnOnnxParser/Version.hpp onnxVersion)

# Parse the OnnxParser version components
string(REGEX MATCH "#define ONNX_PARSER_MAJOR_VERSION ([0-9]*)" _ ${onnxVersion})
set(ONNX_PARSER_MAJOR_VERSION ${CMAKE_MATCH_1})
string(REGEX MATCH "#define ONNX_PARSER_MINOR_VERSION ([0-9]*)" _ ${onnxVersion})
set(ONNX_PARSER_MINOR_VERSION ${CMAKE_MATCH_1})

# Define LIB version
set(ONNX_PARSER_LIB_VERSION "${ONNX_PARSER_MAJOR_VERSION}.${ONNX_PARSER_MINOR_VERSION}")

# Define LIB soversion
set(ONNX_PARSER_LIB_SOVERSION "${ONNX_PARSER_MAJOR_VERSION}")


# Read the TfLiteParser version components from file
file(READ ${CMAKE_CURRENT_LIST_DIR}/../include/armnnTfLiteParser/Version.hpp tfLiteVersion)

# Parse the TfLiteParser version components
string(REGEX MATCH "#define TFLITE_PARSER_MAJOR_VERSION ([0-9]*)" _ ${tfLiteVersion})
set(TFLITE_PARSER_MAJOR_VERSION ${CMAKE_MATCH_1})
string(REGEX MATCH "#define TFLITE_PARSER_MINOR_VERSION ([0-9]*)" _ ${tfLiteVersion})
set(TFLITE_PARSER_MINOR_VERSION ${CMAKE_MATCH_1})

# Define LIB version
set(TFLITE_PARSER_LIB_VERSION "${TFLITE_PARSER_MAJOR_VERSION}.${TFLITE_PARSER_MINOR_VERSION}")

# Define LIB soversion
set(TFLITE_PARSER_LIB_SOVERSION "${TFLITE_PARSER_MAJOR_VERSION}")


# Read the TfParser version components from file
file(READ ${CMAKE_CURRENT_LIST_DIR}/../include/armnnTfParser/Version.hpp tfVersion)

# Parse the TfParser version components
string(REGEX MATCH "#define TF_PARSER_MAJOR_VERSION ([0-9]*)" _ ${tfVersion})
set(TF_PARSER_MAJOR_VERSION ${CMAKE_MATCH_1})
string(REGEX MATCH "#define TF_PARSER_MINOR_VERSION ([0-9]*)" _ ${tfVersion})
set(TF_PARSER_MINOR_VERSION ${CMAKE_MATCH_1})

# Define LIB version
set(TF_PARSER_LIB_VERSION "${TF_PARSER_MAJOR_VERSION}.${TF_PARSER_MINOR_VERSION}")

# Define LIB soversion
set(TF_PARSER_LIB_SOVERSION "${TF_PARSER_MAJOR_VERSION}")