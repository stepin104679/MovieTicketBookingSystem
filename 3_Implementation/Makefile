# Name of the project
PROJECT_NAME = TICKETBooking

# Output directory
BUILD = build

# All source code files
SRC = src/admin_login.c\
src/all_transactions.c\
src/user_login.c\
src/book_ticket.c\
src/find_movie.c\
src/insert_movie.c\
src/view_all_movies.c\
main.c

# All test source files
TEST_SRC = unity/unity.c\
src/admin_login.c\
src/all_transactions.c\
src/user_login.c\
src/book_ticket.c\
src/find_movie.c\
src/insert_movie.c\
src/view_all_movies.c\
test/test_file.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\
-Itest

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all
$(TEST_NAME):test
# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(TEST_SRC) $(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Call `make run` to run the application
runtest:$(TEST_NAME)
	./$(TEST_OUTPUT)
	
# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
