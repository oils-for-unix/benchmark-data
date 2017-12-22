
#define NDEBUG 1
#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE 700
#define _XOPEN_SOURCE_EXTENDED 1
#define YASH_ENABLE_SOCKET 1
#define HAVE_NGETTEXT 1
#define HAVE_GETTEXT 1
#define HAVE_CURSES_H 1
#define HAVE_TERM_H 1
#define YASH_ENABLE_LINEEDIT 1
#define HAVE_STRNLEN 1
#define HAVE_WCSNLEN 1
#define HAVE_WCSCASECMP 1
#define HAVE_WCSNRTOMBS 1
#define HAVE_WCSTOLD 1
#define HAVE_WCWIDTH 1
#define HAVE_S_ISVTX 1
#define UNSETENV_RETURNS_INT 1
#define HAVE_ST_ATIM 1
#define HAVE_ST_MTIM 1
#define HAVE_WCONTINUED 1
#define HAVE_FACCESSAT 1
#define HAVE_STRSIGNAL 1
#define HAVE_GETPWENT 1
#define HAVE_PW_GECOS 1
#define HAVE_GETGRENT 1
#define HAVE_GETHOSTENT 1
#define HAVE_PATHS_H 1
#define GETCWD_AUTO_MALLOC 1
#define HAVE_TIOCGWINSZ 1
#define YASH_ENABLE_ARRAY 1
#define YASH_ENABLE_DIRSTACK 1
#define YASH_ENABLE_HELP 1
#define YASH_ENABLE_HISTORY 1
#define YASH_ENABLE_PRINTF 1
#define YASH_ENABLE_TEST 1
#define YASH_ENABLE_ULIMIT 1
#define HAVE_RLIM_SAVED_CUR 1
#define HAVE_RLIM_SAVED_MAX 1
#define HAVE_RLIMIT_AS 1
#define HAVE_RLIMIT_LOCKS 1
#define HAVE_RLIMIT_MEMLOCK 1
#define HAVE_RLIMIT_MSGQUEUE 1
#define HAVE_RLIMIT_NICE 1
#define HAVE_RLIMIT_NPROC 1
#define HAVE_RLIMIT_RSS 1
#define HAVE_RLIMIT_RTPRIO 1
#include <stdint.h> /* required before <sys/resource.h> on freebsd */
#include <sys/time.h> /* required before <sys/resource.h> on old Mac OS X */
#include <sys/resource.h>
#if HAVE_RLIMIT_AS
int main(void) { return RLIMIT_SIGPENDING == RLIMIT_AS; getrlimit(RLIMIT_SIGPENDING, 0); }
#else
int main(void) { return 0; getrlimit(RLIMIT_SIGPENDING, 0); }
#endif
