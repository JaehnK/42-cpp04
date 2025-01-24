CC = clang++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
SRCS_DIR = srcs
OBJS_DIR = objs
SRCS = main.cpp \
    AMateria.cpp \
    Character.cpp \
    Cure.cpp \
    Ice.cpp \
    ICharacter.cpp \
    IMateriaSource.cpp \
    MateriaSource.cpp

HEADR = ./includes/ex03.hpp \
    ./includes/AMateria.hpp \
    ./includes/Character.hpp \
    ./includes/Cure.hpp \
    ./includes/Ice.hpp \
    ./includes/ICharacter.hpp \
    ./includes/IMateriaSource.hpp \
    ./includes/MateriaSource.hpp

SRCS := $(addprefix $(SRCS_DIR)/, $(SRCS))
OBJS := $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
NAME = a.out

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADR) | $(OBJS_DIR)
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -f $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re