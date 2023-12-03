NAME = scop

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++20
CPPFLAGS_2 = -O2

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(SRC_DIR)/main.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CPP) $(CPPFLAGS) $(CPPFLAGS_2) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re