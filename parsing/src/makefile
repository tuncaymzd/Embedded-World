all: myapp

myapp: failist_parse_id_plane.o failist_parse_type_plane.o failist_parse_nb_failures.o failist_parse_id_failure.o failist_parse_id_component.o failist_parse_level_criticity.o failist_parse_comment_failure_size.o failist_parse_comment_failure.o failist_parse_header.o failist_parse_failure.o failist_parse_date.o main.o
	gcc -g -o myapp failist_parse_id_plane.o failist_parse_type_plane.o failist_parse_nb_failures.o failist_parse_id_failure.o failist_parse_id_component.o failist_parse_level_criticity.o failist_parse_comment_failure_size.o failist_parse_comment_failure.o failist_parse_header.o failist_parse_failure.o failist_parse_date.o main.o

failist_parse_id_plane.o: failist_parse_id_plane.c
	gcc -o failist_parse_id_plane.o -c failist_parse_id_plane.c -W -Wall -ansi -pedantic

failist_parse_type_plane.o: failist_parse_type_plane.c
	gcc -o failist_parse_type_plane.o -c failist_parse_type_plane.c -W -Wall -ansi -pedantic

failist_parse_nb_failures.o: failist_parse_nb_failures.c
	gcc -o failist_parse_nb_failures.o -c failist_parse_nb_failures.c -W -Wall -ansi -pedantic

failist_parse_id_failure.o: failist_parse_id_failure.c
	gcc -o failist_parse_id_failure.o -c failist_parse_id_failure.c -W -Wall -ansi -pedantic

failist_parse_id_component.o: failist_parse_id_component.c
	gcc -o failist_parse_id_component.o -c failist_parse_id_component.c -W -Wall -ansi -pedantic

failist_parse_level_criticity.o: failist_parse_id_component.c
	gcc -o failist_parse_level_criticity.o -c failist_parse_level_criticity.c -W -Wall -ansi -pedantic

failist_parse_comment_failure_size.o: failist_parse_comment_failure_size.c
	gcc -o failist_parse_comment_failure_size.o -c failist_parse_comment_failure_size.c -W -Wall -ansi -pedantic

failist_parse_comment_failure.o: failist_parse_comment_failure.c
	gcc -o failist_parse_comment_failure.o -c failist_parse_comment_failure.c -W -Wall -ansi -pedantic

failist_parse_header.o: failist_parse_header.c
	gcc -o failist_parse_header.o -c failist_parse_header.c -W -Wall -ansi -pedantic

failist_parse_failure.o: failist_parse_failure.c
	gcc -o failist_parse_failure.o -c failist_parse_failure.c -W -Wall -ansi -pedantic

failist_parse_date.o: failist_parse_date.c
	gcc -o failist_parse_date.o -c failist_parse_date.c -W -Wall -ansi -pedantic

main.o: main.c failist_parse_id_plane.h failist_parse_type_plane.h failist_parse_nb_failures.h failist_parse_id_failure.h failist_parse_id_component.h failist_parse_level_criticity.h failist_parse_comment_failure_size.h failist_parse_comment_failure.h failist_parse_header.h failist_parse_failure.h failist_parse_date.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o
	rm -rf *.gch

mrproper: clean
	rm -rf myapp