Name = Array
Src = main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
Obj = $(Src:.cpp=.o)
Clean = rm -rf
All : $(Name)
$(Name) : $(Obj)
	c++ $(Src) $(CPPFLAGS) -o $(Name)
clean : 
	$(Clean) $(Obj)
fclean :
	$(Clean) $(Name) $(Obj)
re : fclean All