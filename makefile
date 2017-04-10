ClassTable: main.c class.c day.c week.c 
	gcc -o ClassTable main.c class.c day.c week.c -I.
ClassGDB: main.c class.c day.c week.c
	gcc -g main.c class.c day.c week.c -o ClassGDB -I.
