CMAKE_MINIMUM_REQUIRED(VERSION 2.6 FATAL_ERROR)

FIND_PATH(TUTORIAL_MACRO_FILE OpenSGToolboxTutorialMacro.cmake "${CMAKE_SOURCE_DIR}/../../Builds/Common" "${CMAKE_SOURCE_DIR}/../build")

INCLUDE("${TUTORIAL_MACRO_FILE}/OpenSGToolboxTutorialMacro.cmake")

PROJECT("ImageProcessing Tutorials")

OPENSG_TOOLBOX_TUTORIALS(0 0 0 "OSGToolbox;OSGInput;OSGImageProcessing")

