NAME = cryptography.a
CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRCS_DIR = ./
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
NC = \033[0m
CLEAR_LINE = \033[2K\r

# Source files
SRCS_FILES = 	main.cpp \
				morse.cpp \
				nato.cpp \
				utils.cpp

# Combine SRCS_DIR and the source filenames
SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

TOTAL_SRCS = $(words $(SRCS))
CURRENT = 0

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule to compile all
all: $(LIBFT) $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o turn $(OBJS)
	@echo "\n$(GREEN)✅ Done Compiling ✅$(NC)"

# Object file compilation rule
.cpp.o:
	@$(eval CURRENT := $(shell echo $$(($(CURRENT) + 1))))
	@$(eval PERCENT := $(shell echo $$(($(CURRENT) * 100 / $(TOTAL_SRCS)))))
	@printf "$(CLEAR_LINE)$(YELLOW)Compiling $(PERCENT)%% [$(CURRENT)/$(TOTAL_SRCS)] $(CYAN)$<$(NC)"
	@$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)

# Clean all generated files
fclean: clean
	@echo "$(YELLOW)🚧 Cleaning 🚧$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(RED)🧹 Cleaning in Progress 🧹$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(YELLOW)🛁 Scrubbing Code 🛁$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(CYAN)🧽 Polishing Project 🧽$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(MAGENTA)🧴 Tidying Up 🧴$(NC)"
	@sleep 0.3
	@printf "$(CLEAR_LINE)$(GREEN)✅ Done Cleaning ✅$(NC)\n"
	@rm -f $(NAME) turn

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re