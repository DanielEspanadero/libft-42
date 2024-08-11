# 💻📚 LIBFT 📚💻

![image](https://github.com/DanielEspanadero/libft-42/blob/master/docs/banner%20libft.png)

> [!NOTE]
> Este es el primer proyecto como estudiante de 42. Consiste en programar algunas funciones de la librería estándar de C, así como otras funciones que serán útiles a lo largo de todo el cursus.

### ¿Que es libft?

Programar en C puede ser tedioso cuando no se tiene acceso a las funciones comunes más utilizadas. Libft es un proyecto individual en <b>42</b> que nos desafía a recrear algunas funciones de la biblioteca estándar de C. Esto no solo es útil para futuros proyectos, sino que también nos brinda una comprensión más profunda de las estructuras de datos y algoritmos básicos. Este proyecto nos permite entender cómo operan estas funciones, cómo implementarlas y cómo utilizarlas. En <b>42</b>, no se nos permite usar algunas bibliotecas estándar en nuestros proyectos, por lo que tenemos que crear nuestra propia biblioteca, que será muy útil en los siguientes proyectos de C.

<br>

### ¿En que consiste?

Hay 4 secciones:
1. **Funciones de Libc:** Algunas de las funciones estándar de C
2. **Funciones adicionales:** Funciones que serán útiles para proyectos posteriores
3. **Parte bonus:** funciones que serán útiles para la manipulación de listas
4. **Funciones personales:** Funciones que creo que serán útiles más adelante

<br>

## Conceptos a entender para poder llevar a cabo la librería satisfactoriamente

> [!IMPORTANT]
> Aquí te dejo una serie de vídeos que te ayudarán a entender todos y cada uno de los conceptos del Libft y a sentar unas buenas bases de cara a futuros proyectos.

### Punteros en C

<a href='https://www.youtube.com/watch?v=y3K3jb3wv2I' target='_blank'>
  <img width='30%' src='https://github.com/DanielEspanadero/libft-42/blob/master/docs/Punteros%20en%20c.jpg' alt='Punteros en C' />
</a>

### Struct en C

<a href='https://www.youtube.com/watch?v=plTYF-btLuU' target='_blank'>
  <img width='30%' src='https://github.com/DanielEspanadero/libft-42/blob/master/docs/estructuras%20en%20c.jpg' alt='struct en c' />
</a>

### Makefile

<a href='https://www.youtube.com/watch?v=BD0giwqBbm0' target='_blank'>
  <img width='30%' src='https://github.com/DanielEspanadero/libft-42/blob/master/docs/makefile.png' alt='Makefile' />
</a>

### Listas enlazadas

PRÓXIMANEMTE

# ft_is
___

## ft_isalnum
### Description
Compruebe si hay un carácter alfanumérico, es equivalente a[[ft_isalpha]] o[[ft_isdigit]]

### Param 1
El caracter a buscar

### Return value
0 si el carácter resulta falso y 1 si el carácter resulta verdadero

### Function
```c
int	ft_isalnum(int c) //int v El carácter que se comprobará.
{
	return (ft_isalpha(c) || ft_isdigit(c));  	//las condiciones en un return hacen que se evaluan 
							//directamente si una de las condiciones es verdadera o falsa
}
```

## ft_isalpha
### Description
Busca un carácter alfabético, es equivalente a[[ft_isupper]] o [[ft_islower]]

### Param 1
El caracter a buscar

### Return value
0 si el carácter resulta falso y 1 si el carácter resulta verdadero

### Function
```c
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && x <= 'z')) //mientras mi char es alfabetico
		return (1); //devuele 1 que es verdadero
	return (0); // si no devuelve 0 que es falso
}
```

## ft_isascii
### Description
Comprueba un carácter ASCII, que es cualquier carácter entre 0 y 127 inclusive

### Param 1
El caracter a buscar

### Return value
0 si el carácter resulta falso y 1 si el carácter resulta verdadero

### Function
```c
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
```

## ft_isdigit
### Description
Busca un dígito (de 0 a 9)

### Param 1
El caracter a buscar

### Return value
0 si el carácter resulta falso y 1 si el carácter resulta verdadero

### Function
```c
int	ft_isdigit(int c) // int v El carácter que se comprobará.
{
	if (c >= '0' && c <= '9')
		return (1); //devuelve 1 si el carácter es un dígito
	return (0); //0 si no lo es
}
```

## ft_isprint
### Description
Comprueba cualquier carácter imprimible, incluido el espacio

### Param 1
El caracter a buscar

### Return value
0 si el carácter resulta falso y 1 si el carácter resulta verdadero

### Function
```c
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
```

# ft_lst
___

## ft_lstadd_back
## ft_lstadd_front
## ft_lstclear
## ft_lstdelone
## ft_lstiter
## ft_lstlast
## ft_lstmap
## ft_lstnew
## ft_lstsize


# ft_mem
___

## ft_bzero
### Description
Borra los datos en los "n" bytes de la memoria comenzando en la ubicación señalada por "s" escribiendo ceros. Necesitaremos utilizar la función [[ft_memset]].

### Param 1
El puntero al área de memoria que se va a rellenar

### Param 2
El número de bytes

### Return value
Nada

### Function
```c
void	ft_bzero(void *s, size_t n) // escribe n bytes puestos a cero en la cadena s
{
	ft_memset(s, 0, n); 	//borra los datos en los n bytes de la memoria 
				//comenzando en la ubicación señalada por s, escribiendo ceros (0) en esa área
}
```

## ft_calloc
### Description
es una función que asigna memoria para un número específico de elementos.

### Param 1
El número de elementos que deseas reservar en memoria.

### Param 2
El tamaño en bytes de cada elemento que deseas reservar en memoria.

### Return value
La función devuelve un puntero a la memoria asignada. La memoria está inicializada a cero. Si la asignación de memoria falla, la función devuelve `NULL`.

### Function
```c
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
```

## ft_memchr
### Description
Localiza la primera ocurrencia de c (convertida a unsigned char) en la cadena s

### Param 1
La cadena a buscar

### Param 2
Caracter a buscar

### Param 3
El número de bytes a buscar

### Return value
Un puntero al byte localizado, o NULL si tal byte no existe dentro de n bytes

### Function
```c
void	*ft_memchr(const void *s, int c, size_t n). //Se recibe una cadena, un carácter para encontrar y el tamaño del buffer
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n) 				//mientas i menor	que el tamaño del buffer. 
	{
		if (str[i] == to_find) 		//si recorriendo str[i] encuentro la coincidencia que busco
			return (&str[i]); 	//devuelvo la dirrecion de la posicion de la coincidencia 
		i++; 				//contador para poder recorrer el str hasta que se encuentre la coincidencia que busco
	}
	return (NULL); 				//si no hay una coincidencia devuelve NULL
}
```

## ft_memcmp
### Description
Compara los primeros n bytes del área de memoria s1 a los primeros n bytes del área de memoria s2

### Param 1
La primera cadena a comparar

### Param 2
La cadena a comparar

### Param 3
El número de bytes a comparar

### Return value
< 0 si s1 es menor que s2; > 0 si s1 es mayor que s2; = 0 si s1 es igual a s2

### Function
```c
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n) 					//mientras i < que el tamaño de mi buffer
	{
		if (*str1 != *str2)			// si primer str es diferente del degundo str
		{
			return ((int)(*str1 - *str2)); // devuelve la diferencia entre los dos strings
		}
		str1++;  				//iterammos para poder segir comprobando
		str2++;
		i++;
	}
	return (0);  					//devuelve cero si las dos cadenas son idénticas 
							//(en caso de no cumplir la condicion del while))
}
```

## ft_memcpy
### Description
Copia n bytes del área de memoria src a la memoria de dst. Las áreas de memoria no deben superponerse. Usa [[ft_memmove]] si las áreas de memoria se superponen.

### Param 1
Área de memoria dst

### Param 2
La cadena de origen

### Param 3
El número de bytes a copiar

### Return value
Un puntero a la cadena de destino

### Function
```c
void	*ft_memcpy(void *dst, const void *src, size_t n) //Copie n bytes del área de memoria src al área de memoria dst
{
	unsigned int	i;

	if (src == NULL && dst == NULL) // si origen o destino son nulos
		return (NULL); //retorno null. 
	i = 0;
	while (i < n)// mientra i menor al tamaño de mi buffer
	{
		((char *)dst)[i] = ((const char *)src)[i];  //igual mi destino de i a la src de i
		i++; //aumento i para poder seguir comparando los 2 strings
	}
	return (dst); //retorno dest modificado. 
}
```

## ft_memmove
### Description
Copia len bytes de la memoria de src a dst. La memoria pueden superponerse. Primero, los bytes en src se copian en una matriz temporal y luego en dst

### Param 1
Esta es la matriz de destino donde se copiará el contenido, convertido a un puntero

### Param 2
La cadena de origen

### Param 3
El número de bytes

### Return value
Un puntero a la cadena de destino

### Function
```c
void	*ft_memmove(void *dst, const void *src, size_t len) //Mueva n bytes (len) del área de memoria src al área de memoria dst cuando dst es mayor que src.
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst; // igualo mis punteros al valor de sus parametros
	s = (unsigned char *)src; 
	if (d >= s) // //si s(source)  es mayor o igual que la pos de mi d(dest)
	{
		while (len--) //el tamaño de mi buffer sea distinto de cero
			d[len] = s[len]; // voy copiando cada elemento a la inversa para evitar overlaping.
	}
	else //si no
		ft_memcpy(d, s, len); // copio todos mis caracteres secuencialmente con memcpy
	return (dst); //retorno dest.
}
```

## ft_memset
### Description
`ft_memset` está diseñada para llenar un bloque de memoria con un valor especificado. Toma tres parámetros: un puntero al área de memoria que se va a llenar (`ptr`), el valor que se va a establecer (`x`, convertido a unsigned char), y el número de bytes que se van a llenar (`n`). La función itera a través del bloque de memoria, estableciendo cada byte en el valor especificado. Finalmente, devuelve un puntero al área de memoria modificada.
### Param 1
*ptr es el puntero al área de memoria que se va a llenar

### Param 2
El valor x (convertido a unsigned char) a establecer

### Param 3
El número de bytes que se establecerá en el valor x

### Return value
Un puntero al área de memoria s

### Function
```c
void	*ft_memset(void *ptr, int x, size_t n) //string, el valor a sustituir y el tamaño de buffer
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n) //mientras i mentor al buffer.
	{
		s[i] = (unsigned char)x; //mi strng en la posicion i igual a x 
		i++; //y paso a la siguiente referencia de  memoria. 
	}
	return (ptr);  // devuelvo el string modificado
}
```

# ft_put
___

## ft_putchar_fd
### Description
Es una función que escribe un carácter `c` a un archivo especificado por el descriptor de archivo `fd`.

### Param 1
El carácter que se va a escribir en el archivo.

### Param 2
El descriptor de archivo donde se va a escribir el carácter `c`.

### Return value
La función no devuelve ningún valor. Es una función de tipo `void`.

### Function
```c
void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
```

## ft_putendl_fd
### Description
Es una función que escribe una cadena de caracteres `s` seguida de un carácter de nueva línea (`'\n'`) a un archivo especificado por el descriptor de archivo `fd`.

### Param 1
La cadena de caracteres que se va a escribir en el archivo.

### Param 2
El descriptor de archivo donde se va a escribir la cadena de caracteres `s` y el carácter de nueva línea.

### Return value
La función no devuelve ningún valor. Es una función de tipo `void`.

### Function
```c
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
```

## ft_putnbr_fd
### Description
Es una función que escribe una cadena de caracteres `s` seguida de un carácter de nueva línea (`'\n'`) a un archivo especificado por el descriptor de archivo `fd`.

### Param 1
La cadena de caracteres que se va a escribir en el archivo.

### Param 2
El descriptor de archivo donde se va a escribir la cadena de caracteres `s` y el carácter de nueva línea.

### Return value
La función no devuelve ningún valor. Es una función de tipo `void`.

### Function
```c
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
```

## ft_putstr_fd
### Description
Es una función que escribe una cadena de caracteres `s` seguida de un carácter de nueva línea (`'\n'`) a un archivo especificado por el descriptor de archivo `fd`.

### Param 1
La cadena de caracteres que se va a escribir en el archivo.

### Param 2
El descriptor de archivo donde se va a escribir la cadena de caracteres `s` y el carácter de nueva línea.

### Return value
La función no devuelve ningún valor. Es una función de tipo `void`.

### Function
```c
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
```

# ft_str
___

## ft_split
### Description
Es una función que divide una cadena de caracteres `s` en un array de subcadenas, utilizando el carácter `c` como delimitador.

### Param 1
La cadena de caracteres que se va a dividir.

### Param 2
El carácter que se utilizará como delimitador para dividir la cadena de caracteres `s`.

### Return value
Devuelve un puntero a un array de punteros (`char**`), donde cada puntero apunta a una subcadena de la cadena original `s` dividida por el delimitador `c`. Si la cadena original es `NULL`, o si la asignación de memoria falla, la función devuelve `NULL`.

### Function
```c
static int	count_words(char const *s, char c)
{
	int	cwords;

	cwords = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			cwords++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	cwords++;
	return (cwords);
}

static void	*ft_free(char **memry, size_t aux)
{
	size_t	i;

	i = 0;
	while (i < aux)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}

static void	split_str(char **ptr, char *str, char c, int nwords)
{
	int		i;
	char	*aux;

	i = 0;
	if ((nwords > 0) && *str)
	{
		while (i < (nwords - 1))
		{
			aux = ft_strchr(str, c);
			ptr[i++] = ft_substr(str, 0, aux - str);
			if (ptr == 0)
			{
				ft_free(ptr, i);
				return ;
			}
			while (*aux == c)
				aux++;
			str = aux;
		}
		ptr[i++] = ft_strdup(str);
		ptr[i] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = count_words(str, c);
			ptr = ft_calloc((nwords + 1), sizeof(char *));
			if (ptr)
				split_str(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (0);
}
```

## ft_strchr
### Description
Localiza la primera aparición de 'c' en la cadena a la que apunta 's'. El carácter nulo final se considera parte de la cadena, por lo tanto, si 'c' es '\0', ubica el final '\0'

### Param 1
Puntero a string

### Param 2
Caracter a buscar

### Return value
Un puntero a la primera aparición del carácter c en la cadena s o NULL si no se encuentra el carácter

### Function
```c
char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c; //se iguala la variable al valor de sus parametro de entrada
	while (*s) //mientras el puntero a la cadena exista
	{
		if (*s == a) //mientras el puntero a la cadena a buscar sea igual a caracter a buscar
		{
			return ((char *) s); // devuelvo un char puntero a la coincidencia.
		}
		s++; //contador para poder recorer el string
	}
	if (a == '\0') //mietntras el caracter sea igual a NULL
		return ((char *) s); // devuelvo un char puntero a la coincidencia
	return (0);
}
```

## ft_strdup
### Description
Es una función que crea una copia de una cadena de caracteres `s1`.

### Param 1
La cadena de caracteres que se va a duplicar.

### Return value
Devuelve un puntero a la copia de la cadena de caracteres `s1`.

### Function
```c
char	*ft_strdup(const char *s1) //string a copiar
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);  //almaceno la longitud de s1 en ls vsrisblr size
	ptr = malloc(sizeof(char) * (size + 1)); //ptr = se reserva memoria con malloc de la longitud guardada  + 1 
	if (ptr == NULL) //si la reserva falla
		return (NULL); //retorno null
	ft_memcpy(ptr, s1, size); //copiao mi string a un area de memoria nueva apuntada por ptr, hasta size
	ptr[size] = '\0'; // se cierra el final del string con un caracter vacio.
	return (ptr); //devuelve un puntero a una nueva cadena que es un duplicado de la cadena s1
}
```

## ft_striteri
### Description
Es una función que aplica una función dada `f` a cada carácter de una cadena `s`, pasando el índice de la posición del carácter y un puntero al carácter a la función `f`.

### Param 1
La cadena de caracteres a la que se le aplicará la función `f`.

### Param 2
La función que se aplicará a cada carácter de la cadena `s`.

### Return value
La función no devuelve ningún valor. Es una función de tipo `void`.

### Function
```c
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
```

## ft_strjoin
### Description
La función primero verifica si ambas cadenas de entrada no son NULL. Si alguno de ellos es NULL, devuelve NULL. A continuación, calcula las longitudes de las dos cadenas de entrada mediante la función ft_strlen. Luego asigna memoria para la cadena concatenada usando malloc y verifica si la asignación fue exitosa. Si no fuera así, la función devuelve NULL. Luego, la función inicializa una variable int (i) a -1 e ingresa a un bucle que copia los caracteres de la primera cadena de entrada a la cadena concatenada, uno por uno. Una vez que finaliza el primer ciclo, la función restablece i en -1 e ingresa a otro ciclo que copia los caracteres de la segunda cadena de entrada a la cadena concatenada, comenzando al final de la primera cadena de entrada. Finalmente, la función agrega un terminador nulo al final de la cadena concatenada y le devuelve un puntero. Por ejemplo, si se llama a la función con las cadenas "abc" y "def", creará una nueva cadena "abcdef" y le devolverá un puntero. Nota: La función llama a la función ft_strlen, que calcula la longitud de una cadena terminada en nulo.

### Param 1
Un puntero a una cadena terminada en cero (`char const *s1`), que es la primera cadena que se concatena

### Param 2
Un puntero a una cadena terminada en nulo (`char const *s2`), que es la segunda cadena que se concatena.

### Return value
Un puntero a una nueva cadena que es el resultado de la concatenación de s1 y s2

### Function
```c
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
```

## ft_strlcat
### Description
Concatena la cadena src al final de dst. Se concatenará al máximo tamaño - strlen (dst) - 1 bytes, terminando en NULL el resultado

### Param 1
La cadena de destino

### Param 2
Cadena que se agregará a dst

### Param 3
Número máximo de caracteres que se agregarán

### Return value
La longitud de la cadena que intentó crear en dest

### Function
```c
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen; //variable para guardar l alongidyd de dest
	size_t	srclen; //variable para guardar l alongidyd de src
	size_t	i;  //variable iterador

	dstlen = ft_strlen(dest); //mide y almacena la longitud de dest.
	srclen = ft_strlen(src);  //mide y almacena la longitud de src.
	i = 0;  //inicio el iterador a cero
	if (dstsize == 0). //control de errores: si el numero de caracteres a copiar es cero
		return (srclen); //devuelvo la longitud del origen
	if (dstsize <= dstlen)  //si el tamaño de mi buffer es menor o igual que la longitud de mi destino
		return (srclen += dstsize); //devuelvo la longitud de mi origen + el tamaño de mi buffer
	else //si no
		srclen += dstlen; ////devuelvo la longitud de mi origen + el la longitud de mi destino
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src) // mientras el origen en la posicion i llege al final y
	{								// la longitud del destino sea menor al tamaño de buffer menos 1 y destino sea diferente al origen
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);  // La longitud de la cadena que intentó crear en dest
}
```

## ft_strlcpy
### Description
Copia la cadena a la que apunta src, incluido el byte nulo de terminación ('\0'), al búfer señalado por dst

### Param 1
La cadena de destino

### Param 2
La cadena que se va a copiar

### Param 3
Número de caracteres que se copiarán de src

### Return value
Longitud total de la cadena a crear (longitud de src)

### Function
```c
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)  //Copia la cadena a la que apunta src,  al búfer señalado por dst
{
	size_t	i;
	size_t	len;  //creo una variable para guardar la longitud de src

	len = ft_strlen(src);  //guardo el la variable len la longitud de mi string de origen
	if (dstsize < 1) //si el tamaño de mi buffer es menor que 1
		return (len); //devuelvo la longitud de mi origen
	i = 0;  //inicializo mi variable en cero
	while (src[i] != '\0' && i < (dstsize - 1)) //mientras mi origen en la posicion i sea distinto a caracter nulo. Y mi contador sea menor que mi buffer menos 1 PARA EL CHAR NULO.
	{
		dst[i] = src[i];  //copio mi origen en el destino
		i++; //y voy avanzando para recorer el src
	}
		dst[i] = '\0'; //por ultimo cierro con caracter nulo mi destino
	return (len); //devuelvo la longitud total de la cadena a crear (longitud de src)
}
```

## ft_strlen
### Description
Calcula la longitud de la cadena apuntada por str, excluyendo el byte nulo de terminación ('\0')

### Param 1
Es la cadena de la que vamos a encontrar la longitud

### Return value
La longitud de la cadena

### Function
```c
size_t	ft_strlen(const char *str) //Esta es la cadena de la que vamos a encontrar la longitud
{
	size_t	i; //declaro una variable contador

	i = 0; //igualar el contador a cero
	while (str[i] != '\0') //mientras mi string en la posicion i sea distinto de caracter nulo de terminación 
	i++; //aumento el iterador
	return (i); // devuelvo el número de caracteres de la cadena 
}
```

## ft_strmapi
### Description
Es una función que crea una nueva cadena de caracteres mapeando cada carácter de una cadena de entrada `s` usando una función dada `f`.

### Param 1
La cadena de caracteres de entrada que se mapeará utilizando la función `f`.

### Param 2
La función que se aplicará a cada carácter de la cadena de entrada `s`.

### Return value
Devuelve un puntero a una nueva cadena de caracteres que es el resultado de aplicar la función `f` a cada carácter de la cadena de entrada `s`.

### Function
```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
```

## ft_strcmp
### Description
Compara los primeros n caracteres de las cadenas s1 y s2

### Param 1
La primera cadena que se va a comparar

### Param 2
La cadena para comparar

### Param 3
El número máximo de caracteres para comparar

### Return value
La diferencia entre los dos primeros caracteres que difieren en el cadenas que se comparan

### Function
```c
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;  				// inicializo i en cero
	while (i < n && (s1[i] || s2[i]))	//mientras i sea menor que el tamño de mi buffer y por s1 de i o sa2 de i exista
	{
		if (s1[i] != s2[i])		//si s1 de i es diferente a s2 de i
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);	// devuelvo la diferencia de la ultima pocision coincidente
		else if (s1[i] == '\0')		// si s1 en la pocicion y es nulo
			return (0);		//devuelvo nulo
		i++;				// aumento el iterdor		
	}
	return (0);				// devuelvo nulo ( en el caso que no se me cumple el while)
}
```

## ft_strnstr
### Description
Ubiqua la subcadena, donde no se buscan más de los caracteres 'len'. Busca la primera aparición de la subcadena 'needle' en la cadena 'haystack'. Los bytes nulos finales ('\0') no se comparan.

### Param 1
La cadena a buscar

### Param 2
La cadena que se buscará en la cadena 'haystack'

### Param 3
La cantidad máxima de caracteres a buscar

### Return value
Un puntero a la primera aparición de subcadena 'needle' en el 'haystack'. NULL si no se encuentra la subcadena. Si 'needle' es una cadena vacía, se devuelve 'haystack'

### Function
```c
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle[h]  == '\0')  			// si mi string buscado es igual a 0
		return ((char *)haystack);  		//retorno un puntero al string de origen
	while (haystack[h]) 			//mientras la sring en que busco sea diferente de cero
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
```

## ft_strrchr
### Description
Localiza la última aparición de 'c' en la cadena a la que apunta 's'. El carácter nulo final se considera parte de la cadena, por lo tanto, si 'c' es '\0', ubica el final '\0'

### Param 1
Puntero a string

### Param 2
Caracter a buscar

### Return value
Un puntero a la última aparición del carácter c en la cadena s o NULL si no se encuentra el carácter

### Function
```c
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c; 					//se iguala la variable al valor de sus parametro de entrada
	i = ft_strlen(s); 			//guardo en la variable i la longitud de la string s
	if (a == 0) 				// si el caracter a buscar no existe
		return ((char *) &s[i]);  	//devuelve ls direccion de ls dtring de i casteada como char puntero
	while (i >= 0) 				// mientras la longidut de string sea mayor o igual a cero
	{
		if (s[i] == a) 			 // y si la string de i en este momento es igual al caracter que estoy buscando
			return ((char *)&s[i]); // devuelvo la direccion en memoria del puntero de la coincidencia del caracter buscado casteado a char
		i--; 				// disminuio mi iterador para recorrer mi string desde el final hacia el princoipioi
	}
	return (0); 				// en caso contrario, devuelvo cero
}
```

## ft_strtrim
### Description
La función primero verifica si la cadena de entrada y el conjunto de caracteres no son NULL. Si alguno de ellos es NULL, devuelve NULL. A continuación, inicializa dos variables size_t: strat, que almacenará el índice del primer carácter no extraíble de la cadena, y end, que almacenará el índice del último carácter no extraíble de la cadena. Inicialmente, strat se establece en 0 y end se establece en la longitud de la cadena. Luego, la función ingresa a un bucle que incrementa `start` siempre que el carácter en el índice de `start` actual esté en el conjunto de caracteres que se eliminará. Después de que finaliza el primer ciclo, la función ingresa a otro ciclo que decrementa end siempre que el carácter en el índice final actual esté en el conjunto de caracteres que se eliminarán y end sea mayor que strat. Luego, la función asigna memoria para la cadena resultante usando malloc y verifica si la asignación fue exitosa. Si no fuera así, la función devuelve NULL. Finalmente, la función copia la subcadena de s1 que comienza en strat y tiene una longitud de (end - strat) a la cadena resultante usando ft_strlcpy. Luego devuelve un puntero a la cadena resultante. Por ejemplo, si se llama a la función con la cadena "abc" y el conjunto de caracteres "\t\n", creará una nueva cadena "abc" y le devolverá un puntero.

### Param 1
Un puntero a una cadena terminada en nulo (`char const *s1`), que es la cadena original de la que se eliminarán los caracteres.

### Param 2
Un puntero a una cadena terminada en nulo (`char const *set`), que es el conjunto de caracteres que se eliminará.

### Return value
Un puntero a una nueva cadena

### Function

```c
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strat;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		strat = 0;
		end = ft_strlen(s1);
		while (s1[strat] && ft_strchr(set, s1[strat]))
			strat++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > strat)
			end--;
		str = (char *)malloc(sizeof(char) * (end - strat + 1));
		if (str)
			ft_strlcpy(str, &s1[strat], end - strat + 1);
	}
	return (str);
}
```

## ft_substr
### Description
La función `ft_substr` crea una subcadena de una cadena dada. Esta función toma tres parámetros: un puntero a la cadena original (`s`), el índice de inicio de la subcadena (`start`), y la longitud deseada de la subcadena (`len`). Si la cadena original es `NULL`, la función devuelve `NULL`.

### Param 1
Un puntero a una cadena terminada en nulo (`char const *s`), que es la cadena original de la que se extraerá la subcadena.

### Param 2
el índice del primer carácter a incluir en la subcadena.

### Param 3
la longitud de la subcadena.

### Return value
Un puntero a una nueva cadena

### Function
```c
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*substr;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
```

# ft_to
___

## ft_atoi
### Description
Esta es una función de C que convierte una representación de cadena de un número entero en un valor entero. La función toma un solo argumento, un puntero a una cadena terminada en nulo (const char *str). La función procesa la cadena de izquierda a derecha y devuelve el valor entero representado por la cadena. La función primero inicializa el resultado (res) en 0 y el signo (signo) en 1. Luego omite cualquier carácter de espacio en blanco inicial (espacios, tabuladores, líneas nuevas, etc.) en la cadena mediante un ciclo while que continúa mientras el carácter actual (señalado por str) es un espacio o un carácter no imprimible (valores ASCII de 9 a 13). A continuación, la función comprueba el primer carácter que no sea un espacio en blanco. Si es un signo menos ('-'), el signo se establece en -1. Si es un signo más ('+'), el signo se deja como 1. Si no es ni un signo más ni un signo menos, el signo permanece 1. Finalmente, la función ingresa a un ciclo que procesa los caracteres restantes en la cadena hasta que encuentra un carácter que no es un dígito (0 a 9). Para cada dígito, la función multiplica el resultado actual por 10 y suma el valor del dígito. Cuando finaliza el bucle, la función devuelve el resultado multiplicado por el signo. Por ejemplo, si se llama a la función con la cadena "-12345", omitirá los caracteres de espacio en blanco iniciales, establecerá el signo en -1 y procesará los dígitos 1, 2, 3, 4 y 5, lo que dará como resultado un resultado final. valor de retorno de -12345.

### Param 1
Esta es la cadena que estamos convirtiendo en un número entero.

### Return value
El numero entero resultalte.

### Function
```c
static int ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}
static int ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
	c == '\v' || c == '\f' || c == '\r');
}

int ft_atoi(char *str)
{
	int sign;
	unsigned long int result;

	sign = 1;
	result = 0;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str != '\0') && ft_is_digit(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
```

## ft_itoa
### Description
Es una función que convierte un número entero `n` en una cadena de caracteres representativa de ese número.

### Param 1
El número entero que se convertirá en una cadena de caracteres. El tipo de dato es `int`.

### Return value
Devuelve un puntero a una cadena de caracteres que representa el número entero `n`.

### Function
```c
static	int	count_char(int num)
{
	int	count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num *(-1);
			count++;
		}
		while (num != 0)
		{
			num = num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = count_char(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = ((nbr % 10) + '0');
		nbr /= 10;
		len--;
	}
	return (str);
}
```

## ft_tolower
### Description
Si el carácter pasado como argumento es una mayúscula, conviértalo a minúscula

### Param 1
El caracter a convertir

### Return value
Si c es una letra mayúscula, devuelve su equivalente en minúscula. De lo contrario, devuelve c

### Function
```c
int	ft_tolower(int c) //carácter pasado como argumento
{
	if (c >= 'A' && c <= 'Z'). //Si c es una letra mayúscula
		return (c + 32); //devuelve su equivalente en minúscula (ver tabla ASCII porque +32 nos situa en la posicion de la misma letra pasada pero en minuscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
```

## ft_toupper
### Description
Si el carácter pasado como argumento es una minúscula, conviértalo a mayúscula

### Param 1
El caracter a convertir

### Return value
Si c es una letra minúscula, devuelve su equivalente en mayúscula. De lo contrario, devuelve c

### Function
```c
int	ft_toupper(int c)  //carácter pasado como argumento
{
	if (c >= 'a' && c <= 'z') //Si c es una letra minúscula
		return (c - 32);  //devuelve su equivalente en mayúscula (ver tabla ASCII porque -32 nos situa en la posicion de la misma letra pasada pero en mayúscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
```
