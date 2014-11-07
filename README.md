real-libft42
============
// VERIFIER LES PROTOTYPES MAN MAC
// VERIFIER CAST FONCTIONS GENERIQUES
// PTR SUR VOID A TESTER AVEC AUTRE TYPE (memset, memcpy, bzero ...)
// TEST BY DARNURIA-TESTS & other main
// NORMINETTE / FLAGS
// STATIC FUNCTIONS
// ITOA POUR PUTNBR ET PUTNBR_FD -> GERER OVERFLOW ITOA
// Ft_strclen -> ft_strsplit
// INCLUDES STDIO ET STRINGS.H
// FICHIER AUTEUR 
- Une chaine de caractères est TOUJOURS terminée par un ’\0’, même si cela
a été omis dans la description d’une fonction. Dans le cas contraire, cela serait
explicitement indiqué.
// ISALPHA ETC.. FAIL TEST MAIN.C UBUNTU

• memset = TEST Ok - ok
• bzero = TEST Ok - ok
• memcpy = TEST Ok - ok
• memccpy = test _ - OK
• memmove = test _ - OK
• memchr = TEST Ok - ok
• memcmp = TEST Ok - ok
• strlen = TEST Ok - ok
• strdup = TEST Ok - ok
• strcpy = TEST Ok - ok
• strncpy = TEST Ok - ok 
• strcat = TEST Ok - ok
• strncat = TEST Ok - ok
• strlcat = test ok 
• strchr = TEST Ok - ok 
• strrchr = TEST Ok - ok
• strstr = TEST Ok - ok
• strnstr = Test ok
• strcmp = TEST Ok - ok
• strncmp = TEST Ok - ok
• atoi = TESTS OK - ok
• isalpha = TEST Ok - ok
• isdigit = TEST Ok - ok
• isalnum = TEST Ok - ok
• isascii = TEST Ok - ok
• isprint = TEST Ok - ok
• toupper = TEST Ok - ok
• tolower = TEST Ok - ok

// SUPPS
- ft_memalloc = TEST Ok - ok
- ft_memdel = TEST Ok - ok
- ft_strnew = TEST Ok - ok
- ft_strdel = TEST Ok - ok
- ft_strclr = TEST Ok - ok
- ft_striter = TEST Ok - ok
- ft_striteri = test _ - ok
- ft_strmap = test _ - OK
- ft_strmapi = test _ - OK
- ft_strequ = TEST _ - ok
- ft_strnequ = TEST _ - ok
- ft_strsub = TEST _ - ok
- ft_strjoin = TEST _ - ok
- ft_strtrim = TEST _ - ok
- ft_strsplit = No ---------------------
- ft_itoa = ok
- ft_putchar = TEST Ok
- ft_putstr = Ok
- ft_putendl = TEST Ok
- ft_putnbr = OK
- ft_putchar_fd = TEST Ok
- ft_putstr_fd = TEST Ok
- ft_putend_fd = TEST Ok
- ft_putnbr_fd = OK

// BONUS CHAINED LIST
- ft_lstnew = Test _ - OK
- ft_lstdelone = Test _ - OK
- ft_lstdel = Test _ - OK
- ft_lstadd = OK
- ft_lstiter = Ok
- ft_lstmap = ok

// perso test a faire 
- ft_strclen = ok
- ft_strrev = ok 
- ft_printlist = ok
- ft_lstadd_end = ok