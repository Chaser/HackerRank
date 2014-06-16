# ==========================================
#   Template Project
#   Copyright (c) 2014 Chase Johnson
# ========================================== 

PROJECT_DIR = ../
TARGET_BASE_1 = SolveMeFirst
TARGET_BASE_2 = UtopianTree
TARGET_BASE_3 = ServiceLane
TARGET_BASE_4 = TheLoveLetterMystery
TARGET_BASE_5 = Gemstones



#COMPILIER = gcc
COMPILER = g++
OUTPUT_DIRECTORY = -o $(PROJECT_DIR)/bin/

ifeq ($(OS),Windows_NT)
	TARGET_EXTENSION=.exe
else
	TARGET_EXTENSION=.out
endif




#INCLUDE FILES


#SYMBOLS



#SOURCE FILES
SOURCE_FILES_1=$(PROJECT_DIR)src/main/SolveMeFirst.cpp
SOURCE_FILES_2=$(PROJECT_DIR)src/main/UtopianTree.cpp
SOURCE_FILES_3=$(PROJECT_DIR)src/main/ServiceLane.cpp
SOURCE_FILES_4=$(PROJECT_DIR)src/main/TheLoveLetterMystery.cpp
SOURCE_FILES_5=$(PROJECT_DIR)src/main/Gemstones.cpp




CLEANUP = rm -f $(PROJECT_DIR)/build/* ; mkdir -p $(PROJECT_DIR)/build

#Check for windows otherwise assume OSX (Darwin) or posix
#ifeq ($(OS),Windows_NT)
#else
#	CLEANUP = rm -f build/* ; rm -f $(TARGET) ; mkdir -p build

#endif

all: clean default

default:
	$(info *** Default Action - Building Project ***)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES_1) $(OUTPUT_DIRECTORY)$(TARGET_BASE_1)$(TARGET_EXTENSION)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES_2) $(OUTPUT_DIRECTORY)$(TARGET_BASE_2)$(TARGET_EXTENSION)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES_3) $(OUTPUT_DIRECTORY)$(TARGET_BASE_3)$(TARGET_EXTENSION)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES_4) $(OUTPUT_DIRECTORY)$(TARGET_BASE_4)$(TARGET_EXTENSION)
	$(COMPILER) $(INC_DIRS) $(SYMBOLS) $(SOURCE_FILES_5) $(OUTPUT_DIRECTORY)$(TARGET_BASE_5)$(TARGET_EXTENSION)

	

clean:
	$(CLEANUP)