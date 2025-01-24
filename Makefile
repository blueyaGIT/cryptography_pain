NAME = turn
CXX = g++
CXXFLAGS = -std=c++11 -Wall
OBJ_DIR := ./obj
DEP_DIR := $(OBJ_DIR)/.deps
INC_DIRS := ./includes
SRC_DIRS := ./srcs
vpath %.cpp $(SRC_DIRS)
vpath %.h $(INC_DIRS)
vpath %.d $(DEP_DIR)

RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
NC = \033[0m
CLEAR_LINE = \033[2K\r

# Source files
SRCS = 	main.cpp \
		morse.cpp \
		nato.cpp \
		utils.cpp

# Object files
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

TOTAL_SRCS = $(words $(SRCS))
CURRENT = 0

# Default rule to compile all
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@echo "$(CLEAR_LINE)$(YELLOW)🚧 Building Turn 🚧$(NC)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(CLEAR_LINE)$(GREEN)✅ Done Compiling ✅$(NC)"

# Object file compilation rule
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(eval CURRENT := $(shell echo $$(($(CURRENT) + 1))))
	@$(eval PERCENT := $(shell echo $$(($(CURRENT) * 100 / $(TOTAL_SRCS)))))
	@printf "$(CLEAR_LINE)$(YELLOW)🚧 Compiling $(PERCENT)%% [$(CURRENT)/$(TOTAL_SRCS)] $(CYAN)$<$(NC) 🚧"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files and libraries
clean:
	@rm -rf $(OBJ_DIR)

# Clean all generated files
fclean: clean
	@echo "$(YELLOW)🚧 Cleaning 🚧$(NC)"
	@sleep 0.15
	@printf "$(RED)🧹 Cleaning in Progress 🧹$(NC)\n"
	@sleep 0.15
	@printf "$(YELLOW)🛁 Scrubbing Code 🛁$(NC)\n"
	@sleep 0.15
	@printf "$(CYAN)🧽 Polishing Project 🧽$(NC)\n"
	@sleep 0.15
	@printf "$(MAGENTA)🧴 Tidying Up 🧴$(NC)\n"
	@sleep 0.15
	@printf "$(GREEN)✅ Done Cleaning ✅$(NC)\n"
	@rm -rf $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re