SRC = unity/unity.c\
src/src.c\
test/testfile2.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = student_database.exe

BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

clean:
	rm -rf $(PROJECT_NAME)
