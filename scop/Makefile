CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++20 -Idependencies
LDFLAGS := -lglfw -ldl

SRC_DIR := src
OBJ_DIR := obj
DEP_DIR := dependencies

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
GLAD_FILES := $(DEP_DIR)/glad/glad.c
TARGET := scop

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(GLAD_FILES) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re