	char str[255];
	FILE *S1 = fopen("S1.txt", "a+");
	fgets(str,255,S1);
	printf("Str = %s\n",str);
	memset( str, 0x0, 255 );
	fseek( S1, 0, SEEK_SET );
	fgets(str,255,S1);
	printf("Str = %s\n",str);
	fclose(S1);

	int fd;
	int fd2;
	unsigned int size;
	char buf[255] = "Hello";
	fd = open ("name", O_CREAT | O_RDWR, S_IRWXU);
	fd2 = open ("name2", O_CREAT | O_RDWR, S_IRWXU);
	printf ("Создание %d\n",fd);
	printf ("Создание %d\n",fd2);
	size = write(fd,buf,strlen(buf));
	printf ("Запись %d\n",size);
	size = read (3,buf,strlen(buf));
	printf ("Чтение %d %s\n",size, buf);
	close(fd);