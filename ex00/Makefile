NAME = ex00
CC = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = main
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS) $(TARGET)
re: clean all
