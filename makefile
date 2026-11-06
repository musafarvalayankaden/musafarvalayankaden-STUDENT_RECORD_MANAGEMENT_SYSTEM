student: stud_del.o stud_main.o stud_save.o stud_add.o stud_mod.o   stud_show.o
	cc stud_del.o stud_main.o stud_save.o stud_add.o stud_mod.o stud_show.o -o student

stud_del.o: stud_del.c
	cc -c stud_del.c
stud_main.o: stud_main.c
	 cc -c stud_main.c
stud_save.o: stud_save.c
	 cc -c stud_save.c
stud_add.o: stud_add.c
	 cc -c stud_add.c
stud_mod.o: stud_mod.c
	 cc -c stud_mod.c
stud_show.o: stud_show.c
	cc -c stud_show.c
clear:
	@echo "cleaning up....."
	@rm -r *.o
  

