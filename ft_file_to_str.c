
#include "libft.h"

/**
 * convert a file to a string seperated by newlines
 * @param file the file to convert
 * @return the string
 */

char* ft_file_to_str(char* filename)
{
  char* str;
  int fd;
  
  // char** lines

  EXIT_IF(!(filename && ft_strlen(filename) > 0), "error: filename is invalid");
  EXIT_IF(!(fd = open(filename, O_RDONLY)), "error: unable to open file");

  str = get_next_line(fd);
  while (get_next_line(fd) != NULL) {
    str = ft_strjoin(str, "\n");
    str = ft_strjoin(str, get_next_line(fd));
  }
  close(fd);
  return str;
}