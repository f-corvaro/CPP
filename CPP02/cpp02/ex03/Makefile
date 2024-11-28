# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 19:15:09 by fcorvaro          #+#    #+#              #
#    Updated: 2024/11/28 09:27:20 by fcorvaro         ###   ########.fr        #
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
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -Iinclude

# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f

# ------------  SOURCES AND OBJECTS  ----------------------------------------- #

SRCS = $(wildcard srcs/*.cpp)
OBJS_DIR = objs
OBJS = $(patsubst srcs/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

# ------------  BUILD TARGET  ------------------------------------------------ #
BUILD = bsp
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
	@echo "$(START)$(BOLD);$(ITALIC);$(C)m To check for memory leaks, use: valgrind --leak-check=full ./$(BUILD)$(END)"
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
	@echo "  This project involves implementing a Fixed class and a Point class to represent fixed-point numbers and 2D points, respectively."
	@echo "  The Fixed class includes constructors, a destructor, and member functions to get and set the raw value of the fixed-point number,"
	@echo "  as well as functions to convert between fixed-point and floating-point or integer values. It also overloads various operators for"
	@echo "  comparison, arithmetic, and increment/decrement operations. Additionally, it provides static member functions to find the minimum"
	@echo "  and maximum of two fixed-point numbers."
	@echo "  The Point class represents a point in 2D space with x and y coordinates represented as fixed-point numbers. It includes constructors,"
	@echo "  a destructor, and member functions to get the x and y coordinates. The class follows the Orthodox Canonical Form."
	@echo "  The project also includes a function bsp() that determines if a point is inside a triangle formed by three other points."
	@echo "  The bsp() function returns true if the point is inside the triangle and false otherwise, including when the point is on the edge or a vertex."
	@echo "  Comprehensive tests are implemented to ensure the correct behavior of the Fixed and Point classes, as well as the bsp() function."
	