# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 19:15:09 by fcorvaro          #+#    #+#              #
#    Updated: 2024/11/25 19:22:10 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Output: Appereance ------------------------------------------------------ #

# Start and end sequences for color codes -- REMEMBER (add ; and m)
START = \033[
END = \033[0m
# ------------  FOREGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BK = 30
R = 31
G = 32
Y = 33
BE = 34
M = 35
C = 36
W = 37
# ------------  BACKGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BKK = 40
RR = 41
GG = 42
YY = 43
BEE = 44
MM = 45
CC = 46
WW = 47
# ------------  TEXT STYLES  ------------------------------------------------- #
# Bold text, Faint text, Italic text, Underlined text, Blinking text ...#
#... Reverse colors, Hidden text, Strikethrough text #
BOLD = 1
FAINT = 2
ITALIC = 3
UNDERLINE = 4
BLINKING = 5
REVERSE =7
HIDDEN = 8
STRIKE = 9

# ------------  COMPILER AND FLAGS  ------------------------------------------ #
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f

# ------------  SOURCES AND OBJECTS  ----------------------------------------- #

SRCS = $(wildcard srcs/*.cpp)
OBJS_DIR = objs
OBJS = $(patsubst srcs/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

# ------------  BUILD TARGET  ------------------------------------------------ #
BUILD = brain
NAME = $(BUILD)

# ------------  PHONY TARGETS  ----------------------------------------------- #
.PHONY: all clean fclean re help

# ------------  DEFAULT TARGETS  --------------------------------------------- #
all: 
	@$(MAKE) -s $(NAME)

# ------------  BUILD EXECUTABLE  -------------------------------------------- #
$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(BUILD) 
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Compilation of $(NAME) completed successfully completed successfully with flags: $(CXXFLAGS)!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(C)m To run the program, use: ./$(BUILD)$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m Author: fcorvaro$(END)"

# ------------  COMPILE OBJECT FILES  ---------------------------------------- #
$(OBJS_DIR)/%.o: srcs/%.cpp | $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $< ...$(END)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# ------------  CREATE OBJECTS DIRECTORY  ------------------------------------ #
$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

# ------------  CLEAN OBJECT FILES  ------------------------------------------ #
clean:
	@if [ -d "$(OBJS_DIR)" ]; then \
		$(RM) -r $(OBJS_DIR); \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Cleaned up object files. $(OBJS_DIR) has been removed. $(END)"; \
	fi

# ------------  CLEAN EXECUTABLE FILE  --------------------------------------- #
fclean: clean
	@if [ -f "$(BUILD)" ]; then \
		$(RM) $(BUILD); \
		echo "$(START)$(BOLD);$(ITALIC);$(G)m Cleaned up executable file. $(BUILD) has been removed. $(END)"; \
	fi
	
# ------------  RECOMPILE PROJECT  ------------------------------------------- #
re: fclean all

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "  $(START)$(BOLD);$(ITALIC);$(G)mAvailable targets:$(END)"
	@echo "  make [command]"
	@echo ""
	@echo "  $(START)$(BOLD);$(Y)mall\t\tCompile the project$(END)"
	@echo "  $(START)$(BOLD);$(Y)mclean\t\tRemove object files$(END)"
	@echo "  $(START)$(BOLD);$(Y)mfclean\tRemove object files and the executable$(END)"
	@echo "  $(START)$(BOLD);$(Y)mre\t\tRecompile the project$(END)"
	@echo "  $(START)$(BOLD);$(Y)mhelp\t\tDisplay this help message$(END)"
	@echo ""
	@echo "  $(START)$(BOLD);$(M)mProject Description:$(END)"
	@echo "This project contains a program that demonstrates the use of pointers and references in C++."
	@echo "The program initializes a string variable with 'HI THIS IS BRAIN', and then creates a pointer"
	@echo "and a reference to this string. It prints the memory addresses and values of the string variable,"
	@echo "the pointer, and the reference to demystify references and address manipulation."