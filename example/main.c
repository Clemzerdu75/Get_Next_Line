#include "../get_next_line.h"

int   main(int ac, char **av)
{
    char  *line;
    int   fd1;
    int i;

    i = 1;
    if(ac != 0) 
    {
        fd1 = open(av[1], O_RDONLY);
        
        // if you want to read all the file
        while (1) 
        {
            i = get_next_line(fd1, &line);
            if(i < 1)
                return 0;
            printf("%s\n", line);
        }

        //if you want just 5 lines 
        /*while(i < 6)
        {
            get_next_line(fd1, &line);
            printf("%s\n", line);
            i++;
        }*/
    }
    return (0);
}