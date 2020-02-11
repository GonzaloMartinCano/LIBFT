/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:24:22 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/26 14:00:30 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			ft_bzero(void *s, size_t n); //borra n bytes de memoria escribiendo \0 en este area.
size_t			ft_strlen(const char *s); //mide el tamaño de una cadena.
int				ft_isalpha(int c); //busca el caracter pasado como parametro, retorna 1 true, 0 false.
int				ft_isdigit(int c); //busca el digito (0 a 9) pasado como parametro, retorna 1 true, 0 false.
int				ft_isalnum(int c); //busca un caracter alfanumerico pasado como parametro, retorna 1 true, 0 false.
int				ft_isascii(int c); //comprueba si c es un valor de carácter sin signo de 7 bits que se ajusta al conjunto de caracteres ASCII.
int				ft_isprint(int c); //comprueba cualquier carácter imprimible, incluido el espacio.
int				ft_toupper(int c); //convierte la letra c pasada como parametro a mayúsculas, si es posible.
int				ft_tolower(int c); //convierte la letra c pasada como parametro a minúsculas, si es posible.
char			*ft_strchr(const char *s, int c); //devuelve un puntero a la primera aparición del caracter c en la cadena s.
char			*ft_strrchr(const char *s, int c); //devuelve un puntero a la última aparición del caracter c en la cadena s.
int				ft_strncmp(const  char *s1, const char *s2, size_t n); // compara dos cadenas pasadas como parametro n bytes como maximo, retorna la diferencia entre los dos primeros caracteres diferentes encontrados.
size_t			ft_strlcpy(char *dst, const char *src, size_t destsize); //copia hasta tamaño - 1 caracteres de la cadena terminada en NUL src a dst , terminando en NUL el resultado. devuelve la longitud total de la cadena que intentaron crear (longitud src).
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize); //agrega la cadena src terminada en NUL al final de dst. Agregará como máximo tamaño - strlen (dst) - 1 bytes, terminando en NUL el resultado. devuelve la longitud total de la cadena que intentaron crear (longitud src + dst).
char			*ft_strnstr(const char *haystack, const char *needle, size_t len); //busca la cadena needle en la otra haystack durante un tamaño maximo len. Retorna haystack desde que se encontro lo similitud.
int				ft_atoi(const char *str); //limpia una cadena de caracteres retornando el primer valor numerico aparecido en esta en forma de int. En este caso solo acepta un signo si aparece justo antes del valor numerico, si no retorna 0.
void			*ft_memset(void *b, int c, size_t len); //llena los primeros n bytes del área de memoria señalada por s con el byte constante c. Devuelve un puntero al area de memoria s.
void			*ft_memcpy(void *dst, const void *src, size_t n); //copia n bytes del área de memoria src al área de memoria dest . Las áreas de memoria no deben solaparse. devuelve un puntero a dest.
void			*ft_memccpy(void *dst, const void *src, int c, size_t n); //no copia más de n bytes del área de memoria src al área de memoria dest, deteniéndose cuando se encuentra el carácter c. devuelve un puntero al siguiente carácter en dest después de c, o NULL si no se encontró c en los primeros n caracteres de src.
void			*ft_memmove(void *dst, const void *src, size_t len); //opia n bytes del área de memoria src al área de memoria dest . Las áreas de memoria pueden superponerse: la copia se realiza como si los bytes en src se copiaran primero en una matriz temporal que no se superpone a src o dest, y los bytes se copian de la matriz temporal a dest. devuelve un puntero a dest.
void			*ft_memchr(const void *s, int c, size_t n); //escanea los n bytes iniciales del área de memoria señalada por s para la primera instancia de c . Tanto c como los bytes del área de memoria señalados por s se interpretan como caracteres sin signo. devuelve un puntero al byte correspondiente o NULL si el carácter no aparece en el área de memoria dada.
int				ft_memcmp(const void *s1, const void *s2, size_t n); //compara los primeros n bytes (cada uno interpretado como un carácter sin signo ) de las áreas de memoria s1 y s2. evuelve un número entero menor que, igual o mayor que cero si se encuentra que los primeros n bytes de s1 , respectivamente, son menores, coinciden o son mayores que los primeros n bytes de s2.
void			*ft_calloc(size_t count, size_t size); //asigna memoria para una matriz de tamaño count*size y la rellena de 0. devuelve un puntero a la memoria asignada que está alineado adecuadamente para cualquier tipo de variable
char			*ft_strdup(const char *s1); // La función strdup () devuelve un puntero a una nueva cadena que es un duplicado de la cadena s1. Decuelve un puntero a la cadena duplicada. 
char			*ft_substr(char const *s, unsigned int start, size_t len); //Reserva memoria (con malloc(3)) para la cadena de caracteres que va a devolver, y que proviene de la cadena pasada como argumento. Esta nueva cadena comienza en el índice ’start’ y tiene como tamaño máximo ’len’
char			*ft_strjoin(char const *s1, char const *s2); // Reserva memoria (con malloc(3)) para la cadena de caracteres que va a devolver, y que resulta de la concatenación de s1 y s2
char			*ft_strtrim(char const *s1, char const *set); // Reserva memoria (con malloc(3)) para la cadena de caracteres que va a devolver, que es una copia de la cadena de caracteres pasada como argumento, sin los caracteres indicados en el set pasado como argumento al principio y al final de la cadena de caracteres.
char			**ft_split(char const *s, char c); // Reserva memoria (con malloc(3)) para la tabla de cadena de caracteres que va a devolver, obtenida separando s con el carácter c, que se utiliza como delimitador. La tabla debe terminar con NULL. Retorna La tabla con las nuevas cadenas de caracteres que resulten del troceado. NULL si falla la reserva de memoria.
char			*ft_itoa(int n); // Reserva memoria (con malloc(3)) para la cadena de caracteres que va a devolver, que representa el integer pasado como argumento. Se deben gestionar los números negativos. Retorna la cadena de caracteres que representa al integer. NULL si falla la reserva de memoria.
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // Aplica la función f a cada carácter de la de cadena de caracteres pasada como argumento para crear una nueva cadena de caracteres (con malloc (3)) que resulte de las aplicaciones sucesivas de f. Retorna La cadena de caracteres que resulte de las aplicaciones sucesivas de f. Devuelve NULL si falla la asignación.
void			ft_putchar_fd(char c, int fd); // Escribe el carácter c sobre el file descriptor proporcionado. 
void			ft_putstr_fd(char *s, int fd); // Escribe la cadena de caracteres c sobre el descriptor de fichero proporcionado.
void			ft_putendl_fd(char *s, int fd); // Escribe la cadena de caracteres s sobre el file descriptor proporcionado, seguida de un salto de línea.
void			ft_putnbr_fd(int nb, int fd); // Escribe el entero n sobre el file descriptor proporcionado.
t_list			*ft_lstnew(void const *content); // Reserva memoria (con malloc(3)) para un nuevo elemento que devuelve. La variable content se inicializa mediante el valor del parámetro content. La variable next se inicializa con NULL. Retorna El contenido del nuevo elemento.
void			ft_lstadd_front(t_list **alst, t_list *new); // Añade el elemento new al principio de la lista
int				ft_lstsize(t_list *lst); // Cuenta el número de elementos de la lista.
t_list			*ft_lstlast(t_list *lst); // Devuelve el último elemento de la lista.
void			ft_lstadd_back(t_list **alst, t_list *new); // Añade el elemento new al final de la lista
void			ft_lstdelone(t_list	*lst, void (*del)(void *)); // Libera la memoria del elemento pasado como argumento utilizando la función del y después free(3). No se debe liberar la memoria de "next". A continuación, el puntero al elemento debe pasar a NULL
void			ft_lstclear(t_list **lst, void (*del)(void *)); // Suprime y libera la memoria del elemento pasado como parámetro y de todos los elementos siguientes, con del y free (3) Por último, el puntero inicial debe pasar a NULL.
void			ft_lstiter(t_list *lst, void (*f)(void *)); // Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento.
t_list			*ft_lstmap(t_list *lst, void *(*ff)(void *), void (*del)(void *)); // Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento. Crea una nueva lista que resulta de las aplicaciones sucesivas de f. Disponemos de la función del si hay que elminar el contenido de algún elemento.
#endif
