NAME = megaphone

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(addprefix .build/, $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

.build/%.o: %.cpp | .build
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

.build:
	mkdir -p .build

-include $(DEPS)

re: fclean all

clean:
	rm -rf $(OBJS) .build

fclean: clean
	rm -rf $(NAME)

.PHONY: all re fclean clean