// osh_eval.cc: translated from Python by mycpp

#include "preamble.h"  // hard-coded stuff

// BEGIN mycpp output

#include "mylib.h"

using gc_heap::Alloc;
using gc_heap::kZeroMask;
using gc_heap::Local;
#include "osh_eval.h"

GLOBAL_STR(str0, "(");
GLOBAL_STR(str1, ")");
GLOBAL_STR(str2, "_");
GLOBAL_STR(str3, "T");
GLOBAL_STR(str4, "F");
GLOBAL_STR(str5, "");
GLOBAL_STR(str6, "");
GLOBAL_STR(str7, "\n<html>\n  <head>\n     <title>oil AST</title>\n     <style>\n      .n { color: brown }\n      .s { font-weight: bold }\n      .o { color: darkgreen }\n     </style>\n  </head>\n  <body>\n    <pre>\n");
GLOBAL_STR(str8, "\n    </pre>\n  </body>\n</html>\n    ");
GLOBAL_STR(str9, "n");
GLOBAL_STR(str10, "s");
GLOBAL_STR(str11, "o");
GLOBAL_STR(str12, "o");
GLOBAL_STR(str13, "o");
GLOBAL_STR(str14, "<span class=\"%s\">");
GLOBAL_STR(str15, "</span>");
GLOBAL_STR(str16, " ");
GLOBAL_STR(str17, "\n");
GLOBAL_STR(str18, " ");
GLOBAL_STR(str19, "]");
GLOBAL_STR(str20, " ");
GLOBAL_STR(str21, " ");
GLOBAL_STR(str22, "\n");
GLOBAL_STR(str23, "\n");
GLOBAL_STR(str24, " ");
GLOBAL_STR(str25, "%s%s: [");
GLOBAL_STR(str26, "\n");
GLOBAL_STR(str27, "\n");
GLOBAL_STR(str28, "%s]");
GLOBAL_STR(str29, "%s%s: ");
GLOBAL_STR(str30, "\n");
GLOBAL_STR(str31, "\n");
GLOBAL_STR(str32, " ");
GLOBAL_STR(str33, " ");
GLOBAL_STR(str34, " ");
GLOBAL_STR(str35, " %s:");
GLOBAL_STR(str36, "[");
GLOBAL_STR(str37, " ");
GLOBAL_STR(str38, "]");
GLOBAL_STR(str39, "PWD");
GLOBAL_STR(str40, "PATH");
GLOBAL_STR(str41, "/bin");
GLOBAL_STR(str42, "osh");
GLOBAL_STR(str43, "oil: %s");
GLOBAL_STR(str44, "osh fatal error: %s");
GLOBAL_STR(str45, "");
GLOBAL_STR(str46, "osh I/O error: %s");
GLOBAL_STR(str47, "-c flag");
GLOBAL_STR(str48, "\u001b[0;0m");
GLOBAL_STR(str49, "\u001b[1m");
GLOBAL_STR(str50, "\u001b[4m");
GLOBAL_STR(str51, "\u001b[7m");
GLOBAL_STR(str52, "\u001b[31m");
GLOBAL_STR(str53, "\u001b[32m");
GLOBAL_STR(str54, "\u001b[33m");
GLOBAL_STR(str55, "\u001b[34m");
GLOBAL_STR(str56, "+");
GLOBAL_STR(str57, " ");
GLOBAL_STR(str58, "PS4");
GLOBAL_STR(str59, "<ERROR: Can't parse PS4: %s>");
GLOBAL_STR(str60, " ");
GLOBAL_STR(str61, "%s%s%s");
GLOBAL_STR(str62, "+=");
GLOBAL_STR(str63, "=");
GLOBAL_STR(str64, "<_ControlFlow %s>");
GLOBAL_STR(str65, "Invalid control flow %r in pipeline / subshell / background");
GLOBAL_STR(str66, "%r ");
GLOBAL_STR(str67, "");
GLOBAL_STR(str68, "Command evaluated to an empty argv array");
GLOBAL_STR(str69, "Can't run assignment builtin recursively");
GLOBAL_STR(str70, "errexit was disabled for this construct");
GLOBAL_STR(str71, "");
GLOBAL_STR(str72, "Can't run a proc while errexit is disabled. Use 'run' or wrap it in a process with $0 myproc");
GLOBAL_STR(str73, "Unexpected block passed to external command %r");
GLOBAL_STR(str74, "%r not found");
GLOBAL_STR(str75, "[%%%d] Started Pipeline with PID %d");
GLOBAL_STR(str76, "[%%%d] Started PID %d");
GLOBAL_STR(str77, "Command subs not allowed when errexit disabled (strict_errexit)");
GLOBAL_STR(str78, "__cat");
GLOBAL_STR(str79, "Command sub exited with status %d (%s)");
GLOBAL_STR(str80, "");
GLOBAL_STR(str81, "\n");
GLOBAL_STR(str82, "/dev/fd/%d");
GLOBAL_STR(str83, "/dev/fd/%d");
GLOBAL_STR(str84, "<_FdFrame %s>");
GLOBAL_STR(str85, "r");
GLOBAL_STR(str86, "%d: %s");
GLOBAL_STR(str87, "%d: %s");
GLOBAL_STR(str88, "%d: %s");
GLOBAL_STR(str89, "Can't open %r: %s");
GLOBAL_STR(str90, "Error closing descriptor %d: %s");
GLOBAL_STR(str91, "dup2(%d, %d) error: %s");
GLOBAL_STR(str92, "<StdinFromPipe %d %d>");
GLOBAL_STR(str93, "<StdoutToPipe %d %d>");
GLOBAL_STR(str94, "/bin/sh");
GLOBAL_STR(str95, "/bin/sh");
GLOBAL_STR(str96, "Can't execute %r: %s");
GLOBAL_STR(str97, "[process] %s");
GLOBAL_STR(str98, " ");
GLOBAL_STR(str99, "[subprog] %s");
GLOBAL_STR(str100, "");
GLOBAL_STR(str101, "osh I/O error: %s");
GLOBAL_STR(str102, "[here doc writer]");
GLOBAL_STR(str103, "<Process %s>");
GLOBAL_STR(str104, "Fatal error in posix.fork()");
GLOBAL_STR(str105, "<Pipeline %s>");
GLOBAL_STR(str106, " ");
GLOBAL_STR(str107, "JobState MaybeRemove %d");
GLOBAL_STR(str108, "osh: PID %d stopped, but osh didn't start it");
GLOBAL_STR(str109, "");
GLOBAL_STR(str110, "");
GLOBAL_STR(str111, "[PID %d] Stopped");
GLOBAL_STR(str112, "");
GLOBAL_STR(str113, "main");
GLOBAL_STR(str114, "osh usage error: %s");
GLOBAL_STR(str115, "%s-usage");
GLOBAL_STR(str116, "Oil");
GLOBAL_STR(str117, "main");
GLOBAL_STR(str118, "oil");
GLOBAL_STR(str119, "oil:all");
GLOBAL_STR(str120, "--one-pass-parse requires noexec (-n)");
GLOBAL_STR(str121, "completion");
GLOBAL_STR(str122, "history");
GLOBAL_STR(str123, "");
GLOBAL_STR(str124, "OSH_DEBUG_DIR");
GLOBAL_STR(str125, "%d-osh.log");
GLOBAL_STR(str126, "Writing logs to %r");
GLOBAL_STR(str127, "OSH_HIJACK_SHEBANG");
GLOBAL_STR(str128, "");
GLOBAL_STR(str129, "OSH_CRASH_DUMP_DIR");
GLOBAL_STR(str130, "");
GLOBAL_STR(str131, "");
GLOBAL_STR(str132, "osh: Couldn't open %r: %s");
GLOBAL_STR(str133, "/proc/%d/status");
GLOBAL_STR(str134, "--parser-mem-dump can only be used with -n");
GLOBAL_STR(str135, "/proc/%d/status");
GLOBAL_STR(str136, "Can't run a proc while errexit is disabled. Use 'catch' or wrap it in a process with $0 myproc");
GLOBAL_STR(str137, "Unhandled SimpleCommand");
GLOBAL_STR(str138, "\n");
GLOBAL_STR(str139, " \t\n\"'><=;|&(:");
GLOBAL_STR(str140, "/");
GLOBAL_STR(str141, "PATH");
GLOBAL_STR(str142, ":");
GLOBAL_STR(str143, "got invalid option %r");
GLOBAL_STR(str144, "got invalid option %r");
GLOBAL_STR(str145, "doesn't own option %r (try 'shopt')");
GLOBAL_STR(str146, "SHELLOPTS");
GLOBAL_STR(str147, ":");
GLOBAL_STR(str148, "Syntax options must be set at the top level (outside any function)");
GLOBAL_STR(str149, "Warning: set -o verbose not implemented");
GLOBAL_STR(str150, "SHELLOPTS");
GLOBAL_STR(str151, "%s:%s");
GLOBAL_STR(str152, "SHELLOPTS");
GLOBAL_STR(str153, ":");
GLOBAL_STR(str154, ":");
GLOBAL_STR(str155, "SHELLOPTS");
GLOBAL_STR(str156, "oil:basic");
GLOBAL_STR(str157, "oil:all");
GLOBAL_STR(str158, "strict:all");
GLOBAL_STR(str159, "set %so %s");
GLOBAL_STR(str160, "-");
GLOBAL_STR(str161, "+");
GLOBAL_STR(str162, "got invalid option %r");
GLOBAL_STR(str163, "shopt -%s %s");
GLOBAL_STR(str164, "s");
GLOBAL_STR(str165, "u");
GLOBAL_STR(str166, "<_ArgFrame %s %d at %x>");
GLOBAL_STR(str167, "Can't determine working directory: %s");
GLOBAL_STR(str168, "IFS");
GLOBAL_STR(str169, "UID");
GLOBAL_STR(str170, "EUID");
GLOBAL_STR(str171, "PPID");
GLOBAL_STR(str172, "HOSTNAME");
GLOBAL_STR(str173, "OSTYPE");
GLOBAL_STR(str174, "OPTIND");
GLOBAL_STR(str175, "1");
GLOBAL_STR(str176, "PS4");
GLOBAL_STR(str177, "+ ");
GLOBAL_STR(str178, "COMP_WORDBREAKS");
GLOBAL_STR(str179, "SHELLOPTS");
GLOBAL_STR(str180, "SHELLOPTS");
GLOBAL_STR(str181, "");
GLOBAL_STR(str182, "SHELLOPTS");
GLOBAL_STR(str183, "PWD");
GLOBAL_STR(str184, "PWD");
GLOBAL_STR(str185, "PWD");
GLOBAL_STR(str186, "OIL_VERSION");
GLOBAL_STR(str187, "PWD");
GLOBAL_STR(str188, "");
GLOBAL_STR(str189, "<Mem");
GLOBAL_STR(str190, "  -- %d --");
GLOBAL_STR(str191, "  %s %s");
GLOBAL_STR(str192, ">");
GLOBAL_STR(str193, "\n");
GLOBAL_STR(str194, "\n");
GLOBAL_STR(str195, "Warning: span_id undefined in SetCurrentSpanId");
GLOBAL_STR(str196, "nameref %r is undefined");
GLOBAL_STR(str197, "nameref %r contains invalid variable name %r");
GLOBAL_STR(str198, "%r has already been declared");
GLOBAL_STR(str199, "%r hasn't been declared");
GLOBAL_STR(str200, "nameref cycle: %s");
GLOBAL_STR(str201, " -> ");
GLOBAL_STR(str202, "Can't assign to readonly value %r");
GLOBAL_STR(str203, "Only strings can be exported");
GLOBAL_STR(str204, "nameref must be a string");
GLOBAL_STR(str205, "Can't assign to readonly array");
GLOBAL_STR(str206, "Can't assign to items in a string");
GLOBAL_STR(str207, "Value of type %s can't be indexed");
GLOBAL_STR(str208, "Can't assign to readonly associative array");
GLOBAL_STR(str209, "ARGV");
GLOBAL_STR(str210, "_status");
GLOBAL_STR(str211, "PIPESTATUS");
GLOBAL_STR(str212, "_pipeline_status");
GLOBAL_STR(str213, "_process_sub_status");
GLOBAL_STR(str214, "FUNCNAME");
GLOBAL_STR(str215, "source");
GLOBAL_STR(str216, "BASH_SOURCE");
GLOBAL_STR(str217, "BASH_LINENO");
GLOBAL_STR(str218, "0");
GLOBAL_STR(str219, "LINENO");
GLOBAL_STR(str220, "BASHPID");
GLOBAL_STR(str221, "Can't unset readonly variable %r");
GLOBAL_STR(str222, "%r isn't an array");
GLOBAL_STR(str223, "$%s isn't defined");
GLOBAL_STR(str224, "$%s should be a string");
GLOBAL_STR(str225, "$%s should be a string, got %s");
GLOBAL_STR(str226, "$%s doesn't look like an integer, got %r");
GLOBAL_STR(str227, "EOF");
GLOBAL_STR(str228, "/");
GLOBAL_STR(str229, "~");
GLOBAL_STR(str230, "  ");
GLOBAL_STR(str231, "\n  ");
GLOBAL_STR(str232, "\t");
GLOBAL_STR(str233, "\t");
GLOBAL_STR(str234, " ");
GLOBAL_STR(str235, "^");
GLOBAL_STR(str236, "~");
GLOBAL_STR(str237, "\n");
GLOBAL_STR(str238, "[ interactive ]");
GLOBAL_STR(str239, "[ -c flag ]");
GLOBAL_STR(str240, "[ stdin%s ]");
GLOBAL_STR(str241, "[ expansion of alias %r ]");
GLOBAL_STR(str242, "[ backticks at ... ]");
GLOBAL_STR(str243, "[ array LValue in %s ]");
GLOBAL_STR(str244, "[ eval at line %d of %s ]");
GLOBAL_STR(str245, "[ trap ]");
GLOBAL_STR(str246, "[ variable ]");
GLOBAL_STR(str247, "%s:%d: %s%s\n");
GLOBAL_STR(str248, "[??? no location ???] %s%s\n");
GLOBAL_STR(str249, "");
GLOBAL_STR(str250, "");
GLOBAL_STR(str251, "");
GLOBAL_STR(str252, "none");
GLOBAL_STR(str253, "AST not printed.");
GLOBAL_STR(str254, "text");
GLOBAL_STR(str255, "abbrev-text");
GLOBAL_STR(str256, "html");
GLOBAL_STR(str257, "abbrev-html");
GLOBAL_STR(str258, "abbrev-");
GLOBAL_STR(str259, "\n");
GLOBAL_STR(str260, "\n");
GLOBAL_STR(str261, "-");
GLOBAL_STR(str262, "_");
GLOBAL_STR(str263, "<_Attributes %s>");
GLOBAL_STR(str264, "<args.Reader %r %d>");
GLOBAL_STR(str265, "expected argument to %r");
GLOBAL_STR(str266, "-");
GLOBAL_STR(str267, "expected integer after %s, got %r");
GLOBAL_STR(str268, "-");
GLOBAL_STR(str269, "got invalid integer for %s: %s");
GLOBAL_STR(str270, "-");
GLOBAL_STR(str271, "expected number after %r, got %r");
GLOBAL_STR(str272, "-");
GLOBAL_STR(str273, "got invalid float for %s: %s");
GLOBAL_STR(str274, "-");
GLOBAL_STR(str275, "got invalid argument %r to %r, expected one of: %s");
GLOBAL_STR(str276, "-");
GLOBAL_STR(str277, "|");
GLOBAL_STR(str278, "0");
GLOBAL_STR(str279, "F");
GLOBAL_STR(str280, "false");
GLOBAL_STR(str281, "False");
GLOBAL_STR(str282, "1");
GLOBAL_STR(str283, "T");
GLOBAL_STR(str284, "true");
GLOBAL_STR(str285, "Talse");
GLOBAL_STR(str286, "got invalid argument to boolean flag: %r");
GLOBAL_STR(str287, "-");
GLOBAL_STR(str288, "-");
GLOBAL_STR(str289, "got invalid option %r");
GLOBAL_STR(str290, "Expected argument for action");
GLOBAL_STR(str291, "Invalid action name %r");
GLOBAL_STR(str292, "--");
GLOBAL_STR(str293, "--");
GLOBAL_STR(str294, "got invalid flag %r");
GLOBAL_STR(str295, "-");
GLOBAL_STR(str296, "0");
GLOBAL_STR(str297, "Z");
GLOBAL_STR(str298, "-");
GLOBAL_STR(str299, "doesn't accept flag %s");
GLOBAL_STR(str300, "-");
GLOBAL_STR(str301, "+");
GLOBAL_STR(str302, "+");
GLOBAL_STR(str303, "doesn't accept option %s");
GLOBAL_STR(str304, "+");
GLOBAL_STR(str305, "-");
GLOBAL_STR(str306, "--");
GLOBAL_STR(str307, "--");
GLOBAL_STR(str308, "got invalid flag %r");
GLOBAL_STR(str309, "-");
GLOBAL_STR(str310, "+");
GLOBAL_STR(str311, "got invalid flag %r");
GLOBAL_STR(str312, "-");
GLOBAL_STR(str313, "^--?([a-zA-Z0-9][a-zA-Z0-9\\-]*)(=.*)?$");
GLOBAL_STR(str314, "<LineLexer at pos %d of line %r (id = %d)>");
GLOBAL_STR(str315, "");
GLOBAL_STR(str316, "");
GLOBAL_STR(str317, "");
GLOBAL_STR(str318, "<Trail %s %s %s %s>");
GLOBAL_STR(str319, "");
GLOBAL_STR(str320, "ShAssignment expression can't be nested like this");
GLOBAL_STR(str321, "Here docs aren't allowed in expressions");
GLOBAL_STR(str322, "\n");
GLOBAL_STR(str323, "");
GLOBAL_STR(str324, " (%s)");
GLOBAL_STR(str325, "Unexpected token in expression mode%s");
GLOBAL_STR(str326, "Syntax error in expression (near %s)");
GLOBAL_STR(str327, "alnum");
GLOBAL_STR(str328, "cntrl");
GLOBAL_STR(str329, "lower");
GLOBAL_STR(str330, "space");
GLOBAL_STR(str331, "alpha");
GLOBAL_STR(str332, "digit");
GLOBAL_STR(str333, "print");
GLOBAL_STR(str334, "upper");
GLOBAL_STR(str335, "blank");
GLOBAL_STR(str336, "graph");
GLOBAL_STR(str337, "punct");
GLOBAL_STR(str338, "xdigit");
GLOBAL_STR(str339, "Range start/end shouldn't have more than one character");
GLOBAL_STR(str340, "Write singleton tuples with tup(), not a trailing comma");
GLOBAL_STR(str341, "testlist_comp");
GLOBAL_STR(str342, "PNode type %d (%s) wasn't handled");
GLOBAL_STR(str343, "Can't assign to this expression");
GLOBAL_STR(str344, "PNode type %d (%s) wasn't handled");
GLOBAL_STR(str345, "TODO");
GLOBAL_STR(str346, "dot");
GLOBAL_STR(str347, "Can't negate this symbol");
GLOBAL_STR(str348, "%r isn't a character class");
GLOBAL_STR(str349, "Can't negate this symbol");
GLOBAL_STR(str350, "%r isn't a character class");
GLOBAL_STR(str351, "%start");
GLOBAL_STR(str352, "%end");
GLOBAL_STR(str353, "dot");
GLOBAL_STR(str354, "Unexpected token %r in regex");
GLOBAL_STR(str355, "%s-%s");
GLOBAL_STR(str356, "ERE can't express code point %d");
GLOBAL_STR(str357, "Perl classes can't be negated in ERE");
GLOBAL_STR(str358, "%s");
GLOBAL_STR(str359, "POSIX classes can't be negated in ERE");
GLOBAL_STR(str360, "[:%s:]");
GLOBAL_STR(str361, ".");
GLOBAL_STR(str362, "^");
GLOBAL_STR(str363, "$");
GLOBAL_STR(str364, "|");
GLOBAL_STR(str365, "POSIX EREs don't have groups without capture, so this node needs () around it.");
GLOBAL_STR(str366, "+");
GLOBAL_STR(str367, "*");
GLOBAL_STR(str368, "?");
GLOBAL_STR(str369, "{%s}");
GLOBAL_STR(str370, "");
GLOBAL_STR(str371, "");
GLOBAL_STR(str372, "{%s,%s}");
GLOBAL_STR(str373, "(");
GLOBAL_STR(str374, ")");
GLOBAL_STR(str375, "[^%s]");
GLOBAL_STR(str376, "[%s]");
GLOBAL_STR(str377, "[^[:%s:]]");
GLOBAL_STR(str378, "[[:%s:]]");
GLOBAL_STR(str379, "[");
GLOBAL_STR(str380, "^");
GLOBAL_STR(str381, "]");
GLOBAL_STR(str382, "The [ operator doesn't apply to this expression");
GLOBAL_STR(str383, "Expected ]]");
GLOBAL_STR(str384, "Unexpected trailing word %s");
GLOBAL_STR(str385, "Invalid argument to unary operator");
GLOBAL_STR(str386, "Expected ), got %s");
GLOBAL_STR(str387, "Unexpected token in boolean expression (%s)");
GLOBAL_STR(str388, "");
GLOBAL_STR(str389, "Expected %d, got %d");
GLOBAL_STR(str390, "Step can't be 0");
GLOBAL_STR(str391, "Invalid step %d for ascending integer range");
GLOBAL_STR(str392, "Invalid step %d for descending integer range");
GLOBAL_STR(str393, "Invalid step %d for ascending character range");
GLOBAL_STR(str394, "Invalid step %d for descending character range");
GLOBAL_STR(str395, "Mismatched cases in character range");
GLOBAL_STR(str396, "");
GLOBAL_STR(str397, "0");
GLOBAL_STR(str398, "0");
GLOBAL_STR(str399, "g");
GLOBAL_STR(str400, "a");
GLOBAL_STR(str401, "A");
GLOBAL_STR(str402, "n");
GLOBAL_STR(str403, "r");
GLOBAL_STR(str404, "x");
GLOBAL_STR(str405, "%s=%s");
GLOBAL_STR(str406, "-");
GLOBAL_STR(str407, "+");
GLOBAL_STR(str408, "-");
GLOBAL_STR(str409, "+");
GLOBAL_STR(str410, "-");
GLOBAL_STR(str411, "+");
GLOBAL_STR(str412, "n");
GLOBAL_STR(str413, "r");
GLOBAL_STR(str414, "x");
GLOBAL_STR(str415, "a");
GLOBAL_STR(str416, "A");
GLOBAL_STR(str417, "-");
GLOBAL_STR(str418, "declare -");
GLOBAL_STR(str419, "");
GLOBAL_STR(str420, " ");
GLOBAL_STR(str421, "=");
GLOBAL_STR(str422, "=()");
GLOBAL_STR(str423, ";");
GLOBAL_STR(str424, " ");
GLOBAL_STR(str425, "[");
GLOBAL_STR(str426, "]=");
GLOBAL_STR(str427, " ");
GLOBAL_STR(str428, "=(");
GLOBAL_STR(str429, "");
GLOBAL_STR(str430, ")");
GLOBAL_STR(str431, " ");
GLOBAL_STR(str432, "[");
GLOBAL_STR(str433, "]=");
GLOBAL_STR(str434, "=(");
GLOBAL_STR(str435, "");
GLOBAL_STR(str436, ")");
GLOBAL_STR(str437, "");
GLOBAL_STR(str438, "export_");
GLOBAL_STR(str439, "doesn't accept -f because it's dangerous.  (The code can usually be restructured with 'source')");
GLOBAL_STR(str440, "doesn't accept RHS with -n");
GLOBAL_STR(str441, "Got -a but RHS isn't an array");
GLOBAL_STR(str442, "Got -A but RHS isn't an associative array");
GLOBAL_STR(str443, "readonly");
GLOBAL_STR(str444, "new_var");
GLOBAL_STR(str445, "passed -f without args");
GLOBAL_STR(str446, "declare -f %s");
GLOBAL_STR(str447, "-");
GLOBAL_STR(str448, "-");
GLOBAL_STR(str449, "-");
GLOBAL_STR(str450, "+");
GLOBAL_STR(str451, "+");
GLOBAL_STR(str452, "+");
GLOBAL_STR(str453, "Invalid unset expression");
GLOBAL_STR(str454, "expected a variable name.  shopt -s eval_unsafe_arith allows expressions");
GLOBAL_STR(str455, "unset");
GLOBAL_STR(str456, "Invalid shift argument %r");
GLOBAL_STR(str457, "got too many arguments");
GLOBAL_STR(str458, "eval");
GLOBAL_STR(str459, "requires code string");
GLOBAL_STR(str460, "requires exactly 1 argument");
GLOBAL_STR(str461, " ");
GLOBAL_STR(str462, "source");
GLOBAL_STR(str463, "missing required argument");
GLOBAL_STR(str464, "source %r failed: %s");
GLOBAL_STR(str465, "command");
GLOBAL_STR(str466, "Can't run assignment builtin recursively");
GLOBAL_STR(str467, "%r isn't a shell builtin");
GLOBAL_STR(str468, "sigpipe");
GLOBAL_STR(str469, "run");
GLOBAL_STR(str470, "'Run' expected a command to run");
GLOBAL_STR(str471, "(original failure)");
GLOBAL_STR(str472, "");
GLOBAL_STR(str473, "fatal: status %d when --allow-status-01");
GLOBAL_STR(str474, ":");
GLOBAL_STR(str475, "function");
GLOBAL_STR(str476, "alias");
GLOBAL_STR(str477, "builtin");
GLOBAL_STR(str478, "builtin");
GLOBAL_STR(str479, "builtin");
GLOBAL_STR(str480, "keyword");
GLOBAL_STR(str481, "keyword");
GLOBAL_STR(str482, "file");
GLOBAL_STR(str483, "type");
GLOBAL_STR(str484, "type: %r not found");
GLOBAL_STR(str485, "file");
GLOBAL_STR(str486, "file");
GLOBAL_STR(str487, "%s is a %s");
GLOBAL_STR(str488, "function");
GLOBAL_STR(str489, "");
GLOBAL_STR(str490, "\n");
GLOBAL_STR(str491, "");
GLOBAL_STR(str492, "");
GLOBAL_STR(str493, "\r\n");
GLOBAL_STR(str494, "\n");
GLOBAL_STR(str495, "'");
GLOBAL_STR(str496, "");
GLOBAL_STR(str497, "");
GLOBAL_STR(str498, "read");
GLOBAL_STR(str499, "_line");
GLOBAL_STR(str500, ":");
GLOBAL_STR(str501, "got extra argument");
GLOBAL_STR(str502, "--qsn can only be used with --line");
GLOBAL_STR(str503, "_all");
GLOBAL_STR(str504, ":");
GLOBAL_STR(str505, "got extra argument");
GLOBAL_STR(str506, "--qsn not implemented yet");
GLOBAL_STR(str507, "read -t isn't implemented (except t=0)");
GLOBAL_STR(str508, "");
GLOBAL_STR(str509, "REPLY");
GLOBAL_STR(str510, "REPLY");
GLOBAL_STR(str511, "\u0000");
GLOBAL_STR(str512, "\u0000");
GLOBAL_STR(str513, "\n");
GLOBAL_STR(str514, "");
GLOBAL_STR(str515, "mapfile");
GLOBAL_STR(str516, "MAPFILE");
GLOBAL_STR(str517, "\n");
GLOBAL_STR(str518, "cd");
GLOBAL_STR(str519, "HOME");
GLOBAL_STR(str520, "HOME");
GLOBAL_STR(str521, "-");
GLOBAL_STR(str522, "OLDPWD");
GLOBAL_STR(str523, "PWD");
GLOBAL_STR(str524, "cd %r: %s");
GLOBAL_STR(str525, "PWD");
GLOBAL_STR(str526, "OLDPWD");
GLOBAL_STR(str527, "%2d  %s");
GLOBAL_STR(str528, " ");
GLOBAL_STR(str529, "pushd: no other directory");
GLOBAL_STR(str530, "got too many arguments");
GLOBAL_STR(str531, "pushd: %r: %s");
GLOBAL_STR(str532, "HOME");
GLOBAL_STR(str533, "PWD");
GLOBAL_STR(str534, "popd: directory stack is empty");
GLOBAL_STR(str535, "popd: %r: %s");
GLOBAL_STR(str536, "PWD");
GLOBAL_STR(str537, "got extra argument");
GLOBAL_STR(str538, "HOME");
GLOBAL_STR(str539, "dirs");
GLOBAL_STR(str540, "HOME");
GLOBAL_STR(str541, "pwd");
GLOBAL_STR(str542, "_devbuild/help/groups.txt");
GLOBAL_STR(str543, "help");
GLOBAL_STR(str544, "help");
GLOBAL_STR(str545, "_devbuild/help/%s");
GLOBAL_STR(str546, "no help topics match %r");
GLOBAL_STR(str547, "# +");
GLOBAL_STR(str548, "osh printf doesn't support the %r flag");
GLOBAL_STR(str549, "eEfFgG");
GLOBAL_STR(str550, "osh printf doesn't support floating point");
GLOBAL_STR(str551, "c");
GLOBAL_STR(str552, "osh printf doesn't support single characters (bytes)");
GLOBAL_STR(str553, "Invalid printf format character");
GLOBAL_STR(str554, "Expected a printf format character");
GLOBAL_STR(str555, "fsT");
GLOBAL_STR(str556, "printf precision can't be specified with type %r");
GLOBAL_STR(str557, "printf");
GLOBAL_STR(str558, "requires a format string");
GLOBAL_STR(str559, "%");
GLOBAL_STR(str560, "");
GLOBAL_STR(str561, "printf got invalid width %r");
GLOBAL_STR(str562, "0");
GLOBAL_STR(str563, "");
GLOBAL_STR(str564, "printf got invalid precision %r");
GLOBAL_STR(str565, "");
GLOBAL_STR(str566, "s");
GLOBAL_STR(str567, "q");
GLOBAL_STR(str568, "b");
GLOBAL_STR(str569, "");
GLOBAL_STR(str570, "diouxX");
GLOBAL_STR(str571, "'\"");
GLOBAL_STR(str572, "printf expected an integer, got %r");
GLOBAL_STR(str573, "di");
GLOBAL_STR(str574, "ouxX");
GLOBAL_STR(str575, "Can't format negative number %d with %%%s");
GLOBAL_STR(str576, "u");
GLOBAL_STR(str577, "o");
GLOBAL_STR(str578, "x");
GLOBAL_STR(str579, "X");
GLOBAL_STR(str580, "TZ");
GLOBAL_STR(str581, "TZ");
GLOBAL_STR(str582, "-");
GLOBAL_STR(str583, " ");
GLOBAL_STR(str584, "0");
GLOBAL_STR(str585, "0");
GLOBAL_STR(str586, " ");
GLOBAL_STR(str587, "");
GLOBAL_STR(str588, "Invalid -v expression");
GLOBAL_STR(str589, "-v expected a variable name.  shopt -s eval_unsafe_arith allows expressions");
GLOBAL_STR(str590, "alias");
GLOBAL_STR(str591, "alias %s=%r");
GLOBAL_STR(str592, "=");
GLOBAL_STR(str593, "No alias named %r");
GLOBAL_STR(str594, "alias %s=%r");
GLOBAL_STR(str595, "unalias");
GLOBAL_STR(str596, "requires an argument");
GLOBAL_STR(str597, "No alias named %r");
GLOBAL_STR(str598, "%s=%s");
GLOBAL_STR(str599, "set");
GLOBAL_STR(str600, "shopt");
GLOBAL_STR(str601, "got invalid option %r");
GLOBAL_STR(str602, "hash");
GLOBAL_STR(str603, "got extra arguments after -r");
GLOBAL_STR(str604, "hash: %r not found");
GLOBAL_STR(str605, ":");
GLOBAL_STR(str606, "OPTIND");
GLOBAL_STR(str607, "OPTIND");
GLOBAL_STR(str608, "OPTARG");
GLOBAL_STR(str609, "OPTARG");
GLOBAL_STR(str610, "");
GLOBAL_STR(str611, "?");
GLOBAL_STR(str612, "-");
GLOBAL_STR(str613, "-");
GLOBAL_STR(str614, "?");
GLOBAL_STR(str615, "?");
GLOBAL_STR(str616, "getopts: option %r requires an argument.");
GLOBAL_STR(str617, "(getopts argv: %s)");
GLOBAL_STR(str618, " ");
GLOBAL_STR(str619, "?");
GLOBAL_STR(str620, "");
GLOBAL_STR(str621, "requires an argspec");
GLOBAL_STR(str622, "requires the name of a variable to set");
GLOBAL_STR(str623, "got invalid variable name %r");
GLOBAL_STR(str624, "echo");
GLOBAL_STR(str625, "");
GLOBAL_STR(str626, "takes at most one arg when strict_echo is on (hint: add quotes)");
GLOBAL_STR(str627, " ");
GLOBAL_STR(str628, "\n");
GLOBAL_STR(str629, "Assignment builtin %r not configured");
GLOBAL_STR(str630, "%r ");
GLOBAL_STR(str631, "");
GLOBAL_STR(str632, "command in ");
GLOBAL_STR(str633, "assignment in ");
GLOBAL_STR(str634, "subshell invoked from ");
GLOBAL_STR(str635, "pipeline invoked from ");
GLOBAL_STR(str636, "");
GLOBAL_STR(str637, "Exiting with status %d (%sPID %d)");
GLOBAL_STR(str638, "Redirect filename can't be empty");
GLOBAL_STR(str639, "Redirect descriptor can't be empty");
GLOBAL_STR(str640, "-");
GLOBAL_STR(str641, "-");
GLOBAL_STR(str642, "Invalid descriptor %r.  Expected D, -, or D- where D is an integer");
GLOBAL_STR(str643, "\n");
GLOBAL_STR(str644, "Unknown redirect op");
GLOBAL_STR(str645, "Unknown redirect type");
GLOBAL_STR(str646, "strict_errexit only allows simple commands (got %s). Hint: use 'run'.");
GLOBAL_STR(str647, "strict_errexit only allows a single command.  Hint: use \"run\".");
GLOBAL_STR(str648, "strict_errexit only allows simple commands (got %s). Hint: use 'run'.");
GLOBAL_STR(str649, "TODO: trace string for assignment");
GLOBAL_STR(str650, "ShAssignment builtins don't accept blocks");
GLOBAL_STR(str651, "|& isn't supported");
GLOBAL_STR(str652, "Can't append array to string");
GLOBAL_STR(str653, "Can't append string to array");
GLOBAL_STR(str654, "%r expected a number, got %r");
GLOBAL_STR(str655, "Invalid control flow at top level");
GLOBAL_STR(str656, "warning: ");
GLOBAL_STR(str657, "Loop and control flow can't be in different processes");
GLOBAL_STR(str658, "fatal: ");
GLOBAL_STR(str659, "EXIT");
GLOBAL_STR(str660, "Unexpected %r (in function call)");
GLOBAL_STR(str661, "Attempted to exit from completion hook.");
GLOBAL_STR(str662, "Couldn't find terminator for here doc that starts here");
GLOBAL_STR(str663, "\t");
GLOBAL_STR(str664, "Invalid here doc delimiter");
GLOBAL_STR(str665, "+");
GLOBAL_STR(str666, "+");
GLOBAL_STR(str667, "+");
GLOBAL_STR(str668, "%d != %d");
GLOBAL_STR(str669, "Environment binding shouldn't look like an array assignment");
GLOBAL_STR(str670, "+");
GLOBAL_STR(str671, "Expected = in environment binding, got +=");
GLOBAL_STR(str672, "Environment bindings can't contain array literals");
GLOBAL_STR(str673, "Expected word type %s, got %s");
GLOBAL_STR(str674, "{");
GLOBAL_STR(str675, "}");
GLOBAL_STR(str676, "Invalid token after redirect operator");
GLOBAL_STR(str677, " ");
GLOBAL_STR(str678, " ");
GLOBAL_STR(str679, "line IDs %d != %d");
GLOBAL_STR(str680, " ");
GLOBAL_STR(str681, "");
GLOBAL_STR(str682, "Unexpected block");
GLOBAL_STR(str683, "=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression");
GLOBAL_STR(str684, "name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =");
GLOBAL_STR(str685, "Unexpected block");
GLOBAL_STR(str686, "Unexpected block");
GLOBAL_STR(str687, "Control flow shouldn't have redirects");
GLOBAL_STR(str688, "Control flow shouldn't have environment bindings");
GLOBAL_STR(str689, "Unexpected argument to %r");
GLOBAL_STR(str690, "Invalid word in for loop");
GLOBAL_STR(str691, "Invalid word after for expression");
GLOBAL_STR(str692, "Loop variable name should be a constant");
GLOBAL_STR(str693, "Invalid loop variable name");
GLOBAL_STR(str694, "Unexpected word after for loop variable");
GLOBAL_STR(str695, "Expected ;; or esac");
GLOBAL_STR(str696, "Unexpected word while parsing compound command");
GLOBAL_STR(str697, "Invalid function name");
GLOBAL_STR(str698, "Expected ) in function definition");
GLOBAL_STR(str699, "Invalid KSH-style function name");
GLOBAL_STR(str700, "Unexpected word when parsing command");
GLOBAL_STR(str701, "Unexpected right brace");
GLOBAL_STR(str702, "Unexpected EOF while parsing command");
GLOBAL_STR(str703, "Invalid word while parsing command");
GLOBAL_STR(str704, "Unexpected word while parsing command line");
GLOBAL_STR(str705, "Unterminated here doc began here");
GLOBAL_STR(str706, "\\");
GLOBAL_STR(str707, "*");
GLOBAL_STR(str708, "?");
GLOBAL_STR(str709, "[");
GLOBAL_STR(str710, "]");
GLOBAL_STR(str711, "\\*?[]-:!");
GLOBAL_STR(str712, "\\^-");
GLOBAL_STR(str713, "\\?*+{}^$.()|");
GLOBAL_STR(str714, "\\");
GLOBAL_STR(str715, "Unexpected escaped character %r");
GLOBAL_STR(str716, "");
GLOBAL_STR(str717, "");
GLOBAL_STR(str718, "Malformed character class; treating as literal");
GLOBAL_STR(str719, "Got unescaped right bracket");
GLOBAL_STR(str720, "Got unescaped trailing backslash");
GLOBAL_STR(str721, ".|^$()+*?[]{}\\");
GLOBAL_STR(str722, "\\");
GLOBAL_STR(str723, "\\");
GLOBAL_STR(str724, "\\[");
GLOBAL_STR(str725, "\\]");
GLOBAL_STR(str726, "\\\\");
GLOBAL_STR(str727, "^");
GLOBAL_STR(str728, ".");
GLOBAL_STR(str729, ".*");
GLOBAL_STR(str730, "[");
GLOBAL_STR(str731, "^");
GLOBAL_STR(str732, "\\-");
GLOBAL_STR(str733, "\\]");
GLOBAL_STR(str734, "]");
GLOBAL_STR(str735, "-");
GLOBAL_STR(str736, "]");
GLOBAL_STR(str737, "");
GLOBAL_STR(str738, "Error expanding glob %r: %s");
GLOBAL_STR(str739, "-");
GLOBAL_STR(str740, "<Error: unbalanced \\[ and \\]> ");
GLOBAL_STR(str741, "$");
GLOBAL_STR(str742, "#");
GLOBAL_STR(str743, "$");
GLOBAL_STR(str744, "hostname");
GLOBAL_STR(str745, "user");
GLOBAL_STR(str746, "$ ");
GLOBAL_STR(str747, "\u0001");
GLOBAL_STR(str748, "\u0002");
GLOBAL_STR(str749, "$");
GLOBAL_STR(str750, "$");
GLOBAL_STR(str751, "u");
GLOBAL_STR(str752, "user");
GLOBAL_STR(str753, "h");
GLOBAL_STR(str754, "hostname");
GLOBAL_STR(str755, ".");
GLOBAL_STR(str756, "H");
GLOBAL_STR(str757, "hostname");
GLOBAL_STR(str758, "w");
GLOBAL_STR(str759, "PWD");
GLOBAL_STR(str760, "HOME");
GLOBAL_STR(str761, "<Error: %s>");
GLOBAL_STR(str762, "W");
GLOBAL_STR(str763, "PWD");
GLOBAL_STR(str764, "<Error: PWD is not a string> ");
GLOBAL_STR(str765, "<Error: \\%s not implemented in $PS1> ");
GLOBAL_STR(str766, "$");
GLOBAL_STR(str767, "\\$");
GLOBAL_STR(str768, "Invalid token %r");
GLOBAL_STR(str769, "");
GLOBAL_STR(str770, "<ERROR: Can't parse PS1: %s>");
GLOBAL_STR(str771, "osh");
GLOBAL_STR(str772, "PS1");
GLOBAL_STR(str773, "PROMPT_COMMAND");
GLOBAL_STR(str774, "Undefined variable %r");
GLOBAL_STR(str775, "Can't use [] on value of type %s");
GLOBAL_STR(str776, "");
GLOBAL_STR(str777, "Can't use [] on value of type %s");
GLOBAL_STR(str778, "");
GLOBAL_STR(str779, "0x");
GLOBAL_STR(str780, "Invalid hex constant %r");
GLOBAL_STR(str781, "0");
GLOBAL_STR(str782, "Invalid octal constant %r");
GLOBAL_STR(str783, "#");
GLOBAL_STR(str784, "#");
GLOBAL_STR(str785, "Invalid base for numeric constant %r");
GLOBAL_STR(str786, "a");
GLOBAL_STR(str787, "A");
GLOBAL_STR(str788, "@");
GLOBAL_STR(str789, "_");
GLOBAL_STR(str790, "Invalid digits for numeric constant %r");
GLOBAL_STR(str791, "Digits %r out of range for base %d");
GLOBAL_STR(str792, "Parse error in recursive arithmetic");
GLOBAL_STR(str793, "Invalid integer constant %r");
GLOBAL_STR(str794, "Invalid integer constant %r");
GLOBAL_STR(str795, "Invalid integer constant %r");
GLOBAL_STR(str796, "Undefined value in arithmetic context");
GLOBAL_STR(str797, "Expected a value convertible to integer, got %s");
GLOBAL_STR(str798, "0");
GLOBAL_STR(str799, "Divide by zero");
GLOBAL_STR(str800, "Divide by zero");
GLOBAL_STR(str801, "Expected array or assoc in index expression, got %s");
GLOBAL_STR(str802, "Divide by zero");
GLOBAL_STR(str803, "Divide by zero");
GLOBAL_STR(str804, "Exponent can't be less than zero");
GLOBAL_STR(str805, "Associative array keys must be strings: $x 'x' \"$x\" etc.");
GLOBAL_STR(str806, "Invalid place to modify");
GLOBAL_STR(str807, "BASH_REMATCH");
GLOBAL_STR(str808, "%s isn't implemented");
GLOBAL_STR(str809, "Invalid regex %r: %s");
GLOBAL_STR(str810, " \t\n");
GLOBAL_STR(str811, "IFS");
GLOBAL_STR(str812, "IFS shouldn't be an array");
GLOBAL_STR(str813, " \t\n");
GLOBAL_STR(str814, "IFS");
GLOBAL_STR(str815, " ");
GLOBAL_STR(str816, "");
GLOBAL_STR(str817, "IFS shouldn't be an array");
GLOBAL_STR(str818, "\\");
GLOBAL_STR(str819, "\\");
GLOBAL_STR(str820, "Invalid transition from %r with %r");
GLOBAL_STR(str821, "\u00ef\u00bf\u00bd");
GLOBAL_STR(str822, "");
GLOBAL_STR(str823, "Incomplete UTF-8 character");
GLOBAL_STR(str824, "Invalid UTF-8 continuation byte");
GLOBAL_STR(str825, "Invalid start of UTF-8 character");
GLOBAL_STR(str826, "");
GLOBAL_STR(str827, "%s can't have an argument");
GLOBAL_STR(str828, "");
GLOBAL_STR(str829, "%s can't have an argument");
GLOBAL_STR(str830, "");
GLOBAL_STR(str831, "%s can't have an argument");
GLOBAL_STR(str832, "");
GLOBAL_STR(str833, "%s can't have an argument");
GLOBAL_STR(str834, "");
GLOBAL_STR(str835, "<_GlobReplacer regex %r r %r>");
GLOBAL_STR(str836, "(%s)");
GLOBAL_STR(str837, "Error matching regex %r: %s");
GLOBAL_STR(str838, "^");
GLOBAL_STR(str839, "$");
GLOBAL_STR(str840, "\r");
GLOBAL_STR(str841, "<INVALID CR>");
GLOBAL_STR(str842, "\n");
GLOBAL_STR(str843, "<INVALID NEWLINE>");
GLOBAL_STR(str844, " `~!$&*()[]{}\\|;'\"<>?");
GLOBAL_STR(str845, "Left-hand side of this assignment is invalid");
GLOBAL_STR(str846, "Token can't be used in prefix position");
GLOBAL_STR(str847, "Token can't be used in infix position");
GLOBAL_STR(str848, "Parser expected %s, got %s");
GLOBAL_STR(str849, "Unexpected end of input");
GLOBAL_STR(str850, "BASH_SOURCE");
GLOBAL_STR(str851, "FUNCNAME");
GLOBAL_STR(str852, "BASH_LINENO");
GLOBAL_STR(str853, "0");
GLOBAL_STR(str854, "0");
GLOBAL_STR(str855, "");
GLOBAL_STR(str856, "");
GLOBAL_STR(str857, "\\");
GLOBAL_STR(str858, "\\\\");
GLOBAL_STR(str859, "");
GLOBAL_STR(str860, "");
GLOBAL_STR(str861, "The length index of a array slice can't be negative: %d");
GLOBAL_STR(str862, "Can't slice associative arrays");
GLOBAL_STR(str863, "i");
GLOBAL_STR(str864, "e");
GLOBAL_STR(str865, "f");
GLOBAL_STR(str866, "n");
GLOBAL_STR(str867, "u");
GLOBAL_STR(str868, "x");
GLOBAL_STR(str869, "C");
GLOBAL_STR(str870, "");
GLOBAL_STR(str871, "~");
GLOBAL_STR(str872, "HOME");
GLOBAL_STR(str873, "Error expanding tilde (e.g. invalid user)");
GLOBAL_STR(str874, "Can't assign to special variable");
GLOBAL_STR(str875, "unset variable %r");
GLOBAL_STR(str876, "@");
GLOBAL_STR(str877, "*");
GLOBAL_STR(str878, "@");
GLOBAL_STR(str879, "*");
GLOBAL_STR(str880, "warning: ");
GLOBAL_STR(str881, "-1");
GLOBAL_STR(str882, "@");
GLOBAL_STR(str883, "*");
GLOBAL_STR(str884, "[");
GLOBAL_STR(str885, "]");
GLOBAL_STR(str886, "Bad indirect expansion: %r");
GLOBAL_STR(str887, "");
GLOBAL_STR(str888, "warning: ");
GLOBAL_STR(str889, "");
GLOBAL_STR(str890, "\u0001");
GLOBAL_STR(str891, "");
GLOBAL_STR(str892, "\u0002");
GLOBAL_STR(str893, "");
GLOBAL_STR(str894, "Can't use @P on %s");
GLOBAL_STR(str895, " ");
GLOBAL_STR(str896, "Can't use @Q on %s");
GLOBAL_STR(str897, "a");
GLOBAL_STR(str898, "A");
GLOBAL_STR(str899, "r");
GLOBAL_STR(str900, "x");
GLOBAL_STR(str901, "n");
GLOBAL_STR(str902, "");
GLOBAL_STR(str903, "Var op %r not implemented");
GLOBAL_STR(str904, "Can't index string with @");
GLOBAL_STR(str905, "Can't index string with *");
GLOBAL_STR(str906, "Can't index string %r with integer");
GLOBAL_STR(str907, "");
GLOBAL_STR(str908, "");
GLOBAL_STR(str909, "$");
GLOBAL_STR(str910, "Undefined variable %r");
GLOBAL_STR(str911, "Undefined array %r");
GLOBAL_STR(str912, "Array %r can't be referred to as a scalar (without @ or *)");
GLOBAL_STR(str913, "Illegal array word part (strict_array)");
GLOBAL_STR(str914, " ");
GLOBAL_STR(str915, "");
GLOBAL_STR(str916, "Array %r can't be referred to as a scalar (without @ or *)");
GLOBAL_STR(str917, "Unexpected array literal");
GLOBAL_STR(str918, "Unexpected associative array literal");
GLOBAL_STR(str919, "@(");
GLOBAL_STR(str920, "|");
GLOBAL_STR(str921, ")");
GLOBAL_STR(str922, "Can't splice %r");
GLOBAL_STR(str923, "");
GLOBAL_STR(str924, "");
GLOBAL_STR(str925, "This word should yield a string, but it contains an array");
GLOBAL_STR(str926, " ");
GLOBAL_STR(str927, "");
GLOBAL_STR(str928, "<Runtime error: %s>");
GLOBAL_STR(str929, "<I/O error: %s>");
GLOBAL_STR(str930, "<Ctrl-C>");
GLOBAL_STR(str931, "");
GLOBAL_STR(str932, "");
GLOBAL_STR(str933, "");
GLOBAL_STR(str934, "");
GLOBAL_STR(str935, "");
GLOBAL_STR(str936, "LHS array not allowed in assignment builtin");
GLOBAL_STR(str937, "+");
GLOBAL_STR(str938, "+= not allowed in assignment builtin");
GLOBAL_STR(str939, "-");
GLOBAL_STR(str940, "+");
GLOBAL_STR(str941, "f");
GLOBAL_STR(str942, "F");
GLOBAL_STR(str943, "");
GLOBAL_STR(str944, "=");
GLOBAL_STR(str945, "Invalid variable name %r");
GLOBAL_STR(str946, "__NO_COMMAND_SUB__");
GLOBAL_STR(str947, "__NO_PROCESS_SUB__");
GLOBAL_STR(str948, "Expected : or } in slice");
GLOBAL_STR(str949, "Pattern in ${x/pat/replace} must not be empty");
GLOBAL_STR(str950, "Expected } after replacement string, got %s");
GLOBAL_STR(str951, "Expected } or / to close pattern");
GLOBAL_STR(str952, "Expected ] to close subscript");
GLOBAL_STR(str953, "Expected } to close ${");
GLOBAL_STR(str954, "Expected } to close ${");
GLOBAL_STR(str955, "Expected } to close ${");
GLOBAL_STR(str956, "Unexpected token in ${} (%s)");
GLOBAL_STR(str957, "VOp2");
GLOBAL_STR(str958, "Unexpected token in ${} (%s)");
GLOBAL_STR(str959, "VOp3");
GLOBAL_STR(str960, "Expected } to close ${");
GLOBAL_STR(str961, "Expected } after length expression");
GLOBAL_STR(str962, "Unexpected token in ${}");
GLOBAL_STR(str963, "'");
GLOBAL_STR(str964, "\\");
GLOBAL_STR(str965, "Strings with backslashes should look like r'\\n' or c'\\n'");
GLOBAL_STR(str966, "Use \\xhh or \\u{...} instead of octal escapes in Oil strings");
GLOBAL_STR(str967, "Invalid hex escape in Oil string (must be \\xHH)");
GLOBAL_STR(str968, "Invalid char escape in C-style string literal");
GLOBAL_STR(str969, "Unexpected EOF in single-quoted string that began here");
GLOBAL_STR(str970, "Unexpected EOF reading extended glob that began here");
GLOBAL_STR(str971, "Invalid char escape in double quoted string");
GLOBAL_STR(str972, "Literal $ should be quoted like \\$");
GLOBAL_STR(str973, "Invalid backtick: use $(cmd) or \\` in Oil strings");
GLOBAL_STR(str974, "Unexpected EOF reading double-quoted string that began here");
GLOBAL_STR(str975, "Use $(cmd) instead of backticks (strict_backticks)");
GLOBAL_STR(str976, "Unexpected EOF while looking for closing backtick");
GLOBAL_STR(str977, "");
GLOBAL_STR(str978, "Invalid proc name %s");
GLOBAL_STR(str979, "Unexpected token after arithmetic expression (%s != %s)");
GLOBAL_STR(str980, "Expected second ) to end arith sub");
GLOBAL_STR(str981, "Expected second ) to end arith statement");
GLOBAL_STR(str982, "Expected ; here");
GLOBAL_STR(str983, "Expected ; here");
GLOBAL_STR(str984, "Expected ) to end for loop expression");
GLOBAL_STR(str985, "Expected ( after =");
GLOBAL_STR(str986, "Unexpected token in array literal");
GLOBAL_STR(str987, "Expected associative array pair");
GLOBAL_STR(str988, "Unexpected token after array literal");
GLOBAL_STR(str989, "Unexpected token after array splice");
GLOBAL_STR(str990, "Literal @ starting a word must be quoted (parse_at_all)");
GLOBAL_STR(str991, "Literal $ should be quoted like \\$");
GLOBAL_STR(str992, "Word has unbalanced { }.  Maybe add a space or quote it like \\{");
GLOBAL_STR(str993, "Unexpected token while parsing arithmetic: %r");
GLOBAL_STR(str994, "Unhandled: %s (%s)");
GLOBAL_STR(str995, "Invalid lex state %s");
GLOBAL_STR(str996, "");
GLOBAL_STR(str997, "");
GLOBAL_STR(str998, "");
GLOBAL_STR(str999, "");
GLOBAL_STR(str1000, "");
GLOBAL_STR(str1001, "");
GLOBAL_STR(str1002, "");
GLOBAL_STR(str1003, "");
GLOBAL_STR(str1004, "");
GLOBAL_STR(str1005, "Compound shouldn't be empty");
GLOBAL_STR(str1006, "/");
GLOBAL_STR(str1007, "/");
GLOBAL_STR(str1008, "");
GLOBAL_STR(str1009, "EOF");
GLOBAL_STR(str1010, "typ");
GLOBAL_STR(str1011, "tok");
GLOBAL_STR(str1012, "children");
GLOBAL_STR(str1013, "-");
GLOBAL_STR(str1014, "with %d children");
GLOBAL_STR(str1015, "");
GLOBAL_STR(str1016, "(PNode %s %s %s)");
GLOBAL_STR(str1017, "&");
GLOBAL_STR(str1018, "&amp;");
GLOBAL_STR(str1019, "<");
GLOBAL_STR(str1020, "&lt;");
GLOBAL_STR(str1021, ">");
GLOBAL_STR(str1022, "&gt;");
GLOBAL_STR(str1023, ".");
GLOBAL_STR(str1024, "/");
GLOBAL_STR(str1025, "/");
GLOBAL_STR(str1026, "/");
GLOBAL_STR(str1027, "%s/%s");
GLOBAL_STR(str1028, "/");
GLOBAL_STR(str1029, "/");
GLOBAL_STR(str1030, "/");
GLOBAL_STR(str1031, "");
GLOBAL_STR(str1032, "/");
GLOBAL_STR(str1033, "/");
GLOBAL_STR(str1034, "/");
GLOBAL_STR(str1035, "/");
GLOBAL_STR(str1036, "/");
GLOBAL_STR(str1037, ".");
GLOBAL_STR(str1038, "");
GLOBAL_STR(str1039, "/");
GLOBAL_STR(str1040, "//");
GLOBAL_STR(str1041, "///");
GLOBAL_STR(str1042, "/");
GLOBAL_STR(str1043, ".");
GLOBAL_STR(str1044, "..");
GLOBAL_STR(str1045, "..");
GLOBAL_STR(str1046, "/");
GLOBAL_STR(str1047, " \n\r\t");
GLOBAL_STR(str1048, "Unexpected token in QSN string");
GLOBAL_STR(str1049, "Expected closing single quote in QSN string");
GLOBAL_STR(str1050, "Unexpected data after closing quote");
GLOBAL_STR(str1051, "Unexpected token after QSN string");
GLOBAL_STR(str1052, "\\'\r\n\t\u0000");
GLOBAL_STR(str1053, "$'");
GLOBAL_STR(str1054, "'");
GLOBAL_STR(str1055, "'");
GLOBAL_STR(str1056, "");
GLOBAL_STR(str1057, "'");
GLOBAL_STR(str1058, "'");
GLOBAL_STR(str1059, "");
GLOBAL_STR(str1060, "'");
GLOBAL_STR(str1061, "'");
GLOBAL_STR(str1062, "");
GLOBAL_STR(str1063, "\\");
GLOBAL_STR(str1064, "\\\\");
GLOBAL_STR(str1065, "'");
GLOBAL_STR(str1066, "\\'");
GLOBAL_STR(str1067, "\n");
GLOBAL_STR(str1068, "\\n");
GLOBAL_STR(str1069, "\r");
GLOBAL_STR(str1070, "\\r");
GLOBAL_STR(str1071, "\t");
GLOBAL_STR(str1072, "\\t");
GLOBAL_STR(str1073, "\u0000");
GLOBAL_STR(str1074, "\\x00");
GLOBAL_STR(str1075, "\\0");
GLOBAL_STR(str1076, "");
GLOBAL_STR(str1077, "");
GLOBAL_STR(str1078, "");
GLOBAL_STR(str1079, "\\");
GLOBAL_STR(str1080, "\\\\");
GLOBAL_STR(str1081, "'");
GLOBAL_STR(str1082, "\\'");
GLOBAL_STR(str1083, "\n");
GLOBAL_STR(str1084, "\\n");
GLOBAL_STR(str1085, "\r");
GLOBAL_STR(str1086, "\\r");
GLOBAL_STR(str1087, "\t");
GLOBAL_STR(str1088, "\\t");
GLOBAL_STR(str1089, "\u0000");
GLOBAL_STR(str1090, "\\x00");
GLOBAL_STR(str1091, "\\0");
GLOBAL_STR(str1092, "");
GLOBAL_STR(str1093, "!");
GLOBAL_STR(str1094, "Expected unary operator, got %r (2 args)");
GLOBAL_STR(str1095, "-a");
GLOBAL_STR(str1096, "-o");
GLOBAL_STR(str1097, "!");
GLOBAL_STR(str1098, "(");
GLOBAL_STR(str1099, ")");
GLOBAL_STR(str1100, "Expected binary operator, got %r (3 args)");
GLOBAL_STR(str1101, "]");
GLOBAL_STR(str1102, "missing closing ]");
GLOBAL_STR(str1103, "!");
GLOBAL_STR(str1104, "(");
GLOBAL_STR(str1105, ")");
GLOBAL_STR(str1106, "(test) ");
GLOBAL_STR(str1107, "(test) ");

namespace vm {  // forward declare
  class _Executor;
  class _AssignBuiltin;
  class _Builtin;
  class ctx_Redirect;
  class ctx_ProcessSub;

}  // forward declare namespace vm

namespace osh_eval {  // forward declare

}  // forward declare namespace osh_eval

namespace alloc {  // forward declare
  class ctx_Location;
  class Arena;

}  // forward declare namespace alloc

namespace ansi {  // forward declare

}  // forward declare namespace ansi

namespace dev {  // forward declare
  class CrashDumper;
  class Tracer;

}  // forward declare namespace dev

namespace error {  // forward declare
  class _ControlFlow;

}  // forward declare namespace error

namespace executor {  // forward declare
  class _ProcessSubFrame;
  class ShellExecutor;

}  // forward declare namespace executor

namespace main_loop {  // forward declare

}  // forward declare namespace main_loop

namespace process {  // forward declare
  class _RedirFrame;
  class _FdFrame;
  class FdState;
  class ChildStateChange;
  class StdinFromPipe;
  class StdoutToPipe;
  class ExternalProgram;
  class Thunk;
  class ExternalThunk;
  class SubProgramThunk;
  class _HereDocWriterThunk;
  class Job;
  class Process;
  class Pipeline;
  class JobState;
  class Waiter;

}  // forward declare namespace process

namespace pure {  // forward declare
  class NullExecutor;

}  // forward declare namespace pure

namespace state {  // forward declare
  class SearchPath;
  class ctx_Option;
  class ctx_ErrExit;
  class OptHook;
  class MutableOpts;
  class _ArgFrame;
  class DirStack;
  class DebugFrame;
  class ctx_Call;
  class ctx_Temp;
  class ctx_Status;
  class Mem;

}  // forward declare namespace state

namespace ui {  // forward declare
  class ErrorFormatter;

}  // forward declare namespace ui

namespace util {  // forward declare
  class UserExit;
  class _DebugFile;
  class NullDebugFile;
  class DebugFile;

}  // forward declare namespace util

namespace lexer {  // forward declare
  class LineLexer;
  class Lexer;

}  // forward declare namespace lexer

namespace location {  // forward declare

}  // forward declare namespace location

namespace parse_lib {  // forward declare
  class _BaseTrail;
  class ctx_Alias;
  class Trail;
  class ParseContext;

}  // forward declare namespace parse_lib

namespace reader {  // forward declare
  class _Reader;
  class DisallowedLineReader;
  class FileLineReader;
  class VirtualLineReader;

}  // forward declare namespace reader

namespace expr_parse {  // forward declare
  class ExprParser;

}  // forward declare namespace expr_parse

namespace expr_to_ast {  // forward declare
  class Transformer;

}  // forward declare namespace expr_to_ast

namespace regex_translate {  // forward declare

}  // forward declare namespace regex_translate

namespace arith_parse {  // forward declare

}  // forward declare namespace arith_parse

namespace bool_parse {  // forward declare
  class BoolParser;

}  // forward declare namespace bool_parse

namespace braces {  // forward declare
  class _NotARange;
  class _RangeParser;
  class _StackFrame;

}  // forward declare namespace braces

namespace builtin_assign {  // forward declare
  class Export;
  class Readonly;
  class NewVar;
  class Unset;
  class Shift;

}  // forward declare namespace builtin_assign

namespace builtin_meta {  // forward declare
  class Eval;
  class Source;
  class Command;
  class Builtin;
  class Run_;
  class Type;

}  // forward declare namespace builtin_meta

namespace builtin_misc {  // forward declare
  class Times;
  class Read;
  class MapFile;
  class Cd;
  class Pushd;
  class Popd;
  class Dirs;
  class Pwd;
  class Help;
  class Cat;

}  // forward declare namespace builtin_misc

namespace builtin_printf {  // forward declare
  class _FormatStringParser;
  class Printf;

}  // forward declare namespace builtin_printf

namespace builtin_pure {  // forward declare
  class Boolean;
  class Alias;
  class UnAlias;
  class Set;
  class Shopt;
  class Hash;
  class GetOptsState;
  class GetOpts;
  class Echo;

}  // forward declare namespace builtin_pure

namespace cmd_eval {  // forward declare
  class Deps;
  class CommandEvaluator;

}  // forward declare namespace cmd_eval

namespace cmd_parse {  // forward declare
  class CommandParser;

}  // forward declare namespace cmd_parse

namespace glob_ {  // forward declare
  class _GlobParser;
  class Globber;

}  // forward declare namespace glob_

namespace prompt {  // forward declare
  class _PromptEvaluatorCache;
  class Evaluator;
  class UserPlugin;

}  // forward declare namespace prompt

namespace sh_expr_eval {  // forward declare
  class ArithEvaluator;
  class BoolEvaluator;

}  // forward declare namespace sh_expr_eval

namespace split {  // forward declare
  class SplitContext;
  class _BaseSplitter;
  class IfsSplitter;

}  // forward declare namespace split

namespace string_ops {  // forward declare
  class GlobReplacer;

}  // forward declare namespace string_ops

namespace tdop {  // forward declare
  class TdopParser;

}  // forward declare namespace tdop

namespace word_compile {  // forward declare

}  // forward declare namespace word_compile

namespace word_eval {  // forward declare
  class StringWordEvaluator;
  class TildeEvaluator;
  class AbstractWordEvaluator;
  class NormalWordEvaluator;
  class CompletionWordEvaluator;

}  // forward declare namespace word_eval

namespace word_parse {  // forward declare
  class WordEmitter;
  class WordParser;

}  // forward declare namespace word_parse

namespace word_ {  // forward declare

}  // forward declare namespace word_

namespace grammar {  // forward declare
  class Grammar;

}  // forward declare namespace grammar

namespace pnode {  // forward declare
  class PNode;

}  // forward declare namespace pnode

namespace cgi {  // forward declare

}  // forward declare namespace cgi

namespace os_path {  // forward declare

}  // forward declare namespace os_path

namespace qsn_native {  // forward declare

}  // forward declare namespace qsn_native

namespace qsn {  // forward declare

}  // forward declare namespace qsn

namespace builtin_bracket {  // forward declare
  class _StringWordEmitter;
  class _WordEvaluator;
  class Test;

}  // forward declare namespace builtin_bracket

namespace vm {  // declare
void InitCircularDeps(sh_expr_eval::ArithEvaluator* arith_ev, sh_expr_eval::BoolEvaluator* bool_ev, expr_eval::OilEvaluator* expr_ev, word_eval::NormalWordEvaluator* word_ev, cmd_eval::CommandEvaluator* cmd_ev, vm::_Executor* shell_ex, prompt::Evaluator* prompt_ev, dev::Tracer* tracer);

class _Executor : public gc_heap::Obj {
 public:
  _Executor();
  virtual void CheckCircularDeps();
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);
  virtual int RunBackgroundJob(syntax_asdl::command_t* node);
  virtual void RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out);
  virtual int RunSubshell(syntax_asdl::command__Subshell* node);
  virtual Str* RunCommandSub(syntax_asdl::command_sub* cs_part);
  virtual Str* RunProcessSub(syntax_asdl::command_sub* cs_part);
  virtual void Time();
  virtual bool PushRedirects(List<runtime_asdl::redirect*>* redirects);
  virtual void PopRedirects();
  virtual void PushProcessSub();
  virtual void PopProcessSub(runtime_asdl::CompoundStatus* compound_st);

  cmd_eval::CommandEvaluator* cmd_ev;

  DISALLOW_COPY_AND_ASSIGN(_Executor)
};

class _AssignBuiltin : public gc_heap::Obj {
 public:
  _AssignBuiltin();
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(_AssignBuiltin)
};

class _Builtin : public gc_heap::Obj {
 public:
  _Builtin();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(_Builtin)
};

class ctx_Redirect : public gc_heap::Obj {
 public:
  ctx_Redirect(vm::_Executor* shell_ex);
  ~ctx_Redirect();

  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(ctx_Redirect)
};

class ctx_ProcessSub : public gc_heap::Obj {
 public:
  ctx_ProcessSub(vm::_Executor* shell_ex, runtime_asdl::CompoundStatus* process_sub_status);
  ~ctx_ProcessSub();

  runtime_asdl::CompoundStatus* process_sub_status;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(ctx_ProcessSub)
};

}  // declare namespace vm

namespace osh_eval {  // declare
int main(List<Str*>* argv);
inline Str* fmt5(Str* a0) {
  gBuf.reset();
  gBuf.write_const("oil: ", 5);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt6(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh fatal error: ", 17);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt7(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh I/O error: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}


}  // declare namespace osh_eval

namespace alloc {  // declare

class ctx_Location : public gc_heap::Obj {
 public:
  ctx_Location(alloc::Arena* arena, syntax_asdl::source_t* src);
  ~ctx_Location();

  alloc::Arena* arena;

  DISALLOW_COPY_AND_ASSIGN(ctx_Location)
};

class Arena : public gc_heap::Obj {
 public:
  Arena();
  void PushSource(syntax_asdl::source_t* src);
  void PopSource();
  int AddLine(Str* line, int line_num);
  Str* GetLine(int line_id);
  int GetLineNumber(int line_id);
  Str* GetLineNumStr(int line_id);
  syntax_asdl::source_t* GetLineSource(int line_id);
  Str* GetLineSourceString(int line_id);
  int AddLineSpan(int line_id, int col, int length);
  syntax_asdl::line_span* GetLineSpan(int span_id);
  int LastSpanId();

  Dict<int, Str*>* line_num_strs;
  List<int>* line_nums;
  List<syntax_asdl::source_t*>* line_srcs;
  List<Str*>* line_vals;
  List<syntax_asdl::source_t*>* source_instances;
  List<syntax_asdl::line_span*>* spans;

  DISALLOW_COPY_AND_ASSIGN(Arena)
};

}  // declare namespace alloc

namespace ansi {  // declare
extern Str* RESET;
extern Str* BOLD;
extern Str* UNDERLINE;
extern Str* REVERSE;
extern Str* RED;
extern Str* GREEN;
extern Str* YELLOW;
extern Str* BLUE;

}  // declare namespace ansi

namespace dev {  // declare

class CrashDumper : public gc_heap::Obj {
 public:
  CrashDumper(Str* crash_dump_dir);
  void MaybeCollect(void* cmd_ev, error::_ErrorWithLocation* err);
  void MaybeDump(int status);

  void* argv_stack;
  bool collected;
  Str* crash_dump_dir;
  void* debug_stack;
  bool do_collect;
  Dict<Str*, void*>* error;
  void* var_stack;

  DISALLOW_COPY_AND_ASSIGN(CrashDumper)
};

class Tracer : public gc_heap::Obj {
 public:
  Tracer(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, state::Mem* mem, word_eval::NormalWordEvaluator* word_ev, util::_DebugFile* f);
  Tuple2<Str*, Str*> _EvalPS4();
  void OnSimpleCommand(List<Str*>* argv);
  void OnShAssignment(runtime_asdl::lvalue_t* lval, syntax_asdl::assign_op_t op, runtime_asdl::value_t* val, int flags, runtime_asdl::scope_t lookup_mode);
  void Event();

  optview::Exec* exec_opts;
  util::_DebugFile* f;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  Dict<Str*, syntax_asdl::compound_word*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  word_eval::NormalWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(Tracer)
};
inline Str* fmt8(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<ERROR: Can't parse PS4: ", 25);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt9(Str* a0, Str* a1, Str* a2) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.format_s(a2);
  return gBuf.getvalue();
}


}  // declare namespace dev

namespace error {  // declare
extern int NO_SPID;

class _ControlFlow : public gc_heap::Obj {
 public:
  _ControlFlow(syntax_asdl::Token* token, int arg);
  bool IsReturn();
  bool IsBreak();
  bool IsContinue();
  int StatusCode();

  int arg;
  syntax_asdl::Token* token;

  DISALLOW_COPY_AND_ASSIGN(_ControlFlow)
};

}  // declare namespace error

namespace executor {  // declare

class _ProcessSubFrame : public gc_heap::Obj {
 public:
  _ProcessSubFrame();

  List<int>* span_ids;
  List<int>* to_close;
  List<process::Process*>* to_wait;

  DISALLOW_COPY_AND_ASSIGN(_ProcessSubFrame)
};

class ShellExecutor : public vm::_Executor {
 public:
  ShellExecutor(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_Builtin*>* builtins, state::SearchPath* search_path, process::ExternalProgram* ext_prog, process::Waiter* waiter, process::JobState* job_state, process::FdState* fd_state, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  process::Process* _MakeProcess(syntax_asdl::command_t* node);
  process::Process* _MakeProcess(syntax_asdl::command_t* node, bool inherit_errexit);
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);
  virtual int RunBackgroundJob(syntax_asdl::command_t* node);
  virtual void RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out);
  virtual int RunSubshell(syntax_asdl::command__Subshell* node);
  virtual Str* RunCommandSub(syntax_asdl::command_sub* cs_part);
  virtual Str* RunProcessSub(syntax_asdl::command_sub* cs_part);
  void MaybeWaitOnProcessSubs(executor::_ProcessSubFrame* frame, runtime_asdl::CompoundStatus* compound_st);
  virtual void Time();
  virtual bool PushRedirects(List<runtime_asdl::redirect*>* redirects);
  virtual void PopRedirects();
  virtual void PushProcessSub();
  virtual void PopProcessSub(runtime_asdl::CompoundStatus* compound_st);

  Dict<int, vm::_Builtin*>* builtins;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  process::ExternalProgram* ext_prog;
  process::FdState* fd_state;
  process::JobState* job_state;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  List<executor::_ProcessSubFrame*>* process_sub_stack;
  Dict<Str*, syntax_asdl::command__ShFunction*>* procs;
  state::SearchPath* search_path;
  process::Waiter* waiter;

  DISALLOW_COPY_AND_ASSIGN(ShellExecutor)
};
inline Str* fmt10(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid control flow ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" in pipeline / subshell / background", 36);
  return gBuf.getvalue();
}

inline Str* fmt11(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" ", 1);
  return gBuf.getvalue();
}

inline Str* fmt12() {
  gBuf.reset();
  gBuf.write_const("Command evaluated to an empty argv array", 40);
  return gBuf.getvalue();
}

inline Str* fmt13() {
  gBuf.reset();
  gBuf.write_const("Can't run a proc while errexit is disabled. Use 'run' or wrap it in a process with $0 myproc", 92);
  return gBuf.getvalue();
}

inline Str* fmt14(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected block passed to external command ", 44);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt15(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt16(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.write_const("%", 1);
  gBuf.format_d(a0);
  gBuf.write_const("] Started Pipeline with PID ", 28);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt17(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.write_const("%", 1);
  gBuf.format_d(a0);
  gBuf.write_const("] Started PID ", 14);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt18(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Command sub exited with status ", 31);
  gBuf.format_d(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt19(int a0) {
  gBuf.reset();
  gBuf.write_const("/dev/fd/", 8);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt20(int a0) {
  gBuf.reset();
  gBuf.write_const("/dev/fd/", 8);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}


}  // declare namespace executor

namespace main_loop {  // declare
int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena);
int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena, int cmd_flags);
syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser);

}  // declare namespace main_loop

namespace process {  // declare
extern int NO_FD;

class _RedirFrame : public gc_heap::Obj {
 public:
  _RedirFrame(int saved_fd, int orig_fd, bool forget);

  bool forget;
  int orig_fd;
  int saved_fd;

  DISALLOW_COPY_AND_ASSIGN(_RedirFrame)
};

class _FdFrame : public gc_heap::Obj {
 public:
  _FdFrame();
  void Forget();

  List<Tuple2<process::Process*, process::Waiter*>*>* need_wait;
  List<process::_RedirFrame*>* saved;

  DISALLOW_COPY_AND_ASSIGN(_FdFrame)
};

class FdState : public gc_heap::Obj {
 public:
  FdState(ui::ErrorFormatter* errfmt, process::JobState* job_state, state::Mem* mem);
  mylib::LineReader* Open(Str* path);
  mylib::LineReader* _Open(Str* path, Str* c_mode, int fd_mode);
  void _WriteFdToMem(Str* fd_name, int fd);
  int _ReadFdFromMem(Str* fd_name);
  bool _PushSave(int fd);
  int _PushDup(int fd1, syntax_asdl::redir_loc_t* loc);
  bool _PushCloseFd(syntax_asdl::redir_loc_t* loc);
  void _PushClose(int fd);
  void _PushWait(process::Process* proc, process::Waiter* waiter);
  void _ApplyRedirect(runtime_asdl::redirect* r, process::Waiter* waiter);
  bool Push(List<runtime_asdl::redirect*>* redirects, process::Waiter* waiter);
  bool PushStdinFromPipe(int r);
  void Pop();
  void MakePermanent();

  process::_FdFrame* cur_frame;
  ui::ErrorFormatter* errfmt;
  process::JobState* job_state;
  state::Mem* mem;
  List<process::_FdFrame*>* stack;

  DISALLOW_COPY_AND_ASSIGN(FdState)
};

class ChildStateChange : public gc_heap::Obj {
 public:
  ChildStateChange();
  virtual void Apply();

  DISALLOW_COPY_AND_ASSIGN(ChildStateChange)
};

class StdinFromPipe : public ChildStateChange {
 public:
  StdinFromPipe(int pipe_read_fd, int w);
  virtual void Apply();

  int r;
  int w;

  DISALLOW_COPY_AND_ASSIGN(StdinFromPipe)
};

class StdoutToPipe : public ChildStateChange {
 public:
  StdoutToPipe(int r, int pipe_write_fd);
  virtual void Apply();

  int r;
  int w;

  DISALLOW_COPY_AND_ASSIGN(StdoutToPipe)
};

class ExternalProgram : public gc_heap::Obj {
 public:
  ExternalProgram(Str* hijack_shebang, process::FdState* fd_state, ui::ErrorFormatter* errfmt, util::_DebugFile* debug_f);
  void Exec(Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ);
  void _Exec(Str* argv0_path, List<Str*>* argv, int argv0_spid, Dict<Str*, Str*>* environ, bool should_retry);

  util::_DebugFile* debug_f;
  ui::ErrorFormatter* errfmt;
  process::FdState* fd_state;
  Str* hijack_shebang;

  DISALLOW_COPY_AND_ASSIGN(ExternalProgram)
};

class Thunk : public gc_heap::Obj {
 public:
  Thunk();
  virtual void Run();
  virtual Str* DisplayLine();
  Str* __str__();

  DISALLOW_COPY_AND_ASSIGN(Thunk)
};

class ExternalThunk : public Thunk {
 public:
  ExternalThunk(process::ExternalProgram* ext_prog, Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ);
  virtual Str* DisplayLine();
  virtual void Run();

  Str* argv0_path;
  runtime_asdl::cmd_value__Argv* cmd_val;
  Dict<Str*, Str*>* environ;
  process::ExternalProgram* ext_prog;

  DISALLOW_COPY_AND_ASSIGN(ExternalThunk)
};

class SubProgramThunk : public Thunk {
 public:
  SubProgramThunk(cmd_eval::CommandEvaluator* cmd_ev, syntax_asdl::command_t* node, bool inherit_errexit);
  virtual Str* DisplayLine();
  virtual void Run();

  cmd_eval::CommandEvaluator* cmd_ev;
  bool inherit_errexit;
  syntax_asdl::command_t* node;

  DISALLOW_COPY_AND_ASSIGN(SubProgramThunk)
};

class _HereDocWriterThunk : public Thunk {
 public:
  _HereDocWriterThunk(int w, Str* body_str);
  virtual Str* DisplayLine();
  virtual void Run();

  Str* body_str;
  int w;

  DISALLOW_COPY_AND_ASSIGN(_HereDocWriterThunk)
};

class Job : public gc_heap::Obj {
 public:
  Job();
  runtime_asdl::job_state_t State();
  void Send_SIGCONT(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);

  runtime_asdl::job_state_t state;

  DISALLOW_COPY_AND_ASSIGN(Job)
};

class Process : public Job {
 public:
  Process(process::Thunk* thunk, process::JobState* job_state);
  void Init_ParentPipeline(process::Pipeline* pi);
  void AddStateChange(process::ChildStateChange* s);
  void AddPipeToClose(int r, int w);
  void MaybeClosePipe();
  int Start();
  int Wait(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);
  void WhenStopped();
  void WhenDone(int pid, int status);
  int Run(process::Waiter* waiter);

  int close_r;
  int close_w;
  process::JobState* job_state;
  process::Pipeline* parent_pipeline;
  int pid;
  runtime_asdl::job_state_t state;
  List<process::ChildStateChange*>* state_changes;
  int status;
  process::Thunk* thunk;

  DISALLOW_COPY_AND_ASSIGN(Process)
};

class Pipeline : public Job {
 public:
  Pipeline();
  void Add(process::Process* p);
  void AddLast(Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* thunk);
  void Start(process::Waiter* waiter);
  int LastPid();
  List<int>* Wait(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);
  List<int>* Run(process::Waiter* waiter, process::FdState* fd_state);
  void WhenDone(int pid, int status);

  Tuple2<int, int>* last_pipe;
  Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* last_thunk;
  List<int>* pids;
  List<int>* pipe_status;
  List<process::Process*>* procs;
  runtime_asdl::job_state_t state;
  int status;

  DISALLOW_COPY_AND_ASSIGN(Pipeline)
};

class JobState : public gc_heap::Obj {
 public:
  JobState();
  void NotifyStopped(int pid);
  int GetLastStopped();
  int AddJob(process::Job* job);
  void AddChildProcess(int pid, process::Process* proc);
  process::Process* JobFromPid(int pid);
  void List();
  void ListRecent();
  bool NoneAreRunning();
  void MaybeRemove(int pid);

  Dict<int, process::Process*>* child_procs;
  int job_id;
  Dict<int, process::Job*>* jobs;
  int last_stopped_pid;

  DISALLOW_COPY_AND_ASSIGN(JobState)
};

class Waiter : public gc_heap::Obj {
 public:
  Waiter(process::JobState* job_state, optview::Exec* exec_opts);
  bool WaitForOne();

  optview::Exec* exec_opts;
  process::JobState* job_state;
  int last_status;

  DISALLOW_COPY_AND_ASSIGN(Waiter)
};
inline Str* fmt21(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt22(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt23(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt24(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't open ", 11);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt25(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error closing descriptor ", 25);
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt26(int a0, int a1, Str* a2) {
  gBuf.reset();
  gBuf.write_const("dup2(", 5);
  gBuf.format_d(a0);
  gBuf.write_const(", ", 2);
  gBuf.format_d(a1);
  gBuf.write_const(") error: ", 9);
  gBuf.format_s(a2);
  return gBuf.getvalue();
}

inline Str* fmt27(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't execute ", 14);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt28(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[process] ", 10);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt29(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[subprog] ", 10);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt30(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh I/O error: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt31(int a0) {
  gBuf.reset();
  gBuf.write_const("JobState MaybeRemove ", 21);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt32(int a0) {
  gBuf.reset();
  gBuf.write_const("osh: PID ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" stopped, but osh didn't start it", 33);
  return gBuf.getvalue();
}

inline Str* fmt33(int a0) {
  gBuf.reset();
  gBuf.write_const("[PID ", 5);
  gBuf.format_d(a0);
  gBuf.write_const("] Stopped", 9);
  return gBuf.getvalue();
}


}  // declare namespace process

namespace pure {  // declare
runtime_asdl::cmd_value__Argv* MakeBuiltinArgv(List<Str*>* argv1);
void AddPure(Dict<int, vm::_Builtin*>* b, state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, state::MutableOpts* mutable_opts, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
void AddIO(Dict<int, vm::_Builtin*>* b, state::Mem* mem, state::DirStack* dir_stack, optview::Exec* exec_opts, split::SplitContext* splitter, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
void AddMeta(Dict<int, vm::_Builtin*>* builtins, vm::_Executor* shell_ex, state::MutableOpts* mutable_opts, state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
void AddBlock(Dict<int, vm::_Builtin*>* builtins, state::Mem* mem, state::MutableOpts* mutable_opts, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt);
Dict<int, vm::_AssignBuiltin*>* InitAssignmentBuiltins(state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, ui::ErrorFormatter* errfmt);
int Main(Str* lang, args::Reader* arg_r, Dict<Str*, Str*>* environ, bool login_shell, pyutil::_ResourceLoader* loader, void* line_input);

class NullExecutor : public vm::_Executor {
 public:
  NullExecutor(optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_Builtin*>* builtins);
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);

  Dict<int, vm::_Builtin*>* builtins;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  Dict<Str*, syntax_asdl::command__ShFunction*>* procs;

  DISALLOW_COPY_AND_ASSIGN(NullExecutor)
};
inline Str* fmt34(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh usage error: ", 17);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt35(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("-usage", 6);
  return gBuf.getvalue();
}

inline Str* fmt36(int a0) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const("-osh.log", 8);
  return gBuf.getvalue();
}

inline Str* fmt37(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Writing logs to ", 16);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt38(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("osh: Couldn't open ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt39(int a0) {
  gBuf.reset();
  gBuf.write_const("/proc/", 6);
  gBuf.format_d(a0);
  gBuf.write_const("/status", 7);
  return gBuf.getvalue();
}

inline Str* fmt40(int a0) {
  gBuf.reset();
  gBuf.write_const("/proc/", 6);
  gBuf.format_d(a0);
  gBuf.write_const("/status", 7);
  return gBuf.getvalue();
}

inline Str* fmt41() {
  gBuf.reset();
  gBuf.write_const("Can't run a proc while errexit is disabled. Use 'catch' or wrap it in a process with $0 myproc", 94);
  return gBuf.getvalue();
}


}  // declare namespace pure

namespace state {  // declare
extern int LINE_ZERO;
extern int SetReadOnly;
extern int ClearReadOnly;
extern int SetExport;
extern int ClearExport;
extern int SetNameref;
extern int ClearNameref;

class SearchPath : public gc_heap::Obj {
 public:
  SearchPath(state::Mem* mem);
  Str* Lookup(Str* name);
  Str* Lookup(Str* name, bool exec_required);
  Str* CachedLookup(Str* name);
  void MaybeRemoveEntry(Str* name);
  void ClearCache();
  List<Str*>* CachedCommands();

  Dict<Str*, Str*>* cache;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(SearchPath)
};

class ctx_Option : public gc_heap::Obj {
 public:
  ctx_Option(state::MutableOpts* mutable_opts, List<int>* opt_nums, bool b);
  ~ctx_Option();

  state::MutableOpts* mutable_opts;
  List<int>* opt_nums;

  DISALLOW_COPY_AND_ASSIGN(ctx_Option)
};

class ctx_ErrExit : public gc_heap::Obj {
 public:
  ctx_ErrExit(state::MutableOpts* mutable_opts, bool errexit_val, int span_id);
  ~ctx_ErrExit();

  bool do_pop;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(ctx_ErrExit)
};

class OptHook : public gc_heap::Obj {
 public:
  OptHook();
  bool OnChange(List<bool>* opt0_array, Str* opt_name, bool b);

  DISALLOW_COPY_AND_ASSIGN(OptHook)
};
Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook);
int _ShoptOptionNum(Str* opt_name);
int _SetOptionNum(Str* opt_name);

class MutableOpts : public gc_heap::Obj {
 public:
  MutableOpts(state::Mem* mem, List<bool>* opt0_array, List<List<bool>*>* opt_stacks, state::OptHook* opt_hook);
  void _InitOptionsFromEnv(Str* shellopts);
  void Push(int opt_num, bool b);
  bool Pop(int opt_num);
  void PushErrExit(bool b, int spid);
  bool PopErrExit();
  bool Get(int opt_num);
  void _Set(int opt_num, bool b);
  void set_interactive();
  void set_emacs();
  void set_xtrace(bool b);
  void _SetArrayByNum(int opt_num, bool b);
  void SetDeferredErrExit(bool b);
  void DisableErrExit();
  bool ErrExitIsDisabled();
  int ErrExitSpanId();
  void _SetOption(Str* opt_name, bool b);
  void SetOption(Str* opt_name, bool b);
  void _SetGroup(List<int>* opt_nums, bool b);
  void SetShoptOption(Str* opt_name, bool b);
  void ShowOptions(List<Str*>* opt_names);
  void ShowShoptOptions(List<Str*>* opt_names);

  List<int>* errexit_spid_stack;
  state::Mem* mem;
  List<bool>* opt0_array;
  state::OptHook* opt_hook;
  List<List<bool>*>* opt_stacks;

  DISALLOW_COPY_AND_ASSIGN(MutableOpts)
};

class _ArgFrame : public gc_heap::Obj {
 public:
  _ArgFrame(List<Str*>* argv);
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  int GetNumArgs();
  void SetArgv(List<Str*>* argv);

  List<Str*>* argv;
  int num_shifted;

  DISALLOW_COPY_AND_ASSIGN(_ArgFrame)
};

class DirStack : public gc_heap::Obj {
 public:
  DirStack();
  void Reset();
  void Push(Str* entry);
  Str* Pop();
  List<Str*>* Iter();

  List<Str*>* stack;

  DISALLOW_COPY_AND_ASSIGN(DirStack)
};
Str* _GetWorkingDir();

class DebugFrame : public gc_heap::Obj {
 public:
  DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i);

  int argv_i;
  Str* bash_source;
  int call_spid;
  Str* func_name;
  Str* source_name;
  int var_i;

  DISALLOW_COPY_AND_ASSIGN(DebugFrame)
};
void _InitDefaults(state::Mem* mem);
void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ);
void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ, Str* version_str);

class ctx_Call : public gc_heap::Obj {
 public:
  ctx_Call(state::Mem* mem, Str* func_name, int def_spid, List<Str*>* argv);
  ~ctx_Call();

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(ctx_Call)
};

class ctx_Temp : public gc_heap::Obj {
 public:
  ctx_Temp(state::Mem* mem);
  ~ctx_Temp();

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(ctx_Temp)
};

class ctx_Status : public gc_heap::Obj {
 public:
  ctx_Status(state::Mem* mem);
  ~ctx_Status();

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(ctx_Status)
};

class Mem : public gc_heap::Obj {
 public:
  Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack);
  void SetPwd(Str* pwd);
  bool InGlobalNamespace();
  Tuple3<void*, void*, void*> Dump();
  void SetCurrentSpanId(int span_id);
  int CurrentSpanId();
  int LastStatus();
  List<int>* PipeStatus();
  void SetLastStatus(int x);
  void SetPipeStatus(List<int>* x);
  void SetProcessSubStatus(List<int>* x);
  void PushCall(Str* func_name, int def_spid, List<Str*>* argv);
  void PopCall();
  void PushSource(Str* source_name, List<Str*>* argv);
  void PopSource(List<Str*>* argv);
  void PushTemp();
  void PopTemp();
  Dict<Str*, runtime_asdl::cell*>* TopNamespace();
  void _PushDebugStack(Str* bash_source, Str* func_name, Str* source_name);
  void _PopDebugStack();
  int Shift(int n);
  runtime_asdl::value__Str* GetArg0();
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  void SetArgv(List<Str*>* argv);
  runtime_asdl::value_t* GetSpecialVar(int op_id);
  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> _ResolveNameOnly(Str* name, runtime_asdl::scope_t lookup_mode);
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> _ResolveNameOrRef(Str* name, runtime_asdl::scope_t lookup_mode);
  bool IsAssocArray(Str* name, runtime_asdl::scope_t lookup_mode);
  void _CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell);
  void _DisallowNamerefCycle(Str* name, List<Str*>* ref_trail);
  void SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode);
  void SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode, int flags);
  void _BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags);
  void InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val);
  runtime_asdl::value_t* GetVar(Str* name);
  runtime_asdl::value_t* GetVar(Str* name, runtime_asdl::scope_t lookup_mode);
  runtime_asdl::cell* GetCell(Str* name);
  runtime_asdl::cell* GetCell(Str* name, runtime_asdl::scope_t lookup_mode);
  bool Unset(runtime_asdl::lvalue_t* lval, runtime_asdl::scope_t lookup_mode, bool strict);
  bool ClearFlag(Str* name, int flag, runtime_asdl::scope_t lookup_mode);
  Dict<Str*, Str*>* GetExported();
  List<Str*>* VarNames();
  List<Str*>* VarNamesStartingWith(Str* prefix);
  Dict<Str*, Str*>* GetAllVars();
  Dict<Str*, runtime_asdl::cell*>* GetAllCells(runtime_asdl::scope_t lookup_mode);
  bool IsGlobalScope();
  void ClearMatches();
  void SetMatches(List<Str*>* matches);
  Str* GetMatch(int i);

  alloc::Arena* arena;
  List<state::_ArgFrame*>* argv_stack;
  int current_spid;
  List<state::DebugFrame*>* debug_stack;
  Str* dollar0;
  optview::Exec* exec_opts;
  int last_bg_pid;
  List<int>* last_status;
  runtime_asdl::value__Str* line_num;
  List<List<int>*>* pipe_status;
  List<List<int>*>* process_sub_status;
  Str* pwd;
  List<Str*>* regex_matches;
  int root_pid;
  List<Dict<Str*, runtime_asdl::cell*>*>* var_stack;

  DISALLOW_COPY_AND_ASSIGN(Mem)
};
void SetLocalString(state::Mem* mem, Str* name, Str* s);
void SetStringDynamic(state::Mem* mem, Str* name, Str* s);
void SetArrayDynamic(state::Mem* mem, Str* name, List<Str*>* a);
void SetGlobalString(state::Mem* mem, Str* name, Str* s);
void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a);
void SetLocalArray(state::Mem* mem, Str* name, List<Str*>* a);
void ExportGlobalString(state::Mem* mem, Str* name, Str* s);
runtime_asdl::value_t* GetGlobal(state::Mem* mem, Str* name);
Str* GetString(state::Mem* mem, Str* name);
Str* MaybeString(state::Mem* mem, Str* name);
int GetInteger(state::Mem* mem, Str* name);
inline Str* fmt42(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt43(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt44(Str* a0) {
  gBuf.reset();
  gBuf.write_const("doesn't own option ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" (try 'shopt')", 14);
  return gBuf.getvalue();
}

inline Str* fmt45(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt46(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("set ", 4);
  gBuf.format_s(a0);
  gBuf.write_const("o ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt47(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt48(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("shopt -", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt49(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't determine working directory: ", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt50(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" is undefined", 13);
  return gBuf.getvalue();
}

inline Str* fmt51(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" contains invalid variable name ", 32);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt52(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" has already been declared", 26);
  return gBuf.getvalue();
}

inline Str* fmt53(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" hasn't been declared", 21);
  return gBuf.getvalue();
}

inline Str* fmt54(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref cycle: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt55(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly value ", 31);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt56() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly array", 30);
  return gBuf.getvalue();
}

inline Str* fmt57() {
  gBuf.reset();
  gBuf.write_const("Can't assign to items in a string", 33);
  return gBuf.getvalue();
}

inline Str* fmt58(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Value of type ", 14);
  gBuf.format_s(a0);
  gBuf.write_const(" can't be indexed", 17);
  return gBuf.getvalue();
}

inline Str* fmt59() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly associative array", 42);
  return gBuf.getvalue();
}

inline Str* fmt60(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't unset readonly variable ", 30);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt61(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't an array", 15);
  return gBuf.getvalue();
}

inline Str* fmt62(Str* a0) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" isn't defined", 14);
  return gBuf.getvalue();
}

inline Str* fmt63(Str* a0) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" should be a string", 19);
  return gBuf.getvalue();
}

inline Str* fmt64(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" should be a string, got ", 25);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt65(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" doesn't look like an integer, got ", 35);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}


}  // declare namespace state

namespace ui {  // declare
Str* ValType(runtime_asdl::value_t* val);
Str* CommandType(syntax_asdl::command_t* cmd);
Str* PrettyId(int id_);
Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena);
Str* PrettyDir(Str* dir_name, Str* home_dir);
void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f);
void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f);
void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena);
void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);

class ErrorFormatter : public gc_heap::Obj {
 public:
  ErrorFormatter(alloc::Arena* arena);
  void PushLocation(int spid);
  void PopLocation();
  int CurrentLocation();
  void PrefixPrint(Str* msg, Str* prefix, int span_id);
  void Print_(Str* msg);
  void Print_(Str* msg, int span_id);
  void StderrLine(Str* msg);
  void PrettyPrintError(error::_ErrorWithLocation* err);
  void PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix);

  alloc::Arena* arena;
  int last_spid;
  List<int>* spid_stack;

  DISALLOW_COPY_AND_ASSIGN(ErrorFormatter)
};
void PrintAst(syntax_asdl::command_t* node, arg_types::main* flag);
inline Str* fmt66(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ stdin", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt67(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ expansion of alias ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt68(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ array LValue in ", 18);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt69(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[ eval at line ", 15);
  gBuf.format_d(a0);
  gBuf.write_const(" of ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt70(Str* a0, int a1, Str* a2, Str* a3) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_d(a1);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a2);
  gBuf.format_s(a3);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}

inline Str* fmt71(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[??? no location ???] ", 22);
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}


}  // declare namespace ui

namespace util {  // declare

class UserExit : public gc_heap::Obj {
 public:
  UserExit(int status);

  int status;

  DISALLOW_COPY_AND_ASSIGN(UserExit)
};

class _DebugFile : public gc_heap::Obj {
 public:
  _DebugFile();
  virtual void log(Str* msg, void* args);
  virtual void write(Str* s);
  virtual bool isatty();

  DISALLOW_COPY_AND_ASSIGN(_DebugFile)
};

class NullDebugFile : public _DebugFile {
 public:
  NullDebugFile();

  DISALLOW_COPY_AND_ASSIGN(NullDebugFile)
};

class DebugFile : public _DebugFile {
 public:
  DebugFile(mylib::Writer* f);
  virtual void log(Str* msg, void* args);
  virtual void write(Str* s);
  virtual bool isatty();

  mylib::Writer* f;

  DISALLOW_COPY_AND_ASSIGN(DebugFile)
};

}  // declare namespace util

namespace lexer {  // declare

class LineLexer : public gc_heap::Obj {
 public:
  LineLexer(Str* line, alloc::Arena* arena);
  void Reset(Str* line, int line_id, int line_pos);
  bool MaybeUnreadOne();
  int GetSpanIdForEof();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  alloc::Arena* arena;
  bool arena_skip;
  int last_span_id;
  Str* line;
  int line_id;
  int line_pos;

  DISALLOW_COPY_AND_ASSIGN(LineLexer)
};

class Lexer : public gc_heap::Obj {
 public:
  Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader);
  void ResetInputObjects();
  bool MaybeUnreadOne();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  void EmitCompDummy();
  void PushHint(int old_id, int new_id);
  syntax_asdl::Token* _Read(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  bool emit_comp_dummy;
  int line_id;
  lexer::LineLexer* line_lexer;
  reader::_Reader* line_reader;
  List<Tuple2<int, int>*>* translation_stack;

  DISALLOW_COPY_AND_ASSIGN(Lexer)
};

}  // declare namespace lexer

namespace location {  // declare
int SpanForCommand(syntax_asdl::command_t* node);
int SpanForArithExpr(syntax_asdl::arith_expr_t* node);

}  // declare namespace location

namespace parse_lib {  // declare

class _BaseTrail : public gc_heap::Obj {
 public:
  _BaseTrail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  void BeginAliasExpansion();
  void EndAliasExpansion();

  bool _expanding_alias;
  List<syntax_asdl::compound_word*>* alias_words;
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::Token*>* tokens;
  List<syntax_asdl::compound_word*>* words;

  DISALLOW_COPY_AND_ASSIGN(_BaseTrail)
};

class ctx_Alias : public gc_heap::Obj {
 public:
  ctx_Alias(parse_lib::_BaseTrail* trail);
  ~ctx_Alias();

  parse_lib::_BaseTrail* trail;

  DISALLOW_COPY_AND_ASSIGN(ctx_Alias)
};

class Trail : public _BaseTrail {
 public:
  Trail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);

  List<syntax_asdl::compound_word*>* alias_words;
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;

  DISALLOW_COPY_AND_ASSIGN(Trail)
};

class ParseContext : public gc_heap::Obj {
 public:
  ParseContext(alloc::Arena* arena, optview::Parse* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar);
  void Init_Trail(parse_lib::_BaseTrail* trail);
  void Init_OnePassParse(bool b);
  lexer::Lexer* _MakeLexer(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy);
  word_parse::WordParser* MakeWordParserForHereDoc(reader::_Reader* line_reader);
  word_parse::WordParser* MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader);
  tdop::TdopParser* MakeArithParser(Str* code_str);
  cmd_parse::CommandParser* MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id);
  word_parse::WordParser* MakeWordParserForPlugin(Str* code_str);
  Tuple2<pnode::PNode*, syntax_asdl::Token*> _ParseOil(lexer::Lexer* lexer, int start_symbol);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  syntax_asdl::Token* ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilExpr(lexer::Lexer* lexer, int start_symbol);
  Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilForExpr(lexer::Lexer* lexer, int start_symbol);
  syntax_asdl::Token* ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out);
  syntax_asdl::Token* ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out);
  syntax_asdl::Token* ParseDataType(lexer::Lexer* lexer, syntax_asdl::command__Data* out);
  syntax_asdl::Token* ParseEnum(lexer::Lexer* lexer, syntax_asdl::command__Enum* out);
  syntax_asdl::Token* ParseClass(lexer::Lexer* lexer, syntax_asdl::command__Class* out);
  syntax_asdl::Token* ParseImport(lexer::Lexer* lexer, syntax_asdl::command__Import* out);

  Dict<Str*, Str*>* aliases;
  alloc::Arena* arena;
  expr_parse::ExprParser* e_parser;
  bool one_pass_parse;
  optview::Parse* parse_opts;
  bool parsing_expr;
  expr_to_ast::Transformer* tr;
  parse_lib::_BaseTrail* trail;

  DISALLOW_COPY_AND_ASSIGN(ParseContext)
};
inline Str* fmt74() {
  gBuf.reset();
  gBuf.write_const("ShAssignment expression can't be nested like this", 49);
  return gBuf.getvalue();
}


}  // declare namespace parse_lib

namespace reader {  // declare

class _Reader : public gc_heap::Obj {
 public:
  _Reader(alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual Tuple3<int, Str*, int> GetLine();
  void Reset();
  virtual bool LastLineHint();

  alloc::Arena* arena;
  int line_num;

  DISALLOW_COPY_AND_ASSIGN(_Reader)
};

class DisallowedLineReader : public _Reader {
 public:
  DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token);
  virtual Str* _GetLine();

  syntax_asdl::Token* blame_token;

  DISALLOW_COPY_AND_ASSIGN(DisallowedLineReader)
};

class FileLineReader : public _Reader {
 public:
  FileLineReader(mylib::LineReader* f, alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual bool LastLineHint();

  mylib::LineReader* f;
  bool last_line_hint;

  DISALLOW_COPY_AND_ASSIGN(FileLineReader)
};
reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena);

class VirtualLineReader : public _Reader {
 public:
  VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena);
  virtual Tuple3<int, Str*, int> GetLine();

  List<Tuple3<int, Str*, int>*>* lines;
  int num_lines;
  int pos;

  DISALLOW_COPY_AND_ASSIGN(VirtualLineReader)
};
inline Str* fmt75() {
  gBuf.reset();
  gBuf.write_const("Here docs aren't allowed in expressions", 39);
  return gBuf.getvalue();
}


}  // declare namespace reader

namespace expr_parse {  // declare
int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok);
syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex);

class ExprParser : public gc_heap::Obj {
 public:
  ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr);
  Tuple2<pnode::PNode*, syntax_asdl::Token*> Parse(lexer::Lexer* lexer, int start_symbol);

  grammar::Grammar* gr;
  parse_lib::ParseContext* parse_ctx;
  parse::Parser* push_parser;

  DISALLOW_COPY_AND_ASSIGN(ExprParser)
};
inline Str* fmt76(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" (", 2);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt77(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in expression mode", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt78(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Syntax error in expression (near ", 33);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}


}  // declare namespace expr_parse

namespace expr_to_ast {  // declare
extern Dict<Str*, Str*>* PERL_CLASSES;
extern List<Str*>* POSIX_CLASSES;
extern Str* RANGE_POINT_TOO_LONG;
extern int NT_OFFSET;
bool ISNONTERMINAL(int x);

class Transformer : public gc_heap::Obj {
 public:
  Transformer(grammar::Grammar* gr);
  syntax_asdl::expr_t* _AssocBinary(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _Trailer(syntax_asdl::expr_t* base, pnode::PNode* p_trailer);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> _DictPair(pnode::PNode* p_node);
  syntax_asdl::expr__Dict* _Dict(pnode::PNode* p_node);
  syntax_asdl::expr_t* _Tuple(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _TestlistComp(pnode::PNode* p_node, int id0);
  syntax_asdl::expr_t* _Atom(List<pnode::PNode*>* children);
  List<syntax_asdl::name_type*>* _NameTypeList(pnode::PNode* p_node);
  syntax_asdl::comprehension* _CompFor(pnode::PNode* p_node);
  syntax_asdl::expr_t* _CompareChain(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _Subscript(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* Expr(pnode::PNode* pnode);
  syntax_asdl::expr_t* _ArrayItem(pnode::PNode* p_node);
  List<syntax_asdl::place_expr_t*>* _PlaceList(pnode::PNode* p_node);
  syntax_asdl::command__VarDecl* MakeVarDecl(pnode::PNode* p_node);
  syntax_asdl::command__PlaceMutation* MakePlaceMutation(pnode::PNode* p_node);
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> OilForExpr(pnode::PNode* pnode);
  void _Argument(pnode::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist);
  void _Arglist(List<pnode::PNode*>* children, syntax_asdl::arg_list* arglist);
  void ArgList(pnode::PNode* pnode, syntax_asdl::arg_list* arglist);
  syntax_asdl::type_expr_t* _TypeExpr(pnode::PNode* pnode);
  List<syntax_asdl::type_expr_t*>* _TypeExprList(pnode::PNode* pnode);
  Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> _ProcParam(pnode::PNode* pnode);
  syntax_asdl::proc_sig_t* _ProcParams(pnode::PNode* p_node);
  syntax_asdl::param* _FuncParam(pnode::PNode* pnode);
  Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> _FuncParams(pnode::PNode* p_node);
  syntax_asdl::proc_sig_t* Proc(pnode::PNode* pnode);
  void TeaFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out);
  void NamedFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out);
  List<syntax_asdl::param*>* _DataParams(pnode::PNode* p_node);
  void Data(pnode::PNode* pnode, syntax_asdl::command__Data* out);
  syntax_asdl::variant_type_t* _VariantType(pnode::PNode* pnode);
  syntax_asdl::variant* _Variant(pnode::PNode* pnode);
  void Enum(pnode::PNode* pnode, syntax_asdl::command__Enum* out);
  void Class(pnode::PNode* pnode, syntax_asdl::command__Class* out);
  void Import(pnode::PNode* pnode, syntax_asdl::command__Import* out);
  Str* _RangeChar(pnode::PNode* p_node);
  syntax_asdl::class_literal_term_t* _NonRangeChars(pnode::PNode* p_node);
  syntax_asdl::class_literal_term_t* _ClassLiteralTerm(pnode::PNode* p_node);
  List<syntax_asdl::class_literal_term_t*>* _ClassLiteral(pnode::PNode* p_node);
  syntax_asdl::re_t* _NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::class_literal_term_t* _NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::re_t* _ReAtom(pnode::PNode* p_atom);
  syntax_asdl::re_repeat_t* _RepeatOp(pnode::PNode* p_repeat);
  syntax_asdl::re_t* _Regex(pnode::PNode* p_node);

  Dict<int, Str*>* number2symbol;

  DISALLOW_COPY_AND_ASSIGN(Transformer)
};
inline Str* fmt79() {
  gBuf.reset();
  gBuf.write_const("Write singleton tuples with tup(), not a trailing comma", 55);
  return gBuf.getvalue();
}

inline Str* fmt80() {
  gBuf.reset();
  gBuf.write_const("Can't assign to this expression", 31);
  return gBuf.getvalue();
}

inline Str* fmt81() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

inline Str* fmt82(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

inline Str* fmt83() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

inline Str* fmt84(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

inline Str* fmt85(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" in regex", 9);
  return gBuf.getvalue();
}


}  // declare namespace expr_to_ast

namespace regex_translate {  // declare
extern Dict<Str*, Str*>* PERL_CLASS;
void _ClassLiteralToPosixEre(syntax_asdl::class_literal_term_t* term, List<Str*>* parts);
void AsPosixEre(syntax_asdl::re_t* node, List<Str*>* parts);
inline Str* fmt86(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("-", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt87(int a0) {
  gBuf.reset();
  gBuf.write_const("ERE can't express code point ", 29);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt88() {
  gBuf.reset();
  gBuf.write_const("Perl classes can't be negated in ERE", 36);
  return gBuf.getvalue();
}

inline Str* fmt89(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt90() {
  gBuf.reset();
  gBuf.write_const("POSIX classes can't be negated in ERE", 37);
  return gBuf.getvalue();
}

inline Str* fmt91(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[:", 2);
  gBuf.format_s(a0);
  gBuf.write_const(":]", 2);
  return gBuf.getvalue();
}

inline Str* fmt92() {
  gBuf.reset();
  gBuf.write_const("POSIX EREs don't have groups without capture, so this node needs () around it.", 78);
  return gBuf.getvalue();
}

inline Str* fmt93(Str* a0) {
  gBuf.reset();
  gBuf.write_const("{", 1);
  gBuf.format_s(a0);
  gBuf.write_const("}", 1);
  return gBuf.getvalue();
}

inline Str* fmt94(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("{", 1);
  gBuf.format_s(a0);
  gBuf.write_const(",", 1);
  gBuf.format_s(a1);
  gBuf.write_const("}", 1);
  return gBuf.getvalue();
}

inline Str* fmt95(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[^", 2);
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

inline Str* fmt96(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

inline Str* fmt97(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[^[:", 4);
  gBuf.format_s(a0);
  gBuf.write_const(":]]", 3);
  return gBuf.getvalue();
}

inline Str* fmt98(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[[:", 3);
  gBuf.format_s(a0);
  gBuf.write_const(":]]", 3);
  return gBuf.getvalue();
}


}  // declare namespace regex_translate

namespace arith_parse {  // declare
syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp);
syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp);
inline Str* fmt99() {
  gBuf.reset();
  gBuf.write_const("The [ operator doesn't apply to this expression", 47);
  return gBuf.getvalue();
}


}  // declare namespace arith_parse

namespace bool_parse {  // declare

class BoolParser : public gc_heap::Obj {
 public:
  BoolParser(word_parse::WordEmitter* w_parser);
  void _NextOne(types_asdl::lex_mode_t lex_mode);
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _LookAhead();
  syntax_asdl::bool_expr_t* Parse();
  bool _TestAtEnd();
  syntax_asdl::bool_expr_t* ParseForBuiltin();
  syntax_asdl::bool_expr_t* ParseExpr();
  syntax_asdl::bool_expr_t* ParseTerm();
  syntax_asdl::bool_expr_t* ParseNegatedFactor();
  syntax_asdl::bool_expr_t* ParseFactor();

  int bool_id;
  id_kind_asdl::Kind_t bool_kind;
  syntax_asdl::word_t* cur_word;
  word_parse::WordEmitter* w_parser;
  List<syntax_asdl::word_t*>* words;

  DISALLOW_COPY_AND_ASSIGN(BoolParser)
};
inline Str* fmt100() {
  gBuf.reset();
  gBuf.write_const("Expected ]]", 11);
  return gBuf.getvalue();
}

inline Str* fmt101(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected trailing word ", 25);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt102() {
  gBuf.reset();
  gBuf.write_const("Invalid argument to unary operator", 34);
  return gBuf.getvalue();
}

inline Str* fmt103(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ), got ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt104(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in boolean expression (", 40);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}


}  // declare namespace bool_parse

namespace braces {  // declare
extern int NO_STEP;

class _NotARange : public gc_heap::Obj {
 public:
  _NotARange(Str* s);

  DISALLOW_COPY_AND_ASSIGN(_NotARange)
};

class _RangeParser : public gc_heap::Obj {
 public:
  _RangeParser(match::SimpleLexer* lexer, int span_id);
  void _Next();
  Str* _Eat(int token_type);
  int _ParseStep();
  syntax_asdl::word_part__BracedRange* _ParseRange(int range_kind);
  syntax_asdl::word_part__BracedRange* Parse();

  match::SimpleLexer* lexer;
  int span_id;
  int token_type;
  Str* token_val;

  DISALLOW_COPY_AND_ASSIGN(_RangeParser)
};
syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok);

class _StackFrame : public gc_heap::Obj {
 public:
  _StackFrame(List<syntax_asdl::word_part_t*>* cur_parts);

  syntax_asdl::word_part__BracedTuple* alt_part;
  List<syntax_asdl::word_part_t*>* cur_parts;
  bool saw_comma;

  DISALLOW_COPY_AND_ASSIGN(_StackFrame)
};
syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words);
int _LeadingZeros(Str* s);
Str* _IntToString(int i, int width);
List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part);
List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes);
List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts);
List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words);
inline Str* fmt105(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Expected ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt106() {
  gBuf.reset();
  gBuf.write_const("Step can't be 0", 15);
  return gBuf.getvalue();
}

inline Str* fmt107(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending integer range", 28);
  return gBuf.getvalue();
}

inline Str* fmt108(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending integer range", 29);
  return gBuf.getvalue();
}

inline Str* fmt109(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending character range", 30);
  return gBuf.getvalue();
}

inline Str* fmt110(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending character range", 31);
  return gBuf.getvalue();
}

inline Str* fmt111() {
  gBuf.reset();
  gBuf.write_const("Mismatched cases in character range", 35);
  return gBuf.getvalue();
}


}  // declare namespace braces

namespace builtin_assign {  // declare
int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags);
int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags, int builtin);

class Export : public vm::_AssignBuiltin {
 public:
  Export(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Export)
};
runtime_asdl::value_t* _ReconcileTypes(runtime_asdl::value_t* rval, bool flag_a, bool flag_A, int span_id);

class Readonly : public vm::_AssignBuiltin {
 public:
  Readonly(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Readonly)
};

class NewVar : public vm::_AssignBuiltin {
 public:
  NewVar(state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, ui::ErrorFormatter* errfmt);
  int _PrintFuncs(List<Str*>* names);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  Dict<Str*, syntax_asdl::command__ShFunction*>* funcs;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(NewVar)
};

class Unset : public vm::_Builtin {
 public:
  Unset(state::Mem* mem, optview::Exec* exec_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt);
  bool _UnsetVar(Str* arg, int spid, bool proc_fallback);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  Dict<Str*, syntax_asdl::command__ShFunction*>* funcs;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(Unset)
};

class Shift : public vm::_Builtin {
 public:
  Shift(state::Mem* mem);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Shift)
};
inline Str* fmt112(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt113() {
  gBuf.reset();
  gBuf.write_const("doesn't accept RHS with -n", 26);
  return gBuf.getvalue();
}

inline Str* fmt114() {
  gBuf.reset();
  gBuf.write_const("Got -a but RHS isn't an array", 29);
  return gBuf.getvalue();
}

inline Str* fmt115() {
  gBuf.reset();
  gBuf.write_const("Got -A but RHS isn't an associative array", 41);
  return gBuf.getvalue();
}

inline Str* fmt116(Str* a0) {
  gBuf.reset();
  gBuf.write_const("declare -f ", 11);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt117() {
  gBuf.reset();
  gBuf.write_const("Invalid unset expression", 24);
  return gBuf.getvalue();
}

inline Str* fmt118() {
  gBuf.reset();
  gBuf.write_const("expected a variable name.  shopt -s eval_unsafe_arith allows expressions", 72);
  return gBuf.getvalue();
}

inline Str* fmt119(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid shift argument ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_assign

namespace builtin_meta {  // declare

class Eval : public vm::_Builtin {
 public:
  Eval(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, cmd_eval::CommandEvaluator* cmd_ev);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  optview::Exec* exec_opts;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(Eval)
};

class Source : public vm::_Builtin {
 public:
  Source(parse_lib::ParseContext* parse_ctx, state::SearchPath* search_path, cmd_eval::CommandEvaluator* cmd_ev, process::FdState* fd_state, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  ui::ErrorFormatter* errfmt;
  process::FdState* fd_state;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Source)
};

class Command : public vm::_Builtin {
 public:
  Command(vm::_Executor* shell_ex, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  Dict<Str*, syntax_asdl::command__ShFunction*>* funcs;
  state::SearchPath* search_path;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Command)
};

class Builtin : public vm::_Builtin {
 public:
  Builtin(vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Builtin)
};
int _AdjustStatus(Str* status_ok, int status);

class Run_ : public vm::_Builtin {
 public:
  Run_(state::MutableOpts* mutable_opts, state::Mem* mem, vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Run_)
};
List<Tuple2<Str*, Str*>*>* _ResolveNames(List<Str*>* names, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path);

class Type : public vm::_Builtin {
 public:
  Type(Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;
  Dict<Str*, syntax_asdl::command__ShFunction*>* funcs;
  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Type)
};
inline Str* fmt120(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("source ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" failed: ", 9);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt121(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a shell builtin", 22);
  return gBuf.getvalue();
}

inline Str* fmt122() {
  gBuf.reset();
  gBuf.write_const("'Run' expected a command to run", 31);
  return gBuf.getvalue();
}

inline Str* fmt123(int a0) {
  gBuf.reset();
  gBuf.write_const("fatal: status ", 14);
  gBuf.format_d(a0);
  gBuf.write_const(" when --allow-status-01", 23);
  return gBuf.getvalue();
}

inline Str* fmt124(Str* a0) {
  gBuf.reset();
  gBuf.write_const("type: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt125(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" is a ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace builtin_meta

namespace builtin_misc {  // declare

class Times : public vm::_Builtin {
 public:
  Times();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(Times)
};
Tuple2<bool, bool> _AppendParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans, int max_results, bool join_next, List<mylib::BufWriter*>* parts);
Tuple2<Str*, bool> ReadLineFromStdin(Str* delim_char);
Str* _ReadLine();
Str* _ReadAll();

class Read : public vm::_Builtin {
 public:
  Read(split::SplitContext* splitter, state::Mem* mem, parse_lib::ParseContext* parse_ctx);
  int _Line(arg_types::read* arg, Str* var_name);
  int _All(Str* var_name);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);
  Str* _ReadN(int stdin_fd, int n);
  int _Read(arg_types::read* arg, List<Str*>* names);

  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  split::SplitContext* splitter;
  mylib::LineReader* stdin;

  DISALLOW_COPY_AND_ASSIGN(Read)
};

class MapFile : public vm::_Builtin {
 public:
  MapFile(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  mylib::LineReader* f;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(MapFile)
};

class Cd : public vm::_Builtin {
 public:
  Cd(state::Mem* mem, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  cmd_eval::CommandEvaluator* cmd_ev;
  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Cd)
};
extern int WITH_LINE_NUMBERS;
extern int WITHOUT_LINE_NUMBERS;
extern int SINGLE_LINE;
void _PrintDirStack(state::DirStack* dir_stack, int style, Str* home_dir);

class Pushd : public vm::_Builtin {
 public:
  Pushd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Pushd)
};
bool _PopDirStack(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);

class Popd : public vm::_Builtin {
 public:
  Popd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Popd)
};

class Dirs : public vm::_Builtin {
 public:
  Dirs(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Dirs)
};

class Pwd : public vm::_Builtin {
 public:
  Pwd(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Pwd)
};

class Help : public vm::_Builtin {
 public:
  Help(pyutil::_ResourceLoader* loader, ui::ErrorFormatter* errfmt);
  List<Str*>* _Groups();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  pyutil::_ResourceLoader* loader;

  DISALLOW_COPY_AND_ASSIGN(Help)
};

class Cat : public vm::_Builtin {
 public:
  Cat();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(Cat)
};
inline Str* fmt126(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("cd ", 3);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt127(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const("  ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt128(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("pushd: ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt129(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("popd: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt130() {
  gBuf.reset();
  gBuf.write_const("got extra argument", 18);
  return gBuf.getvalue();
}

inline Str* fmt131(Str* a0) {
  gBuf.reset();
  gBuf.write_const("_devbuild/help/", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt132(Str* a0) {
  gBuf.reset();
  gBuf.write_const("no help topics match ", 21);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_misc

namespace builtin_printf {  // declare

class _FormatStringParser : public gc_heap::Obj {
 public:
  _FormatStringParser(lexer::Lexer* lexer);
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::printf_part_t* _ParseFormatStr();
  List<syntax_asdl::printf_part_t*>* Parse();

  syntax_asdl::Token* cur_token;
  lexer::Lexer* lexer;
  id_kind_asdl::Kind_t token_kind;
  int token_type;

  DISALLOW_COPY_AND_ASSIGN(_FormatStringParser)
};

class Printf : public vm::_Builtin {
 public:
  Printf(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  Dict<Str*, List<syntax_asdl::printf_part_t*>*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  double shell_start_time;

  DISALLOW_COPY_AND_ASSIGN(Printf)
};
inline Str* fmt133(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support the ", 31);
  gBuf.format_r(a0);
  gBuf.write_const(" flag", 5);
  return gBuf.getvalue();
}

inline Str* fmt134() {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support floating point", 41);
  return gBuf.getvalue();
}

inline Str* fmt135() {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support single characters (bytes)", 52);
  return gBuf.getvalue();
}

inline Str* fmt136() {
  gBuf.reset();
  gBuf.write_const("Invalid printf format character", 31);
  return gBuf.getvalue();
}

inline Str* fmt137() {
  gBuf.reset();
  gBuf.write_const("Expected a printf format character", 34);
  return gBuf.getvalue();
}

inline Str* fmt138(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf got invalid width ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt139(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf got invalid precision ", 29);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt140(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf expected an integer, got ", 32);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt141(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't format negative number ", 29);
  gBuf.format_d(a0);
  gBuf.write_const(" with ", 6);
  gBuf.write_const("%", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt142() {
  gBuf.reset();
  gBuf.write_const("Invalid -v expression", 21);
  return gBuf.getvalue();
}

inline Str* fmt143() {
  gBuf.reset();
  gBuf.write_const("-v expected a variable name.  shopt -s eval_unsafe_arith allows expressions", 75);
  return gBuf.getvalue();
}


}  // declare namespace builtin_printf

namespace builtin_pure {  // declare

class Boolean : public vm::_Builtin {
 public:
  Boolean(int status);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  int status;

  DISALLOW_COPY_AND_ASSIGN(Boolean)
};

class Alias : public vm::_Builtin {
 public:
  Alias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;

  DISALLOW_COPY_AND_ASSIGN(Alias)
};

class UnAlias : public vm::_Builtin {
 public:
  UnAlias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;

  DISALLOW_COPY_AND_ASSIGN(UnAlias)
};
void SetShellOpts(state::MutableOpts* exec_opts, List<Tuple2<Str*, bool>*>* opt_changes, List<Tuple2<Str*, bool>*>* shopt_changes);

class Set : public vm::_Builtin {
 public:
  Set(state::MutableOpts* exec_opts, state::Mem* mem);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::MutableOpts* exec_opts;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Set)
};

class Shopt : public vm::_Builtin {
 public:
  Shopt(state::MutableOpts* mutable_opts, cmd_eval::CommandEvaluator* cmd_ev);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  cmd_eval::CommandEvaluator* cmd_ev;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(Shopt)
};

class Hash : public vm::_Builtin {
 public:
  Hash(state::SearchPath* search_path);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Hash)
};
Dict<Str*, bool>* _ParseOptSpec(Str* spec_str);

class GetOptsState : public gc_heap::Obj {
 public:
  GetOptsState(state::Mem* mem, ui::ErrorFormatter* errfmt);
  int _OptInd();
  Str* GetArg(List<Str*>* argv);
  void IncIndex();
  void SetArg(Str* optarg);
  void Fail();

  int _optind;
  ui::ErrorFormatter* errfmt;
  int flag_pos;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(GetOptsState)
};
Tuple2<int, Str*> _GetOpts(Dict<Str*, bool>* spec, List<Str*>* argv, builtin_pure::GetOptsState* my_state, ui::ErrorFormatter* errfmt);

class GetOpts : public vm::_Builtin {
 public:
  GetOpts(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;
  builtin_pure::GetOptsState* my_state;
  Dict<Str*, Dict<Str*, bool>*>* spec_cache;

  DISALLOW_COPY_AND_ASSIGN(GetOpts)
};

class Echo : public vm::_Builtin {
 public:
  Echo(optview::Exec* exec_opts);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  optview::Exec* exec_opts;
  mylib::Writer* f;

  DISALLOW_COPY_AND_ASSIGN(Echo)
};
inline Str* fmt144(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("alias ", 6);
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt145(Str* a0) {
  gBuf.reset();
  gBuf.write_const("No alias named ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt146(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("alias ", 6);
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt147(Str* a0) {
  gBuf.reset();
  gBuf.write_const("No alias named ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt148(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt149(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt150(Str* a0) {
  gBuf.reset();
  gBuf.write_const("hash: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt151(Str* a0) {
  gBuf.reset();
  gBuf.write_const("getopts: option ", 16);
  gBuf.format_r(a0);
  gBuf.write_const(" requires an argument.", 22);
  return gBuf.getvalue();
}

inline Str* fmt152(Str* a0) {
  gBuf.reset();
  gBuf.write_const("(getopts argv: ", 15);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt153(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid variable name ", 26);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_pure

namespace cmd_eval {  // declare
extern int IsMainProgram;
extern int IsEvalSource;
extern int Optimize;
extern Dict<Str*, Str*>* OIL_TYPE_NAMES;

class Deps : public gc_heap::Obj {
 public:
  Deps();

  util::_DebugFile* debug_f;
  dev::CrashDumper* dumper;
  state::MutableOpts* mutable_opts;
  List<syntax_asdl::command_t*>* trap_nodes;
  Dict<Str*, builtin_process::_TrapHandler*>* traps;

  DISALLOW_COPY_AND_ASSIGN(Deps)
};
int _PackFlags(int keyword_id);
int _PackFlags(int keyword_id, int flags);
bool _HasManyStatuses(syntax_asdl::command_t* node);

class CommandEvaluator : public gc_heap::Obj {
 public:
  CommandEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_AssignBuiltin*>* assign_builtins, alloc::Arena* arena, cmd_eval::Deps* cmd_deps);
  void CheckCircularDeps();
  int _RunAssignBuiltin(runtime_asdl::cmd_value__Assign* cmd_val);
  int _SpanIdForShAssignment(syntax_asdl::command__ShAssignment* node);
  void _CheckStatus(int status, syntax_asdl::command_t* node, int blame_spid);
  runtime_asdl::redirect* _EvalRedirect(syntax_asdl::redir* r);
  List<runtime_asdl::redirect*>* _EvalRedirects(syntax_asdl::command_t* node);
  int _RunSimpleCommand(runtime_asdl::cmd_value_t* cmd_val, bool do_fork);
  void _EvalTempEnv(List<syntax_asdl::env_pair*>* more_env, int flags);
  void _StrictErrExit(syntax_asdl::command_t* node);
  void _StrictErrExitList(List<syntax_asdl::command_t*>* node_list);
  bool _EvalCondition(syntax_asdl::condition_t* cond, int spid);
  Tuple2<int, bool> _Dispatch(syntax_asdl::command_t* node, runtime_asdl::CompoundStatus* pipeline_st);
  int _Execute(syntax_asdl::command_t* node);
  int _ExecuteList(List<syntax_asdl::command_t*>* children);
  int LastStatus();
  void _NoForkLast(syntax_asdl::command_t* node);
  syntax_asdl::command_t* _RemoveSubshells(syntax_asdl::command_t* node);
  Tuple2<bool, bool> ExecuteAndCatch(syntax_asdl::command_t* node);
  Tuple2<bool, bool> ExecuteAndCatch(syntax_asdl::command_t* node, int cmd_flags);
  void MaybeRunExitTrap(List<int>* mut_status);
  int RunProc(syntax_asdl::command__ShFunction* func_node, List<Str*>* argv);
  Dict<Str*, runtime_asdl::cell*>* EvalBlock(syntax_asdl::command_t* block);
  int RunFuncForCompletion(syntax_asdl::command__ShFunction* func_node, List<Str*>* argv);

  alloc::Arena* arena;
  sh_expr_eval::ArithEvaluator* arith_ev;
  Dict<int, vm::_AssignBuiltin*>* assign_builtins;
  sh_expr_eval::BoolEvaluator* bool_ev;
  bool check_command_sub_status;
  util::_DebugFile* debug_f;
  dev::CrashDumper* dumper;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  expr_eval::OilEvaluator* expr_ev;
  int loop_level;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  Dict<Str*, syntax_asdl::command__ShFunction*>* procs;
  vm::_Executor* shell_ex;
  dev::Tracer* tracer;
  List<syntax_asdl::command_t*>* trap_nodes;
  Dict<Str*, builtin_process::_TrapHandler*>* traps;
  word_eval::AbstractWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(CommandEvaluator)
};
inline Str* fmt154(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Assignment builtin ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" not configured", 15);
  return gBuf.getvalue();
}

inline Str* fmt155(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" ", 1);
  return gBuf.getvalue();
}

inline Str* fmt156(int a0, Str* a1, int a2) {
  gBuf.reset();
  gBuf.write_const("Exiting with status ", 20);
  gBuf.format_d(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const("PID ", 4);
  gBuf.format_d(a2);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt157(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid descriptor ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(".  Expected D, -, or D- where D is an integer", 45);
  return gBuf.getvalue();
}

inline Str* fmt158(Str* a0) {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows simple commands (got ", 48);
  gBuf.format_s(a0);
  gBuf.write_const("). Hint: use 'run'.", 19);
  return gBuf.getvalue();
}

inline Str* fmt159() {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows a single command.  Hint: use \"run\".", 62);
  return gBuf.getvalue();
}

inline Str* fmt160(Str* a0) {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows simple commands (got ", 48);
  gBuf.format_s(a0);
  gBuf.write_const("). Hint: use 'run'.", 19);
  return gBuf.getvalue();
}

inline Str* fmt161() {
  gBuf.reset();
  gBuf.write_const("ShAssignment builtins don't accept blocks", 41);
  return gBuf.getvalue();
}

inline Str* fmt162() {
  gBuf.reset();
  gBuf.write_const("|& isn't supported", 18);
  return gBuf.getvalue();
}

inline Str* fmt163(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" expected a number, got ", 24);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt164(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected ", 11);
  gBuf.format_r(a0);
  gBuf.write_const(" (in function call)", 19);
  return gBuf.getvalue();
}


}  // declare namespace cmd_eval

namespace cmd_parse {  // declare
int _KeywordSpid(syntax_asdl::word_t* w);
syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w);
Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir* h, Str* delimiter);
List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena);
void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir* r, reader::_Reader* line_reader, alloc::Arena* arena);
syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena);
void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env);
Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words);
syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir*>* redirects, syntax_asdl::BraceGroup* block);
extern List<int>* SECONDARY_KEYWORDS;

class CommandParser : public gc_heap::Obj {
 public:
  CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init_EofId(int eof_id);
  void Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight);
  void Reset();
  void ResetInputObjects();
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  void _Peek();
  void _Eat(int c_id);
  void _Eat2(int c_id, Str* msg);
  void _NewlineOk();
  bool _AtSecondaryKeyword();
  syntax_asdl::redir* ParseRedirect();
  List<syntax_asdl::redir*>* _ParseRedirectList();
  Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> _ScanSimpleCommand();
  syntax_asdl::command_t* _MaybeExpandAliases(List<syntax_asdl::compound_word*>* words);
  syntax_asdl::command_t* ParseSimpleCommand();
  syntax_asdl::BraceGroup* ParseBraceGroup();
  syntax_asdl::command__DoGroup* ParseDoGroup();
  Tuple2<List<syntax_asdl::compound_word*>*, int> ParseForWords();
  syntax_asdl::command__ForExpr* _ParseForExprLoop();
  syntax_asdl::command__ForEach* _ParseForEachLoop(int for_spid);
  syntax_asdl::command_t* ParseFor();
  syntax_asdl::command__WhileUntil* ParseWhileUntil(syntax_asdl::Token* keyword);
  syntax_asdl::case_arm* ParseCaseItem();
  void ParseCaseList(List<syntax_asdl::case_arm*>* arms);
  syntax_asdl::command__Case* ParseCase();
  void _ParseOilElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* _ParseOilIf(int if_spid, syntax_asdl::condition_t* cond);
  void _ParseElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* ParseIf();
  syntax_asdl::command_t* ParseTime();
  syntax_asdl::command_t* ParseCompoundCommand();
  syntax_asdl::command__ShFunction* ParseFunctionDef();
  syntax_asdl::command__ShFunction* ParseKshFunctionDef();
  syntax_asdl::command__Proc* ParseOilProc();
  syntax_asdl::command_t* ParseCoproc();
  syntax_asdl::command__Subshell* ParseSubshell();
  syntax_asdl::command__DBracket* ParseDBracket();
  syntax_asdl::command__DParen* ParseDParen();
  syntax_asdl::command_t* ParseCommand();
  syntax_asdl::command_t* ParsePipeline();
  syntax_asdl::command_t* ParseAndOr();
  syntax_asdl::command_t* _ParseCommandLine();
  syntax_asdl::command__CommandList* _ParseCommandTerm();
  syntax_asdl::command__CommandList* _ParseCommandList();
  syntax_asdl::command_t* ParseLogicalLine();
  syntax_asdl::parse_result_t* ParseInteractiveLine();
  syntax_asdl::command_t* ParseCommandSub();
  void CheckForPendingHereDocs();

  Dict<Str*, Str*>* aliases;
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  bool allow_block;
  alloc::Arena* arena;
  int c_id;
  id_kind_asdl::Kind_t c_kind;
  syntax_asdl::word_t* cur_word;
  int eof_id;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  optview::Parse* parse_opts;
  List<syntax_asdl::redir*>* pending_here_docs;
  bool return_expr;
  word_parse::WordParser* w_parser;

  DISALLOW_COPY_AND_ASSIGN(CommandParser)
};
inline Str* fmt165() {
  gBuf.reset();
  gBuf.write_const("Couldn't find terminator for here doc that starts here", 54);
  return gBuf.getvalue();
}

inline Str* fmt166() {
  gBuf.reset();
  gBuf.write_const("Invalid here doc delimiter", 26);
  return gBuf.getvalue();
}

inline Str* fmt167(int a0, int a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt168() {
  gBuf.reset();
  gBuf.write_const("Environment binding shouldn't look like an array assignment", 59);
  return gBuf.getvalue();
}

inline Str* fmt169() {
  gBuf.reset();
  gBuf.write_const("Expected = in environment binding, got +=", 41);
  return gBuf.getvalue();
}

inline Str* fmt170() {
  gBuf.reset();
  gBuf.write_const("Environment bindings can't contain array literals", 49);
  return gBuf.getvalue();
}

inline Str* fmt171(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Expected word type ", 19);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt172() {
  gBuf.reset();
  gBuf.write_const("Invalid token after redirect operator", 37);
  return gBuf.getvalue();
}

inline Str* fmt173(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("line IDs ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt174() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt175() {
  gBuf.reset();
  gBuf.write_const("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression", 108);
  return gBuf.getvalue();
}

inline Str* fmt176() {
  gBuf.reset();
  gBuf.write_const("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =", 101);
  return gBuf.getvalue();
}

inline Str* fmt177() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt178() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt179() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have redirects", 37);
  return gBuf.getvalue();
}

inline Str* fmt180() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have environment bindings", 48);
  return gBuf.getvalue();
}

inline Str* fmt181(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected argument to ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt182() {
  gBuf.reset();
  gBuf.write_const("Invalid word in for loop", 24);
  return gBuf.getvalue();
}

inline Str* fmt183() {
  gBuf.reset();
  gBuf.write_const("Invalid word after for expression", 33);
  return gBuf.getvalue();
}

inline Str* fmt184() {
  gBuf.reset();
  gBuf.write_const("Loop variable name should be a constant", 39);
  return gBuf.getvalue();
}

inline Str* fmt185() {
  gBuf.reset();
  gBuf.write_const("Invalid loop variable name", 26);
  return gBuf.getvalue();
}

inline Str* fmt186() {
  gBuf.reset();
  gBuf.write_const("Unexpected word after for loop variable", 39);
  return gBuf.getvalue();
}

inline Str* fmt187() {
  gBuf.reset();
  gBuf.write_const("Expected ;; or esac", 19);
  return gBuf.getvalue();
}

inline Str* fmt188() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing compound command", 46);
  return gBuf.getvalue();
}

inline Str* fmt189() {
  gBuf.reset();
  gBuf.write_const("Invalid function name", 21);
  return gBuf.getvalue();
}

inline Str* fmt190() {
  gBuf.reset();
  gBuf.write_const("Invalid KSH-style function name", 31);
  return gBuf.getvalue();
}

inline Str* fmt191() {
  gBuf.reset();
  gBuf.write_const("Unexpected word when parsing command", 36);
  return gBuf.getvalue();
}

inline Str* fmt192() {
  gBuf.reset();
  gBuf.write_const("Unexpected right brace", 22);
  return gBuf.getvalue();
}

inline Str* fmt193() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while parsing command", 36);
  return gBuf.getvalue();
}

inline Str* fmt194() {
  gBuf.reset();
  gBuf.write_const("Invalid word while parsing command", 34);
  return gBuf.getvalue();
}

inline Str* fmt195() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing command line", 42);
  return gBuf.getvalue();
}

inline Str* fmt196() {
  gBuf.reset();
  gBuf.write_const("Unterminated here doc began here", 32);
  return gBuf.getvalue();
}


}  // declare namespace cmd_parse

namespace glob_ {  // declare
bool LooksLikeGlob(Str* s);
bool LooksLikeStaticGlob(syntax_asdl::compound_word* w);
extern Str* GLOB_META_CHARS;
Str* GlobEscape(Str* s);
Str* EreCharClassEscape(Str* s);
extern Str* ERE_META_CHARS;
Str* ExtendedRegexEscape(Str* s);
Str* GlobUnescape(Str* s);

class _GlobParser : public gc_heap::Obj {
 public:
  _GlobParser(match::SimpleLexer* lexer);
  void _Next();
  List<syntax_asdl::glob_part_t*>* _ParseCharClass();
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> Parse();

  match::SimpleLexer* lexer;
  int token_type;
  Str* token_val;
  List<Str*>* warnings;

  DISALLOW_COPY_AND_ASSIGN(_GlobParser)
};
Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts);
Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat);

class Globber : public gc_heap::Obj {
 public:
  Globber(optview::Exec* exec_opts);
  int Expand(Str* arg, List<Str*>* out);
  List<Str*>* OilFuncCall(Str* arg);

  optview::Exec* exec_opts;

  DISALLOW_COPY_AND_ASSIGN(Globber)
};
inline Str* fmt197(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error expanding glob ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace glob_

namespace prompt {  // declare
extern Str* PROMPT_ERROR;

class _PromptEvaluatorCache : public gc_heap::Obj {
 public:
  _PromptEvaluatorCache();
  int _GetEuid();
  Str* Get(Str* name);

  Dict<Str*, Str*>* cache;
  int euid;

  DISALLOW_COPY_AND_ASSIGN(_PromptEvaluatorCache)
};

class Evaluator : public gc_heap::Obj {
 public:
  Evaluator(Str* lang, parse_lib::ParseContext* parse_ctx, state::Mem* mem);
  void CheckCircularDeps();
  Str* _ReplaceBackslashCodes(List<Tuple2<int, Str*>*>* tokens);
  Str* EvalPrompt(runtime_asdl::value_t* UP_val);
  Str* EvalFirstPrompt();

  prompt::_PromptEvaluatorCache* cache;
  Str* default_prompt;
  Str* lang;
  state::Mem* mem;
  Dict<Str*, syntax_asdl::compound_word*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  Dict<Str*, List<Tuple2<int, Str*>*>*>* tokens_cache;
  word_eval::AbstractWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(Evaluator)
};

class UserPlugin : public gc_heap::Obj {
 public:
  UserPlugin(state::Mem* mem, parse_lib::ParseContext* parse_ctx, cmd_eval::CommandEvaluator* cmd_ev);
  void Run();

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  state::Mem* mem;
  Dict<Str*, syntax_asdl::command_t*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(UserPlugin)
};
inline Str* fmt198(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Error: ", 8);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt199(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Error: \\", 9);
  gBuf.format_s(a0);
  gBuf.write_const(" not implemented in $PS1> ", 26);
  return gBuf.getvalue();
}

inline Str* fmt200(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<ERROR: Can't parse PS1: ", 25);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}


}  // declare namespace prompt

namespace sh_expr_eval {  // declare
runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts);
runtime_asdl::value_t* OldValue(runtime_asdl::lvalue_t* lval, state::Mem* mem, optview::Exec* exec_opts);

class ArithEvaluator : public gc_heap::Obj {
 public:
  ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
  void CheckCircularDeps();
  int _StringToInteger(Str* s, int span_id);
  int _ValToIntOrError(runtime_asdl::value_t* val);
  int _ValToIntOrError(runtime_asdl::value_t* val, int span_id);
  Tuple2<int, runtime_asdl::lvalue_t*> _EvalLhsAndLookupArith(syntax_asdl::arith_expr_t* node);
  void _Store(runtime_asdl::lvalue_t* lval, int new_int);
  int EvalToInt(syntax_asdl::arith_expr_t* node);
  runtime_asdl::value_t* Eval(syntax_asdl::arith_expr_t* node);
  Str* EvalWordToString(syntax_asdl::arith_expr_t* node);
  runtime_asdl::lvalue_t* EvalShellLhs(syntax_asdl::sh_lhs_expr_t* node, int spid, runtime_asdl::scope_t lookup_mode);
  Tuple2<Str*, int> _VarRefOrWord(syntax_asdl::arith_expr_t* anode);
  runtime_asdl::lvalue_t* EvalArithLhs(syntax_asdl::arith_expr_t* anode, int span_id);

  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  word_eval::StringWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(ArithEvaluator)
};

class BoolEvaluator : public ArithEvaluator {
 public:
  BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
  void Init_AlwaysStrict();
  int _StringToIntegerOrError(Str* s);
  int _StringToIntegerOrError(Str* s, syntax_asdl::word_t* blame_word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word, runtime_asdl::quote_t quote_kind);
  void _SetRegexMatches(List<Str*>* matches);
  bool EvalB(syntax_asdl::bool_expr_t* node);

  bool always_strict;

  DISALLOW_COPY_AND_ASSIGN(BoolEvaluator)
};
inline Str* fmt201(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt202(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use [] on value of type ", 30);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt203(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use [] on value of type ", 30);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt204(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid hex constant ", 21);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt205(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid octal constant ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt206(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid base for numeric constant ", 34);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt207(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid digits for numeric constant ", 36);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt208(Str* a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Digits ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" out of range for base ", 23);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt209() {
  gBuf.reset();
  gBuf.write_const("Parse error in recursive arithmetic", 35);
  return gBuf.getvalue();
}

inline Str* fmt210(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt211(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt212(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt213() {
  gBuf.reset();
  gBuf.write_const("Undefined value in arithmetic context", 37);
  return gBuf.getvalue();
}

inline Str* fmt214(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected a value convertible to integer, got ", 45);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt215(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected array or assoc in index expression, got ", 49);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt216() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

inline Str* fmt217() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

inline Str* fmt218(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid place to modify", 23);
  return gBuf.getvalue();
}

inline Str* fmt219(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" isn't implemented", 18);
  return gBuf.getvalue();
}

inline Str* fmt220(Str* a0, Str* a1, syntax_asdl::word_t* a2) {
  gBuf.reset();
  gBuf.write_const("Invalid regex ", 14);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace sh_expr_eval

namespace split {  // declare
extern Str* DEFAULT_IFS;
List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans);

class SplitContext : public gc_heap::Obj {
 public:
  SplitContext(state::Mem* mem);
  split::IfsSplitter* _GetSplitter();
  split::IfsSplitter* _GetSplitter(Str* ifs);
  Str* GetJoinChar();
  Str* Escape(Str* s);
  List<Str*>* SplitForWordEval(Str* s);
  List<Str*>* SplitForWordEval(Str* s, Str* ifs);
  List<Tuple2<runtime_asdl::span_t, int>*>* SplitForRead(Str* line, bool allow_escape);

  state::Mem* mem;
  Dict<Str*, split::IfsSplitter*>* splitters;

  DISALLOW_COPY_AND_ASSIGN(SplitContext)
};

class _BaseSplitter : public gc_heap::Obj {
 public:
  _BaseSplitter(Str* escape_chars);
  Str* Escape(Str* s);

  Str* escape_chars;

  DISALLOW_COPY_AND_ASSIGN(_BaseSplitter)
};

class IfsSplitter : public _BaseSplitter {
 public:
  IfsSplitter(Str* ifs_whitespace, Str* ifs_other);
  List<Tuple2<runtime_asdl::span_t, int>*>* Split(Str* s, bool allow_escape);

  Str* ifs_other;
  Str* ifs_whitespace;

  DISALLOW_COPY_AND_ASSIGN(IfsSplitter)
};

}  // declare namespace split

namespace string_ops {  // declare
Str* Utf8Encode(int code);
extern Str* INCOMPLETE_CHAR;
extern Str* INVALID_CONT;
extern Str* INVALID_START;
void _CheckContinuationByte(Str* byte);
int _Utf8CharLen(int starting_byte);
int _NextUtf8Char(Str* s, int i);
int PreviousUtf8Char(Str* s, int i);
int CountUtf8Chars(Str* s);
int AdvanceUtf8Chars(Str* s, int num_chars, int byte_offset);
Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg, bool extglob);
List<Tuple2<int, int>*>* _AllMatchPositions(Str* s, Str* regex);
Str* _PatSubAll(Str* s, Str* regex, Str* replace_str);

class GlobReplacer : public gc_heap::Obj {
 public:
  GlobReplacer(Str* regex, Str* replace_str, int slash_spid);
  Str* Replace(Str* s, syntax_asdl::suffix_op__PatSub* op);

  Str* regex;
  Str* replace_str;
  int slash_spid;

  DISALLOW_COPY_AND_ASSIGN(GlobReplacer)
};
Str* ShellQuoteB(Str* s);
inline Str* fmt221(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt222(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt223(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt224(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt225(Str* a0) {
  gBuf.reset();
  gBuf.write_const("(", 1);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt226(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error matching regex ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace string_ops

namespace tdop {  // declare
bool IsIndexable(syntax_asdl::arith_expr_t* node, bool parse_dynamic_arith);
bool _VarRefOrWord(syntax_asdl::arith_expr_t* node, bool dynamic_arith);
void CheckLhsExpr(syntax_asdl::arith_expr_t* node, bool dynamic_arith, syntax_asdl::word_t* blame_word);
syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);

class TdopParser : public gc_heap::Obj {
 public:
  TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser, optview::Parse* parse_opts);
  int CurrentId();
  bool AtToken(int token_type);
  void Eat(int token_type);
  bool Next();
  syntax_asdl::arith_expr_t* ParseUntil(int rbp);
  syntax_asdl::arith_expr_t* Parse();

  syntax_asdl::word_t* cur_word;
  int op_id;
  optview::Parse* parse_opts;
  tdop::ParserSpec* spec;
  word_parse::WordParser* w_parser;

  DISALLOW_COPY_AND_ASSIGN(TdopParser)
};
inline Str* fmt227() {
  gBuf.reset();
  gBuf.write_const("Left-hand side of this assignment is invalid", 44);
  return gBuf.getvalue();
}

inline Str* fmt228() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in prefix position", 38);
  return gBuf.getvalue();
}

inline Str* fmt229() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in infix position", 37);
  return gBuf.getvalue();
}

inline Str* fmt230(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Parser expected ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt231() {
  gBuf.reset();
  gBuf.write_const("Unexpected end of input", 23);
  return gBuf.getvalue();
}


}  // declare namespace tdop

namespace word_compile {  // declare
syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok);
Str* EvalCStringToken(syntax_asdl::Token* tok);

}  // declare namespace word_compile

namespace word_eval {  // declare
bool CheckCompatArray(Str* var_name, optview::Exec* opts);
bool CheckCompatArray(Str* var_name, optview::Exec* opts, bool is_plain_var_sub);
runtime_asdl::value_t* ResolveCompatArray(runtime_asdl::value_t* val);
Str* GetArrayItem(List<Str*>* strs, int index);
Str* EvalSingleQuoted(syntax_asdl::single_quoted* part);
Str* _BackslashEscape(Str* s);
runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted);
List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals);
Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char);
runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part, runtime_asdl::value__Str* arg0_val);

class StringWordEvaluator : public gc_heap::Obj {
 public:
  StringWordEvaluator();
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind);

  DISALLOW_COPY_AND_ASSIGN(StringWordEvaluator)
};
Str* _GetDollarHyphen(optview::Exec* exec_opts);

class TildeEvaluator : public gc_heap::Obj {
 public:
  TildeEvaluator(state::Mem* mem, optview::Exec* exec_opts);
  Str* Eval(syntax_asdl::Token* token);

  optview::Exec* exec_opts;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(TildeEvaluator)
};

class AbstractWordEvaluator : public StringWordEvaluator {
 public:
  AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value_t* _EvalProcessSub(syntax_asdl::command_sub* cs_part);
  runtime_asdl::value_t* _EvalVarNum(int var_num);
  Tuple2<runtime_asdl::value_t*, bool> _EvalSpecialVar(int op_id, bool quoted);
  bool _ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, Str* var_name, runtime_asdl::a_index_t* var_index, syntax_asdl::Token* blame_token);
  runtime_asdl::value_t* _EvalIndirectArrayExpansion(Str* name, Str* index);
  runtime_asdl::value_t* _ApplyPrefixOp(runtime_asdl::value_t* val, syntax_asdl::speck* prefix_op, syntax_asdl::Token* token);
  runtime_asdl::value_t* _ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op);
  runtime_asdl::value_t* _PatSub(runtime_asdl::value_t* val, syntax_asdl::suffix_op__PatSub* op);
  runtime_asdl::value_t* _Slice(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Slice* op, Str* var_name, syntax_asdl::braced_var_sub* part);
  Tuple2<runtime_asdl::value__Str*, bool> _Nullary(runtime_asdl::value_t* val, syntax_asdl::Token* op, Str* var_name);
  Tuple2<runtime_asdl::value_t*, bool> _WholeArray(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part, bool quoted);
  Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> _ArrayIndex(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part);
  void _EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals);
  Str* EvalDoubleQuotedToString(syntax_asdl::double_quoted* dq_part);
  runtime_asdl::value__Str* _DecayArray(runtime_asdl::value__MaybeStrArray* val);
  runtime_asdl::value_t* _EmptyStrOrError(runtime_asdl::value_t* val, syntax_asdl::Token* token);
  runtime_asdl::value_t* _EmptyMaybeStrArrayOrError(syntax_asdl::Token* token);
  void _EvalBracedVarSub(syntax_asdl::braced_var_sub* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  Str* _PartValsToString(List<runtime_asdl::part_value_t*>* part_vals, int span_id);
  Str* EvalBracedVarSubToString(syntax_asdl::braced_var_sub* part);
  void _EvalSimpleVarSub(syntax_asdl::Token* token, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  Str* EvalSimpleVarSubToString(syntax_asdl::Token* tok);
  void _EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  void _EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted, bool is_subst);
  void _EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals);
  void _EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, bool is_subst);
  runtime_asdl::value__Str* EvalWordToPattern(syntax_asdl::word_t* UP_w);
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* UP_w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* UP_w, runtime_asdl::quote_t quote_kind);
  runtime_asdl::value__Str* EvalForPlugin(syntax_asdl::compound_word* w);
  runtime_asdl::value_t* EvalRhsWord(syntax_asdl::word_t* UP_w);
  void _EvalWordFrame(List<Tuple3<Str*, bool, bool>*>* frame, List<Str*>* argv);
  List<Str*>* _EvalWordToArgv(syntax_asdl::compound_word* w);
  runtime_asdl::cmd_value__Assign* _EvalAssignBuiltin(int builtin_id, Str* arg0, List<syntax_asdl::compound_word*>* words);
  runtime_asdl::cmd_value_t* StaticEvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign);
  runtime_asdl::cmd_value_t* EvalWordSequence2(List<syntax_asdl::compound_word*>* words);
  runtime_asdl::cmd_value_t* EvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign);
  List<Str*>* EvalWordSequence(List<syntax_asdl::compound_word*>* words);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  expr_eval::OilEvaluator* expr_ev;
  glob_::Globber* globber;
  state::Mem* mem;
  prompt::Evaluator* prompt_ev;
  split::SplitContext* splitter;
  word_eval::TildeEvaluator* tilde_ev;

  DISALLOW_COPY_AND_ASSIGN(AbstractWordEvaluator)
};
Tuple2<Str*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w);

class NormalWordEvaluator : public AbstractWordEvaluator {
 public:
  NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_sub* cs_part);

  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(NormalWordEvaluator)
};

class CompletionWordEvaluator : public AbstractWordEvaluator {
 public:
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_sub* cs_part);

  DISALLOW_COPY_AND_ASSIGN(CompletionWordEvaluator)
};
inline Str* fmt232(int a0) {
  gBuf.reset();
  gBuf.write_const("The length index of a array slice can't be negative: ", 53);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt233() {
  gBuf.reset();
  gBuf.write_const("Can't slice associative arrays", 30);
  return gBuf.getvalue();
}

inline Str* fmt234() {
  gBuf.reset();
  gBuf.write_const("Error expanding tilde (e.g. invalid user)", 41);
  return gBuf.getvalue();
}

inline Str* fmt235(Str* a0) {
  gBuf.reset();
  gBuf.write_const("unset variable ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt236(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Bad indirect expansion: ", 24);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt237(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use @P on ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt238(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use @Q on ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt239(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Var op ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" not implemented", 16);
  return gBuf.getvalue();
}

inline Str* fmt240() {
  gBuf.reset();
  gBuf.write_const("Can't index string with @", 25);
  return gBuf.getvalue();
}

inline Str* fmt241() {
  gBuf.reset();
  gBuf.write_const("Can't index string with *", 25);
  return gBuf.getvalue();
}

inline Str* fmt242(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't index string ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" with integer", 13);
  return gBuf.getvalue();
}

inline Str* fmt243(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt244(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined array ", 16);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt245(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

inline Str* fmt246() {
  gBuf.reset();
  gBuf.write_const("Illegal array word part (strict_array)", 38);
  return gBuf.getvalue();
}

inline Str* fmt247(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

inline Str* fmt248() {
  gBuf.reset();
  gBuf.write_const("Unexpected array literal", 24);
  return gBuf.getvalue();
}

inline Str* fmt249() {
  gBuf.reset();
  gBuf.write_const("Unexpected associative array literal", 36);
  return gBuf.getvalue();
}

inline Str* fmt250(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't splice ", 13);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt251() {
  gBuf.reset();
  gBuf.write_const("This word should yield a string, but it contains an array", 57);
  return gBuf.getvalue();
}

inline Str* fmt252(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Runtime error: ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt253(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<I/O error: ", 12);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt254() {
  gBuf.reset();
  gBuf.write_const("LHS array not allowed in assignment builtin", 43);
  return gBuf.getvalue();
}

inline Str* fmt255() {
  gBuf.reset();
  gBuf.write_const("+= not allowed in assignment builtin", 36);
  return gBuf.getvalue();
}

inline Str* fmt256(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid variable name ", 22);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace word_eval

namespace word_parse {  // declare
extern List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS;

class WordEmitter : public gc_heap::Obj {
 public:
  WordEmitter();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);

  DISALLOW_COPY_AND_ASSIGN(WordEmitter)
};

class WordParser : public WordEmitter {
 public:
  WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init(types_asdl::lex_mode_t lex_mode);
  void Reset();
  void _Peek();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::compound_word* _ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type);
  syntax_asdl::compound_word* _ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok);
  syntax_asdl::suffix_op__Slice* _ReadSliceVarOp();
  syntax_asdl::suffix_op__PatSub* _ReadPatSubVarOp();
  syntax_asdl::bracket_op_t* _ReadSubscript();
  syntax_asdl::braced_var_sub* _ParseVarOf();
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query);
  Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> ReadBracedVarSub(syntax_asdl::Token* left_token);
  syntax_asdl::braced_var_sub* _ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted);
  syntax_asdl::single_quoted* _ReadSingleQuoted(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool is_oil_expr);
  syntax_asdl::word_part_t* _ReadDoubleQuotedLeftParts();
  syntax_asdl::word_part_t* _ReadLeftParts();
  syntax_asdl::word_part__ExtGlob* _ReadExtGlob();
  void _ReadLikeDQ(syntax_asdl::Token* left_dq_token, bool is_oil_expr, List<syntax_asdl::word_part_t*>* out_parts);
  syntax_asdl::double_quoted* _ReadDoubleQuoted();
  syntax_asdl::Token* ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::command_sub* _ReadCommandSub(int left_id);
  syntax_asdl::word_part__ExprSub* _ReadExprSub(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::command_t* ParseVarDecl(syntax_asdl::Token* kw_token);
  syntax_asdl::command_t* ParsePlaceMutation(syntax_asdl::Token* kw_token);
  syntax_asdl::expr_t* ParseBareDecl();
  syntax_asdl::expr_t* ParseCommandExpr();
  void ParseProc(syntax_asdl::command__Proc* node);
  void ParseImport(syntax_asdl::command__Import* node);
  syntax_asdl::arith_expr_t* _ReadArithExpr(int end_id);
  syntax_asdl::word_part__ArithSub* _ReadArithSub();
  Tuple2<syntax_asdl::arith_expr_t*, int> ReadDParen();
  void _NextNonSpace();
  syntax_asdl::command__ForExpr* ReadForExpression();
  syntax_asdl::word_part_t* _ReadArrayLiteral();
  void _ParseCallArguments(syntax_asdl::arg_list* arglist);
  bool _MaybeReadWholeWord(bool is_first, types_asdl::lex_mode_t lex_mode, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* _ReadCompoundWord(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::compound_word* _ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok);
  Tuple2<syntax_asdl::word_t*, bool> _ReadArithWord();
  Tuple2<syntax_asdl::word_t*, bool> _ReadWord(types_asdl::lex_mode_t lex_mode);
  int LookAhead();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
  void ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* ReadForPlugin();

  tdop::TdopParser* a_parser;
  alloc::Arena* arena;
  syntax_asdl::word_t* buffered_word;
  syntax_asdl::Token* cur_token;
  syntax_asdl::word_t* cursor;
  bool cursor_was_newline;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  optview::Parse* parse_opts;
  id_kind_asdl::Kind_t token_kind;
  int token_type;

  DISALLOW_COPY_AND_ASSIGN(WordParser)
};
inline Str* fmt257() {
  gBuf.reset();
  gBuf.write_const("Expected : or } in slice", 24);
  return gBuf.getvalue();
}

inline Str* fmt258() {
  gBuf.reset();
  gBuf.write_const("Pattern in ${x/pat/replace} must not be empty", 45);
  return gBuf.getvalue();
}

inline Str* fmt259(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after replacement string, got ", 41);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt260() {
  gBuf.reset();
  gBuf.write_const("Expected } or / to close pattern", 32);
  return gBuf.getvalue();
}

inline Str* fmt261() {
  gBuf.reset();
  gBuf.write_const("Expected ] to close subscript", 29);
  return gBuf.getvalue();
}

inline Str* fmt262() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt263() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt264() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt265(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt266(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt267() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt268() {
  gBuf.reset();
  gBuf.write_const("Expected } after length expression", 34);
  return gBuf.getvalue();
}

inline Str* fmt269() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${}", 23);
  return gBuf.getvalue();
}

inline Str* fmt270() {
  gBuf.reset();
  gBuf.write_const("Strings with backslashes should look like r'\\n' or c'\\n'", 56);
  return gBuf.getvalue();
}

inline Str* fmt271() {
  gBuf.reset();
  gBuf.write_const("Use \\xhh or \\u{...} instead of octal escapes in Oil strings", 59);
  return gBuf.getvalue();
}

inline Str* fmt272() {
  gBuf.reset();
  gBuf.write_const("Invalid hex escape in Oil string (must be \\xHH)", 47);
  return gBuf.getvalue();
}

inline Str* fmt273() {
  gBuf.reset();
  gBuf.write_const("Invalid char escape in C-style string literal", 45);
  return gBuf.getvalue();
}

inline Str* fmt274() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF in single-quoted string that began here", 54);
  return gBuf.getvalue();
}

inline Str* fmt275() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading extended glob that began here", 52);
  return gBuf.getvalue();
}

inline Str* fmt276() {
  gBuf.reset();
  gBuf.write_const("Invalid char escape in double quoted string", 43);
  return gBuf.getvalue();
}

inline Str* fmt277() {
  gBuf.reset();
  gBuf.write_const("Literal $ should be quoted like \\$", 34);
  return gBuf.getvalue();
}

inline Str* fmt278() {
  gBuf.reset();
  gBuf.write_const("Invalid backtick: use $(cmd) or \\` in Oil strings", 49);
  return gBuf.getvalue();
}

inline Str* fmt279() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading double-quoted string that began here", 59);
  return gBuf.getvalue();
}

inline Str* fmt280() {
  gBuf.reset();
  gBuf.write_const("Use $(cmd) instead of backticks (strict_backticks)", 50);
  return gBuf.getvalue();
}

inline Str* fmt281() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while looking for closing backtick", 49);
  return gBuf.getvalue();
}

inline Str* fmt282(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid proc name ", 18);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt283(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token after arithmetic expression (", 46);
  gBuf.format_s(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt284() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith sub", 34);
  return gBuf.getvalue();
}

inline Str* fmt285() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith statement", 40);
  return gBuf.getvalue();
}

inline Str* fmt286() {
  gBuf.reset();
  gBuf.write_const("Expected ; here", 15);
  return gBuf.getvalue();
}

inline Str* fmt287() {
  gBuf.reset();
  gBuf.write_const("Expected ; here", 15);
  return gBuf.getvalue();
}

inline Str* fmt288() {
  gBuf.reset();
  gBuf.write_const("Expected ) to end for loop expression", 37);
  return gBuf.getvalue();
}

inline Str* fmt289() {
  gBuf.reset();
  gBuf.write_const("Expected ( after =", 18);
  return gBuf.getvalue();
}

inline Str* fmt290() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in array literal", 33);
  return gBuf.getvalue();
}

inline Str* fmt291() {
  gBuf.reset();
  gBuf.write_const("Expected associative array pair", 31);
  return gBuf.getvalue();
}

inline Str* fmt292() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array literal", 36);
  return gBuf.getvalue();
}

inline Str* fmt293() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array splice", 35);
  return gBuf.getvalue();
}

inline Str* fmt294() {
  gBuf.reset();
  gBuf.write_const("Literal @ starting a word must be quoted (parse_at_all)", 55);
  return gBuf.getvalue();
}

inline Str* fmt295() {
  gBuf.reset();
  gBuf.write_const("Literal $ should be quoted like \\$", 34);
  return gBuf.getvalue();
}

inline Str* fmt296() {
  gBuf.reset();
  gBuf.write_const("Word has unbalanced { }.  Maybe add a space or quote it like \\{", 63);
  return gBuf.getvalue();
}

inline Str* fmt297(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token while parsing arithmetic: ", 43);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace word_parse

namespace word_ {  // declare
int LiteralId(syntax_asdl::word_part_t* p);
Tuple3<bool, Str*, bool> _EvalWordPart(syntax_asdl::word_part_t* part);
Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w);
int LeftMostSpanForPart(syntax_asdl::word_part_t* part);
int _RightMostSpanForPart(syntax_asdl::word_part_t* part);
int LeftMostSpanForWord(syntax_asdl::word_t* w);
int RightMostSpanForWord(syntax_asdl::word_t* w);
syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w);
void TildeDetectAssign(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words);
bool HasArrayPart(syntax_asdl::compound_word* w);
Str* ShFunctionName(syntax_asdl::compound_word* w);
syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w);
bool IsVarLike(syntax_asdl::compound_word* w);
Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> DetectShAssignment(syntax_asdl::compound_word* w);
Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w);
Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> KeywordToken(syntax_asdl::compound_word* w);
syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w);
int ArithId(syntax_asdl::word_t* w);
int BoolId(syntax_asdl::word_t* w);
int CommandId(syntax_asdl::word_t* w);
id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w);
bool IsVarSub(syntax_asdl::word_t* w);
int SpanForLhsExpr(syntax_asdl::sh_lhs_expr_t* node);
int SpanIdFromError(error::_ErrorWithLocation* error);
syntax_asdl::compound_word* ErrorWord(Str* error_str);
Str* Pretty(syntax_asdl::word_t* w);

}  // declare namespace word_

namespace grammar {  // declare

class Grammar : public gc_heap::Obj {
 public:
  Grammar();

  Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>* dfas;
  Dict<Str*, int>* keywords;
  List<int>* labels;
  Dict<int, Str*>* number2symbol;
  int start;
  List<List<Tuple2<int, int>*>*>* states;
  Dict<Str*, int>* symbol2label;
  Dict<Str*, int>* symbol2number;
  Dict<int, int>* tokens;

  DISALLOW_COPY_AND_ASSIGN(Grammar)
};

}  // declare namespace grammar

namespace pnode {  // declare

class PNode : public gc_heap::Obj {
 public:
  PNode(int typ, syntax_asdl::Token* tok, List<pnode::PNode*>* children);

  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok;
  int typ;

  DISALLOW_COPY_AND_ASSIGN(PNode)
};

}  // declare namespace pnode

namespace cgi {  // declare
Str* escape(Str* s);

}  // declare namespace cgi

namespace os_path {  // declare
extern Str* extsep;
extern Str* sep;
Str* join(Str* s1, Str* s2);
Tuple2<Str*, Str*> split(Str* p);
Tuple2<Str*, Str*> _splitext(Str* p, Str* sep, Str* extsep);
Tuple2<Str*, Str*> splitext(Str* p);
Str* basename(Str* p);
Str* dirname(Str* p);
Str* normpath(Str* path);
bool isabs(Str* s);
Str* abspath(Str* path);
inline Str* fmt298(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("/", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace os_path

namespace qsn_native {  // declare
bool _IsWhitespace(Str* s);
List<syntax_asdl::Token*>* Parse(lexer::Lexer* lexer);
inline Str* fmt299() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in QSN string", 30);
  return gBuf.getvalue();
}

inline Str* fmt300() {
  gBuf.reset();
  gBuf.write_const("Expected closing single quote in QSN string", 43);
  return gBuf.getvalue();
}

inline Str* fmt301() {
  gBuf.reset();
  gBuf.write_const("Unexpected data after closing quote", 35);
  return gBuf.getvalue();
}

inline Str* fmt302() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after QSN string", 33);
  return gBuf.getvalue();
}


}  // declare namespace qsn_native

namespace qsn {  // declare
extern int BIT8_UTF8;
extern int BIT8_U_ESCAPE;
extern int BIT8_X_ESCAPE;
extern int MUST_QUOTE;
bool _encode(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts);
Str* maybe_shell_encode(Str* s);
Str* maybe_shell_encode(Str* s, int flags);
Str* maybe_encode(Str* s);
Str* maybe_encode(Str* s, int bit8_display);
Str* encode(Str* s, int bit8_display);
void _encode_bytes_x(Str* s, bool shell_compat, List<Str*>* parts);
extern int Ascii;
extern int Begin2;
extern int Begin3;
extern int Begin4;
extern int Cont;
extern int Invalid;
extern int Start;
extern int B2_1;
extern int B3_1;
extern int B4_1;
extern int B3_2;
extern int B4_2;
extern int B4_3;
bool _encode_runes(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts);
Str* maybe_tsv_encode(Str* s, int bit8_display);
Str* tsv_decode(Str* s);

}  // declare namespace qsn

namespace builtin_bracket {  // declare

class _StringWordEmitter : public word_parse::WordEmitter {
 public:
  _StringWordEmitter(runtime_asdl::cmd_value__Argv* cmd_val);
  virtual syntax_asdl::word__String* ReadWord(types_asdl::lex_mode_t unused_lex_mode);
  syntax_asdl::word__String* Read();
  Str* Peek(int offset);
  void Rewind(int offset);

  runtime_asdl::cmd_value__Argv* cmd_val;
  int i;
  int n;

  DISALLOW_COPY_AND_ASSIGN(_StringWordEmitter)
};

class _WordEvaluator : public word_eval::StringWordEvaluator {
 public:
  _WordEvaluator();
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind);

  DISALLOW_COPY_AND_ASSIGN(_WordEvaluator)
};
syntax_asdl::bool_expr_t* _TwoArgs(builtin_bracket::_StringWordEmitter* w_parser);
syntax_asdl::bool_expr_t* _ThreeArgs(builtin_bracket::_StringWordEmitter* w_parser);

class Test : public vm::_Builtin {
 public:
  Test(bool need_right_bracket, optview::Exec* exec_opts, state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  bool need_right_bracket;

  DISALLOW_COPY_AND_ASSIGN(Test)
};
inline Str* fmt303(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected unary operator, got ", 29);
  gBuf.format_r(a0);
  gBuf.write_const(" (2 args)", 9);
  return gBuf.getvalue();
}

inline Str* fmt304(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected binary operator, got ", 30);
  gBuf.format_r(a0);
  gBuf.write_const(" (3 args)", 9);
  return gBuf.getvalue();
}


}  // declare namespace builtin_bracket

namespace runtime {  // define
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::color_t;
using hnode_asdl::color_e;
int NO_SPID = -1;

hnode_asdl::hnode__Record* NewRecord(Str* node_type) {
  return Alloc<hnode__Record>(node_type, Alloc<List<hnode_asdl::field*>>(), false, str0, str1, Alloc<List<hnode_asdl::hnode_t*>>());
}

hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color) {
  if (s == nullptr) {
    return Alloc<hnode__Leaf>(str2, color_e::OtherConst);
  }
  else {
    return Alloc<hnode__Leaf>(s, e_color);
  }
}
Str* TRUE_STR = str3;
Str* FALSE_STR = str4;

}  // define namespace runtime

namespace vm {  // define
using runtime_asdl::CompoundStatus;

void InitCircularDeps(sh_expr_eval::ArithEvaluator* arith_ev, sh_expr_eval::BoolEvaluator* bool_ev, expr_eval::OilEvaluator* expr_ev, word_eval::NormalWordEvaluator* word_ev, cmd_eval::CommandEvaluator* cmd_ev, vm::_Executor* shell_ex, prompt::Evaluator* prompt_ev, dev::Tracer* tracer) {
  arith_ev->word_ev = word_ev;
  bool_ev->word_ev = word_ev;
  if (expr_ev) {
    expr_ev->shell_ex = shell_ex;
    expr_ev->word_ev = word_ev;
  }
  word_ev->arith_ev = arith_ev;
  word_ev->expr_ev = expr_ev;
  word_ev->prompt_ev = prompt_ev;
  word_ev->shell_ex = shell_ex;
  cmd_ev->shell_ex = shell_ex;
  cmd_ev->arith_ev = arith_ev;
  cmd_ev->bool_ev = bool_ev;
  cmd_ev->expr_ev = expr_ev;
  cmd_ev->word_ev = word_ev;
  cmd_ev->tracer = tracer;
  shell_ex->cmd_ev = cmd_ev;
  prompt_ev->word_ev = word_ev;
  arith_ev->CheckCircularDeps();
  bool_ev->CheckCircularDeps();
  if (expr_ev) {
    expr_ev->CheckCircularDeps();
  }
  word_ev->CheckCircularDeps();
  cmd_ev->CheckCircularDeps();
  shell_ex->CheckCircularDeps();
  prompt_ev->CheckCircularDeps();
}

_Executor::_Executor() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Executor)) {
  this->cmd_ev = nullptr;
}

void _Executor::CheckCircularDeps() {
  ;  // pass
}

int _Executor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  return 0;
}

int _Executor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int _Executor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  return 0;
}

int _Executor::RunBackgroundJob(syntax_asdl::command_t* node) {
  return 0;
}

void _Executor::RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out) {
  ;  // pass
}

int _Executor::RunSubshell(syntax_asdl::command__Subshell* node) {
  return 0;
}

Str* _Executor::RunCommandSub(syntax_asdl::command_sub* cs_part) {
  return str5;
}

Str* _Executor::RunProcessSub(syntax_asdl::command_sub* cs_part) {
  return str6;
}

void _Executor::Time() {
  ;  // pass
}

bool _Executor::PushRedirects(List<runtime_asdl::redirect*>* redirects) {
  return true;
}

void _Executor::PopRedirects() {
  ;  // pass
}

void _Executor::PushProcessSub() {
  ;  // pass
}

void _Executor::PopProcessSub(runtime_asdl::CompoundStatus* compound_st) {
  ;  // pass
}

_AssignBuiltin::_AssignBuiltin() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_AssignBuiltin)) {
  ;  // pass
}

int _AssignBuiltin::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  throw Alloc<NotImplementedError>();
}

_Builtin::_Builtin() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Builtin)) {
  ;  // pass
}

int _Builtin::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  throw Alloc<NotImplementedError>();
}

ctx_Redirect::ctx_Redirect(vm::_Executor* shell_ex) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Redirect)) {
  this->shell_ex = shell_ex;
}

ctx_Redirect::~ctx_Redirect(){
  this->shell_ex->PopRedirects();
}

ctx_ProcessSub::ctx_ProcessSub(vm::_Executor* shell_ex, runtime_asdl::CompoundStatus* process_sub_status) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_ProcessSub)) {
  shell_ex->PushProcessSub();
  this->shell_ex = shell_ex;
  this->process_sub_status = process_sub_status;
}

ctx_ProcessSub::~ctx_ProcessSub(){
  this->shell_ex->PopProcessSub(this->process_sub_status);
}

}  // define namespace vm

namespace format {  // define
namespace hnode_e = hnode_asdl::hnode_e;
using hnode_asdl::hnode_t;
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::hnode__External;
using hnode_asdl::color_e;
using hnode_asdl::color_t;
using hnode_asdl::color_str;
using hnode_asdl::hnode_str;

format::ColorOutput* DetectConsoleOutput(mylib::Writer* f) {
  if (f->isatty()) {
    return Alloc<AnsiOutput>(f);
  }
  else {
    return Alloc<TextOutput>(f);
  }
}

ColorOutput::ColorOutput(mylib::Writer* f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ColorOutput)) {
  this->f = f;
  this->num_chars = 0;
}

format::ColorOutput* ColorOutput::NewTempBuffer() {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::FileHeader() {
  ;  // pass
}

void ColorOutput::FileFooter() {
  ;  // pass
}

void ColorOutput::PushColor(hnode_asdl::color_t e_color) {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::PopColor() {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::write(Str* s) {
  this->f->write(s);
  this->num_chars += len(s);
}

void ColorOutput::WriteRaw(Tuple2<Str*, int>* raw) {
  Str* s;
  int num_chars;

  Tuple2<Str*, int>* tup0 = raw;
  s = tup0->at0();
  num_chars = tup0->at1();
  this->f->write(s);
  this->num_chars += num_chars;
}

int ColorOutput::NumChars() {
  return this->num_chars;
}

Tuple2<Str*, int> ColorOutput::GetRaw() {
  mylib::BufWriter* f = static_cast<mylib::BufWriter*>(this->f);
  return (Tuple2<Str*, int>(f->getvalue(), this->num_chars));
}

TextOutput::TextOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::TextOutput* TextOutput::NewTempBuffer() {
  return Alloc<TextOutput>(Alloc<mylib::BufWriter>());
}

void TextOutput::PushColor(hnode_asdl::color_t e_color) {
  ;  // pass
}

void TextOutput::PopColor() {
  ;  // pass
}

HtmlOutput::HtmlOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::HtmlOutput* HtmlOutput::NewTempBuffer() {
  return Alloc<HtmlOutput>(Alloc<mylib::BufWriter>());
}

void HtmlOutput::FileHeader() {
  this->f->write(str7);
}

void HtmlOutput::FileFooter() {
  this->f->write(str8);
}

void HtmlOutput::PushColor(hnode_asdl::color_t e_color) {
  Str* css_class;

  if (e_color == color_e::TypeName) {
    css_class = str9;
  }
  else {
    if (e_color == color_e::StringConst) {
      css_class = str10;
    }
    else {
      if (e_color == color_e::OtherConst) {
        css_class = str11;
      }
      else {
        if (e_color == color_e::External) {
          css_class = str12;
        }
        else {
          if (e_color == color_e::UserType) {
            css_class = str13;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  this->f->write(fmt0(css_class));
}

void HtmlOutput::PopColor() {
  this->f->write(str15);
}

void HtmlOutput::write(Str* s) {
  this->f->write(cgi::escape(s));
  this->num_chars += len(s);
}

AnsiOutput::AnsiOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::AnsiOutput* AnsiOutput::NewTempBuffer() {
  return Alloc<AnsiOutput>(Alloc<mylib::BufWriter>());
}

void AnsiOutput::PushColor(hnode_asdl::color_t e_color) {
  if (e_color == color_e::TypeName) {
    this->f->write(ansi::YELLOW);
  }
  else {
    if (e_color == color_e::StringConst) {
      this->f->write(ansi::BOLD);
    }
    else {
      if (e_color == color_e::OtherConst) {
        this->f->write(ansi::GREEN);
      }
      else {
        if (e_color == color_e::External) {
          this->f->write(str_concat(ansi::BOLD, ansi::BLUE));
        }
        else {
          if (e_color == color_e::UserType) {
            this->f->write(ansi::GREEN);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

void AnsiOutput::PopColor() {
  this->f->write(ansi::RESET);
}
int INDENT = 2;

_PrettyPrinter::_PrettyPrinter(int max_col) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_PrettyPrinter)) {
  this->max_col = max_col;
}

bool _PrettyPrinter::_PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  int chars_so_far;
  int i;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;

  all_fit = true;
  chars_so_far = prefix_len;
  i = 0;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next(), ++i) {
    hnode_asdl::hnode_t* val = it.Value();
    if (i != 0) {
      f->write(str16);
    }
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(val, single_f, (this->max_col - chars_so_far))) {
      Tuple2<Str*, int> tup1 = single_f->GetRaw();
      s = tup1.at0();
      num_chars = tup1.at1();
      f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
      chars_so_far += single_f->NumChars();
    }
    else {
      f->write(str17);
      this->PrintNode(val, f, (indent + INDENT));
      chars_so_far = 0;
      all_fit = false;
    }
  }
  return all_fit;
}

bool _PrettyPrinter::_PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  List<Tuple2<Str*, int>*>* pieces;
  int chars_so_far;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  int i;

  all_fit = true;
  pieces = Alloc<List<Tuple2<Str*, int>*>>();
  chars_so_far = prefix_len;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next()) {
    hnode_asdl::hnode_t* item = it.Value();
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(item, single_f, (this->max_col - chars_so_far))) {
      Tuple2<Str*, int> tup2 = single_f->GetRaw();
      s = tup2.at0();
      num_chars = tup2.at1();
      pieces->append((Alloc<Tuple2<Str*, int>>(s, num_chars)));
      chars_so_far += single_f->NumChars();
    }
    else {
      all_fit = false;
      break;
    }
  }
  if (all_fit) {
    i = 0;
    for (ListIter<Tuple2<Str*, int>*> it(pieces); !it.Done(); it.Next(), ++i) {
      Tuple2<Str*, int>* p = it.Value();
      if (i != 0) {
        f->write(str18);
      }
      f->WriteRaw(p);
    }
    f->write(str19);
  }
  return all_fit;
}

void _PrettyPrinter::_PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent) {
  Str* ind;
  Str* prefix;
  int prefix_len;
  bool all_fit;
  int i;
  Str* name;
  hnode_asdl::hnode_t* val;
  Str* ind1;
  hnode_asdl::hnode_t* UP_val;
  int tag;
  Str* name_str;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;

  ind = str_repeat(str20, indent);
  if (node->abbrev) {
    prefix = str_concat(ind, node->left);
    f->write(prefix);
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str21);
    }
    prefix_len = ((len(prefix) + len(node->node_type)) + 1);
    all_fit = this->_PrintWrappedArray(node->unnamed_fields, prefix_len, f, indent);
    if (!all_fit) {
      f->write(str22);
      f->write(ind);
    }
    f->write(node->right);
  }
  else {
    f->write(str_concat(ind, node->left));
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    f->write(str23);
    i = 0;
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      name = field->name;
      val = field->val;
      ind1 = str_repeat(str24, (indent + INDENT));
      UP_val = val;
      tag = val->tag_();
      if (tag == hnode_e::Array) {
        hnode__Array* val = static_cast<hnode__Array*>(UP_val);
        name_str = fmt1(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        if (!this->_PrintWholeArray(val->children, prefix_len, f, indent)) {
          f->write(str26);
          for (ListIter<hnode_asdl::hnode_t*> it(val->children); !it.Done(); it.Next()) {
            hnode_asdl::hnode_t* child = it.Value();
            this->PrintNode(child, f, ((indent + INDENT) + INDENT));
            f->write(str27);
          }
          f->write(fmt2(ind1));
        }
      }
      else {
        name_str = fmt3(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        single_f = f->NewTempBuffer();
        if (_TrySingleLine(val, single_f, (this->max_col - prefix_len))) {
          Tuple2<Str*, int> tup3 = single_f->GetRaw();
          s = tup3.at0();
          num_chars = tup3.at1();
          f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
        }
        else {
          f->write(str30);
          this->PrintNode(val, f, ((indent + INDENT) + INDENT));
        }
        i += 1;
      }
      f->write(str31);
    }
    f->write(str_concat(ind, node->right));
  }
}

void _PrettyPrinter::PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent) {
  Str* ind;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  hnode_asdl::hnode_t* UP_node;
  int tag;

  ind = str_repeat(str32, indent);
  single_f = f->NewTempBuffer();
  single_f->write(ind);
  if (_TrySingleLine(node, single_f, (this->max_col - indent))) {
    Tuple2<Str*, int> tup4 = single_f->GetRaw();
    s = tup4.at0();
    num_chars = tup4.at1();
    f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
    return ;
  }
  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(qsn::maybe_encode(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Record) {
        hnode__Record* node = static_cast<hnode__Record*>(UP_node);
        this->_PrintRecord(node, f, indent);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
}

bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars) {
  int i;

  f->write(node->left);
  if (node->abbrev) {
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str33);
    }
    i = 0;
    for (ListIter<hnode_asdl::hnode_t*> it(node->unnamed_fields); !it.Done(); it.Next(), ++i) {
      hnode_asdl::hnode_t* val = it.Value();
      if (i != 0) {
        f->write(str34);
      }
      if (!_TrySingleLine(val, f, max_chars)) {
        return false;
      }
    }
  }
  else {
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      f->write(fmt4(field->name));
      if (!_TrySingleLine(field->val, f, max_chars)) {
        return false;
      }
    }
  }
  f->write(node->right);
  return true;
}

bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars) {
  hnode_asdl::hnode_t* UP_node;
  int tag;
  int i;
  int num_chars_so_far;

  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(qsn::maybe_encode(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Array) {
        hnode__Array* node = static_cast<hnode__Array*>(UP_node);
        f->write(str36);
        i = 0;
        for (ListIter<hnode_asdl::hnode_t*> it(node->children); !it.Done(); it.Next(), ++i) {
          hnode_asdl::hnode_t* item = it.Value();
          if (i != 0) {
            f->write(str37);
          }
          if (!_TrySingleLine(item, f, max_chars)) {
            return false;
          }
        }
        f->write(str38);
      }
      else {
        if (tag == hnode_e::Record) {
          hnode__Record* node = static_cast<hnode__Record*>(UP_node);
          return _TrySingleLineObj(node, f, max_chars);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
  num_chars_so_far = f->NumChars();
  if (num_chars_so_far > max_chars) {
    return false;
  }
  return true;
}

void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f) {
  format::_PrettyPrinter* pp;

  pp = Alloc<_PrettyPrinter>(100);
  pp->PrintNode(node, f, 0);
}

}  // define namespace format

namespace osh_eval {  // define

int main(List<Str*>* argv) {
  pyutil::_ResourceLoader* loader;
  bool login_shell;
  Dict<Str*, Str*>* environ;
  args::Reader* arg_r;
  int status;
  Str* msg;

  loader = pyutil::GetResourceLoader();
  login_shell = false;
  environ = Alloc<Dict<Str*, Str*>>();
  environ->set(str39, posix::getcwd());
  environ->set(str40, str41);
  arg_r = Alloc<args::Reader>(argv, list_repeat(runtime::NO_SPID, len(argv)));
  try {
    status = pure::Main(str42, arg_r, environ, login_shell, loader, nullptr);
    return status;
  }
  catch (error::Usage* e) {
    println_stderr(fmt5(e->msg));
    return 2;
  }
  catch (RuntimeError* e) {
    msg = e->message;
    println_stderr(fmt6(msg));
    return 1;
  }
  catch (KeyboardInterrupt*) {
    print(str45);
    return 130;
  }
  catch (_OSError* e) {
    println_stderr(fmt7(pyutil::strerror(e)));
    return 2;
  }
}

}  // define namespace osh_eval

namespace alloc {  // define
using syntax_asdl::line_span;
using syntax_asdl::source_t;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;

ctx_Location::ctx_Location(alloc::Arena* arena, syntax_asdl::source_t* src) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Location)) {
  arena->PushSource(src);
  this->arena = arena;
}

ctx_Location::~ctx_Location(){
  this->arena->PopSource();
}

Arena::Arena() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Arena)) {
  this->line_vals = Alloc<List<Str*>>();
  this->line_nums = Alloc<List<int>>();
  this->line_srcs = Alloc<List<syntax_asdl::source_t*>>();
  this->line_num_strs = Alloc<Dict<int, Str*>>();
  this->spans = Alloc<List<syntax_asdl::line_span*>>();
  this->source_instances = Alloc<List<syntax_asdl::source_t*>>();
}

void Arena::PushSource(syntax_asdl::source_t* src) {
  this->source_instances->append(src);
}

void Arena::PopSource() {
  this->source_instances->pop();
}

int Arena::AddLine(Str* line, int line_num) {
  int line_id;

  line_id = len(this->line_vals);
  this->line_vals->append(line);
  this->line_nums->append(line_num);
  this->line_srcs->append(this->source_instances->index(-1));
  return line_id;
}

Str* Arena::GetLine(int line_id) {
  return this->line_vals->index(line_id);
}

int Arena::GetLineNumber(int line_id) {
  return this->line_nums->index(line_id);
}

Str* Arena::GetLineNumStr(int line_id) {
  int line_num;
  Str* s;

  line_num = this->line_nums->index(line_id);
  s = this->line_num_strs->get(line_num);
  if (s == nullptr) {
    s = str(line_num);
    this->line_num_strs->set(line_num, s);
  }
  return s;
}

syntax_asdl::source_t* Arena::GetLineSource(int line_id) {
  return this->line_srcs->index(line_id);
}

Str* Arena::GetLineSourceString(int line_id) {
  syntax_asdl::source_t* src;
  syntax_asdl::source_t* UP_src;
  int tag;

  src = this->line_srcs->index(line_id);
  UP_src = src;
  tag = src->tag_();
  if (tag == source_e::CFlag) {
    return str47;
  }
  if (tag == source_e::MainFile) {
    source__MainFile* src = static_cast<source__MainFile*>(UP_src);
    return src->path;
  }
  if (tag == source_e::SourcedFile) {
    source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
    return src->path;
  }
  return repr(src);
}

int Arena::AddLineSpan(int line_id, int col, int length) {
  int span_id;
  syntax_asdl::line_span* span;

  span_id = len(this->spans);
  span = Alloc<line_span>(line_id, col, length);
  this->spans->append(span);
  return span_id;
}

syntax_asdl::line_span* Arena::GetLineSpan(int span_id) {
  return this->spans->index(span_id);
}

int Arena::LastSpanId() {
  return len(this->spans);
}

}  // define namespace alloc

namespace ansi {  // define
Str* RESET = str48;
Str* BOLD = str49;
Str* UNDERLINE = str50;
Str* REVERSE = str51;
Str* RED = str52;
Str* GREEN = str53;
Str* YELLOW = str54;
Str* BLUE = str55;

}  // define namespace ansi

namespace dev {  // define
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Str;
using syntax_asdl::assign_op_e;

CrashDumper::CrashDumper(Str* crash_dump_dir) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CrashDumper)) {
  this->crash_dump_dir = crash_dump_dir;
  this->do_collect = to_bool(crash_dump_dir);
  this->collected = false;
  this->var_stack = nullptr;
  this->argv_stack = nullptr;
  this->debug_stack = nullptr;
  this->error = nullptr;
}

void CrashDumper::MaybeCollect(void* cmd_ev, error::_ErrorWithLocation* err) {
  if (!this->do_collect) {
    return ;
  }
}

void CrashDumper::MaybeDump(int status) {
  if (!this->collected) {
    return ;
  }
}

Tracer::Tracer(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, state::Mem* mem, word_eval::NormalWordEvaluator* word_ev, util::_DebugFile* f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Tracer)) {
  this->parse_ctx = parse_ctx;
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->mem = mem;
  this->word_ev = word_ev;
  this->f = f;
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::compound_word*>>();
}

Tuple2<Str*, Str*> Tracer::_EvalPS4() {
  Str* first_char;
  Str* ps4;
  runtime_asdl::value_t* val;
  Str* s;
  syntax_asdl::compound_word* ps4_word;
  word_parse::WordParser* w_parser;
  runtime_asdl::value__Str* prefix;

  first_char = str56;
  ps4 = str57;
  val = this->mem->GetVar(str58);
  if (val->tag_() == value_e::Str) {
    s = static_cast<value__Str*>(val)->s;
    if (len(s)) {
      first_char = s->index(0);
      ps4 = s->slice(1);
    }
  }
  ps4_word = this->parse_cache->get(ps4);
  if (ps4_word == nullptr) {
    w_parser = this->parse_ctx->MakeWordParserForPlugin(ps4);
    try {
      ps4_word = w_parser->ReadForPlugin();
    }
    catch (error::Parse* e) {
      ps4_word = word_::ErrorWord(fmt8(e->UserErrorString()));
    }
    this->parse_cache->set(ps4, ps4_word);
  }
  this->mutable_opts->set_xtrace(false);
  try {
    prefix = this->word_ev->EvalForPlugin(ps4_word);
  }
  catch (std::exception) { }  return (Tuple2<Str*, Str*>(first_char, prefix->s));
}

void Tracer::OnSimpleCommand(List<Str*>* argv) {
  Str* first_char;
  Str* prefix;
  List<Str*>* tmp;
  Str* cmd;

  if (!this->exec_opts->xtrace()) {
    return ;
  }
  Tuple2<Str*, Str*> tup0 = this->_EvalPS4();
  first_char = tup0.at0();
  prefix = tup0.at1();
  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
    Str* a = it.Value();
    tmp->append(qsn::maybe_shell_encode(a));
  }
  cmd = str60->join(tmp);
  println_stderr(fmt9(first_char, prefix, cmd));
}

void Tracer::OnShAssignment(runtime_asdl::lvalue_t* lval, syntax_asdl::assign_op_t op, runtime_asdl::value_t* val, int flags, runtime_asdl::scope_t lookup_mode) {
  Str* first_char;
  Str* prefix;
  Str* op_str;

  if (!this->exec_opts->xtrace()) {
    return ;
  }
  Tuple2<Str*, Str*> tup1 = this->_EvalPS4();
  first_char = tup1.at0();
  prefix = tup1.at1();
  op_str = op == assign_op_e::PlusEqual ? str62 : str63;
}

void Tracer::Event() {
  ;  // pass
}

}  // define namespace dev

namespace error {  // define
int NO_SPID = -1;

_ControlFlow::_ControlFlow(syntax_asdl::Token* token, int arg) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ControlFlow)) {
  this->token = token;
  this->arg = arg;
}

bool _ControlFlow::IsReturn() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Return;
}

bool _ControlFlow::IsBreak() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Break;
}

bool _ControlFlow::IsContinue() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Continue;
}

int _ControlFlow::StatusCode() {
  return this->arg;
}

}  // define namespace error

namespace executor {  // define
namespace Id = id_kind_asdl::Id;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Obj;
using runtime_asdl::redirect;
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__ControlFlow;
using syntax_asdl::command_sub;
using syntax_asdl::compound_word;
using syntax_asdl::Token;

_ProcessSubFrame::_ProcessSubFrame() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ProcessSubFrame)) {
  this->to_close = Alloc<List<int>>();
  this->to_wait = Alloc<List<process::Process*>>();
  this->span_ids = Alloc<List<int>>();
}

ShellExecutor::ShellExecutor(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_Builtin*>* builtins, state::SearchPath* search_path, process::ExternalProgram* ext_prog, process::Waiter* waiter, process::JobState* job_state, process::FdState* fd_state, ui::ErrorFormatter* errfmt) : vm::_Executor() {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->procs = procs;
  this->builtins = builtins;
  this->search_path = search_path;
  this->ext_prog = ext_prog;
  this->waiter = waiter;
  this->job_state = job_state;
  this->fd_state = fd_state;
  this->errfmt = errfmt;
  this->process_sub_stack = Alloc<List<executor::_ProcessSubFrame*>>();
}

void ShellExecutor::CheckCircularDeps() {
}

process::Process* ShellExecutor::_MakeProcess(syntax_asdl::command_t* node) {
  return _MakeProcess(node, true);
}

process::Process* ShellExecutor::_MakeProcess(syntax_asdl::command_t* node, bool inherit_errexit) {
  syntax_asdl::command_t* UP_node;
  process::SubProgramThunk* thunk;
  process::Process* p;

  UP_node = node;
  if (node->tag_() == command_e::ControlFlow) {
    command__ControlFlow* node = static_cast<command__ControlFlow*>(UP_node);
    if (node->token->id != Id::ControlFlow_Exit) {
      e_die(fmt10(node->token->val), node->token);
    }
  }
  thunk = Alloc<process::SubProgramThunk>(this->cmd_ev, node, inherit_errexit);
  p = Alloc<process::Process>(thunk, this->job_state);
  return p;
}

int ShellExecutor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  vm::_Builtin* builtin_func;
  int status;
  Str* arg0;

  builtin_func = this->builtins->index(builtin_id);
  this->errfmt->PushLocation(cmd_val->arg_spids->index(0));
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      arg0 = cmd_val->argv->index(0);
      if (e->span_id == runtime::NO_SPID) {
        e->span_id = this->errfmt->CurrentLocation();
      }
      this->errfmt->PrefixPrint(e->msg, fmt11(arg0), e->span_id);
      status = 2;
    }
    catch (KeyboardInterrupt*) {
      if (this->exec_opts->interactive()) {
        print(str67);
        status = 130;
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return status;
}

int ShellExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int ShellExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  List<Str*>* argv;
  int span_id;
  Str* arg0;
  int builtin_id;
  int status;
  syntax_asdl::command__ShFunction* proc_node;
  runtime_asdl::value_t* UP_val;
  Dict<Str*, Str*>* environ;
  Str* argv0_path;
  process::ExternalThunk* thunk;
  process::Process* p;

  argv = cmd_val->argv;
  span_id = len(cmd_val->arg_spids) ? cmd_val->arg_spids->index(0) : runtime::NO_SPID;
  if (len(argv) == 0) {
    if (this->exec_opts->strict_argv()) {
      e_die(fmt12(), span_id);
    }
    else {
      return 0;
    }
  }
  arg0 = argv->index(0);
  builtin_id = consts::LookupAssignBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    this->errfmt->Print_(str69, span_id);
    return 1;
  }
  builtin_id = consts::LookupSpecialBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    status = this->RunBuiltin(builtin_id, cmd_val);
    return status;
  }
  if (call_procs) {
    proc_node = this->procs->get(arg0);
    if (proc_node != nullptr) {
      if ((this->exec_opts->strict_errexit() and this->mutable_opts->ErrExitIsDisabled())) {
        this->errfmt->Print_(str70, this->mutable_opts->ErrExitSpanId());
        this->errfmt->StderrLine(str71);
        e_die(fmt13(), span_id);
      }
      status = this->cmd_ev->RunProc(proc_node, argv->slice(1));
      return status;
    }
    UP_val = this->mem->GetVar(arg0);
  }
  builtin_id = consts::LookupNormalBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  environ = this->mem->GetExported();
  if (cmd_val->block) {
    e_die(fmt14(arg0), cmd_val->block->spids->index(0));
  }
  argv0_path = this->search_path->CachedLookup(arg0);
  if (argv0_path == nullptr) {
    this->errfmt->Print_(fmt15(arg0), span_id);
    return 127;
  }
  if (do_fork) {
    thunk = Alloc<process::ExternalThunk>(this->ext_prog, argv0_path, cmd_val, environ);
    p = Alloc<process::Process>(thunk, this->job_state);
    status = p->Run(this->waiter);
    return status;
  }
  this->ext_prog->Exec(argv0_path, cmd_val, environ);
}

int ShellExecutor::RunBackgroundJob(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  process::Pipeline* pi;
  process::Process* p;
  int last_pid;
  int job_id;
  int pid;

  UP_node = node;
  if (UP_node->tag_() == command_e::Pipeline) {
    command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
    pi = Alloc<process::Pipeline>();
    for (ListIter<syntax_asdl::command_t*> it(node->children); !it.Done(); it.Next()) {
      syntax_asdl::command_t* child = it.Value();
      p = this->_MakeProcess(child);
      p->Init_ParentPipeline(pi);
      pi->Add(p);
    }
    pi->Start(this->waiter);
    last_pid = pi->LastPid();
    this->mem->last_bg_pid = last_pid;
    job_id = this->job_state->AddJob(pi);
    println_stderr(fmt16(job_id, last_pid));
  }
  else {
    p = this->_MakeProcess(node);
    pid = p->Start();
    this->mem->last_bg_pid = pid;
    job_id = this->job_state->AddJob(p);
    println_stderr(fmt17(job_id, pid));
  }
  return 0;
}

void ShellExecutor::RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out) {
  process::Pipeline* pi;
  int n;
  syntax_asdl::command_t* child;
  process::Process* p;
  syntax_asdl::command_t* last_child;

  pi = Alloc<process::Pipeline>();
  n = len(node->children);
  for (int i = 0; i < (n - 1); ++i) {
    child = node->children->index(i);
    status_out->spids->append(location::SpanForCommand(child));
    p = this->_MakeProcess(child);
    p->Init_ParentPipeline(pi);
    pi->Add(p);
  }
  last_child = node->children->index((n - 1));
  pi->AddLast((Alloc<Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>>(this->cmd_ev, last_child)));
  status_out->spids->append(location::SpanForCommand(last_child));
  status_out->codes = pi->Run(this->waiter, this->fd_state);
}

int ShellExecutor::RunSubshell(syntax_asdl::command__Subshell* node) {
  process::Process* p;

  p = this->_MakeProcess(node->child);
  return p->Run(this->waiter);
}

Str* ShellExecutor::RunCommandSub(syntax_asdl::command_sub* cs_part) {
  syntax_asdl::command_t* node;
  syntax_asdl::Token* tok;
  syntax_asdl::compound_word* cat_word;
  process::Process* p;
  int r;
  int w;
  List<Str*>* chunks;
  Str* byte_str;
  int status;

  if (!this->exec_opts->allow_command_sub()) {
    e_die(str77);
  }
  node = cs_part->child;
  if (node->tag_() == command_e::Simple) {
    command__Simple* simple = static_cast<command__Simple*>(node);
    if ((len(simple->words) == 0 and (len(simple->redirects) == 1 and simple->redirects->index(0)->op->id == Id::Redir_Less))) {
      tok = Alloc<Token>(Id::Lit_Chars, runtime::NO_SPID, str78);
      cat_word = Alloc<compound_word>(Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{tok}));
      simple->words->append(cat_word);
    }
  }
  p = this->_MakeProcess(node, this->exec_opts->inherit_errexit());
  Tuple2<int, int> tup0 = posix::pipe();
  r = tup0.at0();
  w = tup0.at1();
  p->AddStateChange(Alloc<process::StdoutToPipe>(r, w));
  chunks = Alloc<List<Str*>>();
  posix::close(w);
  while (true) {
    byte_str = posix::read(r, 4096);
    if (len(byte_str) == 0) {
      break;
    }
    chunks->append(byte_str);
  }
  posix::close(r);
  status = p->Wait(this->waiter);
  if (this->exec_opts->command_sub_errexit()) {
    if (status != 0) {
      throw Alloc<error::ErrExit>(fmt18(status, ui::CommandType(node)), cs_part->left_token->span_id, status);
    }
  }
  else {
    this->cmd_ev->check_command_sub_status = true;
    this->mem->SetLastStatus(status);
  }
  return str80->join(chunks)->rstrip(str81);
}

Str* ShellExecutor::RunProcessSub(syntax_asdl::command_sub* cs_part) {
  process::Process* p;
  int r;
  int w;
  int op_id;
  process::ChildStateChange* redir;
  int pid;
  executor::_ProcessSubFrame* ps_frame;

  p = this->_MakeProcess(cs_part->child);
  Tuple2<int, int> tup1 = posix::pipe();
  r = tup1.at0();
  w = tup1.at1();
  op_id = cs_part->left_token->id;
  if (op_id == Id::Left_ProcSubIn) {
    redir = Alloc<process::StdoutToPipe>(r, w);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      redir = Alloc<process::StdinFromPipe>(r, w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  p->AddStateChange(redir);
  pid = p->Start();
  ps_frame = this->process_sub_stack->index(-1);
  ps_frame->to_wait->append(p);
  ps_frame->span_ids->append(cs_part->left_token->span_id);
  if (op_id == Id::Left_ProcSubIn) {
    posix::close(w);
    ps_frame->to_close->append(r);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      posix::close(r);
      ps_frame->to_close->append(w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  if (op_id == Id::Left_ProcSubIn) {
    return fmt19(r);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      return fmt20(w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
}

void ShellExecutor::MaybeWaitOnProcessSubs(executor::_ProcessSubFrame* frame, runtime_asdl::CompoundStatus* compound_st) {
  int i;
  int st;

  for (ListIter<int> it(frame->to_close); !it.Done(); it.Next()) {
    int fd = it.Value();
    posix::close(fd);
  }
  i = 0;
  for (ListIter<process::Process*> it(frame->to_wait); !it.Done(); it.Next(), ++i) {
    process::Process* p = it.Value();
    st = p->Wait(this->waiter);
    compound_st->codes->append(st);
    compound_st->spids->append(frame->span_ids->index(i));
    i += 1;
  }
}

void ShellExecutor::Time() {
  ;  // pass
}

bool ShellExecutor::PushRedirects(List<runtime_asdl::redirect*>* redirects) {
  return this->fd_state->Push(redirects, this->waiter);
}

void ShellExecutor::PopRedirects() {
  this->fd_state->Pop();
}

void ShellExecutor::PushProcessSub() {
  this->process_sub_stack->append(Alloc<_ProcessSubFrame>());
}

void ShellExecutor::PopProcessSub(runtime_asdl::CompoundStatus* compound_st) {
  executor::_ProcessSubFrame* frame;

  frame = this->process_sub_stack->pop();
  this->MaybeWaitOnProcessSubs(frame, compound_st);
}

}  // define namespace executor

namespace main_loop {  // define
using syntax_asdl::command_t;
namespace command = syntax_asdl::command;
using syntax_asdl::parse_result__EmptyLine;
using syntax_asdl::parse_result__Eof;
using syntax_asdl::parse_result__Node;

int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena) {
  return Batch(cmd_ev, c_parser, arena, 0);
}

int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena, int cmd_flags) {
  int status;
  syntax_asdl::command_t* node;
  bool is_return;
  bool is_fatal;

  status = 0;
  while (true) {
    try {
      node = c_parser->ParseLogicalLine();
      if (node == nullptr) {
        c_parser->CheckForPendingHereDocs();
        break;
      }
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      status = 2;
      break;
    }
    if (((cmd_flags & cmd_eval::IsMainProgram) and c_parser->line_reader->LastLineHint())) {
      cmd_flags |= cmd_eval::Optimize;
    }
    Tuple2<bool, bool> tup0 = cmd_ev->ExecuteAndCatch(node, cmd_flags);
    is_return = tup0.at0();
    is_fatal = tup0.at1();
    status = cmd_ev->LastStatus();
    if ((is_return or is_fatal)) {
      break;
    }
  }
  return status;
}

syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser) {
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command_t* node;

  children = Alloc<List<syntax_asdl::command_t*>>();
  while (true) {
    node = c_parser->ParseLogicalLine();
    if (node == nullptr) {
      c_parser->CheckForPendingHereDocs();
      break;
    }
    children->append(node);
  }
  if (len(children) == 1) {
    return children->index(0);
  }
  else {
    return Alloc<command::CommandList>(children);
  }
}

}  // define namespace main_loop

namespace process {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::job_state_e;
using runtime_asdl::job_state_t;
namespace job_status = runtime_asdl::job_status;
using runtime_asdl::job_status_t;
using runtime_asdl::redirect;
namespace redirect_arg_e = runtime_asdl::redirect_arg_e;
using runtime_asdl::redirect_arg__Path;
using runtime_asdl::redirect_arg__CopyFd;
using runtime_asdl::redirect_arg__MoveFd;
using runtime_asdl::redirect_arg__HereDoc;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
namespace lvalue = runtime_asdl::lvalue;
using runtime_asdl::scope_e;
using runtime_asdl::value__Str;
namespace redir_loc = syntax_asdl::redir_loc;
namespace redir_loc_e = syntax_asdl::redir_loc_e;
using syntax_asdl::redir_loc_t;
using syntax_asdl::redir_loc__VarName;
using syntax_asdl::redir_loc__Fd;
int NO_FD = -1;
int _SHELL_MIN_FD = 100;

_RedirFrame::_RedirFrame(int saved_fd, int orig_fd, bool forget) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_RedirFrame)) {
  this->saved_fd = saved_fd;
  this->orig_fd = orig_fd;
  this->forget = forget;
}

_FdFrame::_FdFrame() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_FdFrame)) {
  this->saved = Alloc<List<process::_RedirFrame*>>();
  this->need_wait = Alloc<List<Tuple2<process::Process*, process::Waiter*>*>>();
}

void _FdFrame::Forget() {
  for (ReverseListIter<process::_RedirFrame*> it(this->saved); !it.Done(); it.Next()) {
    process::_RedirFrame* rf = it.Value();
    if ((rf->saved_fd != NO_FD and rf->forget)) {
      posix::close(rf->saved_fd);
    }
  }
  this->saved->clear();
  this->need_wait->clear();
}

FdState::FdState(ui::ErrorFormatter* errfmt, process::JobState* job_state, state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(FdState)) {
  this->errfmt = errfmt;
  this->job_state = job_state;
  this->cur_frame = Alloc<_FdFrame>();
  this->stack = Alloc<List<process::_FdFrame*>>(std::initializer_list<process::_FdFrame*>{this->cur_frame});
  this->mem = mem;
}

mylib::LineReader* FdState::Open(Str* path) {
  int fd_mode;

  fd_mode = posix::O_RDONLY;
  return this->_Open(path, str85, fd_mode);
}

mylib::LineReader* FdState::_Open(Str* path, Str* c_mode, int fd_mode) {
  int fd;
  int new_fd;
  mylib::LineReader* f;

  fd = posix::open(path, fd_mode, 438);
  new_fd = fcntl_::fcntl(fd, fcntl_::F_DUPFD, _SHELL_MIN_FD);
  posix::close(fd);
  f = posix::fdopen(new_fd, c_mode);
  return f;
}

void FdState::_WriteFdToMem(Str* fd_name, int fd) {
  if (this->mem) {
    this->mem->SetVar(Alloc<lvalue::Named>(fd_name), Alloc<value::Str>(str(fd)), scope_e::Dynamic);
  }
}

int FdState::_ReadFdFromMem(Str* fd_name) {
  runtime_asdl::value_t* val;

  val = this->mem->GetVar(fd_name);
  if (val->tag_() == value_e::Str) {
    try {
      return to_int(static_cast<value__Str*>(val)->s);
    }
    catch (ValueError*) {
      return NO_FD;
    }
  }
  return NO_FD;
}

bool FdState::_PushSave(int fd) {
  bool need_restore;
  int new_fd;

  need_restore = true;
  try {
    new_fd = fcntl_::fcntl(fd, fcntl_::F_DUPFD, _SHELL_MIN_FD);
  }
  catch (IOError* e) {
    if (e->errno == errno_::EBADF) {
      need_restore = false;
    }
    else {
      throw ;
    }
  }
  if (need_restore) {
    this->cur_frame->saved->append(Alloc<_RedirFrame>(new_fd, fd, true));
  }
  else {
    this->_PushClose(fd);
  }
  return need_restore;
}

int FdState::_PushDup(int fd1, syntax_asdl::redir_loc_t* loc) {
  syntax_asdl::redir_loc_t* UP_loc;
  Str* fd2_name;
  int new_fd;
  int fd2;
  bool need_restore;
  process::_RedirFrame* rf;

  UP_loc = loc;
  if (loc->tag_() == redir_loc_e::VarName) {
    fd2_name = static_cast<redir_loc__VarName*>(UP_loc)->name;
    try {
      new_fd = fcntl_::fcntl(fd1, fcntl_::F_DUPFD, _SHELL_MIN_FD);
    }
    catch (IOError* e) {
      if (e->errno == errno_::EBADF) {
        this->errfmt->Print_(fmt21(fd1, pyutil::strerror(e)));
        return NO_FD;
      }
      else {
        throw ;
      }
    }
    this->_WriteFdToMem(fd2_name, new_fd);
  }
  else {
    if (loc->tag_() == redir_loc_e::Fd) {
      fd2 = static_cast<redir_loc__Fd*>(UP_loc)->fd;
      if (fd1 == fd2) {
        return NO_FD;
      }
      try {
        fcntl_::fcntl(fd1, fcntl_::F_GETFD);
      }
      catch (IOError* e) {
        this->errfmt->Print_(fmt22(fd1, pyutil::strerror(e)));
        throw ;
      }
      need_restore = this->_PushSave(fd2);
      try {
        posix::dup2(fd1, fd2);
      }
      catch (OSError* e) {
        this->errfmt->Print_(fmt23(fd1, pyutil::strerror(e)));
        if (need_restore) {
          rf = this->cur_frame->saved->pop();
          posix::dup2(rf->saved_fd, rf->orig_fd);
          posix::close(rf->saved_fd);
        }
        throw ;
      }
      new_fd = fd2;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return new_fd;
}

bool FdState::_PushCloseFd(syntax_asdl::redir_loc_t* loc) {
  syntax_asdl::redir_loc_t* UP_loc;
  Str* fd_name;
  int fd;

  UP_loc = loc;
  if (loc->tag_() == redir_loc_e::VarName) {
    fd_name = static_cast<redir_loc__VarName*>(UP_loc)->name;
    fd = this->_ReadFdFromMem(fd_name);
    if (fd == NO_FD) {
      return false;
    }
  }
  else {
    if (loc->tag_() == redir_loc_e::Fd) {
      fd = static_cast<redir_loc__Fd*>(UP_loc)->fd;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  this->_PushSave(fd);
  return true;
}

void FdState::_PushClose(int fd) {
  this->cur_frame->saved->append(Alloc<_RedirFrame>(NO_FD, fd, false));
}

void FdState::_PushWait(process::Process* proc, process::Waiter* waiter) {
  this->cur_frame->need_wait->append((Alloc<Tuple2<process::Process*, process::Waiter*>>(proc, waiter)));
}

void FdState::_ApplyRedirect(runtime_asdl::redirect* r, process::Waiter* waiter) {
  runtime_asdl::redirect_arg_t* arg;
  runtime_asdl::redirect_arg_t* UP_arg;
  int mode;
  int open_fd;
  int new_fd;
  syntax_asdl::redir_loc_t* UP_loc;
  int fd;
  int read_fd;
  int write_fd;
  process::_HereDocWriterThunk* thunk;
  bool start_process;
  process::Process* here_proc;

  arg = r->arg;
  UP_arg = arg;
  switch (arg->tag_()) {
    case redirect_arg_e::Path: {
      redirect_arg__Path* arg = static_cast<redirect_arg__Path*>(UP_arg);
      if ((r->op_id == Id::Redir_Great || r->op_id == Id::Redir_AndGreat)) {
        mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_TRUNC);
      }
      else {
        if (r->op_id == Id::Redir_Clobber) {
          mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_TRUNC);
        }
        else {
          if ((r->op_id == Id::Redir_DGreat || r->op_id == Id::Redir_AndDGreat)) {
            mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_APPEND);
          }
          else {
            if (r->op_id == Id::Redir_Less) {
              mode = posix::O_RDONLY;
            }
            else {
              if (r->op_id == Id::Redir_LessGreat) {
                mode = (posix::O_CREAT | posix::O_RDWR);
              }
              else {
                throw Alloc<NotImplementedError>(r->op_id);
              }
            }
          }
        }
      }
      try {
        open_fd = posix::open(arg->filename, mode, 438);
      }
      catch (OSError* e) {
        this->errfmt->Print_(fmt24(arg->filename, pyutil::strerror(e)), r->op_spid);
        throw ;
      }
      new_fd = this->_PushDup(open_fd, r->loc);
      if (new_fd != NO_FD) {
        posix::close(open_fd);
      }
      if ((r->op_id == Id::Redir_AndGreat || r->op_id == Id::Redir_AndDGreat)) {
        this->_PushDup(new_fd, Alloc<redir_loc::Fd>(2));
      }
    }
      break;
    case redirect_arg_e::CopyFd: {
      redirect_arg__CopyFd* arg = static_cast<redirect_arg__CopyFd*>(UP_arg);
      if (r->op_id == Id::Redir_GreatAnd) {
        this->_PushDup(arg->target_fd, r->loc);
      }
      else {
        if (r->op_id == Id::Redir_LessAnd) {
          this->_PushDup(arg->target_fd, r->loc);
        }
        else {
          throw Alloc<NotImplementedError>();
        }
      }
    }
      break;
    case redirect_arg_e::MoveFd: {
      redirect_arg__MoveFd* arg = static_cast<redirect_arg__MoveFd*>(UP_arg);
      new_fd = this->_PushDup(arg->target_fd, r->loc);
      if (new_fd != NO_FD) {
        posix::close(arg->target_fd);
        UP_loc = r->loc;
        if (r->loc->tag_() == redir_loc_e::Fd) {
          fd = static_cast<redir_loc__Fd*>(UP_loc)->fd;
        }
        else {
          fd = NO_FD;
        }
        this->cur_frame->saved->append(Alloc<_RedirFrame>(new_fd, fd, false));
      }
    }
      break;
    case redirect_arg_e::CloseFd: {
      this->_PushCloseFd(r->loc);
    }
      break;
    case redirect_arg_e::HereDoc: {
      redirect_arg__HereDoc* arg = static_cast<redirect_arg__HereDoc*>(UP_arg);
      Tuple2<int, int> tup0 = posix::pipe();
      read_fd = tup0.at0();
      write_fd = tup0.at1();
      this->_PushDup(read_fd, r->loc);
      this->_PushClose(read_fd);
      thunk = Alloc<_HereDocWriterThunk>(write_fd, arg->body);
      start_process = true;
      if (start_process) {
        here_proc = Alloc<Process>(thunk, this->job_state);
        this->_PushWait(here_proc, waiter);
        posix::close(write_fd);
      }
      else {
        posix::write(write_fd, arg->body);
        posix::close(write_fd);
      }
    }
      break;
  }
}

bool FdState::Push(List<runtime_asdl::redirect*>* redirects, process::Waiter* waiter) {
  process::_FdFrame* new_frame;

  new_frame = Alloc<_FdFrame>();
  this->stack->append(new_frame);
  this->cur_frame = new_frame;
  for (ListIter<runtime_asdl::redirect*> it(redirects); !it.Done(); it.Next()) {
    runtime_asdl::redirect* r = it.Value();
    this->errfmt->PushLocation(r->op_spid);
    try {
      try {
        this->_ApplyRedirect(r, waiter);
      }
      catch (_OSError* e) {
        this->Pop();
        return false;
      }
    }
    catch (std::exception) { }  }
  return true;
}

bool FdState::PushStdinFromPipe(int r) {
  process::_FdFrame* new_frame;

  new_frame = Alloc<_FdFrame>();
  this->stack->append(new_frame);
  this->cur_frame = new_frame;
  this->_PushDup(r, Alloc<redir_loc::Fd>(0));
  return true;
}

void FdState::Pop() {
  process::_FdFrame* frame;
  process::Process* proc;
  process::Waiter* waiter;
  int unused_status;

  frame = this->stack->pop();
  for (ReverseListIter<process::_RedirFrame*> it(frame->saved); !it.Done(); it.Next()) {
    process::_RedirFrame* rf = it.Value();
    if (rf->saved_fd == NO_FD) {
      try {
        posix::close(rf->orig_fd);
      }
      catch (OSError* e) {
        println_stderr(fmt25(rf->orig_fd, pyutil::strerror(e)));
        throw ;
      }
    }
    else {
      try {
        posix::dup2(rf->saved_fd, rf->orig_fd);
      }
      catch (OSError* e) {
        println_stderr(fmt26(rf->saved_fd, rf->orig_fd, pyutil::strerror(e)));
        throw ;
      }
      posix::close(rf->saved_fd);
    }
  }
  for (ListIter<Tuple2<process::Process*, process::Waiter*>*> it(frame->need_wait); !it.Done(); it.Next()) {
    Tuple2<process::Process*, process::Waiter*>* tup1 = it.Value();
    proc = tup1->at0();
    waiter = tup1->at1();
    unused_status = proc->Wait(waiter);
  }
}

void FdState::MakePermanent() {
  this->cur_frame->Forget();
}

ChildStateChange::ChildStateChange() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ChildStateChange)) {
  ;  // pass
}

void ChildStateChange::Apply() {
  throw Alloc<NotImplementedError>();
}

StdinFromPipe::StdinFromPipe(int pipe_read_fd, int w) {
  this->r = pipe_read_fd;
  this->w = w;
}

void StdinFromPipe::Apply() {
  posix::dup2(this->r, 0);
  posix::close(this->r);
  posix::close(this->w);
}

StdoutToPipe::StdoutToPipe(int r, int pipe_write_fd) {
  this->r = r;
  this->w = pipe_write_fd;
}

void StdoutToPipe::Apply() {
  posix::dup2(this->w, 1);
  posix::close(this->w);
  posix::close(this->r);
}

ExternalProgram::ExternalProgram(Str* hijack_shebang, process::FdState* fd_state, ui::ErrorFormatter* errfmt, util::_DebugFile* debug_f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ExternalProgram)) {
  this->hijack_shebang = hijack_shebang;
  this->fd_state = fd_state;
  this->errfmt = errfmt;
  this->debug_f = debug_f;
}

void ExternalProgram::Exec(Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ) {
  this->_Exec(argv0_path, cmd_val->argv, cmd_val->arg_spids->index(0), environ, true);
}

void ExternalProgram::_Exec(Str* argv0_path, List<Str*>* argv, int argv0_spid, Dict<Str*, Str*>* environ, bool should_retry) {
  mylib::LineReader* f;
  List<Str*>* new_argv;
  int status;

  if (len(this->hijack_shebang)) {
    try {
      f = this->fd_state->Open(argv0_path);
    }
    catch (OSError* e) {
      ;  // pass
    }
  }
  try {
    posix::execve(argv0_path, argv, environ);
  }
  catch (OSError* e) {
    if ((e->errno == errno_::ENOEXEC and should_retry)) {
      new_argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str94, argv0_path});
      new_argv->extend(argv->slice(1));
      this->_Exec(str95, new_argv, argv0_spid, environ, false);
    }
    this->errfmt->Print_(fmt27(argv0_path, pyutil::strerror(e)), argv0_spid);
    if (e->errno == errno_::EACCES) {
      status = 126;
    }
    else {
      if (e->errno == errno_::ENOENT) {
        status = 127;
      }
      else {
        status = 127;
      }
    }
    exit(status);
  }
}

Thunk::Thunk() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Thunk)) {
  ;  // pass
}

void Thunk::Run() {
  throw Alloc<NotImplementedError>();
}

Str* Thunk::DisplayLine() {
  throw Alloc<NotImplementedError>();
}

Str* Thunk::__str__() {
  return this->DisplayLine();
}

ExternalThunk::ExternalThunk(process::ExternalProgram* ext_prog, Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ) {
  this->ext_prog = ext_prog;
  this->argv0_path = argv0_path;
  this->cmd_val = cmd_val;
  this->environ = environ;
}

Str* ExternalThunk::DisplayLine() {
  List<Str*>* tmp;

  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(this->cmd_val->argv); !it.Done(); it.Next()) {
    Str* a = it.Value();
    tmp->append(qsn::maybe_shell_encode(a));
  }
  return fmt28(str98->join(tmp));
}

void ExternalThunk::Run() {
  this->ext_prog->Exec(this->argv0_path, this->cmd_val, this->environ);
}

SubProgramThunk::SubProgramThunk(cmd_eval::CommandEvaluator* cmd_ev, syntax_asdl::command_t* node, bool inherit_errexit) {
  this->cmd_ev = cmd_ev;
  this->node = node;
  this->inherit_errexit = inherit_errexit;
}

Str* SubProgramThunk::DisplayLine() {
  return fmt29(ui::CommandType(this->node));
}

void SubProgramThunk::Run() {
  int status;

  if (!this->inherit_errexit) {
    this->cmd_ev->mutable_opts->DisableErrExit();
  }
  try {
    this->cmd_ev->ExecuteAndCatch(this->node, cmd_eval::Optimize);
    status = this->cmd_ev->LastStatus();
  }
  catch (util::UserExit* e) {
    status = e->status;
  }
  catch (KeyboardInterrupt*) {
    print(str100);
    status = 130;
  }
  catch (_OSError* e) {
    println_stderr(fmt30(pyutil::strerror(e)));
    status = 2;
  }
  exit(status);
}

_HereDocWriterThunk::_HereDocWriterThunk(int w, Str* body_str) {
  this->w = w;
  this->body_str = body_str;
}

Str* _HereDocWriterThunk::DisplayLine() {
  return str102;
}

void _HereDocWriterThunk::Run() {
  posix::write(this->w, this->body_str);
  posix::close(this->w);
  exit(0);
}

Job::Job() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Job)) {
  this->state = job_state_e::Running;
}

runtime_asdl::job_state_t Job::State() {
  return this->state;
}

void Job::Send_SIGCONT(process::Waiter* waiter) {
  ;  // pass
}

runtime_asdl::job_status_t* Job::JobWait(process::Waiter* waiter) {
  throw Alloc<NotImplementedError>();
}

Process::Process(process::Thunk* thunk, process::JobState* job_state) : Job() {
  this->thunk = thunk;
  this->job_state = job_state;
  this->parent_pipeline = nullptr;
  this->state_changes = Alloc<List<process::ChildStateChange*>>();
  this->close_r = -1;
  this->close_w = -1;
  this->pid = -1;
  this->status = -1;
}

void Process::Init_ParentPipeline(process::Pipeline* pi) {
  this->parent_pipeline = pi;
}

void Process::AddStateChange(process::ChildStateChange* s) {
  this->state_changes->append(s);
}

void Process::AddPipeToClose(int r, int w) {
  this->close_r = r;
  this->close_w = w;
}

void Process::MaybeClosePipe() {
  if (this->close_r != -1) {
    posix::close(this->close_r);
    posix::close(this->close_w);
  }
}

int Process::Start() {
  int pid;

  pid = posix::fork();
  if (pid < 0) {
    throw Alloc<RuntimeError>(str104);
  }
  else {
    if (pid == 0) {
      pyos::SignalState_AfterForkingChild();
      for (ListIter<process::ChildStateChange*> it(this->state_changes); !it.Done(); it.Next()) {
        process::ChildStateChange* st = it.Value();
        st->Apply();
      }
      this->thunk->Run();
    }
  }
  this->pid = pid;
  this->job_state->AddChildProcess(pid, this);
  return pid;
}

int Process::Wait(process::Waiter* waiter) {
  while (true) {
    if (!waiter->WaitForOne()) {
      break;
    }
    if (this->state != job_state_e::Running) {
      break;
    }
  }
  return this->status;
}

runtime_asdl::job_status_t* Process::JobWait(process::Waiter* waiter) {
  int exit_code;

  exit_code = this->Wait(waiter);
  return Alloc<job_status::Proc>(exit_code);
}

void Process::WhenStopped() {
  this->state = job_state_e::Stopped;
}

void Process::WhenDone(int pid, int status) {
  this->status = status;
  this->state = job_state_e::Done;
  if (this->parent_pipeline) {
    this->parent_pipeline->WhenDone(pid, status);
  }
}

int Process::Run(process::Waiter* waiter) {
  this->Start();
  return this->Wait(waiter);
}

Pipeline::Pipeline() : Job() {
  this->procs = Alloc<List<process::Process*>>();
  this->pids = Alloc<List<int>>();
  this->pipe_status = Alloc<List<int>>();
  this->status = -1;
  this->last_thunk = nullptr;
  this->last_pipe = nullptr;
}

void Pipeline::Add(process::Process* p) {
  int r;
  int w;
  process::Process* prev;

  if (len(this->procs) == 0) {
    this->procs->append(p);
    return ;
  }
  Tuple2<int, int> tup2 = posix::pipe();
  r = tup2.at0();
  w = tup2.at1();
  prev = this->procs->index(-1);
  prev->AddStateChange(Alloc<StdoutToPipe>(r, w));
  p->AddStateChange(Alloc<StdinFromPipe>(r, w));
  p->AddPipeToClose(r, w);
  this->procs->append(p);
}

void Pipeline::AddLast(Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* thunk) {
  int r;
  int w;
  process::Process* prev;

  this->last_thunk = thunk;
  if (len(this->procs) == 0) {
    return ;
  }
  Tuple2<int, int> tup3 = posix::pipe();
  r = tup3.at0();
  w = tup3.at1();
  prev = this->procs->index(-1);
  prev->AddStateChange(Alloc<StdoutToPipe>(r, w));
  this->last_pipe = (Alloc<Tuple2<int, int>>(r, w));
}

void Pipeline::Start(process::Waiter* waiter) {
  int i;
  int pid;

  i = 0;
  for (ListIter<process::Process*> it(this->procs); !it.Done(); it.Next(), ++i) {
    process::Process* proc = it.Value();
    pid = proc->Start();
    this->pids->append(pid);
    this->pipe_status->append(-1);
    proc->MaybeClosePipe();
  }
  if (this->last_thunk) {
    this->pipe_status->append(-1);
  }
}

int Pipeline::LastPid() {
  return this->pids->index(-1);
}

List<int>* Pipeline::Wait(process::Waiter* waiter) {
  while (true) {
    if (!waiter->WaitForOne()) {
      break;
    }
    if (this->state != job_state_e::Running) {
      break;
    }
  }
  return this->pipe_status;
}

runtime_asdl::job_status_t* Pipeline::JobWait(process::Waiter* waiter) {
  List<int>* pipe_status;

  pipe_status = this->Wait(waiter);
  return Alloc<job_status::Pipeline>(pipe_status);
}

List<int>* Pipeline::Run(process::Waiter* waiter, process::FdState* fd_state) {
  cmd_eval::CommandEvaluator* cmd_ev;
  syntax_asdl::command_t* node;
  int r;
  int w;

  this->Start(waiter);
  Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* tup4 = this->last_thunk;
  cmd_ev = tup4->at0();
  node = tup4->at1();
  if (this->last_pipe != nullptr) {
    Tuple2<int, int>* tup5 = this->last_pipe;
    r = tup5->at0();
    w = tup5->at1();
    posix::close(w);
    fd_state->PushStdinFromPipe(r);
    try {
      cmd_ev->ExecuteAndCatch(node);
    }
    catch (std::exception) { }    posix::close(r);
  }
  else {
    if (len(this->procs)) {
      cmd_ev->ExecuteAndCatch(node);
    }
    else {
      cmd_ev->_Execute(node);
    }
  }
  this->pipe_status->set(-1, cmd_ev->LastStatus());
  if (len(this->procs)) {
    return this->Wait(waiter);
  }
  else {
    return this->pipe_status;
  }
}

void Pipeline::WhenDone(int pid, int status) {
  int i;
  bool all_done;

  i = this->pids->index(pid);
  this->pipe_status->set(i, status);
  all_done = true;
  for (ListIter<int> it(this->pipe_status); !it.Done(); it.Next()) {
    int status = it.Value();
    if (status == -1) {
      all_done = false;
    }
  }
  if (all_done) {
    this->status = this->pipe_status->index(-1);
    this->state = job_state_e::Done;
  }
}

JobState::JobState() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(JobState)) {
  this->jobs = Alloc<Dict<int, process::Job*>>();
  this->child_procs = Alloc<Dict<int, process::Process*>>();
  this->last_stopped_pid = -1;
  this->job_id = 1;
}

void JobState::NotifyStopped(int pid) {
  this->last_stopped_pid = pid;
}

int JobState::GetLastStopped() {
  return this->last_stopped_pid;
}

int JobState::AddJob(process::Job* job) {
  int job_id;

  job_id = this->job_id;
  this->jobs->set(job_id, job);
  this->job_id += 1;
  return job_id;
}

void JobState::AddChildProcess(int pid, process::Process* proc) {
  this->child_procs->set(pid, proc);
}

process::Process* JobState::JobFromPid(int pid) {
  return this->child_procs->get(pid);
}

void JobState::List() {
}

void JobState::ListRecent() {
  ;  // pass
}

bool JobState::NoneAreRunning() {
  for (DictIter<int, process::Job*> it(this->jobs); !it.Done(); it.Next()) {
    int _ = it.Key();
    process::Job* job = it.Value();
    if (job->State() == job_state_e::Running) {
      return false;
    }
  }
  return true;
}

void JobState::MaybeRemove(int pid) {
  println_stderr(fmt31(pid));
}

Waiter::Waiter(process::JobState* job_state, optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Waiter)) {
  this->job_state = job_state;
  this->exec_opts = exec_opts;
  this->last_status = 127;
}

bool Waiter::WaitForOne() {
  int pid;
  int status;
  process::Process* proc;
  bool term_sig;

  try {
    Tuple2<int, int> tup6 = posix::waitpid(-1, WUNTRACED);
    pid = tup6.at0();
    status = tup6.at1();
  }
  catch (OSError* e) {
    if (e->errno == errno_::ECHILD) {
      return false;
    }
    else {
      throw ;
    }
  }
  catch (KeyboardInterrupt*) {
    if (this->exec_opts->interactive()) {
      return true;
    }
    else {
      throw ;
    }
  }
  if (!dict_contains(this->job_state->child_procs, pid)) {
    println_stderr(fmt32(pid));
    return true;
  }
  proc = this->job_state->child_procs->index(pid);
  if (WIFSIGNALED(status)) {
    term_sig = WTERMSIG(status);
    status = (128 + term_sig);
    if (term_sig == signal_::SIGINT) {
      print(str109);
    }
    proc->WhenDone(pid, status);
  }
  else {
    if (WIFEXITED(status)) {
      status = WEXITSTATUS(status);
      proc->WhenDone(pid, status);
    }
    else {
      if (WIFSTOPPED(status)) {
        println_stderr(str110);
        println_stderr(fmt33(pid));
        this->job_state->NotifyStopped(pid);
        proc->WhenStopped();
      }
    }
  }
  this->last_status = status;
  return true;
}

}  // define namespace process

namespace pure {  // define
namespace builtin_i = option_asdl::builtin_i;
namespace cmd_value = runtime_asdl::cmd_value;
namespace source = syntax_asdl::source;
namespace fmt = format;

runtime_asdl::cmd_value__Argv* MakeBuiltinArgv(List<Str*>* argv1) {
  List<Str*>* argv;

  argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str112});
  argv->extend(argv1);
  return Alloc<cmd_value::Argv>(argv, list_repeat(runtime::NO_SPID, len(argv)), nullptr);
}

void AddPure(Dict<int, vm::_Builtin*>* b, state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, state::MutableOpts* mutable_opts, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  builtin_pure::Boolean* true_;

  b->set(builtin_i::set, Alloc<builtin_pure::Set>(mutable_opts, mem));
  b->set(builtin_i::alias, Alloc<builtin_pure::Alias>(aliases, errfmt));
  b->set(builtin_i::unalias, Alloc<builtin_pure::UnAlias>(aliases, errfmt));
  b->set(builtin_i::hash, Alloc<builtin_pure::Hash>(search_path));
  b->set(builtin_i::getopts, Alloc<builtin_pure::GetOpts>(mem, errfmt));
  true_ = Alloc<builtin_pure::Boolean>(0);
  b->set(builtin_i::colon, true_);
  b->set(builtin_i::true_, true_);
  b->set(builtin_i::false_, Alloc<builtin_pure::Boolean>(1));
  b->set(builtin_i::shift, Alloc<builtin_assign::Shift>(mem));
  b->set(builtin_i::type, Alloc<builtin_meta::Type>(procs, aliases, search_path, errfmt));
}

void AddIO(Dict<int, vm::_Builtin*>* b, state::Mem* mem, state::DirStack* dir_stack, optview::Exec* exec_opts, split::SplitContext* splitter, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) {
  builtin_misc::MapFile* mapfile;

  mapfile = Alloc<builtin_misc::MapFile>(mem, errfmt);
  b->set(builtin_i::echo, Alloc<builtin_pure::Echo>(exec_opts));
  b->set(builtin_i::mapfile, mapfile);
  b->set(builtin_i::readarray, mapfile);
  b->set(builtin_i::read, Alloc<builtin_misc::Read>(splitter, mem, parse_ctx));
  b->set(builtin_i::cat, Alloc<builtin_misc::Cat>());
  b->set(builtin_i::test, Alloc<builtin_bracket::Test>(false, exec_opts, mem, errfmt));
  b->set(builtin_i::bracket, Alloc<builtin_bracket::Test>(true, exec_opts, mem, errfmt));
  b->set(builtin_i::pushd, Alloc<builtin_misc::Pushd>(mem, dir_stack, errfmt));
  b->set(builtin_i::popd, Alloc<builtin_misc::Popd>(mem, dir_stack, errfmt));
  b->set(builtin_i::dirs, Alloc<builtin_misc::Dirs>(mem, dir_stack, errfmt));
  b->set(builtin_i::pwd, Alloc<builtin_misc::Pwd>(mem, errfmt));
  b->set(builtin_i::times, Alloc<builtin_misc::Times>());
}

void AddMeta(Dict<int, vm::_Builtin*>* builtins, vm::_Executor* shell_ex, state::MutableOpts* mutable_opts, state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  builtins->set(builtin_i::builtin, Alloc<builtin_meta::Builtin>(shell_ex, errfmt));
  builtins->set(builtin_i::command, Alloc<builtin_meta::Command>(shell_ex, procs, aliases, search_path));
  builtins->set(builtin_i::run, Alloc<builtin_meta::Run_>(mutable_opts, mem, shell_ex, errfmt));
}

void AddBlock(Dict<int, vm::_Builtin*>* builtins, state::Mem* mem, state::MutableOpts* mutable_opts, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt) {
  builtins->set(builtin_i::cd, Alloc<builtin_misc::Cd>(mem, dir_stack, cmd_ev, errfmt));
  builtins->set(builtin_i::shopt, Alloc<builtin_pure::Shopt>(mutable_opts, cmd_ev));
}

Dict<int, vm::_AssignBuiltin*>* InitAssignmentBuiltins(state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, ui::ErrorFormatter* errfmt) {
  Dict<int, vm::_AssignBuiltin*>* assign_b;
  builtin_assign::NewVar* new_var;

  assign_b = Alloc<Dict<int, vm::_AssignBuiltin*>>();
  new_var = Alloc<builtin_assign::NewVar>(mem, procs, errfmt);
  assign_b->set(builtin_i::declare, new_var);
  assign_b->set(builtin_i::typeset, new_var);
  assign_b->set(builtin_i::local, new_var);
  assign_b->set(builtin_i::export_, Alloc<builtin_assign::Export>(mem, errfmt));
  assign_b->set(builtin_i::readonly, Alloc<builtin_assign::Readonly>(mem, errfmt));
  return assign_b;
}

int Main(Str* lang, args::Reader* arg_r, Dict<Str*, Str*>* environ, bool login_shell, pyutil::_ResourceLoader* loader, void* line_input) {
  Str* argv0;
  args::_Attributes* attrs;
  arg_types::main* flag;
  alloc::Arena* arena;
  ui::ErrorFormatter* errfmt;
  builtin_misc::Help* help_builtin;
  Str* no_str;
  List<state::DebugFrame*>* debug_stack;
  Str* dollar0;
  state::DebugFrame* frame0;
  state::DebugFrame* frame1;
  Str* script_name;
  state::Mem* mem;
  Str* version_str;
  Dict<Str*, syntax_asdl::command__ShFunction*>* procs;
  process::JobState* job_state;
  process::FdState* fd_state;
  state::OptHook* opt_hook;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  Dict<Str*, Str*>* aliases;
  grammar::Grammar* oil_grammar;
  parse_lib::ParseContext* parse_ctx;
  alloc::Arena* comp_arena;
  parse_lib::Trail* trail1;
  parse_lib::ParseContext* comp_ctx;
  alloc::Arena* hist_arena;
  parse_lib::Trail* trail2;
  parse_lib::ParseContext* hist_ctx;
  cmd_eval::Deps* cmd_deps;
  process::Waiter* waiter;
  int my_pid;
  Str* debug_path;
  Str* debug_dir;
  util::_DebugFile* debug_f;
  Str* interp;
  state::SearchPath* search_path;
  process::ExternalProgram* ext_prog;
  split::SplitContext* splitter;
  Str* crash_dump_dir;
  util::_DebugFile* trace_f;
  state::DirStack* dir_stack;
  Dict<int, vm::_Builtin*>* builtins;
  sh_expr_eval::ArithEvaluator* arith_ev;
  sh_expr_eval::BoolEvaluator* bool_ev;
  expr_eval::OilEvaluator* expr_ev;
  word_eval::NormalWordEvaluator* word_ev;
  Dict<int, vm::_AssignBuiltin*>* assign_b;
  cmd_eval::CommandEvaluator* cmd_ev;
  executor::ShellExecutor* shell_ex;
  prompt::Evaluator* prompt_ev;
  dev::Tracer* tracer;
  reader::_Reader* line_reader;
  mylib::LineReader* stdin;
  mylib::LineReader* f;
  cmd_parse::CommandParser* c_parser;
  int status;
  syntax_asdl::command_t* node;
  Str* input_path;
  List<int>* box;

  argv0 = arg_r->Peek();
  arg_r->Next();
  try {
    attrs = flag_spec::ParseMore(str113, arg_r);
  }
  catch (error::Usage* e) {
    println_stderr(fmt34(e->msg));
    return 2;
  }
  flag = Alloc<arg_types::main>(attrs->attrs);
  arena = Alloc<alloc::Arena>();
  errfmt = Alloc<ui::ErrorFormatter>(arena);
  help_builtin = Alloc<builtin_misc::Help>(loader, errfmt);
  if (flag->help) {
    help_builtin->Run(MakeBuiltinArgv(Alloc<List<Str*>>(std::initializer_list<Str*>{fmt35(lang)})));
    return 0;
  }
  if (flag->version) {
    pyutil::ShowAppVersion(str116, loader);
    return 0;
  }
  no_str = nullptr;
  debug_stack = Alloc<List<state::DebugFrame*>>();
  if (arg_r->AtEnd()) {
    dollar0 = argv0;
  }
  else {
    dollar0 = arg_r->Peek();
    frame0 = Alloc<state::DebugFrame>(dollar0, str117, no_str, state::LINE_ZERO, 0, 0);
    debug_stack->append(frame0);
  }
  frame1 = Alloc<state::DebugFrame>(no_str, no_str, no_str, runtime::NO_SPID, 0, 0);
  debug_stack->append(frame1);
  script_name = arg_r->Peek();
  arg_r->Next();
  mem = Alloc<state::Mem>(dollar0, arg_r->Rest(), arena, debug_stack);
  version_str = pyutil::GetVersion(loader);
  state::InitMem(mem, environ, version_str);
  procs = Alloc<Dict<Str*, syntax_asdl::command__ShFunction*>>();
  job_state = Alloc<process::JobState>();
  fd_state = Alloc<process::FdState>(errfmt, job_state, mem);
  opt_hook = Alloc<state::OptHook>();
  Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> tup0 = state::MakeOpts(mem, opt_hook);
  parse_opts = tup0.at0();
  exec_opts = tup0.at1();
  mutable_opts = tup0.at2();
  mem->exec_opts = exec_opts;
  if (attrs->show_options) {
    mutable_opts->ShowOptions(Alloc<List<Str*>>());
    return 0;
  }
  if (str_equals(lang, str118)) {
    mutable_opts->SetShoptOption(str119, true);
  }
  builtin_pure::SetShellOpts(mutable_opts, attrs->opt_changes, attrs->shopt_changes);
  aliases = Alloc<Dict<Str*, Str*>>();
  oil_grammar = nullptr;
  if ((flag->one_pass_parse and !exec_opts->noexec())) {
    e_usage(str120);
  }
  parse_ctx = Alloc<parse_lib::ParseContext>(arena, parse_opts, aliases, oil_grammar);
  parse_ctx->Init_OnePassParse(flag->one_pass_parse);
  comp_arena = Alloc<alloc::Arena>();
  comp_arena->PushSource(Alloc<source::Unused>(str121));
  trail1 = Alloc<parse_lib::Trail>();
  comp_ctx = Alloc<parse_lib::ParseContext>(comp_arena, parse_opts, aliases, oil_grammar);
  comp_ctx->Init_Trail(trail1);
  comp_ctx->Init_OnePassParse(true);
  hist_arena = Alloc<alloc::Arena>();
  hist_arena->PushSource(Alloc<source::Unused>(str122));
  trail2 = Alloc<parse_lib::Trail>();
  hist_ctx = Alloc<parse_lib::ParseContext>(hist_arena, parse_opts, aliases, oil_grammar);
  hist_ctx->Init_Trail(trail2);
  cmd_deps = Alloc<cmd_eval::Deps>();
  cmd_deps->mutable_opts = mutable_opts;
  cmd_deps->traps = Alloc<Dict<Str*, builtin_process::_TrapHandler*>>();
  cmd_deps->trap_nodes = Alloc<List<syntax_asdl::command_t*>>();
  waiter = Alloc<process::Waiter>(job_state, exec_opts);
  my_pid = posix::getpid();
  debug_path = str123;
  debug_dir = environ->get(str124);
  if (flag->debug_file != nullptr) {
    debug_path = flag->debug_file;
  }
  else {
    if (debug_dir != nullptr) {
      debug_path = os_path::join(debug_dir, fmt36(my_pid));
    }
  }
  if (len(debug_path)) {
    throw Alloc<NotImplementedError>();
  }
  else {
    debug_f = Alloc<util::NullDebugFile>();
  }
  cmd_deps->debug_f = debug_f;
  if (len(debug_path)) {
    println_stderr(fmt37(debug_path));
  }
  interp = environ->get(str127, str128);
  search_path = Alloc<state::SearchPath>(mem);
  ext_prog = Alloc<process::ExternalProgram>(interp, fd_state, errfmt, debug_f);
  splitter = Alloc<split::SplitContext>(mem);
  crash_dump_dir = environ->get(str129, str130);
  cmd_deps->dumper = Alloc<dev::CrashDumper>(crash_dump_dir);
  if (flag->xtrace_to_debug_file) {
    trace_f = debug_f;
  }
  else {
    trace_f = Alloc<util::DebugFile>(mylib::Stderr());
  }
  dir_stack = Alloc<state::DirStack>();
  builtins = Alloc<Dict<int, vm::_Builtin*>>();
  AddPure(builtins, mem, procs, mutable_opts, aliases, search_path, errfmt);
  AddIO(builtins, mem, dir_stack, exec_opts, splitter, parse_ctx, errfmt);
  builtins->set(builtin_i::help, help_builtin);
  arith_ev = Alloc<sh_expr_eval::ArithEvaluator>(mem, exec_opts, parse_ctx, errfmt);
  bool_ev = Alloc<sh_expr_eval::BoolEvaluator>(mem, exec_opts, parse_ctx, errfmt);
  expr_ev = nullptr;
  word_ev = Alloc<word_eval::NormalWordEvaluator>(mem, exec_opts, splitter, errfmt);
  assign_b = InitAssignmentBuiltins(mem, procs, errfmt);
  cmd_ev = Alloc<cmd_eval::CommandEvaluator>(mem, exec_opts, errfmt, procs, assign_b, arena, cmd_deps);
  shell_ex = Alloc<executor::ShellExecutor>(mem, exec_opts, mutable_opts, procs, builtins, search_path, ext_prog, waiter, job_state, fd_state, errfmt);
  prompt_ev = Alloc<prompt::Evaluator>(lang, parse_ctx, mem);
  tracer = Alloc<dev::Tracer>(parse_ctx, exec_opts, mutable_opts, mem, word_ev, trace_f);
  vm::InitCircularDeps(arith_ev, bool_ev, expr_ev, word_ev, cmd_ev, shell_ex, prompt_ev, tracer);
  builtins->set(builtin_i::printf, Alloc<builtin_printf::Printf>(mem, exec_opts, parse_ctx, arith_ev, errfmt));
  builtins->set(builtin_i::unset, Alloc<builtin_assign::Unset>(mem, exec_opts, procs, parse_ctx, arith_ev, errfmt));
  builtins->set(builtin_i::eval, Alloc<builtin_meta::Eval>(parse_ctx, exec_opts, cmd_ev));
  AddMeta(builtins, shell_ex, mutable_opts, mem, procs, aliases, search_path, errfmt);
  AddBlock(builtins, mem, mutable_opts, dir_stack, cmd_ev, errfmt);
  if (flag->c != nullptr) {
    arena->PushSource(Alloc<source::CFlag>());
    line_reader = reader::StringLineReader(flag->c, arena);
    if (flag->i) {
      mutable_opts->set_interactive();
    }
  }
  else {
    if (flag->i) {
      throw Alloc<NotImplementedError>();
    }
    else {
      if (script_name == nullptr) {
        stdin = mylib::Stdin();
        arena->PushSource(Alloc<source::Stdin>(str131));
        line_reader = Alloc<reader::FileLineReader>(stdin, arena);
      }
      else {
        arena->PushSource(Alloc<source::MainFile>(script_name));
        try {
          f = fd_state->Open(script_name);
        }
        catch (OSError* e) {
          println_stderr(fmt38(script_name, pyutil::strerror(e)));
          return 1;
        }
        line_reader = Alloc<reader::FileLineReader>(f, arena);
      }
    }
  }
  c_parser = parse_ctx->MakeOshParser(line_reader);
  if (exec_opts->interactive()) {
    throw Alloc<NotImplementedError>();
  }
  if (exec_opts->noexec()) {
    status = 0;
    try {
      node = main_loop::ParseWholeFile(c_parser);
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      status = 2;
    }
    if (status == 0) {
      if (flag->parser_mem_dump != nullptr) {
        input_path = fmt39(posix::getpid());
        pyutil::CopyFile(input_path, flag->parser_mem_dump);
      }
      ui::PrintAst(node, flag);
    }
  }
  else {
    if (flag->parser_mem_dump != nullptr) {
      e_usage(str134);
    }
    try {
      status = main_loop::Batch(cmd_ev, c_parser, arena, cmd_eval::IsMainProgram);
    }
    catch (util::UserExit* e) {
      status = e->status;
    }
    box = Alloc<List<int>>(std::initializer_list<int>{status});
    cmd_ev->MaybeRunExitTrap(box);
    status = box->index(0);
  }
  if (flag->runtime_mem_dump != nullptr) {
    input_path = fmt40(posix::getpid());
    pyutil::CopyFile(input_path, flag->runtime_mem_dump);
  }
  return status;
}

NullExecutor::NullExecutor(optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_Builtin*>* builtins) : vm::_Executor() {
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->procs = procs;
  this->builtins = builtins;
}

int NullExecutor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  vm::_Builtin* builtin_func;
  int status;

  builtin_func = this->builtins->index(builtin_id);
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      status = 2;
    }
  }
  catch (std::exception) { }  return status;
}

int NullExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int NullExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  List<Str*>* argv;
  int span_id;
  Str* arg0;
  int builtin_id;
  syntax_asdl::command__ShFunction* proc_node;
  int status;
  mylib::Writer* f;
  format::TextOutput* ast_f;
  hnode_asdl::hnode_t* tree;

  argv = cmd_val->argv;
  span_id = len(cmd_val->arg_spids) ? cmd_val->arg_spids->index(0) : runtime::NO_SPID;
  arg0 = argv->index(0);
  builtin_id = consts::LookupSpecialBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  if (call_procs) {
    proc_node = this->procs->get(arg0);
    if (proc_node != nullptr) {
      if ((this->exec_opts->strict_errexit() and this->mutable_opts->ErrExitIsDisabled())) {
        e_die(fmt41(), span_id);
      }
      status = this->cmd_ev->RunProc(proc_node, argv->slice(1));
      return status;
    }
  }
  builtin_id = consts::LookupNormalBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  println_stderr(str137);
  f = mylib::Stdout();
  ast_f = Alloc<fmt::TextOutput>(f);
  tree = cmd_val->PrettyTree();
  ast_f->FileHeader();
  fmt::PrintTree(tree, ast_f);
  ast_f->FileFooter();
  ast_f->write(str138);
  return 0;
}

}  // define namespace pure

namespace state {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace option_i = option_asdl::option_i;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue_t;
using runtime_asdl::lvalue__Named;
using runtime_asdl::lvalue__Indexed;
using runtime_asdl::lvalue__Keyed;
using runtime_asdl::scope_e;
using runtime_asdl::scope_t;
Str* _READLINE_DELIMS = str139;
int LINE_ZERO = -2;
int SetReadOnly = (1 << 0);
int ClearReadOnly = (1 << 1);
int SetExport = (1 << 2);
int ClearExport = (1 << 3);
int SetNameref = (1 << 4);
int ClearNameref = (1 << 5);

SearchPath::SearchPath(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(SearchPath)) {
  this->mem = mem;
  this->cache = Alloc<Dict<Str*, Str*>>();
}

Str* SearchPath::Lookup(Str* name) {
  return Lookup(name, true);
}

Str* SearchPath::Lookup(Str* name, bool exec_required) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* path_list;
  Str* full_path;
  bool found;

  if (str_contains(name, str140)) {
    if (path_stat::exists(name)) {
      return name;
    }
    else {
      return nullptr;
    }
  }
  val = this->mem->GetVar(str141);
  UP_val = val;
  if (val->tag_() == value_e::Str) {
    value__Str* val = static_cast<value__Str*>(UP_val);
    path_list = val->s->split(str142);
  }
  else {
    path_list = Alloc<List<Str*>>();
  }
  for (ListIter<Str*> it(path_list); !it.Done(); it.Next()) {
    Str* path_dir = it.Value();
    full_path = os_path::join(path_dir, name);
    if (exec_required) {
      found = posix::access(full_path, posix::X_OK);
    }
    else {
      found = path_stat::exists(full_path);
    }
    if (found) {
      return full_path;
    }
  }
  return nullptr;
}

Str* SearchPath::CachedLookup(Str* name) {
  Str* full_path;

  if (dict_contains(this->cache, name)) {
    return this->cache->index(name);
  }
  full_path = this->Lookup(name);
  if (full_path != nullptr) {
    this->cache->set(name, full_path);
  }
  return full_path;
}

void SearchPath::MaybeRemoveEntry(Str* name) {
  mylib::dict_remove(this->cache, name);
}

void SearchPath::ClearCache() {
  this->cache->clear();
}

List<Str*>* SearchPath::CachedCommands() {
  return this->cache->values();
}

ctx_Option::ctx_Option(state::MutableOpts* mutable_opts, List<int>* opt_nums, bool b) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Option)) {
  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    mutable_opts->Push(opt_num, b);
  }
  this->mutable_opts = mutable_opts;
  this->opt_nums = opt_nums;
}

ctx_Option::~ctx_Option(){
  for (ListIter<int> it(this->opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    this->mutable_opts->Pop(opt_num);
  }
}

ctx_ErrExit::ctx_ErrExit(state::MutableOpts* mutable_opts, bool errexit_val, int span_id) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_ErrExit)) {
  mutable_opts->PushErrExit(errexit_val, span_id);
  this->do_pop = false;
  if (mutable_opts->Get(option_i::strict_errexit)) {
    mutable_opts->Push(option_i::allow_command_sub, false);
    this->do_pop = true;
  }
  this->mutable_opts = mutable_opts;
}

ctx_ErrExit::~ctx_ErrExit(){
  if (this->do_pop) {
    this->mutable_opts->Pop(option_i::allow_command_sub);
  }
  this->mutable_opts->PopErrExit();
}

OptHook::OptHook() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(OptHook)) {
  ;  // pass
}

bool OptHook::OnChange(List<bool>* opt0_array, Str* opt_name, bool b) {
  return true;
}

Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook) {
  List<bool>* opt0_array;
  List<bool>* no_stack;
  List<List<bool>*>* opt_stacks;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;

  opt0_array = list_repeat(false, option_i::ARRAY_SIZE);
  no_stack = nullptr;
  opt_stacks = list_repeat(no_stack, option_i::ARRAY_SIZE);
  parse_opts = Alloc<optview::Parse>(opt0_array, opt_stacks);
  exec_opts = Alloc<optview::Exec>(opt0_array, opt_stacks);
  mutable_opts = Alloc<MutableOpts>(mem, opt0_array, opt_stacks, opt_hook);
  return (Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*>(parse_opts, exec_opts, mutable_opts));
}

int _ShoptOptionNum(Str* opt_name) {
  int opt_num;

  opt_num = match::MatchOption(opt_name);
  if (opt_num == 0) {
    e_usage(fmt42(opt_name));
  }
  return opt_num;
}

int _SetOptionNum(Str* opt_name) {
  int opt_num;

  opt_num = match::MatchOption(opt_name);
  if (opt_num == 0) {
    e_usage(fmt43(opt_name));
  }
  if (!list_contains(consts::SET_OPTION_NUMS, opt_num)) {
    e_usage(fmt44(opt_name));
  }
  return opt_num;
}

MutableOpts::MutableOpts(state::Mem* mem, List<bool>* opt0_array, List<List<bool>*>* opt_stacks, state::OptHook* opt_hook) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(MutableOpts)) {
  this->mem = mem;
  this->opt0_array = opt0_array;
  this->opt_stacks = opt_stacks;
  this->errexit_spid_stack = Alloc<List<int>>();
  for (ListIter<int> it(consts::DEFAULT_TRUE); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    this->opt0_array->set(opt_num, true);
  }
  this->opt_hook = opt_hook;
  runtime_asdl::value_t* UP_shellopts = this->mem->GetVar(str146);
  if (UP_shellopts->tag_() == value_e::Str) {
    value__Str* shellopts = static_cast<value__Str*>(UP_shellopts);
    this->_InitOptionsFromEnv(shellopts->s);
  }
}

void MutableOpts::_InitOptionsFromEnv(Str* shellopts) {
  List<Str*>* lookup;
  Str* name;

  lookup = shellopts->split(str147);
  for (ListIter<int> it(consts::SET_OPTION_NUMS); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    name = consts::OptionName(opt_num);
    if (list_contains(lookup, name)) {
      this->_SetOption(name, true);
    }
  }
}

void MutableOpts::Push(int opt_num, bool b) {
  List<bool>* overlay;

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    this->opt_stacks->set(opt_num, Alloc<List<bool>>(std::initializer_list<bool>{b}));
  }
  else {
    overlay->append(b);
  }
}

bool MutableOpts::Pop(int opt_num) {
  List<bool>* overlay;

  overlay = this->opt_stacks->index(opt_num);
  return overlay->pop();
}

void MutableOpts::PushErrExit(bool b, int spid) {
  this->Push(option_i::errexit, b);
  this->errexit_spid_stack->append(spid);
}

bool MutableOpts::PopErrExit() {
  this->errexit_spid_stack->pop();
  return this->Pop(option_i::errexit);
}

bool MutableOpts::Get(int opt_num) {
  List<bool>* overlay;

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    return this->opt0_array->index(opt_num);
  }
  else {
    return overlay->index(-1);
  }
}

void MutableOpts::_Set(int opt_num, bool b) {
  List<bool>* overlay;

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    this->opt0_array->set(opt_num, b);
  }
  else {
    overlay->set(-1, b);
  }
}

void MutableOpts::set_interactive() {
  this->_Set(option_i::interactive, true);
}

void MutableOpts::set_emacs() {
  this->_Set(option_i::emacs, true);
}

void MutableOpts::set_xtrace(bool b) {
  this->_Set(option_i::xtrace, b);
}

void MutableOpts::_SetArrayByNum(int opt_num, bool b) {
  if ((list_contains(consts::PARSE_OPTION_NUMS, opt_num) and !this->mem->InGlobalNamespace())) {
    e_die(str148);
  }
  this->_Set(opt_num, b);
}

void MutableOpts::SetDeferredErrExit(bool b) {
  this->opt0_array->set(option_i::errexit, b);
}

void MutableOpts::DisableErrExit() {
  this->_Set(option_i::errexit, false);
}

bool MutableOpts::ErrExitIsDisabled() {
  List<bool>* overlay;

  overlay = this->opt_stacks->index(option_i::errexit);
  if ((overlay == nullptr or len(overlay) == 0)) {
    return false;
  }
  else {
    return (this->opt0_array->index(option_i::errexit) and !overlay->index(-1));
  }
}

int MutableOpts::ErrExitSpanId() {
  return this->errexit_spid_stack->index(0);
}

void MutableOpts::_SetOption(Str* opt_name, bool b) {
  int opt_num;
  bool success;

  opt_num = match::MatchOption(opt_name);
  if (opt_num == option_i::errexit) {
    this->SetDeferredErrExit(b);
  }
  else {
    if ((opt_num == option_i::verbose and b)) {
      println_stderr(str149);
    }
    this->_SetArrayByNum(opt_num, b);
  }
  success = this->opt_hook->OnChange(this->opt0_array, opt_name, b);
}

void MutableOpts::SetOption(Str* opt_name, bool b) {
  runtime_asdl::value_t* UP_val;
  Str* shellopts;
  runtime_asdl::value__Str* new_val;
  List<Str*>* names;

  this->_SetOption(opt_name, b);
  UP_val = this->mem->GetVar(str150);
  value__Str* val = static_cast<value__Str*>(UP_val);
  shellopts = val->s;
  if (b) {
    if (!str_contains(shellopts, opt_name)) {
      new_val = Alloc<value::Str>(fmt45(shellopts, opt_name));
      this->mem->InternalSetGlobal(str152, new_val);
    }
  }
  else {
    if (str_contains(shellopts, opt_name)) {
      names = Alloc<List<Str*>>();
      for (ListIter<Str*> it(shellopts->split(str153)); !it.Done(); it.Next()) {
        Str* n = it.Value();
        if (!(str_equals(n, opt_name))) {
          names->append(n);
        }
      }
      new_val = Alloc<value::Str>(str154->join(names));
      this->mem->InternalSetGlobal(str155, new_val);
    }
  }
}

void MutableOpts::_SetGroup(List<int>* opt_nums, bool b) {
  bool b2;

  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    b2 = list_contains(consts::DEFAULT_TRUE, opt_num) ? !b : b;
    this->opt0_array->set(opt_num, b2);
  }
  this->SetDeferredErrExit(b);
}

void MutableOpts::SetShoptOption(Str* opt_name, bool b) {
  int opt_num;

  if (str_equals(opt_name, str156)) {
    this->_SetGroup(consts::OIL_BASIC, b);
    return ;
  }
  if (str_equals(opt_name, str157)) {
    this->_SetGroup(consts::OIL_ALL, b);
    return ;
  }
  if (str_equals(opt_name, str158)) {
    this->_SetGroup(consts::STRICT_ALL, b);
    return ;
  }
  opt_num = _ShoptOptionNum(opt_name);
  if (opt_num == option_i::errexit) {
    this->SetDeferredErrExit(b);
    return ;
  }
  this->_SetArrayByNum(opt_num, b);
}

void MutableOpts::ShowOptions(List<Str*>* opt_names) {
  int opt_num;
  bool b;

  if (len(opt_names) == 0) {
    opt_names = Alloc<List<Str*>>();
    for (ListIter<int> it(consts::SET_OPTION_NUMS); !it.Done(); it.Next()) {
      int i = it.Value();
      opt_names->append(consts::OptionName(i));
    }
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    opt_num = _SetOptionNum(opt_name);
    b = this->Get(opt_num);
    print(fmt46(b ? str160 : str161, opt_name));
  }
}

void MutableOpts::ShowShoptOptions(List<Str*>* opt_names) {
  int index;
  bool b;

  if (len(opt_names) == 0) {
    opt_names = consts::VISIBLE_SHOPT_NAMES;
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    index = match::MatchOption(opt_name);
    if (index == 0) {
      e_usage(fmt47(opt_name));
    }
    b = this->opt0_array->index(index);
    print(fmt48(b ? str164 : str165, opt_name));
  }
}

_ArgFrame::_ArgFrame(List<Str*>* argv) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ArgFrame)) {
  this->argv = argv;
  this->num_shifted = 0;
}

runtime_asdl::value_t* _ArgFrame::GetArgNum(int arg_num) {
  int index;

  index = ((this->num_shifted + arg_num) - 1);
  if (index >= len(this->argv)) {
    return Alloc<value::Undef>();
  }
  return Alloc<value::Str>(this->argv->index(index));
}

List<Str*>* _ArgFrame::GetArgv() {
  return this->argv->slice(this->num_shifted);
}

int _ArgFrame::GetNumArgs() {
  return (len(this->argv) - this->num_shifted);
}

void _ArgFrame::SetArgv(List<Str*>* argv) {
  this->argv = argv;
  this->num_shifted = 0;
}

DirStack::DirStack() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(DirStack)) {
  this->stack = Alloc<List<Str*>>();
  this->Reset();
}

void DirStack::Reset() {
  this->stack->clear();
  this->stack->append(posix::getcwd());
}

void DirStack::Push(Str* entry) {
  this->stack->append(entry);
}

Str* DirStack::Pop() {
  if (len(this->stack) <= 1) {
    return nullptr;
  }
  this->stack->pop();
  return this->stack->index(-1);
}

List<Str*>* DirStack::Iter() {
  List<Str*>* ret;

  ret = Alloc<List<Str*>>();
  ret->extend(this->stack);
  ret->reverse();
  return ret;
}

Str* _GetWorkingDir() {
  try {
    return posix::getcwd();
  }
  catch (OSError* e) {
    e_die(fmt49(pyutil::strerror(e)));
  }
}

DebugFrame::DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(DebugFrame)) {
  this->bash_source = bash_source;
  this->func_name = func_name;
  this->source_name = source_name;
  this->call_spid = call_spid;
  this->argv_i = argv_i;
  this->var_i = var_i;
}

void _InitDefaults(state::Mem* mem) {
  SetGlobalString(mem, str168, split::DEFAULT_IFS);
  SetGlobalString(mem, str169, str(posix::getuid()));
  SetGlobalString(mem, str170, str(posix::geteuid()));
  SetGlobalString(mem, str171, str(posix::getppid()));
  SetGlobalString(mem, str172, libc::gethostname());
  SetGlobalString(mem, str173, pyos::OsType());
  SetGlobalString(mem, str174, str175);
  SetGlobalString(mem, str176, str177);
  SetGlobalString(mem, str178, _READLINE_DELIMS);
}

void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ) {
  runtime_asdl::value_t* val;

  for (DictIter<Str*, Str*> it(environ); !it.Done(); it.Next()) {
    Str* n = it.Key();
    Str* v = it.Value();
    mem->SetVar(Alloc<lvalue::Named>(n), Alloc<value::Str>(v), scope_e::GlobalOnly, SetExport);
  }
  val = mem->GetVar(str179);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str180, str181);
  }
  mem->SetVar(Alloc<lvalue::Named>(str182), nullptr, scope_e::GlobalOnly, SetReadOnly);
  val = mem->GetVar(str183);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str184, _GetWorkingDir());
  }
  mem->SetVar(Alloc<lvalue::Named>(str185), nullptr, scope_e::GlobalOnly, SetExport);
}

void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ, Str* version_str) {
  runtime_asdl::value_t* val;
  Str* pwd;

  SetGlobalString(mem, str186, version_str);
  _InitDefaults(mem);
  _InitVarsFromEnv(mem, environ);
  val = mem->GetVar(str187);
  pwd = static_cast<value__Str*>(val)->s;
  mem->SetPwd(pwd);
}

ctx_Call::ctx_Call(state::Mem* mem, Str* func_name, int def_spid, List<Str*>* argv) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Call)) {
  mem->PushCall(func_name, def_spid, argv);
  this->mem = mem;
}

ctx_Call::~ctx_Call(){
  this->mem->PopCall();
}

ctx_Temp::ctx_Temp(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Temp)) {
  mem->PushTemp();
  this->mem = mem;
}

ctx_Temp::~ctx_Temp(){
  this->mem->PopTemp();
}

ctx_Status::ctx_Status(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Status)) {
  mem->last_status->append(0);
  mem->pipe_status->append(Alloc<List<int>>());
  mem->process_sub_status->append(Alloc<List<int>>());
  this->mem = mem;
}

ctx_Status::~ctx_Status(){
  this->mem->last_status->pop();
  this->mem->pipe_status->pop();
  this->mem->process_sub_status->pop();
}

Mem::Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Mem)) {
  this->exec_opts = nullptr;
  this->dollar0 = dollar0;
  this->argv_stack = Alloc<List<state::_ArgFrame*>>(std::initializer_list<state::_ArgFrame*>{Alloc<_ArgFrame>(argv)});
  this->var_stack = Alloc<List<Dict<Str*, runtime_asdl::cell*>*>>(std::initializer_list<Dict<Str*, runtime_asdl::cell*>*>{Alloc<Dict<Str*, runtime_asdl::cell*>>()});
  this->arena = arena;
  this->debug_stack = debug_stack;
  this->current_spid = runtime::NO_SPID;
  this->line_num = Alloc<value::Str>(str188);
  this->last_status = Alloc<List<int>>(std::initializer_list<int>{0});
  this->pipe_status = Alloc<List<List<int>*>>(std::initializer_list<List<int>*>{Alloc<List<int>>()});
  this->process_sub_status = Alloc<List<List<int>*>>(std::initializer_list<List<int>*>{Alloc<List<int>>()});
  this->last_bg_pid = -1;
  this->root_pid = posix::getpid();
  this->regex_matches = Alloc<List<Str*>>();
}

void Mem::SetPwd(Str* pwd) {
  this->pwd = pwd;
}

bool Mem::InGlobalNamespace() {
  return len(this->argv_stack) == 1;
}

Tuple3<void*, void*, void*> Mem::Dump() {
  throw Alloc<AssertionError>();
}

void Mem::SetCurrentSpanId(int span_id) {
  if (span_id == runtime::NO_SPID) {
    println_stderr(str195);
    return ;
  }
  this->current_spid = span_id;
}

int Mem::CurrentSpanId() {
  return this->current_spid;
}

int Mem::LastStatus() {
  return this->last_status->index(-1);
}

List<int>* Mem::PipeStatus() {
  return this->pipe_status->index(-1);
}

void Mem::SetLastStatus(int x) {
  this->last_status->set(-1, x);
}

void Mem::SetPipeStatus(List<int>* x) {
  this->pipe_status->set(-1, x);
}

void Mem::SetProcessSubStatus(List<int>* x) {
  this->process_sub_status->set(-1, x);
}

void Mem::PushCall(Str* func_name, int def_spid, List<Str*>* argv) {
  syntax_asdl::line_span* span;
  Str* source_str;

  this->argv_stack->append(Alloc<_ArgFrame>(argv));
  this->var_stack->append(Alloc<Dict<Str*, runtime_asdl::cell*>>());
  span = this->arena->GetLineSpan(def_spid);
  source_str = this->arena->GetLineSourceString(span->line_id);
  this->_PushDebugStack(source_str, func_name, nullptr);
}

void Mem::PopCall() {
  this->_PopDebugStack();
  this->var_stack->pop();
  this->argv_stack->pop();
}

void Mem::PushSource(Str* source_name, List<Str*>* argv) {
  if (len(argv)) {
    this->argv_stack->append(Alloc<_ArgFrame>(argv));
  }
  this->_PushDebugStack(source_name, nullptr, source_name);
}

void Mem::PopSource(List<Str*>* argv) {
  this->_PopDebugStack();
  if (len(argv)) {
    this->argv_stack->pop();
  }
}

void Mem::PushTemp() {
  this->var_stack->append(Alloc<Dict<Str*, runtime_asdl::cell*>>());
  this->_PushDebugStack(nullptr, nullptr, nullptr);
}

void Mem::PopTemp() {
  this->_PopDebugStack();
  this->var_stack->pop();
}

Dict<Str*, runtime_asdl::cell*>* Mem::TopNamespace() {
  return this->var_stack->index(-1);
}

void Mem::_PushDebugStack(Str* bash_source, Str* func_name, Str* source_name) {
  int argv_i;
  int var_i;

  argv_i = (len(this->argv_stack) - 1);
  var_i = (len(this->var_stack) - 1);
  this->debug_stack->append(Alloc<DebugFrame>(bash_source, func_name, source_name, this->current_spid, argv_i, var_i));
}

void Mem::_PopDebugStack() {
  this->debug_stack->pop();
}

int Mem::Shift(int n) {
  state::_ArgFrame* frame;
  int num_args;

  frame = this->argv_stack->index(-1);
  num_args = len(frame->argv);
  if ((frame->num_shifted + n) <= num_args) {
    frame->num_shifted += n;
    return 0;
  }
  else {
    return 1;
  }
}

runtime_asdl::value__Str* Mem::GetArg0() {
  return Alloc<value::Str>(this->dollar0);
}

runtime_asdl::value_t* Mem::GetArgNum(int arg_num) {
  if (arg_num == 0) {
    return Alloc<value::Str>(this->dollar0);
  }
  return this->argv_stack->index(-1)->GetArgNum(arg_num);
}

List<Str*>* Mem::GetArgv() {
  return this->argv_stack->index(-1)->GetArgv();
}

void Mem::SetArgv(List<Str*>* argv) {
  this->argv_stack->index(-1)->SetArgv(argv);
}

runtime_asdl::value_t* Mem::GetSpecialVar(int op_id) {
  int n;

  if (op_id == Id::VSub_Bang) {
    n = this->last_bg_pid;
    if (n == -1) {
      return Alloc<value::Undef>();
    }
  }
  else {
    if (op_id == Id::VSub_QMark) {
      n = this->last_status->index(-1);
    }
    else {
      if (op_id == Id::VSub_Pound) {
        n = this->argv_stack->index(-1)->GetNumArgs();
      }
      else {
        if (op_id == Id::VSub_Dollar) {
          n = this->root_pid;
        }
        else {
          throw Alloc<NotImplementedError>(op_id);
        }
      }
    }
  }
  return Alloc<value::Str>(str(n));
}

Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> Mem::_ResolveNameOnly(Str* name, runtime_asdl::scope_t lookup_mode) {
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::cell* cell;
  runtime_asdl::cell* no_cell;

  if (lookup_mode == scope_e::Dynamic) {
    for (int i = (len(this->var_stack) - 1); i > -1; i += -1) {
      name_map = this->var_stack->index(i);
      if (dict_contains(name_map, name)) {
        cell = name_map->index(name);
        return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(cell, name_map));
      }
    }
    no_cell = nullptr;
    return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(no_cell, this->var_stack->index(0)));
  }
  else {
    if (lookup_mode == scope_e::LocalOnly) {
      name_map = this->var_stack->index(-1);
      return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
    }
    else {
      if (lookup_mode == scope_e::GlobalOnly) {
        name_map = this->var_stack->index(0);
        return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
      }
      else {
        if (lookup_mode == scope_e::LocalOrGlobal) {
          name_map = this->var_stack->index(-1);
          cell = name_map->get(name);
          if (cell) {
            return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(cell, name_map));
          }
          name_map = this->var_stack->index(0);
          return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
}

Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> Mem::_ResolveNameOrRef(Str* name, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  Str* new_name;
  Str* cell_name;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup0 = this->_ResolveNameOnly(name, lookup_mode);
  cell = tup0.at0();
  name_map = tup0.at1();
  if ((!cell or !cell->nameref)) {
    return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
  }
  val = cell->val;
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      if (this->exec_opts->strict_nameref()) {
        e_die(fmt50(name));
      }
      else {
        return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
      }
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      new_name = val->s;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  if (!match::IsValidVarName(new_name)) {
    if (this->exec_opts->strict_nameref()) {
      e_die(fmt51(name, new_name));
    }
    else {
      cell->nameref = false;
      return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
    }
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup1 = this->_ResolveNameOrRef(new_name, lookup_mode);
  cell = tup1.at0();
  name_map = tup1.at1();
  cell_name = tup1.at2();
  return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, cell_name));
}

bool Mem::IsAssocArray(Str* name, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;

  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup2 = this->_ResolveNameOrRef(name, lookup_mode);
  cell = tup2.at0();
  if (cell) {
    if (cell->val->tag_() == value_e::AssocArray) {
      return true;
    }
  }
  return false;
}

void Mem::_CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell) {
  if ((cell and (keyword_id == Id::KW_Var || keyword_id == Id::KW_Const))) {
    e_die(fmt52(name));
  }
  if ((cell == nullptr and (keyword_id == Id::KW_Set || keyword_id == Id::KW_SetLocal || keyword_id == Id::KW_SetGlobal))) {
    e_die(fmt53(name));
  }
}

void Mem::_DisallowNamerefCycle(Str* name, List<Str*>* ref_trail) {
  runtime_asdl::cell* cell;
  runtime_asdl::value_t* val;
  Str* new_name;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup3 = this->_ResolveNameOnly(name, scope_e::Dynamic);
  cell = tup3.at0();
  if ((!cell or !cell->nameref)) {
    return ;
  }
  val = cell->val;
  if (val->tag_() != value_e::Str) {
    return ;
  }
  value__Str* str_val = static_cast<value__Str*>(val);
  new_name = str_val->s;
  if (list_contains(ref_trail, new_name)) {
    e_die(fmt54(str201->join(ref_trail)));
  }
  ref_trail->append(new_name);
  this->_DisallowNamerefCycle(new_name, ref_trail);
}

void Mem::SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode) {
  SetVar(lval, val, lookup_mode, 0);
}

void Mem::SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode, int flags) {
  int keyword_id;
  runtime_asdl::lvalue_t* UP_lval;
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  List<Str*>* ref_trail;
  int left_spid;
  runtime_asdl::value_t* UP_cell_val;
  List<Str*>* strs;
  int n;
  int index;

  keyword_id = (flags >> 8);
  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      if (((flags & SetNameref) or (flags & ClearNameref))) {
        Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup4 = this->_ResolveNameOnly(lval->name, lookup_mode);
        cell = tup4.at0();
        name_map = tup4.at1();
        cell_name = lval->name;
      }
      else {
        Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup5 = this->_ResolveNameOrRef(lval->name, lookup_mode);
        cell = tup5.at0();
        name_map = tup5.at1();
        cell_name = tup5.at2();
      }
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell) {
        if ((flags & ClearExport)) {
          cell->exported = false;
        }
        if ((flags & ClearReadOnly)) {
          cell->readonly = false;
        }
        if ((flags & ClearNameref)) {
          cell->nameref = false;
        }
        if (val != nullptr) {
          if (cell->readonly) {
            e_die(fmt55(lval->name));
          }
          cell->val = val;
        }
        if ((flags & SetExport)) {
          cell->exported = true;
        }
        if ((flags & SetReadOnly)) {
          cell->readonly = true;
        }
        if ((flags & SetNameref)) {
          cell->nameref = true;
        }
      }
      else {
        if (val == nullptr) {
          val = Alloc<value::Undef>();
        }
        cell = Alloc<runtime_asdl::cell>(to_bool((flags & SetExport)), to_bool((flags & SetReadOnly)), to_bool((flags & SetNameref)), val);
        name_map->set(cell_name, cell);
      }
      if ((cell->val->tag_() != value_e::Undef && cell->val->tag_() != value_e::Str)) {
        if (cell->exported) {
          e_die(str203);
        }
        if (cell->nameref) {
          e_die(str204);
        }
      }
      if (cell->nameref) {
        ref_trail = Alloc<List<Str*>>();
        this->_DisallowNamerefCycle(cell_name, ref_trail);
      }
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = len(lval->spids) ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup6 = this->_ResolveNameOrRef(lval->name, lookup_mode);
      cell = tup6.at0();
      name_map = tup6.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (!cell) {
        this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
        return ;
      }
      if (cell->readonly) {
        e_die(fmt56(), left_spid);
      }
      UP_cell_val = cell->val;
      switch (UP_cell_val->tag_()) {
        case value_e::Undef: {
          this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
          return ;
        }
          break;
        case value_e::Str: {
          e_die(fmt57(), left_spid);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* cell_val = static_cast<value__MaybeStrArray*>(UP_cell_val);
          strs = cell_val->strs;
          n = len(strs);
          index = lval->index;
          if (index < 0) {
            index += n;
          }
          if ((0 <= index and index < n)) {
            strs->set(index, rval->s);
          }
          else {
            n = ((index - len(strs)) + 1);
            for (int i = 0; i < n; ++i) {
              strs->append(nullptr);
            }
            strs->set(lval->index, rval->s);
          }
          return ;
        }
          break;
      }
      e_die(fmt58(ui::ValType(cell->val)), left_spid);
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = len(lval->spids) ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup7 = this->_ResolveNameOrRef(lval->name, lookup_mode);
      cell = tup7.at0();
      name_map = tup7.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell->readonly) {
        e_die(fmt59(), left_spid);
      }
      value__AssocArray* cell_val2 = static_cast<value__AssocArray*>(cell->val);
      cell_val2->d->set(lval->key, rval->s);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void Mem::_BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags) {
  Str* no_str;
  List<Str*>* items;
  runtime_asdl::value__MaybeStrArray* new_value;
  bool readonly;

  no_str = nullptr;
  items = list_repeat(no_str, lval->index);
  items->append(val->s);
  new_value = Alloc<value::MaybeStrArray>(items);
  readonly = to_bool((flags & SetReadOnly));
  name_map->set(lval->name, Alloc<runtime_asdl::cell>(false, readonly, false, new_value));
}

void Mem::InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val) {
  runtime_asdl::cell* cell;

  cell = this->var_stack->index(0)->index(name);
  cell->val = new_val;
}

runtime_asdl::value_t* Mem::GetVar(Str* name) {
  return GetVar(name, scope_e::Dynamic);
}

runtime_asdl::value_t* Mem::GetVar(Str* name, runtime_asdl::scope_t lookup_mode) {
  List<Str*>* strs;
  syntax_asdl::line_span* span;
  int line_num;
  runtime_asdl::cell* cell;

  if (str_equals(name, str209)) {
    return Alloc<value::MaybeStrArray>(this->GetArgv());
  }
  if (str_equals(name, str210)) {
    return Alloc<value::Str>(str(this->last_status->index(-1)));
  }
  if ((str_equals(name, str211) || str_equals(name, str212))) {
    return Alloc<value::MaybeStrArray>();
  }
  if (str_equals(name, str213)) {
    return Alloc<value::MaybeStrArray>();
  }
  if (str_equals(name, str214)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->func_name != nullptr) {
        strs->append(frame->func_name);
      }
      if (frame->source_name != nullptr) {
        strs->append(str215);
      }
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str216)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->bash_source != nullptr) {
        strs->append(frame->bash_source);
      }
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str217)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->call_spid == runtime::NO_SPID) {
        continue;
      }
      if (frame->call_spid == LINE_ZERO) {
        strs->append(str218);
        continue;
      }
      span = this->arena->GetLineSpan(frame->call_spid);
      line_num = this->arena->GetLineNumber(span->line_id);
      strs->append(str(line_num));
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str219)) {
    span = this->arena->GetLineSpan(this->current_spid);
    this->line_num->s = str(this->arena->GetLineNumber(span->line_id));
    return this->line_num;
  }
  if (str_equals(name, str220)) {
    return Alloc<value::Str>(str(posix::getpid()));
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup8 = this->_ResolveNameOrRef(name, lookup_mode);
  cell = tup8.at0();
  if (cell) {
    return cell->val;
  }
  return Alloc<value::Undef>();
}

runtime_asdl::cell* Mem::GetCell(Str* name) {
  return GetCell(name, scope_e::Dynamic);
}

runtime_asdl::cell* Mem::GetCell(Str* name, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup9 = this->_ResolveNameOnly(name, lookup_mode);
  cell = tup9.at0();
  return cell;
}

bool Mem::Unset(runtime_asdl::lvalue_t* lval, runtime_asdl::scope_t lookup_mode, bool strict) {
  runtime_asdl::lvalue_t* UP_lval;
  Str* var_name;
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* strs;
  int n;
  int last_index;
  int index;

  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup10 = this->_ResolveNameOrRef(var_name, lookup_mode);
  cell = tup10.at0();
  name_map = tup10.at1();
  cell_name = tup10.at2();
  if (!cell) {
    return false;
  }
  if (cell->readonly) {
    throw Alloc<error::Runtime>(fmt60(var_name));
  }
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      name_map->remove(cell_name);
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      val = cell->val;
      UP_val = val;
      if (val->tag_() != value_e::MaybeStrArray) {
        throw Alloc<error::Runtime>(fmt61(var_name));
      }
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      strs = val->strs;
      n = len(strs);
      last_index = (n - 1);
      index = lval->index;
      if (index < 0) {
        index += n;
      }
      if (index == last_index) {
        strs->pop();
      }
      else {
        if ((0 <= index and index < last_index)) {
          strs->set(index, nullptr);
        }
        else {
          ;  // pass
        }
      }
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      val = cell->val;
      UP_val = val;
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      mylib::dict_remove(val->d, lval->key);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return true;
}

bool Mem::ClearFlag(Str* name, int flag, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup11 = this->_ResolveNameOnly(name, lookup_mode);
  cell = tup11.at0();
  name_map = tup11.at1();
  if (cell) {
    if ((flag & ClearExport)) {
      cell->exported = false;
    }
    if ((flag & ClearNameref)) {
      cell->nameref = false;
    }
    return true;
  }
  else {
    return false;
  }
}

Dict<Str*, Str*>* Mem::GetExported() {
  Dict<Str*, Str*>* exported;

  exported = Alloc<Dict<Str*, Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      if ((cell->exported and cell->val->tag_() == value_e::Str)) {
        value__Str* val = static_cast<value__Str*>(cell->val);
        exported->set(name, val->s);
      }
    }
  }
  return exported;
}

List<Str*>* Mem::VarNames() {
  List<Str*>* ret;

  ret = Alloc<List<Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      ret->append(name);
    }
  }
  return ret;
}

List<Str*>* Mem::VarNamesStartingWith(Str* prefix) {
  List<Str*>* names;

  names = Alloc<List<Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      if (name->startswith(prefix)) {
        names->append(name);
      }
    }
  }
  return names;
}

Dict<Str*, Str*>* Mem::GetAllVars() {
  Dict<Str*, Str*>* result;
  runtime_asdl::value_t* val;

  result = Alloc<Dict<Str*, Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      val = cell->val;
      if (val->tag_() == value_e::Str) {
        value__Str* str_val = static_cast<value__Str*>(val);
        result->set(name, str_val->s);
      }
    }
  }
  return result;
}

Dict<Str*, runtime_asdl::cell*>* Mem::GetAllCells(runtime_asdl::scope_t lookup_mode) {
  Dict<Str*, runtime_asdl::cell*>* result;
  List<Dict<Str*, runtime_asdl::cell*>*>* scopes;

  result = Alloc<Dict<Str*, runtime_asdl::cell*>>();
  if (lookup_mode == scope_e::Dynamic) {
    scopes = this->var_stack;
  }
  else {
    if (lookup_mode == scope_e::LocalOnly) {
      scopes = this->var_stack->slice(-1);
    }
    else {
      if (lookup_mode == scope_e::GlobalOnly) {
        scopes = this->var_stack->slice(0, 1);
      }
      else {
        if (lookup_mode == scope_e::LocalOrGlobal) {
          scopes = this->var_stack->slice(0, 1);
          if (len(this->var_stack) > 1) {
            scopes->append(this->var_stack->index(-1));
          }
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(scopes); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      result->set(name, cell);
    }
  }
  return result;
}

bool Mem::IsGlobalScope() {
  return len(this->var_stack) == 1;
}

void Mem::ClearMatches() {
  this->regex_matches->clear();
}

void Mem::SetMatches(List<Str*>* matches) {
  this->regex_matches = matches;
}

Str* Mem::GetMatch(int i) {
  if (i < len(this->regex_matches)) {
    return this->regex_matches->index(i);
  }
  else {
    return nullptr;
  }
}

void SetLocalString(state::Mem* mem, Str* name, Str* s) {
  mem->SetVar(Alloc<lvalue::Named>(name), Alloc<value::Str>(s), scope_e::LocalOnly);
}

void SetStringDynamic(state::Mem* mem, Str* name, Str* s) {
  mem->SetVar(Alloc<lvalue::Named>(name), Alloc<value::Str>(s), scope_e::Dynamic);
}

void SetArrayDynamic(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(Alloc<lvalue::Named>(name), Alloc<value::MaybeStrArray>(a), scope_e::Dynamic);
}

void SetGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;

  val = Alloc<value::Str>(s);
  mem->SetVar(Alloc<lvalue::Named>(name), val, scope_e::GlobalOnly);
}

void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(Alloc<lvalue::Named>(name), Alloc<value::MaybeStrArray>(a), scope_e::GlobalOnly);
}

void SetLocalArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(Alloc<lvalue::Named>(name), Alloc<value::MaybeStrArray>(a), scope_e::LocalOnly);
}

void ExportGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;

  val = Alloc<value::Str>(s);
  mem->SetVar(Alloc<lvalue::Named>(name), val, scope_e::GlobalOnly, SetExport);
}

runtime_asdl::value_t* GetGlobal(state::Mem* mem, Str* name) {
  return mem->GetVar(name, scope_e::GlobalOnly);
}

Str* GetString(state::Mem* mem, Str* name) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;

  val = mem->GetVar(name, scope_e::Dynamic);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      throw Alloc<error::Runtime>(fmt62(name));
    }
      break;
    case value_e::Str: {
      return static_cast<value__Str*>(UP_val)->s;
    }
      break;
    default: {
      throw Alloc<error::Runtime>(fmt63(name));
    }
  }
}

Str* MaybeString(state::Mem* mem, Str* name) {
  try {
    return GetString(mem, name);
  }
  catch (error::Runtime*) {
    return nullptr;
  }
}

int GetInteger(state::Mem* mem, Str* name) {
  runtime_asdl::value_t* val;
  Str* s;
  int i;

  val = mem->GetVar(name, scope_e::Dynamic);
  if (val->tag_() != value_e::Str) {
    throw Alloc<error::Runtime>(fmt64(name, ui::ValType(val)));
  }
  s = static_cast<value__Str*>(val)->s;
  try {
    i = to_int(s);
  }
  catch (ValueError*) {
    throw Alloc<error::Runtime>(fmt65(name, s));
  }
  return i;
}

}  // define namespace state

namespace ui {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::command_t;
using syntax_asdl::command_str;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__Stdin;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;
using syntax_asdl::source__EvalArg;
using syntax_asdl::source__Alias;
using syntax_asdl::source__LValue;
using runtime_asdl::value_str;
using runtime_asdl::value_t;
namespace fmt = format;
using mylib::NewStr;

Str* ValType(runtime_asdl::value_t* val) {
  return NewStr(value_str(val->tag_()));
}

Str* CommandType(syntax_asdl::command_t* cmd) {
  return NewStr(command_str(cmd->tag_()));
}

Str* PrettyId(int id_) {
  return NewStr(Id_str(id_));
}

Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena) {
  syntax_asdl::line_span* span;
  Str* line;
  Str* val;

  if (tok->id == Id::Eof_Real) {
    return str227;
  }
  span = arena->GetLineSpan(tok->span_id);
  line = arena->GetLine(span->line_id);
  val = line->slice(span->col, (span->col + span->length));
  return repr(val);
}

Str* PrettyDir(Str* dir_name, Str* home_dir) {
  if (home_dir != nullptr) {
    if ((str_equals(dir_name, home_dir) or dir_name->startswith(str_concat(home_dir, str228)))) {
      return str_concat(str229, dir_name->slice(len(home_dir)));
    }
  }
  return dir_name;
}

void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f) {
  f->write(str230);
  f->write(line->rstrip());
  f->write(str231);
  for (StrIter it(line->slice(0, col)); !it.Done(); it.Next()) {
    Str* c = it.Value();
    f->write(str_equals(c, str232) ? str233 : str234);
  }
  f->write(str235);
  f->write(str_repeat(str236, (length - 1)));
  f->write(str237);
}

void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f) {
  syntax_asdl::line_span* line_span;
  int orig_col;
  int line_id;
  syntax_asdl::source_t* src;
  Str* line;
  int line_num;
  syntax_asdl::source_t* UP_src;
  Str* source_str;
  syntax_asdl::line_span* span2;
  Str* line2;
  Str* outer_source;
  int lbracket_col;
  syntax_asdl::line_span* span;

  line_span = arena->GetLineSpan(span_id);
  orig_col = line_span->col;
  line_id = line_span->line_id;
  src = arena->GetLineSource(line_id);
  line = arena->GetLine(line_id);
  line_num = arena->GetLineNumber(line_id);
  if (src->tag_() != source_e::LValue) {
    _PrintCodeExcerpt(line, line_span->col, line_span->length, f);
  }
  UP_src = src;
  switch (src->tag_()) {
    case source_e::Interactive: {
      source_str = str238;
    }
      break;
    case source_e::CFlag: {
      source_str = str239;
    }
      break;
    case source_e::Stdin: {
      source__Stdin* src = static_cast<source__Stdin*>(UP_src);
      source_str = fmt66(src->comment);
    }
      break;
    case source_e::MainFile: {
      source__MainFile* src = static_cast<source__MainFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::SourcedFile: {
      source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::Alias: {
      source__Alias* src = static_cast<source__Alias*>(UP_src);
      source_str = fmt67(src->argv0);
    }
      break;
    case source_e::Backticks: {
      source_str = str242;
    }
      break;
    case source_e::LValue: {
      source__LValue* src = static_cast<source__LValue*>(UP_src);
      span2 = arena->GetLineSpan(src->left_spid);
      line2 = arena->GetLine(span2->line_id);
      outer_source = arena->GetLineSourceString(span2->line_id);
      source_str = fmt68(outer_source);
      line_num = arena->GetLineNumber(span2->line_id);
      lbracket_col = (span2->col + span2->length);
      _PrintCodeExcerpt(line2, (orig_col + lbracket_col), 1, f);
    }
      break;
    case source_e::EvalArg: {
      source__EvalArg* src = static_cast<source__EvalArg*>(UP_src);
      span = arena->GetLineSpan(src->eval_spid);
      line_num = arena->GetLineNumber(span->line_id);
      outer_source = arena->GetLineSourceString(span->line_id);
      source_str = fmt69(line_num, outer_source);
    }
      break;
    case source_e::Trap: {
      source_str = str245;
    }
      break;
    case source_e::Variable: {
      source_str = str246;
    }
      break;
    default: {
      source_str = repr(src);
    }
  }
  f->write(fmt70(source_str, line_num, prefix, msg));
}

void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena) {
  mylib::Writer* f;

  f = mylib::Stderr();
  if (span_id == runtime::NO_SPID) {
    f->write(fmt71(prefix, msg));
  }
  else {
    _PrintWithSpanId(prefix, msg, span_id, arena, f);
  }
}

void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  Str* msg;
  int span_id;

  msg = err->UserErrorString();
  span_id = word_::SpanIdFromError(err);
  _PrintWithOptionalSpanId(prefix, msg, span_id, arena);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena) {
  PrettyPrintError(err, arena, str249);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  _pp(err, arena, prefix);
}

ErrorFormatter::ErrorFormatter(alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ErrorFormatter)) {
  this->arena = arena;
  this->last_spid = runtime::NO_SPID;
  this->spid_stack = Alloc<List<int>>();
}

void ErrorFormatter::PushLocation(int spid) {
  this->spid_stack->append(spid);
}

void ErrorFormatter::PopLocation() {
  this->spid_stack->pop();
}

int ErrorFormatter::CurrentLocation() {
  if (len(this->spid_stack)) {
    return this->spid_stack->index(-1);
  }
  else {
    return runtime::NO_SPID;
  }
}

void ErrorFormatter::PrefixPrint(Str* msg, Str* prefix, int span_id) {
  _PrintWithOptionalSpanId(prefix, msg, span_id, this->arena);
}

void ErrorFormatter::Print_(Str* msg) {
  Print_(msg, runtime::NO_SPID);
}

void ErrorFormatter::Print_(Str* msg, int span_id) {
  if (span_id == runtime::NO_SPID) {
    span_id = this->CurrentLocation();
  }
  _PrintWithOptionalSpanId(str250, msg, span_id, this->arena);
}

void ErrorFormatter::StderrLine(Str* msg) {
  println_stderr(msg);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err) {
  PrettyPrintError(err, str251);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix) {
  _pp(err, this->arena, prefix);
}

void PrintAst(syntax_asdl::command_t* node, arg_types::main* flag) {
  mylib::Writer* f;
  Str* afmt;
  format::ColorOutput* ast_f;
  hnode_asdl::hnode_t* tree;

  if (maybe_str_equals(flag->ast_format, str252)) {
    println_stderr(str253);
  }
  else {
    f = mylib::Stdout();
    afmt = flag->ast_format;
    if ((maybe_str_equals(afmt, str254) || maybe_str_equals(afmt, str255))) {
      ast_f = fmt::DetectConsoleOutput(f);
    }
    else {
      if ((maybe_str_equals(afmt, str256) || maybe_str_equals(afmt, str257))) {
        ast_f = Alloc<fmt::HtmlOutput>(f);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    if (str_contains(afmt, str258)) {
      tree = node->AbbreviatedTree();
    }
    else {
      tree = node->PrettyTree();
    }
    ast_f->FileHeader();
    fmt::PrintTree(tree, ast_f);
    ast_f->FileFooter();
    ast_f->write(str259);
  }
}

}  // define namespace ui

namespace util {  // define

UserExit::UserExit(int status) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(UserExit)) {
  this->status = status;
}

_DebugFile::_DebugFile() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_DebugFile)) {
  ;  // pass
}

void _DebugFile::log(Str* msg, void* args) {
  ;  // pass
}

void _DebugFile::write(Str* s) {
  ;  // pass
}

bool _DebugFile::isatty() {
  return false;
}

NullDebugFile::NullDebugFile() : _DebugFile() {
}

DebugFile::DebugFile(mylib::Writer* f) : _DebugFile() {
  this->f = f;
}

void DebugFile::log(Str* msg, void* args) {
  this->f->write(msg);
  this->f->write(str260);
  this->f->flush();
}

void DebugFile::write(Str* s) {
  this->f->write(s);
}

bool DebugFile::isatty() {
  return this->f->isatty();
}

}  // define namespace util

namespace args {  // define
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Int;
using runtime_asdl::value__Float;
using runtime_asdl::value__Str;
int String = 1;
int Int = 2;
int Float = 3;
int Bool = 4;

_Attributes::_Attributes(Dict<Str*, runtime_asdl::value_t*>* defaults) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Attributes)) {
  this->attrs = Alloc<Dict<Str*, runtime_asdl::value_t*>>();
  this->opt_changes = Alloc<List<Tuple2<Str*, bool>*>>();
  this->shopt_changes = Alloc<List<Tuple2<Str*, bool>*>>();
  this->show_options = false;
  this->actions = Alloc<List<Str*>>();
  this->saw_double_dash = false;
  for (DictIter<Str*, runtime_asdl::value_t*> it(defaults); !it.Done(); it.Next()) {
    Str* name = it.Key();
    runtime_asdl::value_t* v = it.Value();
    this->Set(name, v);
  }
}

void _Attributes::SetTrue(Str* name) {
  this->Set(name, Alloc<value::Bool>(true));
}

void _Attributes::Set(Str* name, runtime_asdl::value_t* val) {
  name = name->replace(str261, str262);
  this->attrs->set(name, val);
}

Reader::Reader(List<Str*>* argv, List<int>* spids) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Reader)) {
  this->argv = argv;
  this->spids = spids;
  this->n = len(argv);
  this->i = 0;
}

void Reader::Next() {
  this->i += 1;
}

Str* Reader::Peek() {
  if (this->i >= this->n) {
    return nullptr;
  }
  else {
    return this->argv->index(this->i);
  }
}

Tuple2<Str*, int> Reader::Peek2() {
  Str* no_str;

  if (this->i >= this->n) {
    no_str = nullptr;
    return (Tuple2<Str*, int>(no_str, -1));
  }
  else {
    return (Tuple2<Str*, int>(this->argv->index(this->i), this->spids->index(this->i)));
  }
}

Str* Reader::ReadRequired(Str* error_msg) {
  Str* arg;

  arg = this->Peek();
  if (arg == nullptr) {
    e_usage(dynamic_fmt_dummy(), this->_FirstSpanId());
  }
  this->Next();
  return arg;
}

Tuple2<Str*, int> Reader::ReadRequired2(Str* error_msg) {
  Str* arg;
  int spid;

  arg = this->Peek();
  if (arg == nullptr) {
    e_usage(dynamic_fmt_dummy(), this->_FirstSpanId());
  }
  spid = this->spids->index(this->i);
  this->Next();
  return (Tuple2<Str*, int>(arg, spid));
}

List<Str*>* Reader::Rest() {
  return this->argv->slice(this->i);
}

Tuple2<List<Str*>*, List<int>*> Reader::Rest2() {
  return (Tuple2<List<Str*>*, List<int>*>(this->argv->slice(this->i), this->spids->slice(this->i)));
}

bool Reader::AtEnd() {
  return this->i >= this->n;
}

int Reader::_FirstSpanId() {
  if (this->spids) {
    return this->spids->index(0);
  }
  else {
    return runtime::NO_SPID;
  }
}

int Reader::SpanId() {
  int i;

  if (this->spids) {
    if (this->i == this->n) {
      i = (this->n - 1);
    }
    else {
      i = this->i;
    }
    return this->spids->index(i);
  }
  else {
    return runtime::NO_SPID;
  }
}

_Action::_Action() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Action)) {
  ;  // pass
}

bool _Action::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  throw Alloc<NotImplementedError>();
}

_ArgAction::_ArgAction(Str* name, bool quit_parsing_flags, List<Str*>* valid) {
  this->name = name;
  this->quit_parsing_flags = quit_parsing_flags;
  this->valid = valid;
}

runtime_asdl::value_t* _ArgAction::_Value(Str* arg, int span_id) {
  throw Alloc<NotImplementedError>();
}

bool _ArgAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  Str* arg;
  runtime_asdl::value_t* val;

  if (attached_arg != nullptr) {
    arg = attached_arg;
  }
  else {
    arg_r->Next();
    arg = arg_r->Peek();
    if (arg == nullptr) {
      e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
    }
  }
  val = this->_Value(arg, arg_r->SpanId());
  out->Set(this->name, val);
  return this->quit_parsing_flags;
}

SetToInt::SetToInt(Str* name) : _ArgAction(name, false, nullptr) {
}

runtime_asdl::value_t* SetToInt::_Value(Str* arg, int span_id) {
  int i;

  try {
    i = to_int(arg);
  }
  catch (ValueError*) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  if (i < 0) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Int>(i);
}

SetToFloat::SetToFloat(Str* name) : _ArgAction(name, false, nullptr) {
}

runtime_asdl::value_t* SetToFloat::_Value(Str* arg, int span_id) {
  double f;

  try {
    f = to_float(arg);
  }
  catch (ValueError*) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  if (f < 0) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Float>(f);
}

SetToString::SetToString(Str* name, bool quit_parsing_flags, List<Str*>* valid) : _ArgAction(name, quit_parsing_flags, valid) {
}

runtime_asdl::value_t* SetToString::_Value(Str* arg, int span_id) {
  if ((this->valid != nullptr and !list_contains(this->valid, arg))) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Str>(arg);
}

SetAttachedBool::SetAttachedBool(Str* name) {
  this->name = name;
}

bool SetAttachedBool::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;

  if (attached_arg != nullptr) {
    if ((str_equals(attached_arg, str278) || str_equals(attached_arg, str279) || str_equals(attached_arg, str280) || str_equals(attached_arg, str281))) {
      b = false;
    }
    else {
      if ((str_equals(attached_arg, str282) || str_equals(attached_arg, str283) || str_equals(attached_arg, str284) || str_equals(attached_arg, str285))) {
        b = true;
      }
      else {
        e_usage(fmt72(attached_arg));
      }
    }
  }
  else {
    b = true;
  }
  out->Set(this->name, Alloc<value::Bool>(b));
  return false;
}

SetToTrue::SetToTrue(Str* name) {
  this->name = name;
}

bool SetToTrue::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  out->SetTrue(this->name);
  return false;
}

SetOption::SetOption(Str* name) {
  this->name = name;
}

bool SetOption::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;

  b = maybe_str_equals(attached_arg, str287);
  out->opt_changes->append((Alloc<Tuple2<Str*, bool>>(this->name, b)));
  return false;
}

SetNamedOption::SetNamedOption(bool shopt) {
  this->names = Alloc<List<Str*>>();
  this->shopt = shopt;
}

void SetNamedOption::Add(Str* name) {
  this->names->append(name);
}

bool SetNamedOption::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;
  Str* arg;
  Str* attr_name;
  List<Tuple2<Str*, bool>*>* changes;

  b = maybe_str_equals(attached_arg, str288);
  arg_r->Next();
  arg = arg_r->Peek();
  if (arg == nullptr) {
    out->show_options = true;
    return true;
  }
  attr_name = arg;
  if (!list_contains(this->names, attr_name)) {
    e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
  }
  changes = this->shopt ? out->shopt_changes : out->opt_changes;
  changes->append((Alloc<Tuple2<Str*, bool>>(attr_name, b)));
  return false;
}

SetAction::SetAction(Str* name) {
  this->name = name;
}

bool SetAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  out->actions->append(this->name);
  return false;
}

SetNamedAction::SetNamedAction() {
  this->names = Alloc<List<Str*>>();
}

void SetNamedAction::Add(Str* name) {
  this->names->append(name);
}

bool SetNamedAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  Str* arg;
  Str* attr_name;

  arg_r->Next();
  arg = arg_r->Peek();
  if (arg == nullptr) {
    e_usage(str290);
  }
  attr_name = arg;
  if (!list_contains(this->names, attr_name)) {
    e_usage(fmt73(arg));
  }
  out->actions->append(attr_name);
  return false;
}

args::_Attributes* Parse(flag_spec::_FlagSpec* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  Str* arg;
  args::_Action* action;
  int n;
  Str* ch;
  Str* attached_arg;

  out = Alloc<_Attributes>(spec->defaults);
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    if (maybe_str_equals(arg, str292)) {
      out->saw_double_dash = true;
      arg_r->Next();
      break;
    }
    if ((len(spec->actions_long) and arg->startswith(str293))) {
      action = spec->actions_long->get(arg->slice(2));
      if (action == nullptr) {
        e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
      }
      action->OnMatch(nullptr, arg_r, out);
      arg_r->Next();
      continue;
    }
    else {
      if ((arg->startswith(str295) and len(arg) > 1)) {
        n = len(arg);
        for (int i = 1; i < n; ++i) {
          ch = arg->index(i);
          if (str_equals(ch, str296)) {
            ch = str297;
          }
          if (list_contains(spec->plus_flags, ch)) {
            out->Set(ch, Alloc<value::Str>(str298));
            continue;
          }
          if (list_contains(spec->arity0, ch)) {
            out->SetTrue(ch);
            continue;
          }
          if (dict_contains(spec->arity1, ch)) {
            action = spec->arity1->index(ch);
            attached_arg = i < (n - 1) ? arg->slice((i + 1)) : nullptr;
            action->OnMatch(attached_arg, arg_r, out);
            break;
          }
          e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
        }
        arg_r->Next();
      }
      else {
        if ((len(spec->plus_flags) and (arg->startswith(str301) and len(arg) > 1))) {
          n = len(arg);
          for (int i = 1; i < n; ++i) {
            ch = arg->index(i);
            if (list_contains(spec->plus_flags, ch)) {
              out->Set(ch, Alloc<value::Str>(str302));
              continue;
            }
            e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
          }
          arg_r->Next();
        }
        else {
          break;
        }
      }
    }
  }
  return out;
}

args::_Attributes* ParseLikeEcho(flag_spec::_FlagSpec* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  Str* arg;
  Str* chars;
  bool done;

  out = Alloc<_Attributes>(spec->defaults);
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    chars = arg->slice(1);
    if ((arg->startswith(str305) and len(chars))) {
      done = false;
      for (StrIter it(chars); !it.Done(); it.Next()) {
        Str* c = it.Value();
        if (!list_contains(spec->arity0, c)) {
          done = true;
          break;
        }
      }
      if (done) {
        break;
      }
      for (StrIter it(chars); !it.Done(); it.Next()) {
        Str* ch = it.Value();
        out->SetTrue(ch);
      }
    }
    else {
      break;
    }
    arg_r->Next();
  }
  return out;
}

args::_Attributes* ParseMore(flag_spec::_FlagSpecAndMore* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  bool quit;
  Str* arg;
  args::_Action* action;
  Str* char0;
  Str* attached_arg;

  out = Alloc<_Attributes>(spec->defaults);
  quit = false;
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    if (maybe_str_equals(arg, str306)) {
      out->saw_double_dash = true;
      arg_r->Next();
      break;
    }
    if (arg->startswith(str307)) {
      action = spec->actions_long->get(arg->slice(2));
      if (action == nullptr) {
        e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
      }
      action->OnMatch(nullptr, arg_r, out);
      arg_r->Next();
      continue;
    }
    if (((arg->startswith(str309) or arg->startswith(str310)) and len(arg) > 1)) {
      char0 = arg->index(0);
      for (StrIter it(arg->slice(1)); !it.Done(); it.Next()) {
        Str* ch = it.Value();
        action = spec->actions_short->get(ch);
        if (action == nullptr) {
          e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
        }
        attached_arg = list_contains(spec->plus_flags, ch) ? char0 : nullptr;
        quit = action->OnMatch(attached_arg, arg_r, out);
      }
      arg_r->Next();
      if (quit) {
        break;
      }
      else {
        continue;
      }
    }
    break;
  }
  return out;
}
Str* _FLAG_ERE = str313;

args::_Attributes* ParseOil(flag_spec::_OilFlagSpec* spec, args::Reader* arg_r) {
  throw Alloc<AssertionError>();
}

}  // define namespace args

namespace lexer {  // define
using syntax_asdl::Token;
using syntax_asdl::line_span;
using types_asdl::lex_mode_t;
using id_kind_asdl::Id_t;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
Token gobj0(Id::Eol_Tok, runtime::NO_SPID, nullptr);
syntax_asdl::Token* _EOL_TOK = &gobj0;
LineLexer::LineLexer(Str* line, alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(LineLexer)) {
  this->arena = arena;
  this->arena_skip = false;
  this->last_span_id = runtime::NO_SPID;
  this->Reset(line, -1, 0);
}

void LineLexer::Reset(Str* line, int line_id, int line_pos) {
  this->line = line;
  this->line_id = line_id;
  this->line_pos = line_pos;
}

bool LineLexer::MaybeUnreadOne() {
  if (this->line_pos == 0) {
    return false;
  }
  else {
    this->line_pos -= 1;
    this->arena_skip = true;
    return true;
  }
}

int LineLexer::GetSpanIdForEof() {
  int line_id;

  if (this->line_id == -1) {
    line_id = this->arena->AddLine(str315, 0);
  }
  else {
    line_id = this->line_id;
  }
  return this->arena->AddLineSpan(line_id, this->line_pos, 0);
}

int LineLexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  int pos;
  int n;
  int tok_type;
  int end_pos;

  pos = this->line_pos;
  n = len(this->line);
  while (true) {
    if (pos == n) {
      return Id::Unknown_Tok;
    }
    Tuple2<int, int> tup1 = match::OneToken(lex_mode, this->line, pos);
    tok_type = tup1.at0();
    end_pos = tup1.at1();
    if (tok_type != Id::WS_Space) {
      break;
    }
    pos = end_pos;
  }
  return tok_type;
}

syntax_asdl::Token* LineLexer::Read(types_asdl::lex_mode_t lex_mode) {
  Str* line;
  int line_pos;
  int tok_type;
  int end_pos;
  id_kind_asdl::Kind_t kind;
  Str* tok_val;
  int span_id;
  int tok_len;
  syntax_asdl::Token* t;

  line = this->line;
  line_pos = this->line_pos;
  Tuple2<int, int> tup2 = match::OneToken(lex_mode, line, line_pos);
  tok_type = tup2.at0();
  end_pos = tup2.at1();
  if (tok_type == Id::Eol_Tok) {
    return _EOL_TOK;
  }
  kind = consts::GetKind(tok_type);
  if ((kind == Kind::Arith || kind == Kind::Op || kind == Kind::WS || kind == Kind::Ignored || kind == Kind::Eof)) {
    tok_val = nullptr;
  }
  else {
    tok_val = line->slice(line_pos, end_pos);
  }
  if (this->arena_skip) {
    span_id = this->last_span_id;
    this->arena_skip = false;
  }
  else {
    tok_len = (end_pos - line_pos);
    span_id = this->arena->AddLineSpan(this->line_id, line_pos, tok_len);
    this->last_span_id = span_id;
  }
  t = Alloc<Token>(tok_type, span_id, tok_val);
  this->line_pos = end_pos;
  return t;
}

Lexer::Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Lexer)) {
  this->line_lexer = line_lexer;
  this->line_reader = line_reader;
  this->line_id = -1;
  this->translation_stack = Alloc<List<Tuple2<int, int>*>>();
  this->emit_comp_dummy = false;
}

void Lexer::ResetInputObjects() {
  this->line_lexer->Reset(str316, -1, 0);
}

bool Lexer::MaybeUnreadOne() {
  return this->line_lexer->MaybeUnreadOne();
}

int Lexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  return this->line_lexer->LookAhead(lex_mode);
}

void Lexer::EmitCompDummy() {
  this->emit_comp_dummy = true;
}

void Lexer::PushHint(int old_id, int new_id) {
  this->translation_stack->append((Alloc<Tuple2<int, int>>(old_id, new_id)));
}

syntax_asdl::Token* Lexer::_Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;
  int line_id;
  Str* line;
  int line_pos;
  int span_id;
  int id_;
  int old_id;
  int new_id;

  t = this->line_lexer->Read(lex_mode);
  if (t->id == Id::Eol_Tok) {
    Tuple3<int, Str*, int> tup3 = this->line_reader->GetLine();
    line_id = tup3.at0();
    line = tup3.at1();
    line_pos = tup3.at2();
    if (line == nullptr) {
      span_id = this->line_lexer->GetSpanIdForEof();
      if (this->emit_comp_dummy) {
        id_ = Id::Lit_CompDummy;
        this->emit_comp_dummy = false;
      }
      else {
        id_ = Id::Eof_Real;
      }
      t = Alloc<Token>(id_, span_id, str317);
      return t;
    }
    this->line_lexer->Reset(line, line_id, line_pos);
    t = this->line_lexer->Read(lex_mode);
  }
  if (len(this->translation_stack)) {
    Tuple2<int, int>* tup4 = this->translation_stack->index(-1);
    old_id = tup4->at0();
    new_id = tup4->at1();
    if (t->id == old_id) {
      this->translation_stack->pop();
      t->id = new_id;
    }
  }
  return t;
}

syntax_asdl::Token* Lexer::Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;

  while (true) {
    t = this->_Read(lex_mode);
    if (t->id != Id::Ignored_LineCont) {
      break;
    }
  }
  return t;
}

}  // define namespace lexer

namespace location {  // define
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__AndOr;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__Sentence;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__If;
using syntax_asdl::command__Case;
using syntax_asdl::command__TimeBlock;
using syntax_asdl::BraceGroup;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;

int SpanForCommand(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  int tag;

  UP_node = node;
  tag = node->tag_();
  if (tag == command_e::Sentence) {
    command__Sentence* node = static_cast<command__Sentence*>(UP_node);
    return node->terminator->span_id;
  }
  if (tag == command_e::Simple) {
    command__Simple* node = static_cast<command__Simple*>(UP_node);
    if (len(node->words)) {
      return word_::LeftMostSpanForWord(node->words->index(0));
    }
    else {
      if (len(node->redirects)) {
        return node->redirects->index(0)->op->span_id;
      }
    }
  }
  if (tag == command_e::Pipeline) {
    command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::AndOr) {
    command__AndOr* node = static_cast<command__AndOr*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::DoGroup) {
    command__DoGroup* node = static_cast<command__DoGroup*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::BraceGroup) {
    BraceGroup* node = static_cast<BraceGroup*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::Subshell) {
    command__Subshell* node = static_cast<command__Subshell*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::WhileUntil) {
    command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::If) {
    command__If* node = static_cast<command__If*>(UP_node);
    return node->arms->index(0)->spids->index(0);
  }
  if (tag == command_e::Case) {
    command__Case* node = static_cast<command__Case*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::TimeBlock) {
    command__TimeBlock* node = static_cast<command__TimeBlock*>(UP_node);
    return node->spids->index(0);
  }
  return runtime::NO_SPID;
}

int SpanForArithExpr(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      Token* token = static_cast<Token*>(UP_node);
      return token->span_id;
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_node);
      return word_::LeftMostSpanForWord(w);
    }
      break;
  }
  return runtime::NO_SPID;
}

}  // define namespace location

namespace parse_lib {  // define
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::expr_t;
using syntax_asdl::word_t;
using syntax_asdl::redir;
using syntax_asdl::arg_list;
using syntax_asdl::name_type;
using types_asdl::lex_mode_e;

_BaseTrail::_BaseTrail() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_BaseTrail)) {
  this->words = Alloc<List<syntax_asdl::compound_word*>>();
  this->redirects = Alloc<List<syntax_asdl::redir*>>();
  this->tokens = Alloc<List<syntax_asdl::Token*>>();
  this->alias_words = Alloc<List<syntax_asdl::compound_word*>>();
  this->_expanding_alias = false;
}

void _BaseTrail::Clear() {
  ;  // pass
}

void _BaseTrail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects) {
  ;  // pass
}

void _BaseTrail::AppendToken(syntax_asdl::Token* token) {
  ;  // pass
}

void _BaseTrail::BeginAliasExpansion() {
  ;  // pass
}

void _BaseTrail::EndAliasExpansion() {
  ;  // pass
}

ctx_Alias::ctx_Alias(parse_lib::_BaseTrail* trail) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Alias)) {
  trail->_expanding_alias = true;
  this->trail = trail;
}

ctx_Alias::~ctx_Alias(){
  this->trail->_expanding_alias = false;
}

Trail::Trail() : _BaseTrail() {
}

void Trail::Clear() {
  this->words->clear();
  this->redirects->clear();
  this->tokens->clear();
  this->alias_words->clear();
}

void Trail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects) {
  if (this->_expanding_alias) {
    this->alias_words = words;
    return ;
  }
  this->words = words;
  this->redirects = redirects;
}

void Trail::AppendToken(syntax_asdl::Token* token) {
  if (this->_expanding_alias) {
    return ;
  }
  this->tokens->append(token);
}

ParseContext::ParseContext(alloc::Arena* arena, optview::Parse* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ParseContext)) {
  this->arena = arena;
  this->parse_opts = parse_opts;
  this->aliases = aliases;
  this->e_parser = Alloc<expr_parse::ExprParser>(this, oil_grammar);
  if (oil_grammar) {
    this->tr = Alloc<expr_to_ast::Transformer>(oil_grammar);
  }
  else {
    this->tr = nullptr;
  }
  this->parsing_expr = false;
  this->trail = Alloc<_BaseTrail>();
  this->one_pass_parse = false;
}

void ParseContext::Init_Trail(parse_lib::_BaseTrail* trail) {
  this->trail = trail;
}

void ParseContext::Init_OnePassParse(bool b) {
  this->one_pass_parse = b;
}

lexer::Lexer* ParseContext::_MakeLexer(reader::_Reader* line_reader) {
  lexer::LineLexer* line_lexer;

  line_lexer = Alloc<lexer::LineLexer>(str319, this->arena);
  return Alloc<lexer::Lexer>(line_lexer, line_reader);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader) {
  return MakeOshParser(line_reader, false);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy) {
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  lx = this->_MakeLexer(line_reader);
  if (emit_comp_dummy) {
    lx->EmitCompDummy();
  }
  w_parser = Alloc<word_parse::WordParser>(this, lx, line_reader);
  c_parser = Alloc<cmd_parse::CommandParser>(this, w_parser, lx, line_reader);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForHereDoc(reader::_Reader* line_reader) {
  lexer::Lexer* lx;

  lx = this->_MakeLexer(line_reader);
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

word_parse::WordParser* ParseContext::MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader) {
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

tdop::TdopParser* ParseContext::MakeArithParser(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  tdop::TdopParser* a_parser;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  w_parser = Alloc<word_parse::WordParser>(this, lx, line_reader);
  w_parser->Init(lex_mode_e::Arith);
  a_parser = Alloc<tdop::TdopParser>(arith_parse::Spec(), w_parser, this->parse_opts);
  return a_parser;
}

cmd_parse::CommandParser* ParseContext::MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id) {
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  w_parser = Alloc<word_parse::WordParser>(this, lexer, line_reader);
  c_parser = Alloc<cmd_parse::CommandParser>(this, w_parser, lexer, line_reader);
  c_parser->Init_EofId(eof_id);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForPlugin(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

Tuple2<pnode::PNode*, syntax_asdl::Token*> ParseContext::_ParseOil(lexer::Lexer* lexer, int start_symbol) {
  this->parsing_expr = true;
  try {
    return this->e_parser->Parse(lexer, start_symbol);
  }
  catch (std::exception) { }}

Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseContext::ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__VarDecl* ast_node;

  if (this->parsing_expr) {
    p_die(fmt74(), kw_token);
  }
  this->parsing_expr = true;
  try {
    Tuple2<pnode::PNode*, syntax_asdl::Token*> tup0 = this->e_parser->Parse(lexer, grammar_nt::oil_var_decl);
    pnode = tup0.at0();
    last_token = tup0.at1();
  }
  catch (std::exception) { }  ast_node = this->tr->MakeVarDecl(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParseContext::ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__PlaceMutation* ast_node;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup1 = this->e_parser->Parse(lexer, grammar_nt::oil_place_mutation);
  pnode = tup1.at0();
  last_token = tup1.at1();
  ast_node = this->tr->MakePlaceMutation(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>(ast_node, last_token));
}

syntax_asdl::Token* ParseContext::ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  if (this->parsing_expr) {
    throw Alloc<AssertionError>();
  }
  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup2 = this->_ParseOil(lexer, grammar_nt::oil_arglist);
  pnode = tup2.at0();
  last_token = tup2.at1();
  this->tr->ArgList(pnode, out);
  return last_token;
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilExpr(lexer::Lexer* lexer, int start_symbol) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::expr_t* ast_node;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup3 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup3.at0();
  last_token = tup3.at1();
  ast_node = this->tr->Expr(pnode);
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilForExpr(lexer::Lexer* lexer, int start_symbol) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup4 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup4.at0();
  last_token = tup4.at1();
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> tup5 = this->tr->OilForExpr(pnode);
  lvalue = tup5.at0();
  iterable = tup5.at1();
  return (Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>(lvalue, iterable, last_token));
}

syntax_asdl::Token* ParseContext::ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup6 = this->e_parser->Parse(lexer, grammar_nt::oil_proc);
  pnode = tup6.at0();
  last_token = tup6.at1();
  out->sig = this->tr->Proc(pnode);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup7 = this->e_parser->Parse(lexer, grammar_nt::named_func);
  pnode = tup7.at0();
  last_token = tup7.at1();
  this->tr->NamedFunc(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseDataType(lexer::Lexer* lexer, syntax_asdl::command__Data* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup8 = this->e_parser->Parse(lexer, grammar_nt::tea_data);
  pnode = tup8.at0();
  last_token = tup8.at1();
  this->tr->Data(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseEnum(lexer::Lexer* lexer, syntax_asdl::command__Enum* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup9 = this->e_parser->Parse(lexer, grammar_nt::tea_enum);
  pnode = tup9.at0();
  last_token = tup9.at1();
  this->tr->Enum(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseClass(lexer::Lexer* lexer, syntax_asdl::command__Class* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup10 = this->e_parser->Parse(lexer, grammar_nt::tea_class);
  pnode = tup10.at0();
  last_token = tup10.at1();
  this->tr->Class(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseImport(lexer::Lexer* lexer, syntax_asdl::command__Import* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup11 = this->e_parser->Parse(lexer, grammar_nt::tea_import);
  pnode = tup11.at0();
  last_token = tup11.at1();
  this->tr->Import(pnode, out);
  return last_token;
}

}  // define namespace parse_lib

namespace reader {  // define

_Reader::_Reader(alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Reader)) {
  this->arena = arena;
  this->line_num = 1;
}

Str* _Reader::_GetLine() {
  throw Alloc<NotImplementedError>();
}

Tuple3<int, Str*, int> _Reader::GetLine() {
  Str* line;
  Str* eof_line;
  int line_id;

  line = this->_GetLine();
  if (line == nullptr) {
    eof_line = nullptr;
    return (Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  line_id = this->arena->AddLine(line, this->line_num);
  this->line_num += 1;
  return (Tuple3<int, Str*, int>(line_id, line, 0));
}

void _Reader::Reset() {
  ;  // pass
}

bool _Reader::LastLineHint() {
  return false;
}

DisallowedLineReader::DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token) : _Reader(arena) {
  this->blame_token = blame_token;
}

Str* DisallowedLineReader::_GetLine() {
  p_die(fmt75(), this->blame_token);
}

FileLineReader::FileLineReader(mylib::LineReader* f, alloc::Arena* arena) : _Reader(arena) {
  this->f = f;
  this->last_line_hint = false;
}

Str* FileLineReader::_GetLine() {
  Str* line;

  line = this->f->readline();
  if (len(line) == 0) {
    return nullptr;
  }
  if (!line->endswith(str322)) {
    this->last_line_hint = true;
  }
  return line;
}

bool FileLineReader::LastLineHint() {
  return this->last_line_hint;
}

reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena) {
  return Alloc<FileLineReader>(Alloc<mylib::BufLineReader>(s), arena);
}

VirtualLineReader::VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena) : _Reader(arena) {
  this->lines = lines;
  this->num_lines = len(lines);
  this->pos = 0;
}

Tuple3<int, Str*, int> VirtualLineReader::GetLine() {
  Str* eof_line;
  int line_id;
  Str* line;
  int start_offset;

  if (this->pos == this->num_lines) {
    eof_line = nullptr;
    return (Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  Tuple3<int, Str*, int>* tup0 = this->lines->index(this->pos);
  line_id = tup0->at0();
  line = tup0->at1();
  start_offset = tup0->at2();
  this->pos += 1;
  return (Tuple3<int, Str*, int>(line_id, line, start_offset));
}

}  // define namespace reader

namespace expr_parse {  // define
using syntax_asdl::Token;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::compound_word;
using syntax_asdl::word_part_t;
namespace word_e = syntax_asdl::word_e;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_str;
using types_asdl::lex_mode_e;

int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok) {
  int typ;
  Str* type_str;

  if (tok->id == Id::Expr_Name) {
    if (dict_contains(gr->keywords, tok->val)) {
      return gr->keywords->index(tok->val);
    }
  }
  typ = tok->id;
  if (dict_contains(gr->tokens, typ)) {
    return gr->tokens->index(typ);
  }
  type_str = tok->id == Id::Unknown_Tok ? str323 : fmt76(ui::PrettyId(tok->id));
  p_die(fmt77(type_str), tok);
}
Dict<int, int> gdict0(std::initializer_list<int>{}, std::initializer_list<int>{});
Dict<int, int>* _OTHER_BALANCE = &gdict0;

syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex) {
  syntax_asdl::Token* last_token;
  bool prev_was_newline;
  int balance;
  syntax_asdl::Token* tok;
  int ilabel;

  last_token = nullptr;
  prev_was_newline = false;
  balance = 0;
  while (true) {
    if (last_token) {
      tok = last_token;
      last_token = nullptr;
    }
    else {
      tok = lex->Read(lex_mode_e::Expr);
    }
    if (consts::GetKind(tok->id) == Kind::Ignored) {
      continue;
    }
    if (tok->id == Id::Op_Newline) {
      if (balance > 0) {
        continue;
      }
      if (prev_was_newline) {
        continue;
      }
      prev_was_newline = true;
    }
    else {
      prev_was_newline = false;
    }
    balance += _OTHER_BALANCE->get(tok->id, 0);
    ilabel = _Classify(gr, tok);
    if (p->addtoken(tok->id, tok, ilabel)) {
      return tok;
    }
  }
}

ExprParser::ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ExprParser)) {
  this->parse_ctx = parse_ctx;
  this->gr = gr;
  this->push_parser = Alloc<parse::Parser>(gr);
}

Tuple2<pnode::PNode*, syntax_asdl::Token*> ExprParser::Parse(lexer::Lexer* lexer, int start_symbol) {
  syntax_asdl::Token* last_token;

  this->push_parser->setup(start_symbol);
  try {
    last_token = _PushOilTokens(this->parse_ctx, this->gr, this->push_parser, lexer);
  }
  catch (parse::ParseError* e) {
    p_die(fmt78(ui::PrettyId(e->tok->id)), e->tok);
  }
  return (Tuple2<pnode::PNode*, syntax_asdl::Token*>(this->push_parser->rootnode, last_token));
}

}  // define namespace expr_parse

namespace expr_to_ast {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace command = syntax_asdl::command;
namespace expr = syntax_asdl::expr;
namespace expr_e = syntax_asdl::expr_e;
using syntax_asdl::expr_t;
using syntax_asdl::expr__Var;
using syntax_asdl::expr__Dict;
using syntax_asdl::expr_context_e;
namespace re = syntax_asdl::re;
using syntax_asdl::re_t;
namespace re_repeat = syntax_asdl::re_repeat;
using syntax_asdl::re_repeat_t;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;
using syntax_asdl::posix_class;
using syntax_asdl::perl_class;
using syntax_asdl::name_type;
namespace place_expr = syntax_asdl::place_expr;
namespace place_expr_e = syntax_asdl::place_expr_e;
using syntax_asdl::place_expr_t;
using syntax_asdl::type_expr_t;
using syntax_asdl::comprehension;
using syntax_asdl::subscript;
using syntax_asdl::attribute;
namespace proc_sig = syntax_asdl::proc_sig;
using syntax_asdl::proc_sig_t;
using syntax_asdl::param;
using syntax_asdl::named_arg;
using syntax_asdl::arg_list;
using syntax_asdl::variant;
namespace variant_type = syntax_asdl::variant_type;
using syntax_asdl::variant_type_t;
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* PERL_CLASSES = &gdict0;
List<Str*> glist1 = {str327, str328, str329, str330, str331, str332, str333, str334, str335, str336, str337, str338};
List<Str*>* POSIX_CLASSES = &glist1;
Str* RANGE_POINT_TOO_LONG = str339;
int NT_OFFSET = 256;

bool ISNONTERMINAL(int x) {
  return x >= NT_OFFSET;
}

Transformer::Transformer(grammar::Grammar* gr) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Transformer)) {
  this->number2symbol = gr->number2symbol;
}

syntax_asdl::expr_t* Transformer::_AssocBinary(List<pnode::PNode*>* children) {
  int n;
  syntax_asdl::expr_t* left;
  pnode::PNode* op;
  syntax_asdl::expr_t* right;

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  left = this->Expr(children->index(0));
  op = children->index(1);
  if (n == 3) {
    right = this->Expr(children->index(2));
  }
  else {
    right = this->_AssocBinary(children->slice(2));
  }
  return Alloc<expr::Binary>(op->tok, left, right);
}

syntax_asdl::expr_t* Transformer::_Trailer(syntax_asdl::expr_t* base, pnode::PNode* p_trailer) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* op_tok;
  syntax_asdl::arg_list* arglist;
  pnode::PNode* p;
  pnode::PNode* p_args;
  List<syntax_asdl::expr_t*>* indices;
  int n;
  pnode::PNode* a;
  syntax_asdl::Token* attr;

  children = p_trailer->children;
  op_tok = children->index(0)->tok;
  if (op_tok->id == Id::Op_LParen) {
    arglist = Alloc<arg_list>();
    if (len(children) == 2) {
      return Alloc<expr::FuncCall>(base, arglist);
    }
    p = children->index(1);
    this->_Arglist(p->children, arglist);
    return Alloc<expr::FuncCall>(base, arglist);
  }
  if (op_tok->id == Id::Op_LBracket) {
    p_args = children->index(1);
    indices = Alloc<List<syntax_asdl::expr_t*>>();
    n = len(p_args->children);
    for (int i = 0; i < n; i += 2) {
      a = p_args->children->index(i);
      indices->append(this->_Subscript(a->children));
    }
    return Alloc<subscript>(base, indices);
  }
  if ((op_tok->id == Id::Expr_Dot || op_tok->id == Id::Expr_RArrow || op_tok->id == Id::Expr_DColon)) {
    attr = children->index(1)->tok;
    return Alloc<attribute>(base, op_tok, attr, expr_context_e::Store);
  }
  throw Alloc<AssertionError>();
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> Transformer::_DictPair(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;
  syntax_asdl::Token* tok0;
  int id_;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      key = this->Expr(children->index(0));
    }
    else {
      if (typ == grammar_nt::dq_string) {
        key = this->Expr(children->index(0));
      }
    }
    value = this->Expr(children->index(2));
    return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  tok0 = children->index(0)->tok;
  id_ = tok0->id;
  if (id_ == Id::Expr_Name) {
    key = Alloc<expr::Const>(tok0);
    if (len(children) >= 3) {
      value = this->Expr(children->index(2));
    }
    else {
      value = Alloc<expr::Implicit>();
    }
  }
  if (id_ == Id::Op_LBracket) {
    key = this->Expr(children->index(1));
    value = this->Expr(children->index(4));
    return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
}

syntax_asdl::expr__Dict* Transformer::_Dict(pnode::PNode* p_node) {
  List<syntax_asdl::expr_t*>* keys;
  List<syntax_asdl::expr_t*>* values;
  List<pnode::PNode*>* children;
  int n;
  int i;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;

  if (!ISNONTERMINAL(p_node->typ)) {
    return Alloc<expr::Dict>(Alloc<List<syntax_asdl::expr_t*>>(), Alloc<List<syntax_asdl::expr_t*>>());
  }
  keys = Alloc<List<syntax_asdl::expr_t*>>();
  values = Alloc<List<syntax_asdl::expr_t*>>();
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> tup2 = this->_DictPair(children->index(i));
    key = tup2.at0();
    value = tup2.at1();
    keys->append(key);
    values->append(value);
    i += 2;
  }
  return Alloc<expr::Dict>(keys, values);
}

syntax_asdl::expr_t* Transformer::_Tuple(List<pnode::PNode*>* children) {
  int n;
  List<syntax_asdl::expr_t*>* elts;
  pnode::PNode* p_node;

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  if (n == 2) {
    p_die(fmt79(), children->index(1)->tok);
  }
  elts = Alloc<List<syntax_asdl::expr_t*>>();
  for (int i = 0; i < n; i += 2) {
    p_node = children->index(i);
    elts->append(this->Expr(p_node));
  }
  return Alloc<expr::Tuple>(elts, expr_context_e::Store);
}

syntax_asdl::expr_t* Transformer::_TestlistComp(pnode::PNode* p_node, int id0) {
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  List<syntax_asdl::expr_t*>* elts;

  children = p_node->children;
  n = len(children);
  if ((n > 1 and children->index(1)->typ == grammar_nt::comp_for)) {
    elt = this->Expr(children->index(0));
    comp = this->_CompFor(children->index(1));
    if (id0 == Id::Op_LParen) {
      return Alloc<expr::GeneratorExp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
    }
    if (id0 == Id::Op_LBracket) {
      return Alloc<expr::ListComp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
    }
    throw Alloc<AssertionError>();
  }
  if (id0 == Id::Op_LParen) {
    if (len(children) == 1) {
      return this->Expr(children->index(0));
    }
    if (children->index(1)->tok->id == Id::Arith_Comma) {
      return this->_Tuple(children);
    }
    throw Alloc<NotImplementedError>(str341);
  }
  if (id0 == Id::Op_LBracket) {
    elts = Alloc<List<syntax_asdl::expr_t*>>();
    for (int i = 0; i < n; i += 2) {
      elts->append(this->Expr(children->index(i)));
    }
    return Alloc<expr::List>(elts, expr_context_e::Store);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::expr_t* Transformer::_Atom(List<pnode::PNode*>* children) {
  syntax_asdl::Token* tok;
  int id_;
  int n;
  int i;
  syntax_asdl::re_t* r;
  List<syntax_asdl::Token*>* flags;
  syntax_asdl::Token* trans_pref;

  tok = children->index(0)->tok;
  id_ = tok->id;
  n = len(children);
  if (id_ == Id::Op_LParen) {
    if (n == 2) {
      return Alloc<expr::Tuple>(Alloc<List<syntax_asdl::expr_t*>>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBracket) {
    if (n == 2) {
      return Alloc<expr::List>(Alloc<List<syntax_asdl::expr_t*>>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBrace) {
    i = 1;
    if (children->index(i)->tok->id == Id::Op_Newline) {
      i += 1;
    }
    return this->_Dict(children->index(i));
  }
  if (id_ == Id::Arith_Slash) {
    r = this->_Regex(children->index(1));
    flags = Alloc<List<syntax_asdl::Token*>>();
    trans_pref = nullptr;
    return Alloc<expr::RegexLiteral>(children->index(0)->tok, r, flags, trans_pref);
  }
  if (id_ == Id::Expr_Func) {
    return Alloc<expr::Lambda>(Alloc<List<syntax_asdl::name_type*>>(), Alloc<expr::Implicit>());
  }
  throw Alloc<NotImplementedError>(Id_str(id_));
}

List<syntax_asdl::name_type*>* Transformer::_NameTypeList(pnode::PNode* p_node) {
  List<syntax_asdl::name_type*>* results;
  int n;
  pnode::PNode* p;
  List<pnode::PNode*>* children;
  syntax_asdl::type_expr_t* typ;
  syntax_asdl::name_type* node;

  results = Alloc<List<syntax_asdl::name_type*>>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    children = p->children;
    if (len(children) == 2) {
      typ = this->_TypeExpr(children->index(1));
    }
    else {
      typ = nullptr;
    }
    node = Alloc<name_type>(children->index(0)->tok, typ);
    results->append(node);
  }
  return results;
}

syntax_asdl::comprehension* Transformer::_CompFor(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::expr_t* cond;

  children = p_node->children;
  lhs = this->_NameTypeList(children->index(1));
  iterable = this->Expr(children->index(3));
  if (len(children) >= 6) {
    cond = this->Expr(children->index(5));
  }
  else {
    cond = nullptr;
  }
  return Alloc<comprehension>(lhs, iterable, cond);
}

syntax_asdl::expr_t* Transformer::_CompareChain(List<pnode::PNode*>* children) {
  List<syntax_asdl::speck*>* cmp_ops;
  List<syntax_asdl::expr_t*>* comparators;
  syntax_asdl::expr_t* left;
  int i;
  int n;
  List<pnode::PNode*>* op_children;
  syntax_asdl::Token* tok1;
  syntax_asdl::speck* op;

  cmp_ops = Alloc<List<syntax_asdl::speck*>>();
  comparators = Alloc<List<syntax_asdl::expr_t*>>();
  left = this->Expr(children->index(0));
  i = 1;
  n = len(children);
  while (i < n) {
    op_children = children->index(i)->children;
    tok1 = op_children->index(0)->tok;
    if (len(op_children) == 2) {
      if (tok1->id == Id::Expr_Not) {
        op = Alloc<speck>(Id::Node_NotIn, tok1->span_id);
      }
      else {
        if (tok1->id == Id::Expr_Is) {
          op = Alloc<speck>(Id::Node_IsNot, tok1->span_id);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    else {
      op = Alloc<speck>(tok1->id, tok1->span_id);
    }
    cmp_ops->append(op);
    i += 1;
    comparators->append(this->Expr(children->index(i)));
    i += 1;
  }
  return Alloc<expr::Compare>(left, cmp_ops, comparators);
}

syntax_asdl::expr_t* Transformer::_Subscript(List<pnode::PNode*>* children) {
  int typ0;
  int n;
  syntax_asdl::expr_t* lower;
  syntax_asdl::expr_t* upper;

  typ0 = children->index(0)->typ;
  n = len(children);
  if (ISNONTERMINAL(typ0)) {
    if (n == 3) {
      lower = this->Expr(children->index(0));
      upper = this->Expr(children->index(2));
    }
    else {
      if (n == 2) {
        lower = this->Expr(children->index(0));
        upper = nullptr;
      }
      else {
        return this->Expr(children->index(0));
      }
    }
  }
  else {
    lower = nullptr;
    if (n == 1) {
      upper = nullptr;
    }
    else {
      upper = this->Expr(children->index(1));
    }
  }
  return Alloc<expr::Slice>(lower, upper);
}

syntax_asdl::expr_t* Transformer::Expr(pnode::PNode* pnode) {
  int typ;
  syntax_asdl::Token* tok;
  List<pnode::PNode*>* children;
  syntax_asdl::expr_t* test;
  syntax_asdl::expr_t* body;
  syntax_asdl::expr_t* orelse;
  int n;
  List<syntax_asdl::name_type*>* params;
  syntax_asdl::Token* op_tok;
  pnode::PNode* op;
  pnode::PNode* e;
  syntax_asdl::expr_t* node;
  int i;
  syntax_asdl::expr_t* factor;
  Str* nt_name;
  int id_;

  typ = pnode->typ;
  tok = pnode->tok;
  children = pnode->children;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::oil_expr) {
      return this->Expr(children->index(1));
    }
    if (typ == grammar_nt::command_expr) {
      return this->Expr(children->index(0));
    }
    if (typ == grammar_nt::atom) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      return this->_Atom(children);
    }
    if (typ == grammar_nt::testlist) {
      return this->_Tuple(children);
    }
    if (typ == grammar_nt::test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      test = this->Expr(children->index(2));
      body = this->Expr(children->index(0));
      orelse = this->Expr(children->index(4));
      return Alloc<expr::IfExp>(test, body, orelse);
    }
    if (typ == grammar_nt::lambdef) {
      n = len(children);
      if (n == 4) {
        params = this->_NameTypeList(children->index(1));
      }
      else {
        params = Alloc<List<syntax_asdl::name_type*>>();
      }
      body = this->Expr(children->index((n - 1)));
      return Alloc<expr::Lambda>(params, body);
    }
    if (typ == grammar_nt::or_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::not_test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      op_tok = children->index(0)->tok;
      return Alloc<expr::Unary>(op_tok, this->Expr(children->index(1)));
    }
    else {
      if (typ == grammar_nt::comparison) {
        if (len(children) == 1) {
          return this->Expr(children->index(0));
        }
        return this->_CompareChain(children);
      }
      else {
        if (typ == grammar_nt::range_expr) {
          n = len(children);
          if (n == 1) {
            return this->Expr(children->index(0));
          }
          if (n == 3) {
            return Alloc<expr::Range>(this->Expr(children->index(0)), this->Expr(children->index(2)));
          }
          throw Alloc<AssertionError>();
        }
        else {
          if (typ == grammar_nt::expr) {
            return this->_AssocBinary(children);
          }
        }
      }
    }
    if (typ == grammar_nt::xor_expr) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_expr) {
      return this->_AssocBinary(children);
    }
    else {
      if (typ == grammar_nt::shift_expr) {
        return this->_AssocBinary(children);
      }
      else {
        if (typ == grammar_nt::arith_expr) {
          return this->_AssocBinary(children);
        }
        else {
          if (typ == grammar_nt::term) {
            return this->_AssocBinary(children);
          }
          else {
            if (typ == grammar_nt::factor) {
              if (len(children) == 1) {
                return this->Expr(children->index(0));
              }
              op = children->index(0);
              e = children->index(1);
              return Alloc<expr::Unary>(op->tok, this->Expr(e));
            }
            else {
              if (typ == grammar_nt::power) {
                node = this->Expr(children->index(0));
                if (len(children) == 1) {
                  return node;
                }
                n = len(children);
                i = 1;
                while ((i < n and ISNONTERMINAL(children->index(i)->typ))) {
                  node = this->_Trailer(node, children->index(i));
                  i += 1;
                }
                if (i != n) {
                  op_tok = children->index(i)->tok;
                  factor = this->Expr(children->index((i + 1)));
                  node = Alloc<expr::Binary>(op_tok, node, factor);
                }
                return node;
              }
              else {
                if (typ == grammar_nt::oil_expr_sub) {
                  return this->Expr(children->index(0));
                }
                else {
                  if (typ == grammar_nt::sh_array_literal) {
                    return reinterpret_cast<sh_array_literal*>(children->index(1)->tok);
                  }
                  else {
                    if (typ == grammar_nt::sh_command_sub) {
                      return reinterpret_cast<command_sub*>(children->index(1)->tok);
                    }
                    else {
                      if (typ == grammar_nt::braced_var_sub) {
                        return reinterpret_cast<braced_var_sub*>(children->index(1)->tok);
                      }
                      else {
                        if (typ == grammar_nt::dq_string) {
                          return reinterpret_cast<double_quoted*>(children->index(1)->tok);
                        }
                        else {
                          if (typ == grammar_nt::sq_string) {
                            return reinterpret_cast<single_quoted*>(children->index(1)->tok);
                          }
                          else {
                            if (typ == grammar_nt::simple_var_sub) {
                              return Alloc<simple_var_sub>(children->index(0)->tok);
                            }
                            else {
                              nt_name = this->number2symbol->index(typ);
                              throw Alloc<AssertionError>();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    id_ = tok->id;
    if (id_ == Id::Expr_Name) {
      return Alloc<expr::Var>(tok);
    }
    if ((id_ == Id::Expr_DecInt || id_ == Id::Expr_BinInt || id_ == Id::Expr_OctInt || id_ == Id::Expr_HexInt || id_ == Id::Expr_Float)) {
      return Alloc<expr::Const>(tok);
    }
    if ((id_ == Id::Expr_Null || id_ == Id::Expr_True || id_ == Id::Expr_False)) {
      return Alloc<expr::Const>(tok);
    }
    throw Alloc<NotImplementedError>(Id_str(id_));
  }
}

syntax_asdl::expr_t* Transformer::_ArrayItem(pnode::PNode* p_node) {
  pnode::PNode* child0;
  int typ0;

  child0 = p_node->children->index(0);
  typ0 = child0->typ;
  if (ISNONTERMINAL(typ0)) {
    return this->Expr(child0);
  }
  else {
    if (child0->tok->id == Id::Op_LParen) {
      return this->Expr(p_node->children->index(1));
    }
    return this->Expr(child0);
  }
}

List<syntax_asdl::place_expr_t*>* Transformer::_PlaceList(pnode::PNode* p_node) {
  List<syntax_asdl::place_expr_t*>* places;
  int n;
  pnode::PNode* p;
  syntax_asdl::expr_t* e;
  syntax_asdl::expr_t* UP_e;
  int tag;

  places = Alloc<List<syntax_asdl::place_expr_t*>>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    e = this->Expr(p);
    UP_e = e;
    tag = e->tag_();
    if (tag == expr_e::Var) {
      expr__Var* e = static_cast<expr__Var*>(UP_e);
      places->append(Alloc<place_expr::Var>(e->name));
    }
    else {
      if ((tag == place_expr_e::Var || tag == place_expr_e::Subscript || tag == place_expr_e::Attribute)) {
        places->append(reinterpret_cast<place_expr_t*>(UP_e));
      }
      else {
        p_die(fmt80(), p->tok ? p->tok : nullptr);
      }
    }
  }
  return places;
}

syntax_asdl::command__VarDecl* Transformer::MakeVarDecl(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  lhs = this->_NameTypeList(children->index(0));
  rhs = this->Expr(children->index(2));
  return Alloc<command::VarDecl>(nullptr, lhs, rhs);
}

syntax_asdl::command__PlaceMutation* Transformer::MakePlaceMutation(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::place_expr_t*>* place_list;
  syntax_asdl::Token* op_tok;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  place_list = this->_PlaceList(children->index(0));
  op_tok = children->index(1)->tok;
  rhs = this->Expr(children->index(2));
  return Alloc<command::PlaceMutation>(nullptr, place_list, op_tok, rhs);
}

Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> Transformer::OilForExpr(pnode::PNode* pnode) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  Str* nt_name;

  typ = pnode->typ;
  children = pnode->children;
  if (typ == grammar_nt::oil_for) {
    lhs = this->_NameTypeList(children->index(1));
    iterable = this->Expr(children->index(3));
    return (Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>(lhs, iterable));
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<AssertionError>();
}

void Transformer::_Argument(pnode::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist) {
  List<syntax_asdl::expr_t*>* positional;
  List<syntax_asdl::named_arg*>* named;
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::expr_t* arg;
  syntax_asdl::expr_t* spread_expr;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  syntax_asdl::named_arg* n1;

  positional = arglist->positional;
  named = arglist->named;
  children = p_node->children;
  n = len(children);
  if (n == 1) {
    arg = this->Expr(children->index(0));
    positional->append(arg);
    return ;
  }
  if (n == 2) {
    if (children->index(0)->tok->id == Id::Expr_Ellipsis) {
      spread_expr = this->Expr(children->index(1));
      if (do_named) {
        named->append(Alloc<named_arg>(nullptr, spread_expr));
      }
      else {
        positional->append(Alloc<expr::Spread>(spread_expr, expr_context_e::Store));
      }
      return ;
    }
    if (children->index(1)->typ == grammar_nt::comp_for) {
      elt = this->Expr(children->index(0));
      comp = this->_CompFor(children->index(1));
      arg = Alloc<expr::GeneratorExp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
      positional->append(arg);
      return ;
    }
    throw Alloc<AssertionError>();
  }
  if (n == 3) {
    n1 = Alloc<named_arg>(children->index(0)->tok, this->Expr(children->index(2)));
    named->append(n1);
    return ;
  }
  throw Alloc<NotImplementedError>();
}

void Transformer::_Arglist(List<pnode::PNode*>* children, syntax_asdl::arg_list* arglist) {
  bool do_named;

  do_named = false;
  for (ListIter<pnode::PNode*> it(children); !it.Done(); it.Next()) {
    pnode::PNode* p_child = it.Value();
    if (ISNONTERMINAL(p_child->typ)) {
      this->_Argument(p_child, do_named, arglist);
    }
    else {
      if (p_child->tok->id == Id::Op_Semi) {
        do_named = true;
      }
    }
  }
}

void Transformer::ArgList(pnode::PNode* pnode, syntax_asdl::arg_list* arglist) {
  pnode::PNode* p;

  if (len(pnode->children) == 2) {
    return ;
  }
  p = pnode->children->index(1);
  this->_Arglist(p->children, arglist);
}

syntax_asdl::type_expr_t* Transformer::_TypeExpr(pnode::PNode* pnode) {
  return nullptr;
}

List<syntax_asdl::type_expr_t*>* Transformer::_TypeExprList(pnode::PNode* pnode) {
  return nullptr;
}

Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> Transformer::_ProcParam(pnode::PNode* pnode) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  int i;
  pnode::PNode* child;
  syntax_asdl::expr_t* default_val;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  i = 0;
  if (tok0->id == Id::Arith_Colon) {
    i += 1;
  }
  child = children->index(i);
  if (child->tok->id == Id::Expr_Name) {
    default_val = nullptr;
    i += 1;
    if ((n > i and children->index(i)->tok->id == Id::Arith_Equal)) {
      i += 1;
      default_val = this->Expr(children->index(i));
    }
    return (Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>(tok0, default_val));
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::proc_sig_t* Transformer::_ProcParams(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int n;
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* rest;
  syntax_asdl::Token* block;
  int i;
  pnode::PNode* p;
  syntax_asdl::Token* name;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = p_node->children;
  n = len(children);
  params = Alloc<List<syntax_asdl::param*>>();
  rest = nullptr;
  block = nullptr;
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> tup3 = this->_ProcParam(p);
      name = tup3.at0();
      default_val = tup3.at1();
      type_ = nullptr;
      params->append(Alloc<param>(name, type_, default_val));
    }
    else {
      if (p->tok->id == Id::Expr_At) {
        i += 1;
        rest = children->index(i)->tok;
      }
      else {
        if (p->tok->id == Id::Arith_Amp) {
          i += 1;
          block = children->index(i)->tok;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    i += 2;
  }
  return Alloc<proc_sig::Closed>(params, rest, block);
}

syntax_asdl::param* Transformer::_FuncParam(pnode::PNode* pnode) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    type_ = nullptr;
    if ((n > 1 and children->index(1)->tok->id == Id::Arith_Equal)) {
      default_val = this->Expr(children->index(2));
    }
    else {
      if ((n > 2 and children->index(2)->tok->id == Id::Arith_Equal)) {
        default_val = this->Expr(children->index(3));
      }
    }
    return Alloc<param>(tok0, type_, default_val);
  }
  throw Alloc<AssertionError>();
}

Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> Transformer::_FuncParams(pnode::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* splat;
  List<pnode::PNode*>* children;
  int n;
  int i;
  pnode::PNode* p;

  params = Alloc<List<syntax_asdl::param*>>();
  splat = nullptr;
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_FuncParam(p));
    }
    else {
      if (p->tok->id == Id::Expr_Ellipsis) {
        splat = children->index((i + 1))->tok;
      }
    }
    i += 1;
  }
  return (Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>(params, splat));
}

syntax_asdl::proc_sig_t* Transformer::Proc(pnode::PNode* pnode) {
  int typ;
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::proc_sig_t* sig;

  typ = pnode->typ;
  children = pnode->children;
  n = len(children);
  if (n == 1) {
    sig = Alloc<proc_sig::Open>();
  }
  else {
    if (n == 3) {
      sig = Alloc<proc_sig::Closed>();
    }
    else {
      if (n == 4) {
        sig = this->_ProcParams(children->index(1));
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  return sig;
}

void Transformer::TeaFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out) {
  List<pnode::PNode*>* children;
  int pos;
  int typ2;
  int id_;

  children = pnode->children;
  pos = 1;
  typ2 = children->index(pos)->typ;
  if (ISNONTERMINAL(typ2)) {
    Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup4 = this->_FuncParams(children->index(pos));
    out->pos_params = tup4.at0();
    out->pos_splat = tup4.at1();
    pos += 1;
  }
  id_ = children->index(pos)->tok->id;
  if (id_ == Id::Op_RParen) {
    pos += 1;
  }
  else {
    if (id_ == Id::Op_Semi) {
      Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup5 = this->_FuncParams(children->index((pos + 1)));
      out->named_params = tup5.at0();
      out->named_splat = tup5.at1();
      pos += 3;
    }
  }
  if (ISNONTERMINAL(children->index(pos)->typ)) {
    out->return_types = this->_TypeExprList(children->index(pos));
  }
  out->body = Alloc<command::CommandList>();
}

void Transformer::NamedFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out) {
  List<pnode::PNode*>* children;

  children = pnode->children;
  out->name = children->index(0)->tok;
  this->TeaFunc(children->index(1), out);
}

List<syntax_asdl::param*>* Transformer::_DataParams(pnode::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  List<pnode::PNode*>* children;
  int n;
  int i;
  pnode::PNode* p;

  params = Alloc<List<syntax_asdl::param*>>();
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_FuncParam(p));
    }
    i += 1;
  }
  return params;
}

void Transformer::Data(pnode::PNode* pnode, syntax_asdl::command__Data* out) {
  List<pnode::PNode*>* children;

  children = pnode->children;
  out->name = children->index(0)->tok;
  if (ISNONTERMINAL(children->index(2)->typ)) {
    out->params = this->_DataParams(children->index(2));
  }
}

syntax_asdl::variant_type_t* Transformer::_VariantType(pnode::PNode* pnode) {
  int n;

  n = len(pnode->children);
  if (n == 1) {
    return Alloc<variant_type::Ref>(pnode->children->index(0)->tok);
  }
  else {
    return Alloc<variant_type::Anon>(this->_DataParams(pnode->children->index(1)));
  }
}

syntax_asdl::variant* Transformer::_Variant(pnode::PNode* pnode) {
  syntax_asdl::variant_type_t* t;

  t = nullptr;
  if (len(pnode->children) == 2) {
    t = this->_VariantType(pnode->children->index(1));
  }
  return Alloc<variant>(pnode->children->index(0)->tok, t);
}

void Transformer::Enum(pnode::PNode* pnode, syntax_asdl::command__Enum* out) {
  List<pnode::PNode*>* children;
  int start;
  int n;
  pnode::PNode* p_node;

  children = pnode->children;
  out->name = children->index(0)->tok;
  start = 2;
  if (children->index(start)->tok->id == Id::Op_Newline) {
    start = 3;
  }
  n = len(children);
  for (int i = start; i < (n - 1); i += 2) {
    p_node = children->index(i);
    out->variants->append(this->_Variant(p_node));
  }
}

void Transformer::Class(pnode::PNode* pnode, syntax_asdl::command__Class* out) {
  List<pnode::PNode*>* children;

  children = pnode->children;
  out->name = children->index(0)->tok;
  return ;
}

void Transformer::Import(pnode::PNode* pnode, syntax_asdl::command__Import* out) {
  List<pnode::PNode*>* children;
  int typ;

  children = pnode->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      single_quoted* sq_part = reinterpret_cast<single_quoted*>(children->index(0)->children->index(1)->tok);
      out->path = sq_part;
    }
  }
}

Str* Transformer::_RangeChar(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  List<syntax_asdl::Token*>* tokens;
  Str* s;
  syntax_asdl::Token* tok;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      single_quoted* sq_part = reinterpret_cast<single_quoted*>(children->index(0)->children->index(1)->tok);
      tokens = sq_part->tokens;
      if (len(tokens) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      if (len(tokens->index(0)->val) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      s = tokens->index(0)->val->index(0);
      return s;
    }
    if (typ == grammar_nt::char_literal) {
      throw Alloc<AssertionError>();
    }
    throw Alloc<NotImplementedError>();
  }
  else {
    tok = p_node->tok;
    if ((tok->id == Id::Expr_Name || tok->id == Id::Expr_DecInt)) {
      if (len(tok->val) != 1) {
        p_die(dynamic_fmt_dummy(), tok);
      }
      return tok->val->index(0);
    }
    throw Alloc<NotImplementedError>();
  }
}

syntax_asdl::class_literal_term_t* Transformer::_NonRangeChars(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return Alloc<class_literal_term::CharLiteral>(children->index(0)->tok);
    }
    throw Alloc<NotImplementedError>();
  }
  else {
    return this->_NameInClass(nullptr, children->index(0)->tok);
  }
}

syntax_asdl::class_literal_term_t* Transformer::_ClassLiteralTerm(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;
  int n;
  Str* start;
  Str* end;
  Str* nt_name;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(p_child->children->index(0)->tok);
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    n = len(children);
    if ((n == 1 and typ == grammar_nt::range_char)) {
      return this->_NonRangeChars(children->index(0));
    }
    if ((n == 3 and children->index(1)->tok->id == Id::Arith_Minus)) {
      start = this->_RangeChar(children->index(0));
      end = this->_RangeChar(children->index(2));
      return Alloc<class_literal_term::Range>(start, end);
    }
  }
  else {
    if (children->index(0)->tok->id == Id::Arith_Tilde) {
      return this->_NameInClass(children->index(0)->tok, children->index(1)->tok);
    }
    throw Alloc<AssertionError>();
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<NotImplementedError>(nt_name);
}

List<syntax_asdl::class_literal_term_t*>* Transformer::_ClassLiteral(pnode::PNode* p_node) {
  List<syntax_asdl::class_literal_term_t*>* terms;

  terms = Alloc<List<syntax_asdl::class_literal_term_t*>>();
  for (ListIter<pnode::PNode*> it(p_node->children->slice(1, -1)); !it.Done(); it.Next()) {
    pnode::PNode* c = it.Value();
    terms->append(this->_ClassLiteralTerm(c));
  }
  return terms;
}

syntax_asdl::re_t* Transformer::_NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = Alloc<speck>(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (maybe_str_equals(val, str346)) {
    if (negated_tok) {
      p_die(fmt81(), tok);
    }
    return tok;
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return Alloc<posix_class>(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return Alloc<perl_class>(negated_speck, perl);
  }
  if (val->index(0)->isupper()) {
    return Alloc<re::Splice>(tok);
  }
  p_die(fmt82(val), tok);
}

syntax_asdl::class_literal_term_t* Transformer::_NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = Alloc<speck>(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (len(val) == 1) {
    if (negated_tok) {
      p_die(fmt83(), tok);
    }
    return Alloc<class_literal_term::CharLiteral>(tok);
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return Alloc<posix_class>(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return Alloc<perl_class>(negated_speck, perl);
  }
  p_die(fmt84(val), tok);
}

syntax_asdl::re_t* Transformer::_ReAtom(pnode::PNode* p_atom) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;
  syntax_asdl::Token* tok;
  syntax_asdl::re_t* regex;
  int n;
  syntax_asdl::Token* name_tok;

  children = p_atom->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = p_atom->children->index(0);
    if (typ == grammar_nt::class_literal) {
      return Alloc<re::ClassLiteral>(false, this->_ClassLiteral(p_child));
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return children->index(0)->tok;
    }
    throw Alloc<NotImplementedError>(typ);
  }
  else {
    tok = children->index(0)->tok;
    if ((tok->id == Id::Expr_Dot || tok->id == Id::Arith_Caret || tok->id == Id::Expr_Dollar)) {
      return Alloc<speck>(tok->id, tok->span_id);
    }
    if (tok->id == Id::Expr_Name) {
      return this->_NameInRegex(nullptr, tok);
    }
    if (tok->id == Id::Expr_Symbol) {
      if ((str_equals(tok->val, str351) || str_equals(tok->val, str352) || str_equals(tok->val, str353))) {
        return tok;
      }
      p_die(fmt85(tok->val), tok);
    }
    if (tok->id == Id::Expr_At) {
      return Alloc<re::Splice>(children->index(1)->tok);
    }
    if (tok->id == Id::Arith_Tilde) {
      typ = children->index(1)->typ;
      if (ISNONTERMINAL(typ)) {
        return Alloc<re::ClassLiteral>(true, this->_ClassLiteral(children->index(1)));
      }
      else {
        return this->_NameInRegex(tok, children->index(1)->tok);
      }
    }
    if (tok->id == Id::Op_LParen) {
      return Alloc<re::Group>(this->_Regex(children->index(1)));
    }
    if (tok->id == Id::Arith_Less) {
      regex = this->_Regex(children->index(1));
      n = len(children);
      if (n == 5) {
        name_tok = children->index(3)->children->index(0)->tok;
      }
      else {
        name_tok = nullptr;
      }
      return Alloc<re::Capture>(regex, name_tok);
    }
    if (tok->id == Id::Arith_Colon) {
      throw Alloc<NotImplementedError>(Id_str(tok->id));
    }
    throw Alloc<NotImplementedError>(Id_str(tok->id));
  }
}

syntax_asdl::re_repeat_t* Transformer::_RepeatOp(pnode::PNode* p_repeat) {
  syntax_asdl::Token* tok;
  int id_;
  pnode::PNode* p_range;
  List<pnode::PNode*>* children;
  int n;

  tok = p_repeat->children->index(0)->tok;
  id_ = tok->id;
  if ((id_ == Id::Arith_Plus || id_ == Id::Arith_Star || id_ == Id::Arith_QMark)) {
    return Alloc<re_repeat::Op>(tok);
  }
  if (id_ == Id::Op_LBrace) {
    p_range = p_repeat->children->index(1);
    children = p_range->children;
    n = len(children);
    if (n == 1) {
      return Alloc<re_repeat::Num>(children->index(0)->tok);
    }
    if (n == 2) {
      if (children->index(0)->tok->id == Id::Expr_DecInt) {
        return Alloc<re_repeat::Range>(children->index(0)->tok, nullptr);
      }
      else {
        return Alloc<re_repeat::Range>(nullptr, children->index(1)->tok);
      }
    }
    if (n == 3) {
      return Alloc<re_repeat::Range>(children->index(0)->tok, children->index(2)->tok);
    }
    throw Alloc<AssertionError>();
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::re_t* Transformer::_Regex(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::re_t*>* alts;
  int n;
  pnode::PNode* c;
  int i;
  List<syntax_asdl::re_t*>* seq;
  syntax_asdl::re_t* r;
  syntax_asdl::re_repeat_t* repeat_op;
  Str* nt_name;

  typ = p_node->typ;
  children = p_node->children;
  if (typ == grammar_nt::regex) {
    if (len(children) == 1) {
      return this->_Regex(children->index(0));
    }
    alts = Alloc<List<syntax_asdl::re_t*>>();
    n = len(p_node->children);
    for (int i = 0; i < n; i += 2) {
      c = p_node->children->index(i);
      alts->append(this->_Regex(c));
    }
    return Alloc<re::Alt>(alts);
  }
  if (typ == grammar_nt::re_alt) {
    i = 0;
    n = len(children);
    seq = Alloc<List<syntax_asdl::re_t*>>();
    while (i < n) {
      r = this->_ReAtom(children->index(i));
      i += 1;
      if ((i < n and children->index(i)->typ == grammar_nt::repeat_op)) {
        repeat_op = this->_RepeatOp(children->index(i));
        r = Alloc<re::Repeat>(r, repeat_op);
        i += 1;
      }
      seq->append(r);
    }
    if (len(seq) == 1) {
      return seq->index(0);
    }
    else {
      return Alloc<re::Seq>(seq);
    }
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<NotImplementedError>(nt_name);
}

}  // define namespace expr_to_ast

namespace regex_translate {  // define
namespace class_literal_term_e = syntax_asdl::class_literal_term_e;
using syntax_asdl::class_literal_term__Range;
using syntax_asdl::class_literal_term__ByteSet;
using syntax_asdl::class_literal_term__CodePoint;
using syntax_asdl::class_literal_term__CharLiteral;
using syntax_asdl::posix_class;
using syntax_asdl::perl_class;
namespace re_e = syntax_asdl::re_e;
using syntax_asdl::re__ClassLiteral;
using syntax_asdl::re__Primitive;
using syntax_asdl::re__LiteralChars;
using syntax_asdl::re__Seq;
using syntax_asdl::re__Alt;
using syntax_asdl::re__Repeat;
using syntax_asdl::re__Group;
namespace re_repeat_e = syntax_asdl::re_repeat_e;
using syntax_asdl::re_repeat__Op;
using syntax_asdl::re_repeat__Num;
using syntax_asdl::re_repeat__Range;
namespace Id = id_kind_asdl::Id;
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* PERL_CLASS = &gdict0;

void _ClassLiteralToPosixEre(syntax_asdl::class_literal_term_t* term, List<Str*>* parts) {
  syntax_asdl::class_literal_term_t* UP_term;
  int tag;
  Str* start;
  Str* end;
  int code_point;
  Str* n;
  Str* chars;
  Str* pat;

  UP_term = term;
  tag = term->tag_();
  if (tag == class_literal_term_e::Range) {
    class_literal_term__Range* term = static_cast<class_literal_term__Range*>(UP_term);
    start = glob_::EreCharClassEscape(term->start);
    end = glob_::EreCharClassEscape(term->end);
    parts->append(fmt86(start, end));
    return ;
  }
  if (tag == class_literal_term_e::ByteSet) {
    class_literal_term__ByteSet* term = static_cast<class_literal_term__ByteSet*>(UP_term);
    parts->append(glob_::EreCharClassEscape(term->bytes));
    return ;
  }
  if (tag == class_literal_term_e::CodePoint) {
    class_literal_term__CodePoint* term = static_cast<class_literal_term__CodePoint*>(UP_term);
    code_point = term->i;
    if (code_point < 128) {
      parts->append(chr(code_point));
    }
    else {
      e_die(fmt87(code_point), term->spid);
    }
    return ;
  }
  if (tag == class_literal_term_e::PerlClass) {
    perl_class* term = static_cast<perl_class*>(UP_term);
    n = term->name;
    chars = PERL_CLASS->index(term->name);
    if (term->negated) {
      e_die(fmt88(), term->negated->span_id);
    }
    else {
      pat = fmt89(chars);
    }
    parts->append(pat);
    return ;
  }
  if (tag == class_literal_term_e::PosixClass) {
    posix_class* term = static_cast<posix_class*>(UP_term);
    n = term->name;
    if (term->negated) {
      e_die(fmt90(), term->negated->span_id);
    }
    else {
      pat = fmt91(n);
    }
    parts->append(pat);
    return ;
  }
  if (tag == class_literal_term_e::CharLiteral) {
    class_literal_term__CharLiteral* term = static_cast<class_literal_term__CharLiteral*>(UP_term);
    parts->append(term->tok->val);
    return ;
  }
  throw Alloc<NotImplementedError>(tag);
}

void AsPosixEre(syntax_asdl::re_t* node, List<Str*>* parts) {
  syntax_asdl::re_t* UP_node;
  int tag;
  int i;
  syntax_asdl::re_repeat_t* op;
  int op_tag;
  syntax_asdl::re_repeat_t* UP_op;
  int op_id;
  Str* lower;
  Str* upper;
  Str* n;
  Str* chars;
  Str* pat;

  UP_node = node;
  tag = node->tag_();
  if (tag == re_e::Primitive) {
    re__Primitive* node = static_cast<re__Primitive*>(UP_node);
    if (node->id == Id::Re_Dot) {
      parts->append(str361);
    }
    else {
      if (node->id == Id::Re_Start) {
        parts->append(str362);
      }
      else {
        if (node->id == Id::Re_End) {
          parts->append(str363);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    return ;
  }
  if (tag == re_e::LiteralChars) {
    re__LiteralChars* node = static_cast<re__LiteralChars*>(UP_node);
    parts->append(glob_::ExtendedRegexEscape(node->s));
    return ;
  }
  if (tag == re_e::Seq) {
    re__Seq* node = static_cast<re__Seq*>(UP_node);
    for (ListIter<syntax_asdl::re_t*> it(node->children); !it.Done(); it.Next()) {
      syntax_asdl::re_t* c = it.Value();
      AsPosixEre(c, parts);
    }
    return ;
  }
  if (tag == re_e::Alt) {
    re__Alt* node = static_cast<re__Alt*>(UP_node);
    i = 0;
    for (ListIter<syntax_asdl::re_t*> it(node->children); !it.Done(); it.Next(), ++i) {
      syntax_asdl::re_t* c = it.Value();
      if (i != 0) {
        parts->append(str364);
      }
      AsPosixEre(c, parts);
    }
    return ;
  }
  if (tag == re_e::Repeat) {
    re__Repeat* node = static_cast<re__Repeat*>(UP_node);
    if (node->child->tag_() == re_e::LiteralChars) {
      re__LiteralChars* child = static_cast<re__LiteralChars*>(node->child);
      if (len(child->s) > 1) {
        e_die(fmt92(), child->spid);
      }
    }
    AsPosixEre(node->child, parts);
    op = node->op;
    op_tag = op->tag_();
    UP_op = op;
    if (op_tag == re_repeat_e::Op) {
      re_repeat__Op* op = static_cast<re_repeat__Op*>(UP_op);
      op_id = op->op->id;
      if (op_id == Id::Arith_Plus) {
        parts->append(str366);
      }
      else {
        if (op_id == Id::Arith_Star) {
          parts->append(str367);
        }
        else {
          if (op_id == Id::Arith_QMark) {
            parts->append(str368);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
      return ;
    }
    if (op_tag == re_repeat_e::Num) {
      re_repeat__Num* op = static_cast<re_repeat__Num*>(UP_op);
      parts->append(fmt93(op->times->val));
      return ;
    }
    if (op_tag == re_repeat_e::Range) {
      re_repeat__Range* op = static_cast<re_repeat__Range*>(UP_op);
      lower = op->lower ? op->lower->val : str370;
      upper = op->upper ? op->upper->val : str371;
      parts->append(fmt94(lower, upper));
      return ;
    }
    throw Alloc<NotImplementedError>(op_tag);
  }
  if ((tag == re_e::Group || tag == re_e::Capture)) {
    re__Group* node = static_cast<re__Group*>(UP_node);
    parts->append(str373);
    AsPosixEre(node->child, parts);
    parts->append(str374);
    return ;
  }
  if (tag == re_e::PerlClass) {
    perl_class* node = static_cast<perl_class*>(UP_node);
    n = node->name;
    chars = PERL_CLASS->index(node->name);
    if (node->negated) {
      pat = fmt95(chars);
    }
    else {
      pat = fmt96(chars);
    }
    parts->append(pat);
    return ;
  }
  if (tag == re_e::PosixClass) {
    posix_class* node = static_cast<posix_class*>(UP_node);
    n = node->name;
    if (node->negated) {
      pat = fmt97(n);
    }
    else {
      pat = fmt98(n);
    }
    parts->append(pat);
    return ;
  }
  if (tag == re_e::ClassLiteral) {
    re__ClassLiteral* node = static_cast<re__ClassLiteral*>(UP_node);
    parts->append(str379);
    if (node->negated) {
      parts->append(str380);
    }
    for (ListIter<syntax_asdl::class_literal_term_t*> it(node->terms); !it.Done(); it.Next()) {
      syntax_asdl::class_literal_term_t* term = it.Value();
      _ClassLiteralToPosixEre(term, parts);
    }
    parts->append(str381);
    return ;
  }
  throw Alloc<NotImplementedError>(tag);
}

}  // define namespace regex_translate

namespace arith_parse {  // define
namespace Id = id_kind_asdl::Id;
namespace arith_expr = syntax_asdl::arith_expr;
using syntax_asdl::arith_expr_t;
using syntax_asdl::word_t;

syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  tdop::CheckLhsExpr(right, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::UnaryAssign>(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(Id::Node_UnaryPlus, right);
}

syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(Id::Node_UnaryMinus, right);
}

syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  int arith_id;
  int op_id;

  arith_id = word_::ArithId(w);
  if (arith_id == Id::Arith_DPlus) {
    op_id = Id::Node_PostDPlus;
  }
  else {
    if (arith_id == Id::Arith_DMinus) {
      op_id = Id::Node_PostDMinus;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  tdop::CheckLhsExpr(left, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::UnaryAssign>(op_id, left);
}

syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp) {
  syntax_asdl::arith_expr_t* index;

  if (!tdop::IsIndexable(left, p->parse_opts->parse_dynamic_arith())) {
    p_die(fmt99(), w);
  }
  index = p->ParseUntil(0);
  p->Eat(Id::Arith_RBracket);
  return Alloc<arith_expr::Binary>(word_::ArithId(w), left, index);
}

syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp) {
  syntax_asdl::arith_expr_t* true_expr;
  syntax_asdl::arith_expr_t* false_expr;

  true_expr = p->ParseUntil(0);
  p->Eat(Id::Arith_Colon);
  false_expr = p->ParseUntil(bp);
  return Alloc<arith_expr::TernaryOp>(left, true_expr, false_expr);
}

}  // define namespace arith_parse

namespace bool_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::word_t;
namespace word_e = syntax_asdl::word_e;
namespace bool_expr = syntax_asdl::bool_expr;
using syntax_asdl::bool_expr_t;

BoolParser::BoolParser(word_parse::WordEmitter* w_parser) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(BoolParser)) {
  this->w_parser = w_parser;
  this->words = Alloc<List<syntax_asdl::word_t*>>();
  this->cur_word = nullptr;
  this->bool_id = Id::Undefined_Tok;
  this->bool_kind = Kind::Undefined;
}

void BoolParser::_NextOne(types_asdl::lex_mode_t lex_mode) {
  int n;
  syntax_asdl::word_t* w;

  n = len(this->words);
  if (n == 2) {
    this->words->set(0, this->words->index(1));
    this->cur_word = this->words->index(0);
    this->words->pop();
  }
  else {
    if ((n == 0 || n == 1)) {
      w = this->w_parser->ReadWord(lex_mode);
      if (n == 0) {
        this->words->append(w);
      }
      else {
        this->words->set(0, w);
      }
      this->cur_word = w;
    }
  }
  this->bool_id = word_::BoolId(this->cur_word);
  this->bool_kind = consts::GetKind(this->bool_id);
}

void BoolParser::_Next() {
  _Next(lex_mode_e::DBracket);
}

void BoolParser::_Next(types_asdl::lex_mode_t lex_mode) {
  while (true) {
    this->_NextOne(lex_mode);
    if (this->bool_id != Id::Op_Newline) {
      break;
    }
  }
}

syntax_asdl::word_t* BoolParser::_LookAhead() {
  int n;
  syntax_asdl::word_t* w;

  n = len(this->words);
  if (n != 1) {
    throw Alloc<AssertionError>();
  }
  w = this->w_parser->ReadWord(lex_mode_e::DBracket);
  this->words->append(w);
  return w;
}

syntax_asdl::bool_expr_t* BoolParser::Parse() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->bool_id != Id::Lit_DRightBracket) {
    p_die(fmt100(), this->cur_word);
  }
  return node;
}

bool BoolParser::_TestAtEnd() {
  return this->bool_id == Id::Lit_DRightBracket;
}

syntax_asdl::bool_expr_t* BoolParser::ParseForBuiltin() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->bool_id != Id::Eof_Real) {
    p_die(fmt101(word_::Pretty(this->cur_word)), this->cur_word);
  }
  return node;
}

syntax_asdl::bool_expr_t* BoolParser::ParseExpr() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseTerm();
  if ((this->bool_id == Id::Op_DPipe || this->bool_id == Id::BoolUnary_o)) {
    this->_Next();
    right = this->ParseExpr();
    return Alloc<bool_expr::LogicalOr>(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseTerm() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseNegatedFactor();
  if ((this->bool_id == Id::Op_DAmp || this->bool_id == Id::BoolUnary_a)) {
    this->_Next();
    right = this->ParseTerm();
    return Alloc<bool_expr::LogicalAnd>(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseNegatedFactor() {
  syntax_asdl::bool_expr_t* child;

  if (this->bool_id == Id::KW_Bang) {
    this->_Next();
    child = this->ParseFactor();
    return Alloc<bool_expr::LogicalNot>(child);
  }
  else {
    return this->ParseFactor();
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseFactor() {
  int op;
  syntax_asdl::word_t* w;
  int tag;
  syntax_asdl::compound_word* tilde;
  syntax_asdl::bool_expr_t* node;
  syntax_asdl::word_t* t2;
  int t2_bool_id;
  id_kind_asdl::Kind_t t2_bool_kind;
  syntax_asdl::word_t* left;
  bool is_regex;
  syntax_asdl::word_t* right;

  if (this->bool_kind == Kind::BoolUnary) {
    op = this->bool_id;
    this->_Next();
    w = this->cur_word;
    tag = w->tag_();
    if ((tag != word_e::Compound and tag != word_e::String)) {
      p_die(fmt102(), w);
    }
    this->_Next();
    tilde = word_::TildeDetect(w);
    if (tilde) {
      w = tilde;
    }
    node = Alloc<bool_expr::Unary>(op, w);
    return node;
  }
  if (this->bool_kind == Kind::Word) {
    t2 = this->_LookAhead();
    t2_bool_id = word_::BoolId(t2);
    t2_bool_kind = consts::GetKind(t2_bool_id);
    if ((t2_bool_kind == Kind::BoolBinary or (t2_bool_id == Id::Op_Less || t2_bool_id == Id::Op_Great))) {
      left = this->cur_word;
      this->_Next();
      op = this->bool_id;
      is_regex = t2_bool_id == Id::BoolBinary_EqualTilde;
      if (is_regex) {
        this->_Next(lex_mode_e::BashRegex);
      }
      else {
        this->_Next();
      }
      right = this->cur_word;
      if (is_regex) {
        ;  // pass
      }
      this->_Next();
      tilde = word_::TildeDetect(left);
      if (tilde) {
        left = tilde;
      }
      tilde = word_::TildeDetect(right);
      if (tilde) {
        right = tilde;
      }
      return Alloc<bool_expr::Binary>(op, left, right);
    }
    else {
      w = this->cur_word;
      tilde = word_::TildeDetect(w);
      if (tilde) {
        w = tilde;
      }
      this->_Next();
      return Alloc<bool_expr::WordTest>(w);
    }
  }
  if (this->bool_id == Id::Op_LParen) {
    this->_Next();
    node = this->ParseExpr();
    if (this->bool_id != Id::Op_RParen) {
      p_die(fmt103(word_::Pretty(this->cur_word)), this->cur_word);
    }
    this->_Next();
    return node;
  }
  p_die(fmt104(ui::PrettyId(this->bool_id)), this->cur_word);
}

}  // define namespace bool_parse

namespace braces {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__BracedTuple;
using syntax_asdl::word_part__BracedRange;
int NO_STEP = 0;

_NotARange::_NotARange(Str* s) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_NotARange)) {
  ;  // pass
}

_RangeParser::_RangeParser(match::SimpleLexer* lexer, int span_id) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_RangeParser)) {
  this->lexer = lexer;
  this->span_id = span_id;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str388;
}

void _RangeParser::_Next() {
  Tuple2<int, Str*> tup0 = this->lexer->Next();
  this->token_type = tup0.at0();
  this->token_val = tup0.at1();
}

Str* _RangeParser::_Eat(int token_type) {
  Str* val;

  if (this->token_type != token_type) {
    throw Alloc<_NotARange>(fmt105(token_type, this->token_type));
  }
  val = this->token_val;
  this->_Next();
  return val;
}

int _RangeParser::_ParseStep() {
  int step;

  this->_Next();
  step = to_int(this->_Eat(Id::Range_Int));
  if (step == 0) {
    p_die(fmt106(), this->span_id);
  }
  return step;
}

syntax_asdl::word_part__BracedRange* _RangeParser::_ParseRange(int range_kind) {
  Str* start;
  Str* end;
  int step;
  syntax_asdl::word_part__BracedRange* part;

  start = this->token_val;
  this->_Next();
  this->_Eat(Id::Range_Dots);
  end = this->_Eat(range_kind);
  if (this->token_type == Id::Range_Dots) {
    step = this->_ParseStep();
  }
  else {
    step = NO_STEP;
  }
  part = Alloc<word_part::BracedRange>(range_kind, start, end, step);
  return part;
}

syntax_asdl::word_part__BracedRange* _RangeParser::Parse() {
  syntax_asdl::word_part__BracedRange* part;
  int start;
  int end;
  int start_num;
  int end_num;
  bool upper1;
  bool upper2;

  this->_Next();
  if (this->token_type == Id::Range_Int) {
    part = this->_ParseRange(this->token_type);
    start = to_int(part->start);
    end = to_int(part->end);
    if (start < end) {
      if (part->step == NO_STEP) {
        part->step = 1;
      }
      if (part->step <= 0) {
        p_die(fmt107(part->step), this->span_id);
      }
    }
    else {
      if (start > end) {
        if (part->step == NO_STEP) {
          part->step = -1;
        }
        if (part->step >= 0) {
          p_die(fmt108(part->step), this->span_id);
        }
      }
      else {
        part->step = 1;
      }
    }
  }
  else {
    if (this->token_type == Id::Range_Char) {
      part = this->_ParseRange(this->token_type);
      start_num = ord(part->start->index(0));
      end_num = ord(part->end->index(0));
      if (start_num < end_num) {
        if (part->step == NO_STEP) {
          part->step = 1;
        }
        if (part->step <= 0) {
          p_die(fmt109(part->step), this->span_id);
        }
      }
      else {
        if (start_num > end_num) {
          if (part->step == NO_STEP) {
            part->step = -1;
          }
          if (part->step >= 0) {
            p_die(fmt110(part->step), this->span_id);
          }
        }
        else {
          part->step = 1;
        }
      }
      upper1 = part->start->isupper();
      upper2 = part->end->isupper();
      if (upper1 != upper2) {
        p_die(fmt111(), this->span_id);
      }
    }
    else {
      throw Alloc<_NotARange>(str396);
    }
  }
  this->_Eat(Id::Eol_Tok);
  return part;
}

syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok) {
  match::SimpleLexer* lexer;
  braces::_RangeParser* p;
  syntax_asdl::word_part__BracedRange* part;

  lexer = match::BraceRangeLexer(tok->val);
  p = Alloc<_RangeParser>(lexer, tok->span_id);
  try {
    part = p->Parse();
  }
  catch (_NotARange* e) {
    return nullptr;
  }
  part->spids->append(tok->span_id);
  return part;
}

_StackFrame::_StackFrame(List<syntax_asdl::word_part_t*>* cur_parts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_StackFrame)) {
  this->cur_parts = cur_parts;
  this->alt_part = Alloc<word_part::BracedTuple>();
  this->saw_comma = false;
}

syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* cur_parts;
  List<braces::_StackFrame*>* stack;
  bool found;
  int i;
  bool append;
  syntax_asdl::word_part_t* UP_part;
  int id_;
  braces::_StackFrame* new_frame;
  syntax_asdl::word_part_t* range_part;
  syntax_asdl::word_part_t* part2;
  braces::_StackFrame* frame;

  cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
  stack = Alloc<List<braces::_StackFrame*>>();
  found = false;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    append = true;
    UP_part = part;
    if (part->tag_() == word_part_e::Literal) {
      Token* part = static_cast<Token*>(UP_part);
      id_ = part->id;
      if (id_ == Id::Lit_LBrace) {
        new_frame = Alloc<_StackFrame>(cur_parts);
        stack->append(new_frame);
        cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
        append = false;
        found = true;
      }
      else {
        if (id_ == Id::Lit_Comma) {
          if (len(stack)) {
            stack->index(-1)->saw_comma = true;
            stack->index(-1)->alt_part->words->append(Alloc<compound_word>(cur_parts));
            cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
            append = false;
          }
        }
        else {
          if (id_ == Id::Lit_RBrace) {
            if (len(stack) == 0) {
              return nullptr;
            }
            range_part = nullptr;
            if ((!stack->index(-1)->saw_comma and len(cur_parts) == 1)) {
              part2 = cur_parts->index(0);
              if (part2->tag_() == word_part_e::Literal) {
                Token* tok = static_cast<Token*>(part2);
                if (tok->id == Id::Lit_Chars) {
                  range_part = _RangePartDetect(tok);
                  if (range_part) {
                    frame = stack->pop();
                    cur_parts = frame->cur_parts;
                    cur_parts->append(range_part);
                    append = false;
                  }
                }
              }
            }
            if (!range_part) {
              if (!stack->index(-1)->saw_comma) {
                return nullptr;
              }
              stack->index(-1)->alt_part->words->append(Alloc<compound_word>(cur_parts));
              frame = stack->pop();
              cur_parts = frame->cur_parts;
              cur_parts->append(frame->alt_part);
              append = false;
            }
          }
        }
      }
    }
    if (append) {
      cur_parts->append(part);
    }
  }
  if (len(stack) != 0) {
    return nullptr;
  }
  if (found) {
    return Alloc<word::BracedTree>(cur_parts);
  }
  else {
    return nullptr;
  }
}

List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::word__BracedTree* brace_tree;

  out = Alloc<List<syntax_asdl::word_t*>>();
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    if (len(w->parts) >= 3) {
      brace_tree = _BraceDetect(w);
      if (brace_tree) {
        out->append(brace_tree);
        continue;
      }
    }
    out->append(w);
  }
  return out;
}

int _LeadingZeros(Str* s) {
  int n;

  n = 0;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* c = it.Value();
    if (str_equals(c, str397)) {
      n += 1;
    }
    else {
      break;
    }
  }
  return n;
}

Str* _IntToString(int i, int width) {
  Str* s;
  int n;
  Str* pad;

  s = str(i);
  n = len(s);
  if (n < width) {
    pad = str_repeat(str398, (width - n));
    return str_concat(pad, s);
  }
  else {
    return s;
  }
}

List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part) {
  List<Str*>* nums;
  int z1;
  int z2;
  int width;
  int n;
  int end;
  int step;
  List<Str*>* chars;
  int ord_end;

  if (part->kind == Id::Range_Int) {
    nums = Alloc<List<Str*>>();
    z1 = _LeadingZeros(part->start);
    z2 = _LeadingZeros(part->end);
    if ((z1 == 0 and z2 == 0)) {
      width = 0;
    }
    else {
      if (z1 < z2) {
        width = len(part->end);
      }
      else {
        width = len(part->start);
      }
    }
    n = to_int(part->start);
    end = to_int(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n > end) {
          break;
        }
      }
    }
    else {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n < end) {
          break;
        }
      }
    }
    return nums;
  }
  else {
    chars = Alloc<List<Str*>>();
    n = ord(part->start);
    ord_end = ord(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n > ord_end) {
          break;
        }
      }
    }
    else {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n < ord_end) {
          break;
        }
      }
    }
    return chars;
  }
}

List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes) {
  List<List<syntax_asdl::word_part_t*>*>* out;
  List<syntax_asdl::word_part_t*>* prefix;
  syntax_asdl::word_part_t* expand_part;
  syntax_asdl::word_part_t* UP_part;
  List<List<syntax_asdl::word_part_t*>*>* expanded_alts;
  List<syntax_asdl::word_part_t*>* out_parts;
  List<Str*>* strs;
  List<syntax_asdl::word_part_t*>* out_parts_;
  syntax_asdl::Token* t;

  out = Alloc<List<List<syntax_asdl::word_part_t*>*>>();
  prefix = parts->slice(0, first_alt_index);
  expand_part = parts->index(first_alt_index);
  UP_part = expand_part;
  switch (expand_part->tag_()) {
    case word_part_e::BracedTuple: {
      word_part__BracedTuple* expand_part = static_cast<word_part__BracedTuple*>(UP_part);
      expanded_alts = Alloc<List<List<syntax_asdl::word_part_t*>*>>();
      for (ListIter<syntax_asdl::compound_word*> it(expand_part->words); !it.Done(); it.Next()) {
        syntax_asdl::compound_word* w = it.Value();
        expanded_alts->extend(_BraceExpand(w->parts));
      }
      for (ListIter<List<syntax_asdl::word_part_t*>*> it(expanded_alts); !it.Done(); it.Next()) {
        List<syntax_asdl::word_part_t*>* alt_parts = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts = Alloc<List<syntax_asdl::word_part_t*>>();
          out_parts->extend(prefix);
          out_parts->extend(alt_parts);
          out_parts->extend(suffix);
          out->append(out_parts);
        }
      }
    }
      break;
    case word_part_e::BracedRange: {
      word_part__BracedRange* expand_part = static_cast<word_part__BracedRange*>(UP_part);
      strs = _RangeStrings(expand_part);
      for (ListIter<Str*> it(strs); !it.Done(); it.Next()) {
        Str* s = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts_ = Alloc<List<syntax_asdl::word_part_t*>>();
          out_parts_->extend(prefix);
          t = Alloc<Token>(Id::Lit_Chars, expand_part->spids->index(0), s);
          out_parts_->append(t);
          out_parts_->extend(suffix);
          out->append(out_parts_);
        }
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return out;
}

List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts) {
  int num_alts;
  int first_alt_index;
  int i;
  int tag;
  List<syntax_asdl::word_part_t*>* suffix;
  List<syntax_asdl::word_part_t*>* tail_parts;
  List<List<syntax_asdl::word_part_t*>*>* suffixes;

  num_alts = 0;
  first_alt_index = -1;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    tag = part->tag_();
    if ((tag == word_part_e::BracedTuple || tag == word_part_e::BracedRange)) {
      num_alts += 1;
      if (num_alts == 1) {
        first_alt_index = i;
      }
      else {
        if (num_alts == 2) {
          break;
        }
      }
    }
  }
  if (num_alts == 0) {
    return Alloc<List<List<syntax_asdl::word_part_t*>*>>(std::initializer_list<List<syntax_asdl::word_part_t*>*>{parts});
  }
  else {
    if (num_alts == 1) {
      suffix = parts->slice((first_alt_index + 1));
      return _ExpandPart(parts, first_alt_index, Alloc<List<List<syntax_asdl::word_part_t*>*>>(std::initializer_list<List<syntax_asdl::word_part_t*>*>{suffix}));
    }
    else {
      tail_parts = parts->slice((first_alt_index + 1));
      suffixes = _BraceExpand(tail_parts);
      return _ExpandPart(parts, first_alt_index, suffixes);
    }
  }
}

List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::compound_word*>* out;
  syntax_asdl::word_t* UP_w;
  List<List<syntax_asdl::word_part_t*>*>* parts_list;
  List<syntax_asdl::compound_word*>* tmp;

  out = Alloc<List<syntax_asdl::compound_word*>>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    UP_w = w;
    switch (w->tag_()) {
      case word_e::BracedTree: {
        word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
        parts_list = _BraceExpand(w->parts);
        tmp = Alloc<List<syntax_asdl::compound_word*>>();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(parts_list); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* p = it.Value();
          tmp->append(Alloc<compound_word>(p));
        }
        out->extend(tmp);
      }
        break;
      case word_e::Compound: {
        compound_word* w = static_cast<compound_word*>(UP_w);
        out->append(w);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  return out;
}

}  // define namespace braces

namespace builtin_assign {  // define
namespace builtin_i = option_asdl::builtin_i;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::scope_e;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::cmd_value__Assign;
namespace source = syntax_asdl::source;
int _OTHER = 0;
int _READONLY = 1;
int _EXPORT = 2;

int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags) {
  return _PrintVariables(mem, cmd_val, attrs, print_flags, _OTHER);
}

int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags, int builtin) {
  Dict<Str*, runtime_asdl::value_t*>* flag;
  runtime_asdl::value_t* tmp_g;
  runtime_asdl::value_t* tmp_a;
  runtime_asdl::value_t* tmp_A;
  bool flag_g;
  bool flag_a;
  bool flag_A;
  runtime_asdl::value_t* tmp_n;
  runtime_asdl::value_t* tmp_r;
  runtime_asdl::value_t* tmp_x;
  Str* flag_n;
  Str* flag_r;
  Str* flag_x;
  runtime_asdl::scope_t lookup_mode;
  bool print_all;
  Dict<Str*, runtime_asdl::cell*>* cells;
  List<Str*>* names;
  Str* name;
  Str* s;
  Str* invalid;
  int count;
  runtime_asdl::cell* cell;
  runtime_asdl::value_t* val;
  List<Str*>* decl;
  List<Str*>* flags;
  bool has_holes;
  bool first;
  int i;
  List<Str*>* body;
  Str* key_quoted;
  Str* value_quoted;

  flag = attrs->attrs;
  tmp_g = flag->get(str399);
  tmp_a = flag->get(str400);
  tmp_A = flag->get(str401);
  flag_g = (tmp_g and tmp_g->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_g)->b : false;
  flag_a = (tmp_a and tmp_a->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_a)->b : false;
  flag_A = (tmp_A and tmp_A->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_A)->b : false;
  tmp_n = flag->get(str402);
  tmp_r = flag->get(str403);
  tmp_x = flag->get(str404);
  flag_n = (tmp_n and tmp_n->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_n)->s : nullptr;
  flag_r = (tmp_r and tmp_r->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_r)->s : nullptr;
  flag_x = (tmp_x and tmp_x->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_x)->s : nullptr;
  lookup_mode = scope_e::Dynamic;
  if (cmd_val->builtin_id == builtin_i::local) {
    if ((flag_g and !mem->IsGlobalScope())) {
      return 1;
    }
    lookup_mode = scope_e::LocalOnly;
  }
  else {
    if (flag_g) {
      lookup_mode = scope_e::GlobalOnly;
    }
  }
  if (len(cmd_val->pairs) == 0) {
    print_all = true;
    cells = mem->GetAllCells(lookup_mode);
    names = sorted(cells);
  }
  else {
    print_all = false;
    names = Alloc<List<Str*>>();
    cells = Alloc<Dict<Str*, runtime_asdl::cell*>>();
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      name = pair->var_name;
      if ((pair->rval and pair->rval->tag_() == value_e::Str)) {
        s = static_cast<value__Str*>(pair->rval)->s;
        invalid = fmt112(name, s);
        names->append(invalid);
        cells->set(invalid, nullptr);
      }
      else {
        names->append(name);
        cells->set(name, mem->GetCell(name, lookup_mode));
      }
    }
  }
  count = 0;
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    cell = cells->index(name);
    if (cell == nullptr) {
      continue;
    }
    val = cell->val;
    if (val->tag_() == value_e::Undef) {
      continue;
    }
    if ((builtin == _READONLY and !cell->readonly)) {
      continue;
    }
    if ((builtin == _EXPORT and !cell->exported)) {
      continue;
    }
    if ((maybe_str_equals(flag_n, str406) and !cell->nameref)) {
      continue;
    }
    if ((maybe_str_equals(flag_n, str407) and cell->nameref)) {
      continue;
    }
    if ((maybe_str_equals(flag_r, str408) and !cell->readonly)) {
      continue;
    }
    if ((maybe_str_equals(flag_r, str409) and cell->readonly)) {
      continue;
    }
    if ((maybe_str_equals(flag_x, str410) and !cell->exported)) {
      continue;
    }
    if ((maybe_str_equals(flag_x, str411) and cell->exported)) {
      continue;
    }
    if ((flag_a and val->tag_() != value_e::MaybeStrArray)) {
      continue;
    }
    if ((flag_A and val->tag_() != value_e::AssocArray)) {
      continue;
    }
    decl = Alloc<List<Str*>>();
    if (print_flags) {
      flags = Alloc<List<Str*>>();
      if (cell->nameref) {
        flags->append(str412);
      }
      if (cell->readonly) {
        flags->append(str413);
      }
      if (cell->exported) {
        flags->append(str414);
      }
      if (val->tag_() == value_e::MaybeStrArray) {
        flags->append(str415);
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          flags->append(str416);
        }
      }
      if (len(flags) == 0) {
        flags->append(str417);
      }
      decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str418, str419->join(flags), str420, name}));
    }
    else {
      decl->append(name);
    }
    if (val->tag_() == value_e::Str) {
      value__Str* str_val = static_cast<value__Str*>(val);
      decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str421, qsn::maybe_shell_encode(str_val->s)}));
    }
    else {
      if (val->tag_() == value_e::MaybeStrArray) {
        value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
        has_holes = false;
        for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s == nullptr) {
            has_holes = true;
            break;
          }
        }
        if (has_holes) {
          decl->append(str422);
          first = true;
          i = 0;
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next(), ++i) {
            Str* element = it.Value();
            if (element != nullptr) {
              if (first) {
                decl->append(str423);
                first = false;
              }
              decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str424, name, str425, str(i), str426, qsn::maybe_shell_encode(element)}));
            }
          }
        }
        else {
          body = Alloc<List<Str*>>();
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
            Str* element = it.Value();
            if (len(body) > 0) {
              body->append(str427);
            }
            body->append(qsn::maybe_shell_encode(element));
          }
          decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str428, str429->join(body), str430}));
        }
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
          body = Alloc<List<Str*>>();
          for (ListIter<Str*> it(sorted(assoc_val->d)); !it.Done(); it.Next()) {
            Str* key = it.Value();
            if (len(body) > 0) {
              body->append(str431);
            }
            key_quoted = qsn::maybe_shell_encode(key, qsn::MUST_QUOTE);
            value_quoted = qsn::maybe_shell_encode(assoc_val->d->index(key));
            body->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str432, key_quoted, str433, value_quoted}));
          }
          if (len(body) > 0) {
            decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str434, str435->join(body), str436}));
          }
        }
        else {
          ;  // pass
        }
      }
    }
    print(str437->join(decl));
    count += 1;
  }
  if ((print_all or count == len(names))) {
    return 0;
  }
  else {
    return 1;
  }
}

Export::Export(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Export::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::export_* arg;

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str438, arg_r);
  arg = Alloc<arg_types::export_>(attrs->attrs);
  if (arg->f) {
    e_usage(str439);
  }
  if ((arg->p or len(cmd_val->pairs) == 0)) {
    return _PrintVariables(this->mem, cmd_val, attrs, true, _EXPORT);
  }
  if (arg->n) {
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      if (pair->rval != nullptr) {
        e_usage(fmt113(), pair->spid);
      }
      this->mem->ClearFlag(pair->var_name, state::ClearExport, scope_e::Dynamic);
    }
  }
  else {
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      this->mem->SetVar(Alloc<lvalue::Named>(pair->var_name), pair->rval, scope_e::Dynamic, state::SetExport);
    }
  }
  return 0;
}

runtime_asdl::value_t* _ReconcileTypes(runtime_asdl::value_t* rval, bool flag_a, bool flag_A, int span_id) {
  if ((flag_a and (rval != nullptr and rval->tag_() != value_e::MaybeStrArray))) {
    e_usage(fmt114(), span_id);
  }
  if ((flag_A and rval)) {
    if (rval->tag_() == value_e::MaybeStrArray) {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(rval);
      if (len(array_val->strs) == 0) {
        return Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
      }
    }
    if (rval->tag_() != value_e::AssocArray) {
      e_usage(fmt115(), span_id);
    }
  }
  return rval;
}

Readonly::Readonly(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Readonly::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::readonly* arg;
  runtime_asdl::value_t* rval;

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str443, arg_r);
  arg = Alloc<arg_types::readonly>(attrs->attrs);
  if ((arg->p or len(cmd_val->pairs) == 0)) {
    return _PrintVariables(this->mem, cmd_val, attrs, true, _READONLY);
  }
  for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
    runtime_asdl::assign_arg* pair = it.Value();
    if (pair->rval == nullptr) {
      if (arg->a) {
        rval = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
      }
      else {
        if (arg->A) {
          rval = Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
        }
        else {
          rval = nullptr;
        }
      }
    }
    else {
      rval = pair->rval;
    }
    rval = _ReconcileTypes(rval, arg->a, arg->A, pair->spid);
    this->mem->SetVar(Alloc<lvalue::Named>(pair->var_name), rval, scope_e::Dynamic, state::SetReadOnly);
  }
  return 0;
}

NewVar::NewVar(state::Mem* mem, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->funcs = funcs;
  this->errfmt = errfmt;
}

int NewVar::_PrintFuncs(List<Str*>* names) {
  int status;

  status = 0;
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    if (dict_contains(this->funcs, name)) {
      print(name);
    }
    else {
      status = 1;
    }
  }
  return status;
}

int NewVar::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::new_var* arg;
  int status;
  List<Str*>* names;
  runtime_asdl::scope_t lookup_mode;
  int flags;
  int flags_to_clear;
  runtime_asdl::value_t* rval;
  runtime_asdl::value_t* old_val;

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str444, arg_r);
  arg = Alloc<arg_types::new_var>(attrs->attrs);
  status = 0;
  if (arg->f) {
    names = arg_r->Rest();
    if (len(names)) {
      status = this->_PrintFuncs(names);
    }
    else {
      e_usage(str445);
    }
    return status;
  }
  if (arg->F) {
    names = arg_r->Rest();
    if (len(names)) {
      status = this->_PrintFuncs(names);
    }
    else {
      for (ListIter<Str*> it(sorted(this->funcs)); !it.Done(); it.Next()) {
        Str* func_name = it.Value();
        print(fmt116(func_name));
      }
    }
    return status;
  }
  if (arg->p) {
    return _PrintVariables(this->mem, cmd_val, attrs, true);
  }
  else {
    if (len(cmd_val->pairs) == 0) {
      return _PrintVariables(this->mem, cmd_val, attrs, false);
    }
  }
  if (cmd_val->builtin_id == builtin_i::local) {
    lookup_mode = scope_e::LocalOnly;
  }
  else {
    if (arg->g) {
      lookup_mode = scope_e::GlobalOnly;
    }
    else {
      lookup_mode = scope_e::LocalOnly;
    }
  }
  flags = 0;
  if (maybe_str_equals(arg->x, str447)) {
    flags |= state::SetExport;
  }
  if (maybe_str_equals(arg->r, str448)) {
    flags |= state::SetReadOnly;
  }
  if (maybe_str_equals(arg->n, str449)) {
    flags |= state::SetNameref;
  }
  flags_to_clear = 0;
  if (maybe_str_equals(arg->x, str450)) {
    flags |= state::ClearExport;
  }
  if (maybe_str_equals(arg->r, str451)) {
    flags |= state::ClearReadOnly;
  }
  if (maybe_str_equals(arg->n, str452)) {
    flags |= state::ClearNameref;
  }
  for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
    runtime_asdl::assign_arg* pair = it.Value();
    rval = pair->rval;
    if ((rval == nullptr and (arg->a or arg->A))) {
      old_val = this->mem->GetVar(pair->var_name);
      if (arg->a) {
        if (old_val->tag_() != value_e::MaybeStrArray) {
          rval = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
      }
      else {
        if (arg->A) {
          if (old_val->tag_() != value_e::AssocArray) {
            rval = Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
          }
        }
      }
    }
    rval = _ReconcileTypes(rval, arg->a, arg->A, pair->spid);
    this->mem->SetVar(Alloc<lvalue::Named>(pair->var_name), rval, lookup_mode, flags);
  }
  return status;
}

Unset::Unset(state::Mem* mem, optview::Exec* exec_opts, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->funcs = funcs;
  this->parse_ctx = parse_ctx;
  this->arith_ev = arith_ev;
  this->errfmt = errfmt;
}

bool Unset::_UnsetVar(Str* arg, int spid, bool proc_fallback) {
  alloc::Arena* arena;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::lvalue_t* lval;
  bool found;

  arena = this->parse_ctx->arena;
  a_parser = this->parse_ctx->MakeArithParser(arg);
  {  // with
    alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(spid));

    try {
      anode = a_parser->Parse();
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      e_usage(fmt117(), spid);
    }
  }
  lval = this->arith_ev->EvalArithLhs(anode, spid);
  if ((!this->exec_opts->eval_unsafe_arith() and lval->tag_() != lvalue_e::Named)) {
    e_usage(fmt118(), spid);
  }
  found = false;
  try {
    found = this->mem->Unset(lval, scope_e::Dynamic, false);
  }
  catch (error::Runtime* e) {
    e->span_id = spid;
    ui::PrettyPrintError(e, arena);
    return false;
  }
  if ((proc_fallback and !found)) {
    if (dict_contains(this->funcs, arg)) {
      this->funcs->remove(arg);
    }
  }
  return true;
}

int Unset::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::unset* arg;
  List<Str*>* argv;
  List<int>* arg_spids;
  int i;
  int spid;

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str455, cmd_val);
  attrs = tup0.at0();
  arg_r = tup0.at1();
  arg = Alloc<arg_types::unset>(attrs->attrs);
  Tuple2<List<Str*>*, List<int>*> tup1 = arg_r->Rest2();
  argv = tup1.at0();
  arg_spids = tup1.at1();
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* name = it.Value();
    spid = arg_spids->index(i);
    if (arg->f) {
      if (dict_contains(this->funcs, name)) {
        this->funcs->remove(name);
      }
    }
    else {
      if (arg->v) {
        if (!this->_UnsetVar(name, spid, false)) {
          return 1;
        }
      }
      else {
        if (!this->_UnsetVar(name, spid, true)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

Shift::Shift(state::Mem* mem) {
  this->mem = mem;
}

int Shift::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int num_args;
  int n;
  Str* arg;

  num_args = (len(cmd_val->argv) - 1);
  if (num_args == 0) {
    n = 1;
  }
  else {
    if (num_args == 1) {
      arg = cmd_val->argv->index(1);
      try {
        n = to_int(arg);
      }
      catch (ValueError*) {
        e_usage(fmt119(arg));
      }
    }
    else {
      e_usage(str457);
    }
  }
  return this->mem->Shift(n);
}

}  // define namespace builtin_assign

namespace builtin_meta {  // define
namespace cmd_value = runtime_asdl::cmd_value;
namespace source = syntax_asdl::source;

Eval::Eval(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, cmd_eval::CommandEvaluator* cmd_ev) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->exec_opts = exec_opts;
  this->cmd_ev = cmd_ev;
}

int Eval::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  Str* code_str;
  int eval_spid;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::source__EvalArg* src;

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str458, cmd_val);
  arg_r = tup0.at1();
  if (this->exec_opts->strict_eval_builtin()) {
    Tuple2<Str*, int> tup1 = arg_r->ReadRequired2(str459);
    code_str = tup1.at0();
    eval_spid = tup1.at1();
    if (!arg_r->AtEnd()) {
      e_usage(str460);
    }
  }
  else {
    code_str = str461->join(arg_r->Rest());
    eval_spid = cmd_val->arg_spids->index(0);
  }
  line_reader = reader::StringLineReader(code_str, this->arena);
  c_parser = this->parse_ctx->MakeOshParser(line_reader);
  src = Alloc<source::EvalArg>(eval_spid);
  {  // with
    alloc::ctx_Location ctx(this->arena, src);

    return main_loop::Batch(this->cmd_ev, c_parser, this->arena, cmd_eval::IsEvalSource);
  }
}

Source::Source(parse_lib::ParseContext* parse_ctx, state::SearchPath* search_path, cmd_eval::CommandEvaluator* cmd_ev, process::FdState* fd_state, ui::ErrorFormatter* errfmt) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->search_path = search_path;
  this->cmd_ev = cmd_ev;
  this->fd_state = fd_state;
  this->mem = cmd_ev->mem;
  this->errfmt = errfmt;
}

int Source::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int call_spid;
  args::Reader* arg_r;
  Str* path;
  Str* resolved;
  mylib::LineReader* f;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;
  List<Str*>* source_argv;
  syntax_asdl::source__SourcedFile* src;
  int status;

  call_spid = cmd_val->arg_spids->index(0);
  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str462, cmd_val);
  arg_r = tup2.at1();
  path = arg_r->Peek();
  if (path == nullptr) {
    e_usage(str463);
  }
  arg_r->Next();
  resolved = this->search_path->Lookup(path, false);
  if (resolved == nullptr) {
    resolved = path;
  }
  try {
    f = this->fd_state->Open(resolved);
  }
  catch (OSError* e) {
    this->errfmt->Print_(fmt120(path, pyutil::strerror(e)), cmd_val->arg_spids->index(1));
    return 1;
  }
  try {
    try {
      line_reader = Alloc<reader::FileLineReader>(f, this->arena);
      c_parser = this->parse_ctx->MakeOshParser(line_reader);
      source_argv = arg_r->Rest();
      this->mem->PushSource(path, source_argv);
      src = Alloc<source::SourcedFile>(path, call_spid);
      try {
        {  // with
          alloc::ctx_Location ctx(this->arena, src);

          status = main_loop::Batch(this->cmd_ev, c_parser, this->arena, cmd_eval::IsEvalSource);
        }
      }
      catch (std::exception) { }      return status;
    }
    catch (error::_ControlFlow* e) {
      if (e->IsReturn()) {
        return e->StatusCode();
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }}

Command::Command(vm::_Executor* shell_ex, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path) {
  this->shell_ex = shell_ex;
  this->funcs = funcs;
  this->aliases = aliases;
  this->search_path = search_path;
}

int Command::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::command* arg;
  int status;
  List<Str*>* names;
  Str* kind;
  Str* argument;

  Tuple2<args::_Attributes*, args::Reader*> tup3 = flag_spec::ParseCmdVal(str465, cmd_val);
  attrs = tup3.at0();
  arg_r = tup3.at1();
  arg = Alloc<arg_types::command>(attrs->attrs);
  if (arg->v) {
    status = 0;
    names = arg_r->Rest();
    for (ListIter<Tuple2<Str*, Str*>*> it(_ResolveNames(names, this->funcs, this->aliases, this->search_path)); !it.Done(); it.Next()) {
      Tuple2<Str*, Str*>* tup4 = it.Value();
      kind = tup4->at0();
      argument = tup4->at1();
      if (kind == nullptr) {
        status = 1;
      }
      else {
        print(argument);
      }
    }
    return status;
  }
  cmd_val = Alloc<cmd_value::Argv>(cmd_val->argv->slice(1), cmd_val->arg_spids->slice(1), nullptr);
  return this->shell_ex->RunSimpleCommand(cmd_val, true, false);
}

Builtin::Builtin(vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt) {
  this->shell_ex = shell_ex;
  this->errfmt = errfmt;
}

int Builtin::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Str* name;
  int to_run;
  int span_id;
  runtime_asdl::cmd_value__Argv* cmd_val2;

  if (len(cmd_val->argv) == 1) {
    return 0;
  }
  name = cmd_val->argv->index(1);
  to_run = consts::LookupNormalBuiltin(name);
  if (to_run == consts::NO_INDEX) {
    to_run = consts::LookupSpecialBuiltin(name);
  }
  if (to_run == consts::NO_INDEX) {
    span_id = cmd_val->arg_spids->index(1);
    if (consts::LookupAssignBuiltin(name) != consts::NO_INDEX) {
      this->errfmt->Print_(str466, span_id);
    }
    else {
      this->errfmt->Print_(fmt121(name), span_id);
    }
    return 1;
  }
  cmd_val2 = Alloc<cmd_value::Argv>(cmd_val->argv->slice(1), cmd_val->arg_spids->slice(1), cmd_val->block);
  return this->shell_ex->RunBuiltin(to_run, cmd_val2);
}

int _AdjustStatus(Str* status_ok, int status) {
  if ((str_equals(status_ok->lower(), str468) and status == 141)) {
    status = 0;
  }
  return status;
}

Run_::Run_(state::MutableOpts* mutable_opts, state::Mem* mem, vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt) {
  this->mutable_opts = mutable_opts;
  this->mem = mem;
  this->shell_ex = shell_ex;
  this->errfmt = errfmt;
}

int Run_::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::run* arg;
  List<Str*>* argv;
  List<int>* spids;
  runtime_asdl::cmd_value__Argv* cmd_val2;
  int failure_spid;
  int status;
  Str* var_name;

  Tuple2<args::_Attributes*, args::Reader*> tup5 = flag_spec::ParseOilCmdVal(str469, cmd_val);
  attrs = tup5.at0();
  arg_r = tup5.at1();
  arg = Alloc<arg_types::run>(attrs->attrs);
  if (arg_r->Peek() == nullptr) {
    e_die(fmt122(), 2);
  }
  Tuple2<List<Str*>*, List<int>*> tup6 = arg_r->Rest2();
  argv = tup6.at0();
  spids = tup6.at1();
  cmd_val2 = Alloc<cmd_value::Argv>(argv, spids, cmd_val->block);
  failure_spid = runtime::NO_SPID;
  try {
    {  // with
      state::ctx_ErrExit ctx(this->mutable_opts, true, cmd_val->arg_spids->index(0));

      status = this->shell_ex->RunSimpleCommand(cmd_val2, true);
    }
  }
  catch (error::ErrExit* e) {
    status = e->exit_status;
    failure_spid = e->span_id;
  }
  if (arg->status_ok != nullptr) {
    status = _AdjustStatus(arg->status_ok, status);
  }
  if ((arg->allow_status_01 and (status != 0 && status != 1))) {
    if (failure_spid != runtime::NO_SPID) {
      this->errfmt->Print_(str471, failure_spid);
      this->errfmt->StderrLine(str472);
    }
    throw Alloc<error::ErrExit>(fmt123(status), spids->index(0), status);
  }
  if (arg->assign_status != nullptr) {
    var_name = arg->assign_status;
    if (var_name->startswith(str474)) {
      var_name = var_name->slice(1);
    }
    state::SetLocalString(this->mem, var_name, str(status));
    return 0;
  }
  return status;
}

List<Tuple2<Str*, Str*>*>* _ResolveNames(List<Str*>* names, Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path) {
  List<Tuple2<Str*, Str*>*>* results;
  Tuple2<Str*, Str*>* kind;
  Str* resolved;
  Str* no_str;

  results = Alloc<List<Tuple2<Str*, Str*>*>>();
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    if (dict_contains(funcs, name)) {
      kind = (Alloc<Tuple2<Str*, Str*>>(str475, name));
    }
    else {
      if (dict_contains(aliases, name)) {
        kind = (Alloc<Tuple2<Str*, Str*>>(str476, name));
      }
      else {
        if (consts::LookupNormalBuiltin(name) != 0) {
          kind = (Alloc<Tuple2<Str*, Str*>>(str477, name));
        }
        else {
          if (consts::LookupSpecialBuiltin(name) != 0) {
            kind = (Alloc<Tuple2<Str*, Str*>>(str478, name));
          }
          else {
            if (consts::LookupAssignBuiltin(name) != 0) {
              kind = (Alloc<Tuple2<Str*, Str*>>(str479, name));
            }
            else {
              if (consts::IsControlFlow(name)) {
                kind = (Alloc<Tuple2<Str*, Str*>>(str480, name));
              }
              else {
                if (consts::IsKeyword(name)) {
                  kind = (Alloc<Tuple2<Str*, Str*>>(str481, name));
                }
                else {
                  resolved = search_path->Lookup(name);
                  if (resolved == nullptr) {
                    no_str = nullptr;
                    kind = (Alloc<Tuple2<Str*, Str*>>(no_str, name));
                  }
                  else {
                    kind = (Alloc<Tuple2<Str*, Str*>>(str482, resolved));
                  }
                }
              }
            }
          }
        }
      }
    }
    results->append(kind);
  }
  return results;
}

Type::Type(Dict<Str*, syntax_asdl::command__ShFunction*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  this->funcs = funcs;
  this->aliases = aliases;
  this->search_path = search_path;
  this->errfmt = errfmt;
}

int Type::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::type* arg;
  Dict<Str*, syntax_asdl::command__ShFunction*>* funcs;
  int status;
  List<Tuple2<Str*, Str*>*>* r;
  Str* kind;
  Str* name;
  Str* resolved;

  Tuple2<args::_Attributes*, args::Reader*> tup7 = flag_spec::ParseCmdVal(str483, cmd_val);
  attrs = tup7.at0();
  arg_r = tup7.at1();
  arg = Alloc<arg_types::type>(attrs->attrs);
  if (arg->f) {
    funcs = Alloc<Dict<Str*, syntax_asdl::command__ShFunction*>>();
  }
  else {
    funcs = this->funcs;
  }
  status = 0;
  r = _ResolveNames(arg_r->Rest(), funcs, this->aliases, this->search_path);
  for (ListIter<Tuple2<Str*, Str*>*> it(r); !it.Done(); it.Next()) {
    Tuple2<Str*, Str*>* tup8 = it.Value();
    kind = tup8->at0();
    name = tup8->at1();
    if (kind == nullptr) {
      this->errfmt->StderrLine(fmt124(name));
      status = 1;
    }
    else {
      if (arg->t) {
        print(kind);
      }
      else {
        if (arg->p) {
          if (str_equals(kind, str485)) {
            print(name);
          }
        }
        else {
          if (arg->P) {
            if (str_equals(kind, str486)) {
              print(name);
            }
            else {
              resolved = this->search_path->Lookup(name);
              if (resolved == nullptr) {
                status = 1;
              }
              else {
                print(resolved);
              }
            }
          }
          else {
            print(fmt125(name, kind));
            if (str_equals(kind, str488)) {
              ;  // pass
            }
          }
        }
      }
    }
  }
  return status;
}

}  // define namespace builtin_meta

namespace builtin_misc {  // define
using runtime_asdl::span_e;
using runtime_asdl::cmd_value__Argv;
namespace lvalue = runtime_asdl::lvalue;
namespace value = runtime_asdl::value;
using runtime_asdl::scope_e;
namespace source = syntax_asdl::source;

Times::Times() : vm::_Builtin() {
}

int Times::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  pyos::PrintTimes();
  return 0;
}

Tuple2<bool, bool> _AppendParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans, int max_results, bool join_next, List<mylib::BufWriter*>* parts) {
  int start_index;
  bool last_span_was_black;
  runtime_asdl::span_t span_type;
  int end_index;
  mylib::BufWriter* buf;
  bool done;
  runtime_asdl::span_t last_span_type;

  start_index = 0;
  last_span_was_black = false;
  for (ListIter<Tuple2<runtime_asdl::span_t, int>*> it(spans); !it.Done(); it.Next()) {
    Tuple2<runtime_asdl::span_t, int>* tup0 = it.Value();
    span_type = tup0->at0();
    end_index = tup0->at1();
    if (span_type == span_e::Black) {
      if ((join_next and parts)) {
        parts->index(-1)->write(s->slice(start_index, end_index));
        join_next = false;
      }
      else {
        buf = Alloc<mylib::BufWriter>();
        buf->write(s->slice(start_index, end_index));
        parts->append(buf);
      }
      last_span_was_black = true;
    }
    else {
      if (span_type == span_e::Delim) {
        if (join_next) {
          parts->index(-1)->write(s->slice(start_index, end_index));
          join_next = false;
        }
        last_span_was_black = false;
      }
      else {
        if (span_type == span_e::Backslash) {
          if (last_span_was_black) {
            join_next = true;
          }
          last_span_was_black = false;
        }
      }
    }
    if ((max_results and len(parts) >= max_results)) {
      join_next = true;
    }
    start_index = end_index;
  }
  done = true;
  if (len(spans)) {
    Tuple2<runtime_asdl::span_t, int>* tup1 = spans->index(-1);
    last_span_type = tup1->at0();
    if (last_span_type == span_e::Backslash) {
      done = false;
    }
  }
  return (Tuple2<bool, bool>(done, join_next));
}

Tuple2<Str*, bool> ReadLineFromStdin(Str* delim_char) {
  bool eof;
  List<Str*>* chars;
  Str* c;

  eof = false;
  chars = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 1);
    if (len(c) == 0) {
      eof = true;
      break;
    }
    if (maybe_str_equals(c, delim_char)) {
      break;
    }
    chars->append(c);
  }
  return (Tuple2<Str*, bool>(str489->join(chars), eof));
}

Str* _ReadLine() {
  List<Str*>* chars;
  Str* c;

  chars = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 1);
    if (len(c) == 0) {
      break;
    }
    chars->append(c);
    if (str_equals(c, str490)) {
      break;
    }
  }
  return str491->join(chars);
}

Str* _ReadAll() {
  List<Str*>* chunks;
  Str* c;

  chunks = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 4096);
    if (len(c) == 0) {
      break;
    }
    chunks->append(c);
  }
  return str492->join(chunks);
}

Read::Read(split::SplitContext* splitter, state::Mem* mem, parse_lib::ParseContext* parse_ctx) {
  this->splitter = splitter;
  this->mem = mem;
  this->parse_ctx = parse_ctx;
  this->stdin = mylib::Stdin();
}

int Read::_Line(arg_types::read* arg, Str* var_name) {
  Str* line;
  alloc::Arena* arena;
  reader::FileLineReader* line_reader;
  lexer::Lexer* lexer;
  List<syntax_asdl::Token*>* tokens;
  List<Str*>* tmp;
  runtime_asdl::lvalue__Named* lhs;

  line = _ReadLine();
  if (len(line) == 0) {
    return 1;
  }
  if (!arg->with_eol) {
    if (line->endswith(str493)) {
      line = line->slice(0, -2);
    }
    else {
      if (line->endswith(str494)) {
        line = line->slice(0, -1);
      }
    }
  }
  if ((arg->q and line->startswith(str495))) {
    arena = this->parse_ctx->arena;
    line_reader = reader::StringLineReader(line, arena);
    lexer = this->parse_ctx->_MakeLexer(line_reader);
    try {
      {  // with
        alloc::ctx_Location ctx(arena, Alloc<source::Stdin>(str496));

        tokens = qsn_native::Parse(lexer);
      }
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      return 1;
    }
    tmp = Alloc<List<Str*>>();
    for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
      syntax_asdl::Token* t = it.Value();
      tmp->append(word_compile::EvalCStringToken(t));
    }
    line = str497->join(tmp);
  }
  lhs = Alloc<lvalue::Named>(var_name);
  this->mem->SetVar(lhs, Alloc<value::Str>(line), scope_e::LocalOnly);
  return 0;
}

int Read::_All(Str* var_name) {
  Str* contents;
  runtime_asdl::lvalue__Named* lhs;

  contents = _ReadAll();
  lhs = Alloc<lvalue::Named>(var_name);
  this->mem->SetVar(lhs, Alloc<value::Str>(contents), scope_e::LocalOnly);
  return 0;
}

int Read::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::read* arg;
  List<Str*>* names;
  Str* var_name;
  int var_spid;
  Str* next_arg;
  int next_spid;
  int fd;
  int bits;
  int status;
  pyos::TermState* term;

  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str498, cmd_val);
  attrs = tup2.at0();
  arg_r = tup2.at1();
  arg = Alloc<arg_types::read>(attrs->attrs);
  names = arg_r->Rest();
  if (arg->line) {
    Tuple2<Str*, int> tup3 = arg_r->Peek2();
    var_name = tup3.at0();
    var_spid = tup3.at1();
    if (var_name == nullptr) {
      var_name = str499;
    }
    else {
      if (var_name->startswith(str500)) {
        var_name = var_name->slice(1);
      }
      arg_r->Next();
    }
    Tuple2<Str*, int> tup4 = arg_r->Peek2();
    next_arg = tup4.at0();
    next_spid = tup4.at1();
    if (next_arg != nullptr) {
      throw Alloc<error::Usage>(str501, next_spid);
    }
    return this->_Line(arg, var_name);
  }
  if (arg->q) {
    e_usage(str502);
  }
  if (arg->all) {
    Tuple2<Str*, int> tup5 = arg_r->Peek2();
    var_name = tup5.at0();
    var_spid = tup5.at1();
    if (var_name == nullptr) {
      var_name = str503;
    }
    else {
      if (var_name->startswith(str504)) {
        var_name = var_name->slice(1);
      }
      arg_r->Next();
    }
    Tuple2<Str*, int> tup6 = arg_r->Peek2();
    next_arg = tup6.at0();
    next_spid = tup6.at1();
    if (next_arg != nullptr) {
      throw Alloc<error::Usage>(str505, next_spid);
    }
    return this->_All(var_name);
  }
  if (arg->q) {
    e_usage(str506);
  }
  fd = this->stdin->fileno();
  if (arg->t >= 0.0) {
    if (arg->t != 0.0) {
      e_die(str507);
    }
    else {
      return pyos::InputAvailable(fd) ? 0 : 1;
    }
  }
  bits = 0;
  if (this->stdin->isatty()) {
    bits |= pyos::TERM_ICANON;
    if (arg->s) {
      bits |= pyos::TERM_ECHO;
    }
    if (arg->p != nullptr) {
      mylib::Stderr()->write(arg->p);
    }
  }
  if (bits == 0) {
    status = this->_Read(arg, names);
  }
  else {
    term = Alloc<pyos::TermState>(fd, ~bits);
    try {
      status = this->_Read(arg, names);
    }
    catch (std::exception) { }  }
  return status;
}

Str* Read::_ReadN(int stdin_fd, int n) {
  List<Str*>* chunks;
  int bytes_left;
  Str* chunk;
  Str* s;

  chunks = Alloc<List<Str*>>();
  bytes_left = n;
  while (bytes_left > 0) {
    chunk = posix::read(stdin_fd, n);
    if (len(chunk) == 0) {
      break;
    }
    chunks->append(chunk);
    bytes_left -= len(chunk);
  }
  s = str508->join(chunks);
  return s;
}

int Read::_Read(arg_types::read* arg, List<Str*>* names) {
  Str* name;
  int stdin_fd;
  Str* s;
  int max_results;
  bool raw;
  Str* delim_char;
  List<mylib::BufWriter*>* parts;
  bool join_next;
  int status;
  Str* line;
  bool eof;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;
  bool done;
  List<Str*>* entries;
  int num_parts;

  if (arg->n >= 0) {
    if (len(names)) {
      name = names->index(0);
    }
    else {
      name = str509;
    }
    stdin_fd = this->stdin->fileno();
    s = this->_ReadN(stdin_fd, arg->n);
    state::SetStringDynamic(this->mem, name, s);
    return len(s) == arg->n ? 0 : 1;
  }
  if (len(names) == 0) {
    names->append(str510);
  }
  if (arg->a != nullptr) {
    max_results = 0;
  }
  else {
    max_results = len(names);
  }
  if (arg->Z) {
    raw = true;
    delim_char = str511;
  }
  else {
    raw = arg->r;
    if (arg->d != nullptr) {
      if (len(arg->d)) {
        delim_char = arg->d->index(0);
      }
      else {
        delim_char = str512;
      }
    }
    else {
      delim_char = str513;
    }
  }
  parts = Alloc<List<mylib::BufWriter*>>();
  join_next = false;
  status = 0;
  while (true) {
    Tuple2<Str*, bool> tup7 = ReadLineFromStdin(delim_char);
    line = tup7.at0();
    eof = tup7.at1();
    if (eof) {
      status = 1;
    }
    if (len(line) == 0) {
      break;
    }
    spans = this->splitter->SplitForRead(line, !raw);
    Tuple2<bool, bool> tup8 = _AppendParts(line, spans, max_results, join_next, parts);
    done = tup8.at0();
    join_next = tup8.at1();
    if (done) {
      break;
    }
  }
  entries = Alloc<List<Str*>>();
  for (ListIter<mylib::BufWriter*> it(parts); !it.Done(); it.Next()) {
    mylib::BufWriter* buf = it.Value();
    entries->append(buf->getvalue());
  }
  num_parts = len(entries);
  if (arg->a != nullptr) {
    state::SetArrayDynamic(this->mem, arg->a, entries);
  }
  else {
    for (int i = 0; i < max_results; ++i) {
      if (i < num_parts) {
        s = entries->index(i);
      }
      else {
        s = str514;
      }
      state::SetStringDynamic(this->mem, names->index(i), s);
    }
  }
  return status;
}

MapFile::MapFile(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->f = mylib::Stdin();
}

int MapFile::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::mapfile* arg;
  Str* var_name;
  List<Str*>* lines;
  Str* line;

  Tuple2<args::_Attributes*, args::Reader*> tup9 = flag_spec::ParseCmdVal(str515, cmd_val);
  attrs = tup9.at0();
  arg_r = tup9.at1();
  arg = Alloc<arg_types::mapfile>(attrs->attrs);
  Tuple2<Str*, int> tup10 = arg_r->Peek2();
  var_name = tup10.at0();
  if (var_name == nullptr) {
    var_name = str516;
  }
  lines = Alloc<List<Str*>>();
  while (true) {
    line = this->f->readline();
    if (len(line) == 0) {
      break;
    }
    if ((arg->t and line->endswith(str517))) {
      line = line->slice(0, -1);
    }
    lines->append(line);
  }
  state::SetArrayDynamic(this->mem, var_name, lines);
  return 0;
}

Cd::Cd(state::Mem* mem, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->cmd_ev = cmd_ev;
  this->errfmt = errfmt;
}

int Cd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::cd* arg;
  Str* dest_dir;
  int arg_spid;
  runtime_asdl::value_t* val;
  Str* pwd;
  Str* abspath;
  Str* real_dest_dir;
  int err_num;
  Dict<Str*, runtime_asdl::cell*>* unused;

  Tuple2<args::_Attributes*, args::Reader*> tup11 = flag_spec::ParseCmdVal(str518, cmd_val);
  attrs = tup11.at0();
  arg_r = tup11.at1();
  arg = Alloc<arg_types::cd>(attrs->attrs);
  Tuple2<Str*, int> tup12 = arg_r->Peek2();
  dest_dir = tup12.at0();
  arg_spid = tup12.at1();
  if (dest_dir == nullptr) {
    val = this->mem->GetVar(str519);
    try {
      dest_dir = state::GetString(this->mem, str520);
    }
    catch (error::Runtime* e) {
      this->errfmt->Print_(e->UserErrorString());
      return 1;
    }
  }
  if (str_equals(dest_dir, str521)) {
    try {
      dest_dir = state::GetString(this->mem, str522);
      print(dest_dir);
    }
    catch (error::Runtime* e) {
      this->errfmt->Print_(e->UserErrorString());
      return 1;
    }
  }
  try {
    pwd = state::GetString(this->mem, str523);
  }
  catch (error::Runtime* e) {
    this->errfmt->Print_(e->UserErrorString());
    return 1;
  }
  abspath = os_path::join(pwd, dest_dir);
  if (arg->P) {
    real_dest_dir = libc::realpath(abspath);
  }
  else {
    real_dest_dir = os_path::normpath(abspath);
  }
  err_num = pyos::Chdir(real_dest_dir);
  if (err_num != 0) {
    this->errfmt->Print_(fmt126(real_dest_dir, posix::strerror(err_num)), arg_spid);
    return 1;
  }
  state::ExportGlobalString(this->mem, str525, real_dest_dir);
  this->mem->SetPwd(real_dest_dir);
  if (cmd_val->block) {
    this->dir_stack->Push(real_dest_dir);
    try {
      unused = this->cmd_ev->EvalBlock(cmd_val->block);
    }
    catch (std::exception) { }  }
  else {
    state::ExportGlobalString(this->mem, str526, pwd);
    this->dir_stack->Reset();
  }
  return 0;
}
int WITH_LINE_NUMBERS = 1;
int WITHOUT_LINE_NUMBERS = 2;
int SINGLE_LINE = 3;

void _PrintDirStack(state::DirStack* dir_stack, int style, Str* home_dir) {
  int i;
  List<Str*>* parts;
  Str* s;

  if (style == WITH_LINE_NUMBERS) {
    i = 0;
    for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next(), ++i) {
      Str* entry = it.Value();
      print(fmt127(i, ui::PrettyDir(entry, home_dir)));
    }
  }
  else {
    if (style == WITHOUT_LINE_NUMBERS) {
      for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next()) {
        Str* entry = it.Value();
        print(ui::PrettyDir(entry, home_dir));
      }
    }
    else {
      if (style == SINGLE_LINE) {
        parts = Alloc<List<Str*>>();
        for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next()) {
          Str* entry = it.Value();
          parts->append(ui::PrettyDir(entry, home_dir));
        }
        s = str528->join(parts);
        print(s);
      }
    }
  }
}

Pushd::Pushd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Pushd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int num_args;
  Str* dest_dir;
  int err_num;

  num_args = (len(cmd_val->argv) - 1);
  if (num_args == 0) {
    this->errfmt->Print_(str529);
    return 1;
  }
  else {
    if (num_args > 1) {
      e_usage(str530);
    }
  }
  dest_dir = os_path::abspath(cmd_val->argv->index(1));
  err_num = pyos::Chdir(dest_dir);
  if (err_num != 0) {
    this->errfmt->Print_(fmt128(dest_dir, posix::strerror(err_num)), cmd_val->arg_spids->index(1));
    return 1;
  }
  this->dir_stack->Push(dest_dir);
  _PrintDirStack(this->dir_stack, SINGLE_LINE, state::MaybeString(this->mem, str532));
  state::ExportGlobalString(this->mem, str533, dest_dir);
  this->mem->SetPwd(dest_dir);
  return 0;
}

bool _PopDirStack(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  Str* dest_dir;
  int err_num;

  dest_dir = dir_stack->Pop();
  if (dest_dir == nullptr) {
    errfmt->Print_(str534);
    return false;
  }
  err_num = pyos::Chdir(dest_dir);
  if (err_num != 0) {
    errfmt->Print_(fmt129(dest_dir, posix::strerror(err_num)));
    return false;
  }
  state::SetGlobalString(mem, str536, dest_dir);
  mem->SetPwd(dest_dir);
  return true;
}

Popd::Popd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Popd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  if (len(cmd_val->arg_spids) > 1) {
    e_usage(fmt130(), cmd_val->arg_spids->index(1));
  }
  if (!_PopDirStack(this->mem, this->dir_stack, this->errfmt)) {
    return 1;
  }
  _PrintDirStack(this->dir_stack, SINGLE_LINE, state::MaybeString(this->mem, str538));
  return 0;
}

Dirs::Dirs(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Dirs::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::dirs* arg;
  Str* home_dir;
  int style;

  Tuple2<args::_Attributes*, args::Reader*> tup13 = flag_spec::ParseCmdVal(str539, cmd_val);
  attrs = tup13.at0();
  arg_r = tup13.at1();
  arg = Alloc<arg_types::dirs>(attrs->attrs);
  home_dir = state::MaybeString(this->mem, str540);
  style = SINGLE_LINE;
  if (arg->l) {
    home_dir = nullptr;
  }
  if (arg->c) {
    this->dir_stack->Reset();
    return 0;
  }
  else {
    if (arg->v) {
      style = WITH_LINE_NUMBERS;
    }
    else {
      if (arg->p) {
        style = WITHOUT_LINE_NUMBERS;
      }
    }
  }
  _PrintDirStack(this->dir_stack, style, home_dir);
  return 0;
}

Pwd::Pwd(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Pwd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::pwd* arg;
  Str* pwd;

  Tuple2<args::_Attributes*, args::Reader*> tup14 = flag_spec::ParseCmdVal(str541, cmd_val);
  attrs = tup14.at0();
  arg_r = tup14.at1();
  arg = Alloc<arg_types::pwd>(attrs->attrs);
  pwd = this->mem->pwd;
  if (arg->P) {
    pwd = libc::realpath(pwd);
  }
  print(pwd);
  return 0;
}

Help::Help(pyutil::_ResourceLoader* loader, ui::ErrorFormatter* errfmt) {
  this->loader = loader;
  this->errfmt = errfmt;
}

List<Str*>* Help::_Groups() {
  Str* contents;
  List<Str*>* groups;

  contents = this->loader->Get(str542);
  groups = contents->splitlines(false);
  return groups;
}

int Help::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  Str* topic;
  int blame_spid;
  Str* contents;

  Tuple2<args::_Attributes*, args::Reader*> tup15 = flag_spec::ParseCmdVal(str543, cmd_val);
  attrs = tup15.at0();
  arg_r = tup15.at1();
  Tuple2<Str*, int> tup16 = arg_r->Peek2();
  topic = tup16.at0();
  blame_spid = tup16.at1();
  if (topic == nullptr) {
    topic = str544;
    blame_spid = runtime::NO_SPID;
  }
  else {
    arg_r->Next();
  }
  try {
    contents = this->loader->Get(fmt131(topic));
  }
  catch (IOError*) {
    this->errfmt->Print_(fmt132(topic), blame_spid);
    return 1;
  }
  print(contents);
  return 0;
}

Cat::Cat() : vm::_Builtin() {
}

int Cat::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Str* chunk;

  while (true) {
    chunk = posix::read(0, 4096);
    if (len(chunk) == 0) {
      break;
    }
    mylib::Stdout()->write(chunk);
  }
  return 0;
}

}  // define namespace builtin_misc

namespace builtin_printf {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using runtime_asdl::cmd_value__Argv;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Str;
namespace value = runtime_asdl::value;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::scope_e;
namespace printf_part = syntax_asdl::printf_part;
namespace printf_part_e = syntax_asdl::printf_part_e;
using syntax_asdl::printf_part_t;
using syntax_asdl::printf_part__Literal;
using syntax_asdl::printf_part__Percent;
namespace source = syntax_asdl::source;
using syntax_asdl::Token;
using types_asdl::lex_mode_e;
using types_asdl::lex_mode_t;

_FormatStringParser::_FormatStringParser(lexer::Lexer* lexer) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_FormatStringParser)) {
  this->lexer = lexer;
}

void _FormatStringParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->cur_token = this->lexer->Read(lex_mode);
  this->token_type = this->cur_token->id;
  this->token_kind = consts::GetKind(this->token_type);
}

syntax_asdl::printf_part_t* _FormatStringParser::_ParseFormatStr() {
  syntax_asdl::printf_part__Percent* part;
  Str* flag;

  this->_Next(lex_mode_e::PrintfPercent);
  part = Alloc<printf_part::Percent>();
  while ((this->token_type == Id::Format_Flag || this->token_type == Id::Format_Zero)) {
    flag = this->cur_token->val;
    if (str_contains(str547, flag)) {
      p_die(fmt133(flag), this->cur_token);
    }
    part->flags->append(this->cur_token);
    this->_Next(lex_mode_e::PrintfPercent);
  }
  if ((this->token_type == Id::Format_Num || this->token_type == Id::Format_Star)) {
    part->width = this->cur_token;
    this->_Next(lex_mode_e::PrintfPercent);
  }
  if (this->token_type == Id::Format_Dot) {
    part->precision = this->cur_token;
    this->_Next(lex_mode_e::PrintfPercent);
    if ((this->token_type == Id::Format_Num || this->token_type == Id::Format_Star || this->token_type == Id::Format_Zero)) {
      part->precision = this->cur_token;
      this->_Next(lex_mode_e::PrintfPercent);
    }
  }
  if ((this->token_type == Id::Format_Type || this->token_type == Id::Format_Time)) {
    part->type = this->cur_token;
    if (str_contains(str549, part->type->val)) {
      p_die(fmt134(), part->type);
    }
    if (maybe_str_equals(part->type->val, str551)) {
      p_die(fmt135(), part->type);
    }
  }
  else {
    if (this->token_type == Id::Unknown_Tok) {
      p_die(fmt136(), this->cur_token);
    }
    else {
      p_die(fmt137(), this->cur_token);
    }
  }
  if ((part->precision and !str_contains(str555, part->type->val->index(-1)))) {
    p_die(dynamic_fmt_dummy(), part->precision);
  }
  return part;
}

List<syntax_asdl::printf_part_t*>* _FormatStringParser::Parse() {
  List<syntax_asdl::printf_part_t*>* parts;

  this->_Next(lex_mode_e::PrintfOuter);
  parts = Alloc<List<syntax_asdl::printf_part_t*>>();
  while (true) {
    if ((this->token_kind == Kind::Char or (this->token_type == Id::Format_EscapedPercent or this->token_type == Id::Unknown_Backslash))) {
      parts->append(Alloc<printf_part::Literal>(this->cur_token));
    }
    else {
      if (this->token_type == Id::Format_Percent) {
        parts->append(this->_ParseFormatStr());
      }
      else {
        if (this->token_type == Id::Eof_Real) {
          break;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    this->_Next(lex_mode_e::PrintfOuter);
  }
  return parts;
}

Printf::Printf(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->parse_ctx = parse_ctx;
  this->arith_ev = arith_ev;
  this->errfmt = errfmt;
  this->parse_cache = Alloc<Dict<Str*, List<syntax_asdl::printf_part_t*>*>>();
  this->shell_start_time = time_::time();
}

int Printf::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::printf* arg;
  Str* fmt;
  int fmt_spid;
  List<Str*>* varargs;
  List<int>* spids;
  alloc::Arena* arena;
  List<syntax_asdl::printf_part_t*>* parts;
  reader::FileLineReader* line_reader;
  lexer::Lexer* lexer;
  builtin_printf::_FormatStringParser* parser;
  List<Str*>* out;
  int arg_index;
  int num_args;
  bool backslash_c;
  syntax_asdl::printf_part_t* UP_part;
  syntax_asdl::Token* token;
  Str* s;
  List<Str*>* flags;
  int width;
  Str* width_str;
  int width_spid;
  int precision;
  Str* precision_str;
  int precision_spid;
  int word_spid;
  Str* typ;
  List<Str*>* c_parts;
  match::SimpleLexer* lex;
  int id_;
  Str* tok_val;
  syntax_asdl::Token* tok;
  Str* p;
  int d;
  int blame_spid;
  runtime_asdl::cell* tzcell;
  double ts;
  Str* result;
  int v_spid;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::lvalue_t* lval;

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str557, cmd_val);
  attrs = tup0.at0();
  arg_r = tup0.at1();
  arg = Alloc<arg_types::printf>(attrs->attrs);
  Tuple2<Str*, int> tup1 = arg_r->ReadRequired2(str558);
  fmt = tup1.at0();
  fmt_spid = tup1.at1();
  Tuple2<List<Str*>*, List<int>*> tup2 = arg_r->Rest2();
  varargs = tup2.at0();
  spids = tup2.at1();
  arena = this->parse_ctx->arena;
  if (dict_contains(this->parse_cache, fmt)) {
    parts = this->parse_cache->index(fmt);
  }
  else {
    line_reader = reader::StringLineReader(fmt, arena);
    lexer = this->parse_ctx->_MakeLexer(line_reader);
    parser = Alloc<_FormatStringParser>(lexer);
    {  // with
      alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(fmt_spid));

      try {
        parts = parser->Parse();
      }
      catch (error::Parse* e) {
        this->errfmt->PrettyPrintError(e);
        return 2;
      }
    }
    this->parse_cache->set(fmt, parts);
  }
  out = Alloc<List<Str*>>();
  arg_index = 0;
  num_args = len(varargs);
  backslash_c = false;
  while (true) {
    for (ListIter<syntax_asdl::printf_part_t*> it(parts); !it.Done(); it.Next()) {
      syntax_asdl::printf_part_t* part = it.Value();
      UP_part = part;
      if (part->tag_() == printf_part_e::Literal) {
        printf_part__Literal* part = static_cast<printf_part__Literal*>(UP_part);
        token = part->token;
        if (token->id == Id::Format_EscapedPercent) {
          s = str559;
        }
        else {
          s = word_compile::EvalCStringToken(token);
        }
        out->append(s);
      }
      else {
        if (part->tag_() == printf_part_e::Percent) {
          printf_part__Percent* part = static_cast<printf_part__Percent*>(UP_part);
          flags = Alloc<List<Str*>>();
          if (len(part->flags) > 0) {
            for (ListIter<syntax_asdl::Token*> it(part->flags); !it.Done(); it.Next()) {
              syntax_asdl::Token* flag_token = it.Value();
              flags->append(flag_token->val);
            }
          }
          width = -1;
          if (part->width) {
            if ((part->width->id == Id::Format_Num || part->width->id == Id::Format_Zero)) {
              width_str = part->width->val;
              width_spid = part->width->span_id;
            }
            else {
              if (part->width->id == Id::Format_Star) {
                if (arg_index < num_args) {
                  width_str = varargs->index(arg_index);
                  width_spid = spids->index(arg_index);
                  arg_index += 1;
                }
                else {
                  width_str = str560;
                  width_spid = runtime::NO_SPID;
                }
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
            try {
              width = to_int(width_str);
            }
            catch (ValueError*) {
              if (width_spid == runtime::NO_SPID) {
                width_spid = part->width->span_id;
              }
              this->errfmt->Print_(fmt138(width_str), width_spid);
              return 1;
            }
          }
          precision = -1;
          if (part->precision) {
            if (part->precision->id == Id::Format_Dot) {
              precision_str = str562;
              precision_spid = part->precision->span_id;
            }
            else {
              if ((part->precision->id == Id::Format_Num || part->precision->id == Id::Format_Zero)) {
                precision_str = part->precision->val;
                precision_spid = part->precision->span_id;
              }
              else {
                if (part->precision->id == Id::Format_Star) {
                  if (arg_index < num_args) {
                    precision_str = varargs->index(arg_index);
                    precision_spid = spids->index(arg_index);
                    arg_index += 1;
                  }
                  else {
                    precision_str = str563;
                    precision_spid = runtime::NO_SPID;
                  }
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
            try {
              precision = to_int(precision_str);
            }
            catch (ValueError*) {
              if (precision_spid == runtime::NO_SPID) {
                precision_spid = part->precision->span_id;
              }
              this->errfmt->Print_(fmt139(precision_str), precision_spid);
              return 1;
            }
          }
          if (arg_index < num_args) {
            s = varargs->index(arg_index);
            word_spid = spids->index(arg_index);
            arg_index += 1;
          }
          else {
            s = str565;
            word_spid = runtime::NO_SPID;
          }
          typ = part->type->val;
          if (str_equals(typ, str566)) {
            if (precision >= 0) {
              s = s->slice(0, precision);
            }
          }
          else {
            if (str_equals(typ, str567)) {
              s = qsn::maybe_shell_encode(s);
            }
            else {
              if (str_equals(typ, str568)) {
                c_parts = Alloc<List<Str*>>();
                lex = match::EchoLexer(s);
                while (true) {
                  Tuple2<int, Str*> tup3 = lex->Next();
                  id_ = tup3.at0();
                  tok_val = tup3.at1();
                  if (id_ == Id::Eol_Tok) {
                    break;
                  }
                  tok = Alloc<Token>(id_, runtime::NO_SPID, tok_val);
                  p = word_compile::EvalCStringToken(tok);
                  if (p == nullptr) {
                    backslash_c = true;
                    break;
                  }
                  c_parts->append(p);
                }
                s = str569->join(c_parts);
              }
              else {
                if ((str_contains(str570, typ) or part->type->id == Id::Format_Time)) {
                  try {
                    d = to_int(s);
                  }
                  catch (ValueError*) {
                    if ((len(s) >= 1 and str_contains(str571, s->index(0)))) {
                      d = len(s) >= 2 ? ord(s->index(1)) : 0;
                    }
                    else {
                      if ((part->type->id == Id::Format_Time and (len(s) == 0 and word_spid == runtime::NO_SPID))) {
                        d = -1;
                      }
                      else {
                        if (word_spid == runtime::NO_SPID) {
                          blame_spid = part->type->span_id;
                        }
                        else {
                          blame_spid = word_spid;
                        }
                        this->errfmt->Print_(fmt140(s), blame_spid);
                        return 1;
                      }
                    }
                  }
                  if (str_contains(str573, typ)) {
                    s = str(d);
                  }
                  else {
                    if (str_contains(str574, typ)) {
                      if (d < 0) {
                        e_die(fmt141(d, typ), part->type->span_id);
                      }
                      if (str_equals(typ, str576)) {
                        s = str(d);
                      }
                      else {
                        if (str_equals(typ, str577)) {
                          s = mylib::octal(d);
                        }
                        else {
                          if (str_equals(typ, str578)) {
                            s = mylib::hex_lower(d);
                          }
                          else {
                            if (str_equals(typ, str579)) {
                              s = mylib::hex_upper(d);
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (part->type->id == Id::Format_Time) {
                        tzcell = this->mem->GetCell(str580);
                        if ((tzcell and (tzcell->exported and tzcell->val->tag_() == value_e::Str))) {
                          value__Str* tzval = static_cast<value__Str*>(tzcell->val);
                          posix::putenv(str581, tzval->s);
                        }
                        time_::tzset();
                        if (d == -1) {
                          ts = time_::time();
                        }
                        else {
                          if (d == -2) {
                            ts = this->shell_start_time;
                          }
                          else {
                            ts = d;
                          }
                        }
                        s = time_::strftime(typ->slice(1, -2), time_::localtime(ts));
                        if (precision >= 0) {
                          s = s->slice(0, precision);
                        }
                      }
                      else {
                        throw Alloc<AssertionError>();
                      }
                    }
                  }
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
          }
          if (width >= 0) {
            if (len(flags)) {
              if (list_contains(flags, str582)) {
                s = s->ljust(width, str583);
              }
              else {
                if (list_contains(flags, str584)) {
                  s = s->rjust(width, str585);
                }
                else {
                  ;  // pass
                }
              }
            }
            else {
              s = s->rjust(width, str586);
            }
          }
          out->append(s);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      if (backslash_c) {
        break;
      }
    }
    if (arg_index >= num_args) {
      break;
    }
  }
  result = str587->join(out);
  if (arg->v != nullptr) {
    v_spid = runtime::NO_SPID;
    arena = this->parse_ctx->arena;
    a_parser = this->parse_ctx->MakeArithParser(arg->v);
    {  // with
      alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(v_spid));

      try {
        anode = a_parser->Parse();
      }
      catch (error::Parse* e) {
        ui::PrettyPrintError(e, arena);
        e_usage(fmt142(), v_spid);
      }
    }
    lval = this->arith_ev->EvalArithLhs(anode, v_spid);
    if ((!this->exec_opts->eval_unsafe_arith() and lval->tag_() != lvalue_e::Named)) {
      e_usage(fmt143(), v_spid);
    }
    this->mem->SetVar(lval, Alloc<value::Str>(result), scope_e::Dynamic);
  }
  else {
    mylib::Stdout()->write(result);
  }
  return 0;
}

}  // define namespace builtin_printf

namespace builtin_pure {  // define
namespace Id = id_kind_asdl::Id;
using syntax_asdl::Token;

Boolean::Boolean(int status) {
  this->status = status;
}

int Boolean::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  return this->status;
}

Alias::Alias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt) {
  this->aliases = aliases;
  this->errfmt = errfmt;
}

int Alias::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  List<Str*>* argv;
  Str* alias_exp;
  int status;
  int i;
  Str* name;

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str590, cmd_val);
  arg_r = tup0.at1();
  argv = arg_r->Rest();
  if (len(argv) == 0) {
    for (ListIter<Str*> it(sorted(this->aliases)); !it.Done(); it.Next()) {
      Str* name = it.Value();
      alias_exp = this->aliases->index(name);
      print(fmt144(name, alias_exp));
    }
    return 0;
  }
  status = 0;
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* arg = it.Value();
    Tuple2<Str*, Str*> tup1 = mylib::split_once(arg, str592);
    name = tup1.at0();
    alias_exp = tup1.at1();
    if (alias_exp == nullptr) {
      alias_exp = this->aliases->get(name);
      if (alias_exp == nullptr) {
        this->errfmt->Print_(fmt145(name), cmd_val->arg_spids->index(i));
        status = 1;
      }
      else {
        print(fmt146(name, alias_exp));
      }
    }
    else {
      this->aliases->set(name, alias_exp);
    }
  }
  return status;
}

UnAlias::UnAlias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt) {
  this->aliases = aliases;
  this->errfmt = errfmt;
}

int UnAlias::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  List<Str*>* argv;
  int status;
  int i;

  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str595, cmd_val);
  arg_r = tup2.at1();
  argv = arg_r->Rest();
  if (len(argv) == 0) {
    e_usage(str596);
  }
  status = 0;
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* name = it.Value();
    if (dict_contains(this->aliases, name)) {
      this->aliases->remove(name);
    }
    else {
      this->errfmt->Print_(fmt147(name), cmd_val->arg_spids->index(i));
      status = 1;
    }
  }
  return status;
}

void SetShellOpts(state::MutableOpts* exec_opts, List<Tuple2<Str*, bool>*>* opt_changes, List<Tuple2<Str*, bool>*>* shopt_changes) {
  Str* opt_name;
  bool b;

  for (ListIter<Tuple2<Str*, bool>*> it(opt_changes); !it.Done(); it.Next()) {
    Tuple2<Str*, bool>* tup3 = it.Value();
    opt_name = tup3->at0();
    b = tup3->at1();
    exec_opts->SetOption(opt_name, b);
  }
  for (ListIter<Tuple2<Str*, bool>*> it(shopt_changes); !it.Done(); it.Next()) {
    Tuple2<Str*, bool>* tup4 = it.Value();
    opt_name = tup4->at0();
    b = tup4->at1();
    exec_opts->SetShoptOption(opt_name, b);
  }
}

Set::Set(state::MutableOpts* exec_opts, state::Mem* mem) {
  this->exec_opts = exec_opts;
  this->mem = mem;
}

int Set::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Dict<Str*, Str*>* mapping;
  Str* str_val;
  Str* code_str;
  args::Reader* arg_r;
  args::_Attributes* arg;

  if (len(cmd_val->argv) == 1) {
    mapping = this->mem->GetAllVars();
    for (ListIter<Str*> it(sorted(mapping)); !it.Done(); it.Next()) {
      Str* name = it.Value();
      str_val = mapping->index(name);
      code_str = fmt148(name, qsn::maybe_shell_encode(str_val));
      print(code_str);
    }
    return 0;
  }
  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  arg = flag_spec::ParseMore(str599, arg_r);
  if (arg->show_options) {
    this->exec_opts->ShowOptions(Alloc<List<Str*>>());
    return 0;
  }
  SetShellOpts(this->exec_opts, arg->opt_changes, arg->shopt_changes);
  if ((arg->saw_double_dash or !arg_r->AtEnd())) {
    this->mem->SetArgv(arg_r->Rest());
  }
  return 0;
}

Shopt::Shopt(state::MutableOpts* mutable_opts, cmd_eval::CommandEvaluator* cmd_ev) {
  this->mutable_opts = mutable_opts;
  this->cmd_ev = cmd_ev;
}

int Shopt::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::shopt* arg;
  List<Str*>* opt_names;
  int index;
  bool b;
  List<int>* opt_nums;
  Dict<Str*, runtime_asdl::cell*>* unused;

  Tuple2<args::_Attributes*, args::Reader*> tup5 = flag_spec::ParseCmdVal(str600, cmd_val);
  attrs = tup5.at0();
  arg_r = tup5.at1();
  arg = Alloc<arg_types::shopt>(attrs->attrs);
  opt_names = arg_r->Rest();
  if (arg->p) {
    if (arg->o) {
      this->mutable_opts->ShowOptions(opt_names);
    }
    else {
      this->mutable_opts->ShowShoptOptions(opt_names);
    }
    return 0;
  }
  if (arg->q) {
    for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
      Str* name = it.Value();
      index = match::MatchOption(name);
      if (index == 0) {
        return 2;
      }
      if (!this->mutable_opts->opt0_array->index(index)) {
        return 1;
      }
    }
    return 0;
  }
  if (arg->s) {
    b = true;
  }
  else {
    if (arg->u) {
      b = false;
    }
    else {
      this->mutable_opts->ShowShoptOptions(opt_names);
      return 0;
    }
  }
  if (cmd_val->block) {
    opt_nums = Alloc<List<int>>();
    for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
      Str* name = it.Value();
      index = match::MatchOption(name);
      if (index == 0) {
        e_usage(fmt149(name));
      }
      opt_nums->append(index);
    }
    {  // with
      state::ctx_Option ctx(this->mutable_opts, opt_nums, b);

      unused = this->cmd_ev->EvalBlock(cmd_val->block);
    }
    return 0;
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    this->mutable_opts->SetShoptOption(name, b);
  }
  return 0;
}

Hash::Hash(state::SearchPath* search_path) {
  this->search_path = search_path;
}

int Hash::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::hash* arg;
  List<Str*>* rest;
  int status;
  Str* full_path;
  List<Str*>* commands;

  Tuple2<args::_Attributes*, args::Reader*> tup6 = flag_spec::ParseCmdVal(str602, cmd_val);
  attrs = tup6.at0();
  arg_r = tup6.at1();
  arg = Alloc<arg_types::hash>(attrs->attrs);
  rest = arg_r->Rest();
  if (arg->r) {
    if (len(rest)) {
      e_usage(str603);
    }
    this->search_path->ClearCache();
    return 0;
  }
  status = 0;
  if (len(rest)) {
    for (ListIter<Str*> it(rest); !it.Done(); it.Next()) {
      Str* cmd = it.Value();
      full_path = this->search_path->CachedLookup(cmd);
      if (full_path == nullptr) {
        println_stderr(fmt150(cmd));
        status = 1;
      }
    }
  }
  else {
    commands = this->search_path->CachedCommands();
    commands->sort();
    for (ListIter<Str*> it(commands); !it.Done(); it.Next()) {
      Str* cmd = it.Value();
      print(cmd);
    }
  }
  return status;
}

Dict<Str*, bool>* _ParseOptSpec(Str* spec_str) {
  Dict<Str*, bool>* spec;
  int i;
  int n;
  Str* ch;

  spec = Alloc<Dict<Str*, bool>>();
  i = 0;
  n = len(spec_str);
  while (true) {
    if (i >= n) {
      break;
    }
    ch = spec_str->index(i);
    spec->set(ch, false);
    i += 1;
    if (i >= n) {
      break;
    }
    if (str_equals(spec_str->index(i), str605)) {
      spec->set(ch, true);
      i += 1;
    }
  }
  return spec;
}

GetOptsState::GetOptsState(state::Mem* mem, ui::ErrorFormatter* errfmt) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(GetOptsState)) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->_optind = -1;
  this->flag_pos = 1;
}

int GetOptsState::_OptInd() {
  int result;

  try {
    result = state::GetInteger(this->mem, str606);
  }
  catch (error::Runtime* e) {
    this->errfmt->Print_(e->UserErrorString());
    result = -1;
  }
  return result;
}

Str* GetOptsState::GetArg(List<Str*>* argv) {
  int optind;
  int i;

  optind = this->_OptInd();
  if (optind == -1) {
    return nullptr;
  }
  this->_optind = optind;
  i = (optind - 1);
  if ((0 <= i and i < len(argv))) {
    return argv->index(i);
  }
  else {
    return nullptr;
  }
}

void GetOptsState::IncIndex() {
  state::SetStringDynamic(this->mem, str607, str((this->_optind + 1)));
}

void GetOptsState::SetArg(Str* optarg) {
  state::SetStringDynamic(this->mem, str608, optarg);
}

void GetOptsState::Fail() {
  state::SetStringDynamic(this->mem, str609, str610);
}

Tuple2<int, Str*> _GetOpts(Dict<Str*, bool>* spec, List<Str*>* argv, builtin_pure::GetOptsState* my_state, ui::ErrorFormatter* errfmt) {
  Str* current;
  Str* flag_char;
  bool more_chars;
  Str* optarg;
  List<Str*>* tmp;

  current = my_state->GetArg(argv);
  if (current == nullptr) {
    my_state->Fail();
    return (Tuple2<int, Str*>(1, str611));
  }
  if ((!current->startswith(str612) or str_equals(current, str613))) {
    my_state->Fail();
    return (Tuple2<int, Str*>(1, str614));
  }
  flag_char = current->index(my_state->flag_pos);
  if (my_state->flag_pos < (len(current) - 1)) {
    my_state->flag_pos += 1;
    more_chars = true;
  }
  else {
    my_state->IncIndex();
    my_state->flag_pos = 1;
    more_chars = false;
  }
  if (!dict_contains(spec, flag_char)) {
    return (Tuple2<int, Str*>(0, str615));
  }
  if (spec->index(flag_char)) {
    if (more_chars) {
      optarg = current->slice(my_state->flag_pos);
    }
    else {
      optarg = my_state->GetArg(argv);
      if (optarg == nullptr) {
        my_state->Fail();
        errfmt->Print_(fmt151(current));
        tmp = Alloc<List<Str*>>();
        for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
          Str* a = it.Value();
          tmp->append(qsn::maybe_shell_encode(a));
        }
        println_stderr(fmt152(str618->join(tmp)));
        return (Tuple2<int, Str*>(0, str619));
      }
    }
    my_state->IncIndex();
    my_state->SetArg(optarg);
  }
  else {
    my_state->SetArg(str620);
  }
  return (Tuple2<int, Str*>(0, flag_char));
}

GetOpts::GetOpts(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->my_state = Alloc<GetOptsState>(mem, errfmt);
  this->spec_cache = Alloc<Dict<Str*, Dict<Str*, bool>*>>();
}

int GetOpts::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  Str* spec_str;
  Str* var_name;
  int var_spid;
  Dict<Str*, bool>* spec;
  List<Str*>* user_argv;
  int status;
  Str* flag_char;

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  spec_str = arg_r->ReadRequired(str621);
  Tuple2<Str*, int> tup7 = arg_r->ReadRequired2(str622);
  var_name = tup7.at0();
  var_spid = tup7.at1();
  spec = this->spec_cache->get(spec_str);
  if (spec == nullptr) {
    spec = _ParseOptSpec(spec_str);
    this->spec_cache->set(spec_str, spec);
  }
  user_argv = arg_r->AtEnd() ? this->mem->GetArgv() : arg_r->Rest();
  Tuple2<int, Str*> tup8 = _GetOpts(spec, user_argv, this->my_state, this->errfmt);
  status = tup8.at0();
  flag_char = tup8.at1();
  if (match::IsValidVarName(var_name)) {
    state::SetStringDynamic(this->mem, var_name, flag_char);
  }
  else {
    throw Alloc<error::Usage>(fmt153(var_name), var_spid);
  }
  return status;
}

Echo::Echo(optview::Exec* exec_opts) {
  this->exec_opts = exec_opts;
  this->f = mylib::Stdout();
}

int Echo::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  List<Str*>* argv;
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::echo* arg;
  bool backslash_c;
  int arg0_spid;
  List<Str*>* new_argv;
  List<Str*>* parts;
  match::SimpleLexer* lex;
  int id_;
  Str* value;
  syntax_asdl::Token* tok;
  Str* p;
  int n;
  int i;

  argv = cmd_val->argv->slice(1);
  Tuple2<args::_Attributes*, args::Reader*> tup9 = flag_spec::ParseLikeEcho(str624, cmd_val);
  attrs = tup9.at0();
  arg_r = tup9.at1();
  arg = Alloc<arg_types::echo>(attrs->attrs);
  argv = arg_r->Rest();
  backslash_c = false;
  arg0_spid = cmd_val->arg_spids->index(0);
  if (arg->e) {
    new_argv = Alloc<List<Str*>>();
    for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
      Str* a = it.Value();
      parts = Alloc<List<Str*>>();
      lex = match::EchoLexer(a);
      while (!backslash_c) {
        Tuple2<int, Str*> tup10 = lex->Next();
        id_ = tup10.at0();
        value = tup10.at1();
        if (id_ == Id::Eol_Tok) {
          break;
        }
        tok = Alloc<Token>(id_, arg0_spid, value);
        p = word_compile::EvalCStringToken(tok);
        if (p == nullptr) {
          backslash_c = true;
          break;
        }
        parts->append(p);
      }
      new_argv->append(str625->join(parts));
      if (backslash_c) {
        break;
      }
    }
    argv = new_argv;
  }
  if (this->exec_opts->strict_echo()) {
    n = len(argv);
    if (n == 0) {
      ;  // pass
    }
    else {
      if (n == 1) {
        this->f->write(argv->index(0));
      }
      else {
        e_usage(str626);
      }
    }
  }
  else {
    i = 0;
    for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
      Str* a = it.Value();
      if (i != 0) {
        this->f->write(str627);
      }
      this->f->write(a);
    }
  }
  if ((!arg->n and !backslash_c)) {
    this->f->write(str628);
  }
  return 0;
}

}  // define namespace builtin_pure

namespace cmd_eval {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_str;
using syntax_asdl::compound_word;
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command_t;
using syntax_asdl::command__AndOr;
using syntax_asdl::command__Case;
using syntax_asdl::command__CommandList;
using syntax_asdl::command__ControlFlow;
using syntax_asdl::command__DBracket;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__DParen;
using syntax_asdl::command__ExpandedAlias;
using syntax_asdl::command__Expr;
using syntax_asdl::command__ForEach;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__Func;
using syntax_asdl::command__If;
using syntax_asdl::command__NoOp;
using syntax_asdl::command__OilForIn;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Return;
using syntax_asdl::command__Sentence;
using syntax_asdl::command__ShAssignment;
using syntax_asdl::command__ShFunction;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__TimeBlock;
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__WhileUntil;
namespace condition_e = syntax_asdl::condition_e;
using syntax_asdl::condition_t;
using syntax_asdl::condition__Shell;
using syntax_asdl::condition__Oil;
using syntax_asdl::BraceGroup;
using syntax_asdl::assign_op_e;
using syntax_asdl::place_expr__Var;
namespace proc_sig_e = syntax_asdl::proc_sig_e;
using syntax_asdl::proc_sig__Closed;
namespace redir_param_e = syntax_asdl::redir_param_e;
using syntax_asdl::redir_param__MultiLine;
using runtime_asdl::quote_e;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue__ObjIndex;
using runtime_asdl::lvalue__ObjAttr;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Int;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::redirect;
namespace redirect_arg = runtime_asdl::redirect_arg;
using runtime_asdl::scope_e;
namespace cmd_value_e = runtime_asdl::cmd_value_e;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::cmd_value__Assign;
using runtime_asdl::CompoundStatus;
using types_asdl::redir_arg_type_e;
using error::_ControlFlow;
int IsMainProgram = (1 << 0);
int IsEvalSource = (1 << 1);
int Optimize = (1 << 2);
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* OIL_TYPE_NAMES = &gdict0;

Deps::Deps() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Deps)) {
  this->mutable_opts = nullptr;
  this->dumper = nullptr;
  this->debug_f = nullptr;
  this->traps = nullptr;
  this->trap_nodes = nullptr;
}

int _PackFlags(int keyword_id) {
  return _PackFlags(keyword_id, 0);
}

int _PackFlags(int keyword_id, int flags) {
  return ((keyword_id << 8) | flags);
}

bool _HasManyStatuses(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;

  if (node->tag_() == command_e::Sentence) {
    command__Sentence* node1 = static_cast<command__Sentence*>(node);
    return _HasManyStatuses(node1->child);
  }
  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: 
    case command_e::DBracket: 
    case command_e::DParen: {
      return false;
    }
      break;
    case command_e::Pipeline: {
      return false;
    }
      break;
  }
  return true;
}

CommandEvaluator::CommandEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt, Dict<Str*, syntax_asdl::command__ShFunction*>* procs, Dict<int, vm::_AssignBuiltin*>* assign_builtins, alloc::Arena* arena, cmd_eval::Deps* cmd_deps) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CommandEvaluator)) {
  this->shell_ex = nullptr;
  this->arith_ev = nullptr;
  this->bool_ev = nullptr;
  this->expr_ev = nullptr;
  this->word_ev = nullptr;
  this->tracer = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->errfmt = errfmt;
  this->procs = procs;
  this->assign_builtins = assign_builtins;
  this->arena = arena;
  this->mutable_opts = cmd_deps->mutable_opts;
  this->dumper = cmd_deps->dumper;
  this->debug_f = cmd_deps->debug_f;
  this->traps = cmd_deps->traps;
  this->trap_nodes = cmd_deps->trap_nodes;
  this->loop_level = 0;
  this->check_command_sub_status = false;
}

void CommandEvaluator::CheckCircularDeps() {
}

int CommandEvaluator::_RunAssignBuiltin(runtime_asdl::cmd_value__Assign* cmd_val) {
  vm::_AssignBuiltin* builtin_func;
  int status;
  Str* arg0;

  this->errfmt->PushLocation(cmd_val->arg_spids->index(0));
  builtin_func = this->assign_builtins->get(cmd_val->builtin_id);
  if (builtin_func == nullptr) {
    e_die(fmt154(cmd_val->argv->index(0)), cmd_val->arg_spids->index(0));
  }
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      arg0 = cmd_val->argv->index(0);
      if (e->span_id == runtime::NO_SPID) {
        e->span_id = this->errfmt->CurrentLocation();
      }
      this->errfmt->PrefixPrint(e->msg, fmt155(arg0), e->span_id);
      status = 2;
    }
    catch (KeyboardInterrupt*) {
      if (this->exec_opts->interactive()) {
        print(str631);
        status = 130;
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return status;
}

int CommandEvaluator::_SpanIdForShAssignment(syntax_asdl::command__ShAssignment* node) {
  return node->spids->index(0);
}

void CommandEvaluator::_CheckStatus(int status, syntax_asdl::command_t* node, int blame_spid) {
  syntax_asdl::command_t* UP_node;
  Str* reason;
  int span_id;

  if ((this->exec_opts->errexit() and status != 0)) {
    UP_node = node;
    switch (node->tag_()) {
      case command_e::Simple: {
        command__Simple* node = static_cast<command__Simple*>(UP_node);
        reason = str632;
        span_id = location::SpanForCommand(node);
      }
        break;
      case command_e::ShAssignment: {
        command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
        reason = str633;
        span_id = this->_SpanIdForShAssignment(node);
      }
        break;
      case command_e::Subshell: {
        command__Subshell* node = static_cast<command__Subshell*>(UP_node);
        reason = str634;
        span_id = node->spids->index(0);
      }
        break;
      case command_e::Pipeline: {
        command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
        reason = str635;
        span_id = node->spids->index(0);
      }
        break;
      default: {
        reason = str636;
        span_id = runtime::NO_SPID;
      }
    }
    if (blame_spid != runtime::NO_SPID) {
      span_id = blame_spid;
    }
    throw Alloc<error::ErrExit>(fmt156(status, reason, posix::getpid()), span_id, status);
  }
}

runtime_asdl::redirect* CommandEvaluator::_EvalRedirect(syntax_asdl::redir* r) {
  runtime_asdl::redirect* result;
  syntax_asdl::redir_param_t* arg;
  syntax_asdl::redir_param_t* UP_arg;
  types_asdl::redir_arg_type_t redir_type;
  runtime_asdl::value__Str* val;
  Str* filename;
  Str* t;
  int target_fd;
  syntax_asdl::compound_word* w;

  result = Alloc<redirect>(r->op->id, r->op->span_id, r->loc, nullptr);
  arg = r->arg;
  UP_arg = arg;
  switch (arg->tag_()) {
    case redir_param_e::Word: {
      compound_word* arg_word = static_cast<compound_word*>(UP_arg);
      this->mem->SetCurrentSpanId(r->op->span_id);
      redir_type = consts::RedirArgType(r->op->id);
      if (redir_type == redir_arg_type_e::Path) {
        val = this->word_ev->EvalWordToString(arg_word);
        filename = val->s;
        if (len(filename) == 0) {
          throw Alloc<error::RedirectEval>(str638, arg_word);
        }
        result->arg = Alloc<redirect_arg::Path>(filename);
        return result;
      }
      else {
        if (redir_type == redir_arg_type_e::Desc) {
          val = this->word_ev->EvalWordToString(arg_word);
          t = val->s;
          if (len(t) == 0) {
            throw Alloc<error::RedirectEval>(str639, arg_word);
            return nullptr;
          }
          try {
            if (maybe_str_equals(t, str640)) {
              result->arg = Alloc<redirect_arg::CloseFd>();
            }
            else {
              if (str_equals(t->index(-1), str641)) {
                target_fd = to_int(t->slice(0, -1));
                result->arg = Alloc<redirect_arg::MoveFd>(target_fd);
              }
              else {
                result->arg = Alloc<redirect_arg::CopyFd>(to_int(t));
              }
            }
          }
          catch (ValueError*) {
            throw Alloc<error::RedirectEval>(fmt157(t), arg_word);
            return nullptr;
          }
          return result;
        }
        else {
          if (redir_type == redir_arg_type_e::Here) {
            val = this->word_ev->EvalWordToString(arg_word);
            result->arg = Alloc<redirect_arg::HereDoc>(str_concat(val->s, str643));
            return result;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
      break;
    case redir_param_e::MultiLine: {
      redir_param__MultiLine* arg = static_cast<redir_param__MultiLine*>(UP_arg);
      w = Alloc<compound_word>(arg->stdin_parts);
      val = this->word_ev->EvalWordToString(w);
      result->arg = Alloc<redirect_arg::HereDoc>(val->s);
      return result;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

List<runtime_asdl::redirect*>* CommandEvaluator::_EvalRedirects(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  List<syntax_asdl::redir*>* redirects;
  List<runtime_asdl::redirect*>* result;

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ExpandedAlias: {
      command__ExpandedAlias* node = static_cast<command__ExpandedAlias*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ShAssignment: {
      command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::DParen: {
      command__DParen* node = static_cast<command__DParen*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::DBracket: {
      command__DBracket* node = static_cast<command__DBracket*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ForEach: {
      command__ForEach* node = static_cast<command__ForEach*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ForExpr: {
      command__ForExpr* node = static_cast<command__ForExpr*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::WhileUntil: {
      command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::If: {
      command__If* node = static_cast<command__If*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::Case: {
      command__Case* node = static_cast<command__Case*>(UP_node);
      redirects = node->redirects;
    }
      break;
    default: {
      redirects = Alloc<List<syntax_asdl::redir*>>();
    }
  }
  result = Alloc<List<runtime_asdl::redirect*>>();
  for (ListIter<syntax_asdl::redir*> it(redirects); !it.Done(); it.Next()) {
    syntax_asdl::redir* redir = it.Value();
    result->append(this->_EvalRedirect(redir));
  }
  return result;
}

int CommandEvaluator::_RunSimpleCommand(runtime_asdl::cmd_value_t* cmd_val, bool do_fork) {
  runtime_asdl::cmd_value_t* UP_cmd_val;

  UP_cmd_val = cmd_val;
  switch (UP_cmd_val->tag_()) {
    case cmd_value_e::Argv: {
      cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
      return this->shell_ex->RunSimpleCommand(cmd_val, do_fork);
    }
      break;
    case cmd_value_e::Assign: {
      cmd_value__Assign* cmd_val = static_cast<cmd_value__Assign*>(UP_cmd_val);
      return this->_RunAssignBuiltin(cmd_val);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void CommandEvaluator::_EvalTempEnv(List<syntax_asdl::env_pair*>* more_env, int flags) {
  runtime_asdl::value__Str* val;

  for (ListIter<syntax_asdl::env_pair*> it(more_env); !it.Done(); it.Next()) {
    syntax_asdl::env_pair* e_pair = it.Value();
    val = this->word_ev->EvalWordToString(e_pair->val);
    this->mem->SetVar(Alloc<lvalue::Named>(e_pair->name), val, scope_e::LocalOnly, flags);
  }
}

void CommandEvaluator::_StrictErrExit(syntax_asdl::command_t* node) {
  Str* node_str;

  if (!(this->exec_opts->errexit() and this->exec_opts->strict_errexit())) {
    return ;
  }
  if (_HasManyStatuses(node)) {
    node_str = ui::CommandType(node);
    e_die(fmt158(node_str), location::SpanForCommand(node));
  }
}

void CommandEvaluator::_StrictErrExitList(List<syntax_asdl::command_t*>* node_list) {
  syntax_asdl::command_t* node;
  Str* node_str;

  if (!(this->exec_opts->errexit() and this->exec_opts->strict_errexit())) {
    return ;
  }
  if (len(node_list) > 1) {
    e_die(fmt159(), location::SpanForCommand(node_list->index(0)));
  }
  node = node_list->index(0);
  if (_HasManyStatuses(node)) {
    node_str = ui::CommandType(node);
    e_die(fmt160(node_str), location::SpanForCommand(node));
  }
}

bool CommandEvaluator::_EvalCondition(syntax_asdl::condition_t* cond, int spid) {
  bool b;
  syntax_asdl::condition_t* UP_cond;
  int cond_status;

  b = false;
  UP_cond = cond;
  switch (cond->tag_()) {
    case condition_e::Shell: {
      condition__Shell* cond = static_cast<condition__Shell*>(UP_cond);
      this->_StrictErrExitList(cond->commands);
      {  // with
        state::ctx_ErrExit ctx(this->mutable_opts, false, spid);

        cond_status = this->_ExecuteList(cond->commands);
      }
      b = cond_status == 0;
    }
      break;
    case condition_e::Oil: {
    }
      break;
  }
  return b;
}

Tuple2<int, bool> CommandEvaluator::_Dispatch(syntax_asdl::command_t* node, runtime_asdl::CompoundStatus* pipeline_st) {
  bool check_errexit;
  syntax_asdl::command_t* UP_node;
  int span_id;
  List<syntax_asdl::compound_word*>* words;
  runtime_asdl::cmd_value_t* cmd_val;
  runtime_asdl::cmd_value_t* UP_cmd_val;
  List<Str*>* argv;
  bool is_other_special;
  int status;
  bool result;
  int i;
  runtime_asdl::scope_t lookup_mode;
  int spid;
  runtime_asdl::value_t* val;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::value_t* old_val;
  runtime_asdl::value_t* UP_old_val;
  runtime_asdl::value_t* UP_val;
  int old_tag;
  int tag;
  List<Str*>* strs;
  int flags;
  int last_status;
  void* obj;
  syntax_asdl::Token* tok;
  runtime_asdl::value__Str* str_val;
  int arg;
  bool ok;
  Str* msg;
  syntax_asdl::command_t* left;
  int n;
  syntax_asdl::command_t* child;
  int op_id;
  bool b;
  Str* iter_name;
  List<Str*>* iter_list;
  syntax_asdl::arith_expr_t* init;
  syntax_asdl::arith_expr_t* for_cond;
  syntax_asdl::command_t* body;
  syntax_asdl::arith_expr_t* update;
  int cond_int;
  bool done;
  Str* to_match;
  runtime_asdl::value__Str* pat_val;
  double s_real;
  double s_user;
  double s_sys;
  double e_real;
  double e_user;
  double e_sys;

  this->check_command_sub_status = false;
  check_errexit = false;
  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      check_errexit = true;
      if (len(node->words)) {
        span_id = word_::LeftMostSpanForWord(node->words->index(0));
        if (span_id != runtime::NO_SPID) {
          this->mem->SetCurrentSpanId(span_id);
        }
      }
      words = braces::BraceExpandWords(node->words);
      cmd_val = this->word_ev->EvalWordSequence2(words, true);
      UP_cmd_val = cmd_val;
      if (UP_cmd_val->tag_() == cmd_value_e::Argv) {
        cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
        argv = cmd_val->argv;
        cmd_val->block = node->block;
      }
      else {
        argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str649});
        if (node->block) {
          e_die(fmt161(), node->block->spids->index(0));
        }
      }
      this->tracer->OnSimpleCommand(argv);
      if (len(node->more_env)) {
        is_other_special = false;
        if ((cmd_val->tag_() == cmd_value_e::Assign or is_other_special)) {
          this->_EvalTempEnv(node->more_env, 0);
          status = this->_RunSimpleCommand(cmd_val, node->do_fork);
        }
        else {
          {  // with
            state::ctx_Temp ctx(this->mem);

            this->_EvalTempEnv(node->more_env, state::SetExport);
            status = this->_RunSimpleCommand(cmd_val, node->do_fork);
          }
        }
      }
      else {
        status = this->_RunSimpleCommand(cmd_val, node->do_fork);
      }
    }
      break;
    case command_e::ExpandedAlias: {
      command__ExpandedAlias* node = static_cast<command__ExpandedAlias*>(UP_node);
      if (len(node->more_env)) {
        {  // with
          state::ctx_Temp ctx(this->mem);

          this->_EvalTempEnv(node->more_env, state::SetExport);
          status = this->_Execute(node->child);
        }
      }
      else {
        status = this->_Execute(node->child);
      }
    }
      break;
    case command_e::Sentence: {
      command__Sentence* node = static_cast<command__Sentence*>(UP_node);
      if (node->terminator->id == Id::Op_Semi) {
        status = this->_Execute(node->child);
      }
      else {
        status = this->shell_ex->RunBackgroundJob(node->child);
      }
    }
      break;
    case command_e::Pipeline: {
      command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
      check_errexit = true;
      if (len(node->stderr_indices)) {
        e_die(fmt162(), node->spids->index(0));
      }
      if (node->negated) {
        this->_StrictErrExit(node);
        pipeline_st->negated = true;
        {  // with
          state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(0));

          this->shell_ex->RunPipeline(node, pipeline_st);
        }
        check_errexit = false;
      }
      else {
        this->shell_ex->RunPipeline(node, pipeline_st);
      }
      status = -1;
    }
      break;
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      check_errexit = true;
      status = this->shell_ex->RunSubshell(node);
    }
      break;
    case command_e::DBracket: {
      command__DBracket* node = static_cast<command__DBracket*>(UP_node);
      span_id = node->spids->index(0);
      this->mem->SetCurrentSpanId(span_id);
      check_errexit = true;
      result = this->bool_ev->EvalB(node->expr);
      status = result ? 0 : 1;
    }
      break;
    case command_e::DParen: {
      command__DParen* node = static_cast<command__DParen*>(UP_node);
      span_id = node->spids->index(0);
      this->mem->SetCurrentSpanId(span_id);
      check_errexit = true;
      i = this->arith_ev->EvalToInt(node->child);
      status = i == 0 ? 1 : 0;
    }
      break;
    case command_e::VarDecl: {
      command__VarDecl* node = static_cast<command__VarDecl*>(UP_node);
    }
      break;
    case command_e::PlaceMutation: {
      status = 0;
    }
      break;
    case command_e::ShAssignment: {
      command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
      lookup_mode = scope_e::Dynamic;
      for (ListIter<syntax_asdl::assign_pair*> it(node->pairs); !it.Done(); it.Next()) {
        syntax_asdl::assign_pair* pair = it.Value();
        spid = pair->spids->index(0);
        this->mem->SetCurrentSpanId(spid);
        if (pair->op == assign_op_e::PlusEqual) {
          val = this->word_ev->EvalRhsWord(pair->rhs);
          lval = this->arith_ev->EvalShellLhs(pair->lhs, spid, lookup_mode);
          old_val = sh_expr_eval::OldValue(lval, this->mem, this->exec_opts);
          UP_old_val = old_val;
          UP_val = val;
          old_tag = old_val->tag_();
          tag = val->tag_();
          if ((old_tag == value_e::Undef and tag == value_e::Str)) {
            ;  // pass
          }
          else {
            if ((old_tag == value_e::Undef and tag == value_e::MaybeStrArray)) {
              ;  // pass
            }
            else {
              if ((old_tag == value_e::Str and tag == value_e::Str)) {
                value__Str* old_val = static_cast<value__Str*>(UP_old_val);
                value__Str* str_to_append = static_cast<value__Str*>(UP_val);
                val = Alloc<value::Str>(str_concat(old_val->s, str_to_append->s));
              }
              else {
                if ((old_tag == value_e::Str and tag == value_e::MaybeStrArray)) {
                  e_die(str652);
                }
                else {
                  if ((old_tag == value_e::MaybeStrArray and tag == value_e::Str)) {
                    e_die(str653);
                  }
                  else {
                    if ((old_tag == value_e::MaybeStrArray and tag == value_e::MaybeStrArray)) {
                      value__MaybeStrArray* old_val = static_cast<value__MaybeStrArray*>(UP_old_val);
                      value__MaybeStrArray* to_append = static_cast<value__MaybeStrArray*>(UP_val);
                      strs = Alloc<List<Str*>>();
                      strs->extend(old_val->strs);
                      strs->extend(to_append->strs);
                      val = Alloc<value::MaybeStrArray>(strs);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lval = this->arith_ev->EvalShellLhs(pair->lhs, spid, lookup_mode);
          if (pair->rhs) {
            val = this->word_ev->EvalRhsWord(pair->rhs);
          }
          else {
            val = nullptr;
          }
        }
        flags = 0;
        this->mem->SetVar(lval, val, lookup_mode, flags);
        this->tracer->OnShAssignment(lval, pair->op, val, flags, lookup_mode);
      }
      if (this->check_command_sub_status) {
        last_status = this->mem->LastStatus();
        this->_CheckStatus(last_status, node, runtime::NO_SPID);
        status = last_status;
      }
      else {
        status = 0;
      }
    }
      break;
    case command_e::Return: {
      command__Return* node = static_cast<command__Return*>(UP_node);
      obj = this->expr_ev->EvalExpr(node->e);
    }
      break;
    case command_e::Expr: {
      command__Expr* node = static_cast<command__Expr*>(UP_node);
      status = 0;
    }
      break;
    case command_e::ControlFlow: {
      command__ControlFlow* node = static_cast<command__ControlFlow*>(UP_node);
      tok = node->token;
      if (node->arg_word) {
        str_val = this->word_ev->EvalWordToString(node->arg_word);
        try {
          arg = to_int(str_val->s);
        }
        catch (ValueError*) {
          e_die(fmt163(node->token->val, str_val->s), node->arg_word);
        }
      }
      else {
        if ((tok->id == Id::ControlFlow_Exit || tok->id == Id::ControlFlow_Return)) {
          arg = this->mem->LastStatus();
        }
        else {
          arg = 0;
        }
      }
      ok = true;
      if (((tok->id == Id::ControlFlow_Break || tok->id == Id::ControlFlow_Continue) and this->loop_level == 0)) {
        ok = false;
      }
      if (ok) {
        if (tok->id == Id::ControlFlow_Exit) {
          throw Alloc<util::UserExit>(arg);
        }
        else {
          throw Alloc<_ControlFlow>(tok, arg);
        }
      }
      else {
        msg = str655;
        if (this->exec_opts->strict_control_flow()) {
          e_die(dynamic_fmt_dummy(), tok);
        }
        else {
          this->errfmt->PrefixPrint(msg, str656, tok->span_id);
          status = 0;
        }
      }
    }
      break;
    case command_e::CommandList: {
      command__CommandList* node = static_cast<command__CommandList*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::DoGroup: {
      command__DoGroup* node = static_cast<command__DoGroup*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::AndOr: {
      command__AndOr* node = static_cast<command__AndOr*>(UP_node);
      left = node->children->index(0);
      this->_StrictErrExit(left);
      {  // with
        state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(0));

        status = this->_Execute(left);
      }
      i = 1;
      n = len(node->children);
      while (i < n) {
        child = node->children->index(i);
        op_id = node->ops->index((i - 1));
        if ((op_id == Id::Op_DPipe and status == 0)) {
          i += 1;
          continue;
        }
        else {
          if ((op_id == Id::Op_DAmp and status != 0)) {
            i += 1;
            continue;
          }
        }
        if (i == (n - 1)) {
          status = this->_Execute(child);
          check_errexit = true;
        }
        else {
          this->_StrictErrExit(child);
          {  // with
            state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(i));

            status = this->_Execute(child);
          }
        }
        i += 1;
      }
    }
      break;
    case command_e::WhileUntil: {
      command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
      status = 0;
      this->loop_level += 1;
      try {
        while (true) {
          try {
            b = this->_EvalCondition(node->cond, node->spids->index(0));
            if (node->keyword->id == Id::KW_Until) {
              b = !b;
            }
            if (!b) {
              break;
            }
            status = this->_Execute(node->body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
                continue;
              }
              else {
                throw ;
              }
            }
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::ForEach: {
      command__ForEach* node = static_cast<command__ForEach*>(UP_node);
      this->mem->SetCurrentSpanId(node->spids->index(0));
      iter_name = node->iter_name;
      if (node->do_arg_iter) {
        iter_list = this->mem->GetArgv();
      }
      else {
        words = braces::BraceExpandWords(node->iter_words);
        iter_list = this->word_ev->EvalWordSequence(words);
      }
      status = 0;
      this->loop_level += 1;
      try {
        for (ListIter<Str*> it(iter_list); !it.Done(); it.Next()) {
          Str* x = it.Value();
          state::SetLocalString(this->mem, iter_name, x);
          try {
            status = this->_Execute(node->body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
              }
              else {
                throw ;
              }
            }
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::ForExpr: {
      command__ForExpr* node = static_cast<command__ForExpr*>(UP_node);
      status = 0;
      init = node->init;
      for_cond = node->cond;
      body = node->body;
      update = node->update;
      if (init) {
        this->arith_ev->Eval(init);
      }
      this->loop_level += 1;
      try {
        while (true) {
          if (for_cond) {
            cond_int = this->arith_ev->EvalToInt(for_cond);
            if (cond_int == 0) {
              break;
            }
          }
          try {
            status = this->_Execute(body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
              }
              else {
                throw ;
              }
            }
          }
          if (update) {
            this->arith_ev->Eval(update);
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::OilForIn: {
      command__OilForIn* node = static_cast<command__OilForIn*>(UP_node);
      status = 0;
    }
      break;
    case command_e::ShFunction: {
      command__ShFunction* node = static_cast<command__ShFunction*>(UP_node);
      this->procs->set(node->name, node);
      status = 0;
    }
      break;
    case command_e::Proc: {
      command__Proc* node = static_cast<command__Proc*>(UP_node);
      status = 0;
    }
      break;
    case command_e::Func: {
      command__Func* node = static_cast<command__Func*>(UP_node);
      status = 0;
    }
      break;
    case command_e::If: {
      command__If* node = static_cast<command__If*>(UP_node);
      done = false;
      for (ListIter<syntax_asdl::if_arm*> it(node->arms); !it.Done(); it.Next()) {
        syntax_asdl::if_arm* if_arm = it.Value();
        b = this->_EvalCondition(if_arm->cond, if_arm->spids->index(0));
        if (b) {
          status = this->_ExecuteList(if_arm->action);
          done = true;
          break;
        }
      }
      if ((!done and node->else_action != nullptr)) {
        status = this->_ExecuteList(node->else_action);
      }
    }
      break;
    case command_e::NoOp: {
      command__NoOp* node = static_cast<command__NoOp*>(UP_node);
      status = 0;
    }
      break;
    case command_e::Case: {
      command__Case* node = static_cast<command__Case*>(UP_node);
      str_val = this->word_ev->EvalWordToString(node->to_match);
      to_match = str_val->s;
      status = 0;
      done = false;
      for (ListIter<syntax_asdl::case_arm*> it(node->arms); !it.Done(); it.Next()) {
        syntax_asdl::case_arm* case_arm = it.Value();
        for (ListIter<syntax_asdl::word_t*> it(case_arm->pat_list); !it.Done(); it.Next()) {
          syntax_asdl::word_t* pat_word = it.Value();
          pat_val = this->word_ev->EvalWordToString(pat_word, quote_e::FnMatch);
          if (libc::fnmatch(pat_val->s, to_match, this->exec_opts->extglob())) {
            status = this->_ExecuteList(case_arm->action);
            done = true;
            break;
          }
        }
        if (done) {
          break;
        }
      }
    }
      break;
    case command_e::TimeBlock: {
      command__TimeBlock* node = static_cast<command__TimeBlock*>(UP_node);
      Tuple3<double, double, double> tup1 = pyos::Time();
      s_real = tup1.at0();
      s_user = tup1.at1();
      s_sys = tup1.at2();
      status = this->_Execute(node->pipeline);
      Tuple3<double, double, double> tup2 = pyos::Time();
      e_real = tup2.at0();
      e_user = tup2.at1();
      e_sys = tup2.at2();
      libc::print_time((e_real - s_real), (e_user - s_user), (e_sys - s_sys));
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(node->tag_());
    }
  }
  return (Tuple2<int, bool>(status, check_errexit));
}

int CommandEvaluator::_Execute(syntax_asdl::command_t* node) {
  List<syntax_asdl::command_t*>* to_run;
  runtime_asdl::CompoundStatus* pipeline_st;
  runtime_asdl::CompoundStatus* process_sub_st;
  int errexit_spid;
  bool check_errexit;
  List<runtime_asdl::redirect*>* redirects;
  int status;
  List<int>* codes;
  int i;

  if (len(this->trap_nodes)) {
    to_run = list(this->trap_nodes);
    this->trap_nodes->clear();
    for (ListIter<syntax_asdl::command_t*> it(to_run); !it.Done(); it.Next()) {
      syntax_asdl::command_t* trap_node = it.Value();
      this->_Execute(trap_node);
    }
  }
  pipeline_st = Alloc<CompoundStatus>();
  process_sub_st = Alloc<CompoundStatus>();
  errexit_spid = runtime::NO_SPID;
  check_errexit = true;
  {  // with
    vm::ctx_ProcessSub ctx(this->shell_ex, process_sub_st);

    try {
      redirects = this->_EvalRedirects(node);
    }
    catch (error::RedirectEval* e) {
      ui::PrettyPrintError(e, this->arena);
      redirects = nullptr;
    }
    if (redirects == nullptr) {
      status = 1;
    }
    else {
      if (this->shell_ex->PushRedirects(redirects)) {
        {  // with
          vm::ctx_Redirect ctx(this->shell_ex);

          Tuple2<int, bool> tup3 = this->_Dispatch(node, pipeline_st);
          status = tup3.at0();
          check_errexit = tup3.at1();
        }
        codes = pipeline_st->codes;
        if (len(codes)) {
          this->mem->SetPipeStatus(codes);
          if (this->exec_opts->pipefail()) {
            status = 0;
            i = 0;
            for (ListIter<int> it(codes); !it.Done(); it.Next(), ++i) {
              int st = it.Value();
              if (st != 0) {
                status = st;
                errexit_spid = pipeline_st->spids->index(i);
              }
            }
          }
          else {
            status = codes->index(-1);
          }
          if (pipeline_st->negated) {
            status = status == 0 ? 1 : 0;
          }
        }
      }
      else {
        status = 1;
      }
    }
  }
  if (len(process_sub_st->codes)) {
    codes = process_sub_st->codes;
    this->mem->SetProcessSubStatus(codes);
    if ((status == 0 and this->exec_opts->process_sub_fail())) {
      i = 0;
      for (ListIter<int> it(codes); !it.Done(); it.Next(), ++i) {
        int st = it.Value();
        if (st != 0) {
          status = st;
          errexit_spid = process_sub_st->spids->index(i);
        }
      }
    }
  }
  this->mem->SetLastStatus(status);
  if (check_errexit) {
    this->_CheckStatus(status, node, errexit_spid);
  }
  return status;
}

int CommandEvaluator::_ExecuteList(List<syntax_asdl::command_t*>* children) {
  int status;

  status = 0;
  for (ListIter<syntax_asdl::command_t*> it(children); !it.Done(); it.Next()) {
    syntax_asdl::command_t* child = it.Value();
    status = this->_Execute(child);
  }
  return status;
}

int CommandEvaluator::LastStatus() {
  return this->mem->LastStatus();
}

void CommandEvaluator::_NoForkLast(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      node->do_fork = false;
    }
      break;
    case command_e::Pipeline: {
      command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
      if (!node->negated) {
        this->_NoForkLast(node->children->index(-1));
      }
    }
      break;
    case command_e::Sentence: {
      command__Sentence* node = static_cast<command__Sentence*>(UP_node);
      this->_NoForkLast(node->child);
    }
      break;
    case command_e::CommandList: {
      command__CommandList* node = static_cast<command__CommandList*>(UP_node);
      this->_NoForkLast(node->children->index(-1));
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      this->_NoForkLast(node->children->index(-1));
    }
      break;
  }
}

syntax_asdl::command_t* CommandEvaluator::_RemoveSubshells(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      if (len(node->redirects) == 0) {
        return this->_RemoveSubshells(node->child);
      }
    }
      break;
  }
  return node;
}

Tuple2<bool, bool> CommandEvaluator::ExecuteAndCatch(syntax_asdl::command_t* node) {
  return ExecuteAndCatch(node, 0);
}

Tuple2<bool, bool> CommandEvaluator::ExecuteAndCatch(syntax_asdl::command_t* node, int cmd_flags) {
  bool is_return;
  bool is_fatal;
  bool is_errexit;
  error::_ErrorWithLocation* err;
  int status;
  bool is_eval;

  if ((cmd_flags & Optimize)) {
    node = this->_RemoveSubshells(node);
    this->_NoForkLast(node);
  }
  is_return = false;
  is_fatal = false;
  is_errexit = false;
  err = nullptr;
  try {
    status = this->_Execute(node);
  }
  catch (_ControlFlow* e) {
    if ((cmd_flags & IsEvalSource)) {
      throw ;
    }
    else {
      if (e->IsReturn()) {
        is_return = true;
        status = e->StatusCode();
      }
      else {
        is_eval = false;
        this->errfmt->Print_(str657, e->token->span_id);
        is_fatal = true;
        status = 1;
      }
    }
  }
  catch (error::Parse* e) {
    this->dumper->MaybeCollect(this, e);
    throw ;
  }
  catch (error::ErrExit* e) {
    err = e;
    is_errexit = true;
  }
  catch (error::FatalRuntime* e) {
    err = e;
  }
  if (err) {
    status = err->ExitStatus();
    is_fatal = true;
    this->dumper->MaybeCollect(this, err);
    if (!err->HasLocation()) {
      err->span_id = this->mem->CurrentSpanId();
    }
    if ((is_errexit and !this->exec_opts->verbose_errexit())) {
      ;  // pass
    }
    else {
      ui::PrettyPrintError(err, this->arena, str658);
    }
  }
  this->dumper->MaybeDump(status);
  this->mem->SetLastStatus(status);
  return (Tuple2<bool, bool>(is_return, is_fatal));
}

void CommandEvaluator::MaybeRunExitTrap(List<int>* mut_status) {
  builtin_process::_TrapHandler* handler;
  bool is_return;
  bool is_fatal;

  handler = this->traps->get(str659);
  if (handler) {
    try {
      Tuple2<bool, bool> tup4 = this->ExecuteAndCatch(handler->node);
      is_return = tup4.at0();
      is_fatal = tup4.at1();
    }
    catch (util::UserExit* e) {
      mut_status->set(0, e->status);
      return ;
    }
    if (is_return) {
      mut_status->set(0, this->LastStatus());
    }
  }
}

int CommandEvaluator::RunProc(syntax_asdl::command__ShFunction* func_node, List<Str*>* argv) {
  int status;

  {  // with
    state::ctx_Call ctx(this->mem, func_node->name, func_node->spids->index(0), argv);

    try {
      status = this->_Execute(func_node->body);
    }
    catch (_ControlFlow* e) {
      if (e->IsReturn()) {
        status = e->StatusCode();
      }
      else {
        e_die(fmt164(e->token->val), e->token);
      }
    }
    catch (error::FatalRuntime* e) {
      this->dumper->MaybeCollect(this, e);
      throw ;
    }
  }
  return status;
}

Dict<Str*, runtime_asdl::cell*>* CommandEvaluator::EvalBlock(syntax_asdl::command_t* block) {
  int status;
  Dict<Str*, runtime_asdl::cell*>* namespace_;

  status = 0;
  namespace_ = nullptr;
  this->mem->PushTemp();
  try {
    try {
      this->_Execute(block);
    }
    catch (_ControlFlow* e) {
      if (e->IsReturn()) {
        status = e->StatusCode();
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return namespace_;
}

int CommandEvaluator::RunFuncForCompletion(syntax_asdl::command__ShFunction* func_node, List<Str*>* argv) {
  int status;

  try {
    status = this->RunProc(func_node, argv);
  }
  catch (error::FatalRuntime* e) {
    ui::PrettyPrintError(e, this->arena);
    status = e->ExitStatus();
  }
  catch (_ControlFlow* e) {
    this->errfmt->Print_(str661, e->token->span_id);
    status = 1;
  }
  return status;
}

}  // define namespace cmd_eval

namespace cmd_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
namespace condition = syntax_asdl::condition;
using syntax_asdl::condition_t;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__ForEach;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__Case;
using syntax_asdl::command__If;
using syntax_asdl::command__ShFunction;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__DBracket;
using syntax_asdl::command__DParen;
using syntax_asdl::command__CommandList;
using syntax_asdl::command__Proc;
using syntax_asdl::BraceGroup;
using syntax_asdl::case_arm;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::redir;
namespace redir_param = syntax_asdl::redir_param;
using syntax_asdl::redir_param__MultiLine;
namespace redir_loc = syntax_asdl::redir_loc;
using syntax_asdl::redir_loc_t;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::assign_pair;
using syntax_asdl::env_pair;
using syntax_asdl::assign_op_e;
namespace source = syntax_asdl::source;
namespace parse_result = syntax_asdl::parse_result;
using syntax_asdl::parse_result_t;
using syntax_asdl::speck;
using syntax_asdl::name_type;

int _KeywordSpid(syntax_asdl::word_t* w) {
  return word_::LeftMostSpanForWord(w);
}

syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part;

  compound_word* w = static_cast<compound_word*>(UP_w);
  part = w->parts->index(0);
  return static_cast<Token*>(part);
}

Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir* h, Str* delimiter) {
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  bool strip_leading_tabs;
  int line_id;
  Str* line;
  int unused_offset;
  int start_offset;
  int n;
  int i;

  here_lines = Alloc<List<Tuple3<int, Str*, int>*>>();
  last_line = nullptr;
  strip_leading_tabs = h->op->id == Id::Redir_DLessDash;
  while (true) {
    Tuple3<int, Str*, int> tup0 = line_reader->GetLine();
    line_id = tup0.at0();
    line = tup0.at1();
    unused_offset = tup0.at2();
    if (line == nullptr) {
      p_die(fmt165(), h->op);
    }
    start_offset = 0;
    if (strip_leading_tabs) {
      n = len(line);
      i = 0;
      while (i < n) {
        if (!(str_equals(line->index(i), str663))) {
          break;
        }
        i += 1;
      }
      start_offset = i;
    }
    if (str_equals(line->slice(start_offset)->rstrip(), delimiter)) {
      last_line = (Alloc<Tuple3<int, Str*, int>>(line_id, line, start_offset));
      break;
    }
    here_lines->append((Alloc<Tuple3<int, Str*, int>>(line_id, line, start_offset)));
  }
  return (Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>(here_lines, last_line));
}

List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena) {
  List<syntax_asdl::Token*>* tokens;
  int line_id;
  Str* line;
  int start_offset;
  int span_id;
  syntax_asdl::Token* t;
  List<syntax_asdl::word_part_t*>* parts;

  tokens = Alloc<List<syntax_asdl::Token*>>();
  for (ListIter<Tuple3<int, Str*, int>*> it(here_lines); !it.Done(); it.Next()) {
    Tuple3<int, Str*, int>* tup1 = it.Value();
    line_id = tup1->at0();
    line = tup1->at1();
    start_offset = tup1->at2();
    span_id = arena->AddLineSpan(line_id, start_offset, len(line));
    t = Alloc<Token>(Id::Lit_Chars, span_id, line->slice(start_offset));
    tokens->append(t);
  }
  parts = Alloc<List<syntax_asdl::word_part_t*>>();
  for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
    syntax_asdl::Token* t = it.Value();
    parts->append(static_cast<word_part_t*>(t));
  }
  return parts;
}

void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir* r, reader::_Reader* line_reader, alloc::Arena* arena) {
  bool ok;
  Str* delimiter;
  bool delim_quoted;
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  word_parse::WordParser* w_parser;
  int end_line_id;
  Str* end_line;
  int end_pos;

  redir_param__MultiLine* h = static_cast<redir_param__MultiLine*>(r->arg);
  Tuple3<bool, Str*, bool> tup2 = word_::StaticEval(h->here_begin);
  ok = tup2.at0();
  delimiter = tup2.at1();
  delim_quoted = tup2.at2();
  if (!ok) {
    p_die(fmt166(), h->here_begin);
  }
  Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> tup3 = _ReadHereLines(line_reader, r, delimiter);
  here_lines = tup3.at0();
  last_line = tup3.at1();
  if (delim_quoted) {
    h->stdin_parts = _MakeLiteralHereLines(here_lines, arena);
  }
  else {
    line_reader = Alloc<reader::VirtualLineReader>(here_lines, arena);
    w_parser = parse_ctx->MakeWordParserForHereDoc(line_reader);
    w_parser->ReadHereDocBody(h->stdin_parts);
  }
  Tuple3<int, Str*, int>* tup4 = last_line;
  end_line_id = tup4->at0();
  end_line = tup4->at1();
  end_pos = tup4->at2();
  h->here_end_span_id = arena->AddLineSpan(end_line_id, end_pos, len(end_line));
}

syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena) {
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  syntax_asdl::assign_op_t op;
  syntax_asdl::sh_lhs_expr__Name* tmp;
  sh_lhs_expr_t* lhs;
  int left_spid;
  int right_spid;
  syntax_asdl::line_span* left_span;
  syntax_asdl::line_span* right_span;
  Str* line;
  Str* index_str;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* code_str;
  tdop::TdopParser* a_parser;
  syntax_asdl::source__LValue* src;
  syntax_asdl::arith_expr_t* index_node;
  syntax_asdl::sh_lhs_expr__IndexedName* tmp3;
  int n;
  syntax_asdl::word_t* rhs;
  syntax_asdl::compound_word* tmp2;
  syntax_asdl::assign_pair* pair;

  Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup5 = preparsed;
  left_token = tup5->at0();
  close_token = tup5->at1();
  part_offset = tup5->at2();
  w = tup5->at3();
  if (left_token->id == Id::Lit_VarLike) {
    if (str_equals(left_token->val->index(-2), str665)) {
      var_name = left_token->val->slice(0, -2);
      op = assign_op_e::PlusEqual;
    }
    else {
      var_name = left_token->val->slice(0, -1);
      op = assign_op_e::Equal;
    }
    tmp = Alloc<sh_lhs_expr::Name>(var_name);
    tmp->spids->append(left_token->span_id);
    lhs = static_cast<sh_lhs_expr_t*>(tmp);
  }
  else {
    if ((left_token->id == Id::Lit_ArrayLhsOpen and parse_ctx->one_pass_parse)) {
      var_name = left_token->val->slice(0, -1);
      if (str_equals(close_token->val->index(-2), str666)) {
        op = assign_op_e::PlusEqual;
      }
      else {
        op = assign_op_e::Equal;
      }
      left_spid = (left_token->span_id + 1);
      right_spid = close_token->span_id;
      left_span = parse_ctx->arena->GetLineSpan(left_spid);
      right_span = parse_ctx->arena->GetLineSpan(right_spid);
      line = parse_ctx->arena->GetLine(left_span->line_id);
      index_str = line->slice(left_span->col, right_span->col);
      lhs = Alloc<sh_lhs_expr::UnparsedIndex>(var_name, index_str);
    }
    else {
      if (left_token->id == Id::Lit_ArrayLhsOpen) {
        var_name = left_token->val->slice(0, -1);
        if (str_equals(close_token->val->index(-2), str667)) {
          op = assign_op_e::PlusEqual;
        }
        else {
          op = assign_op_e::Equal;
        }
        spid1 = left_token->span_id;
        spid2 = close_token->span_id;
        span1 = arena->GetLineSpan(spid1);
        span2 = arena->GetLineSpan(spid2);
        if (span1->line_id == span2->line_id) {
          line = arena->GetLine(span1->line_id);
          code_str = line->slice((span1->col + span1->length), span2->col);
        }
        else {
          throw Alloc<NotImplementedError>(fmt167(span1->line_id, span2->line_id));
        }
        a_parser = parse_ctx->MakeArithParser(code_str);
        src = Alloc<source::LValue>(left_token->span_id, close_token->span_id);
        {  // with
          alloc::ctx_Location ctx(arena, src);

          index_node = a_parser->Parse();
        }
        tmp3 = Alloc<sh_lhs_expr::IndexedName>(var_name, index_node);
        tmp3->spids->append(left_token->span_id);
        lhs = static_cast<sh_lhs_expr_t*>(tmp3);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  n = len(w->parts);
  if (part_offset == n) {
    rhs = Alloc<word::Empty>();
  }
  else {
    tmp2 = Alloc<compound_word>(w->parts->slice(part_offset));
    word_::TildeDetectAssign(tmp2);
    rhs = tmp2;
  }
  pair = Alloc<syntax_asdl::assign_pair>(lhs, op, rhs, Alloc<List<int>>(std::initializer_list<int>{left_token->span_id}));
  return pair;
}

void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env) {
  syntax_asdl::Token* left_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  int n;
  syntax_asdl::word_t* val;
  syntax_asdl::env_pair* pair;

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup6 = it.Value();
    left_token = tup6->at0();
    part_offset = tup6->at2();
    w = tup6->at3();
    if (left_token->id != Id::Lit_VarLike) {
      p_die(fmt168(), left_token);
    }
    if (str_equals(left_token->val->index(-2), str670)) {
      p_die(fmt169(), left_token);
    }
    var_name = left_token->val->slice(0, -1);
    n = len(w->parts);
    if (part_offset == n) {
      val = Alloc<word::Empty>();
    }
    else {
      val = Alloc<compound_word>(w->parts->slice(part_offset));
    }
    pair = Alloc<syntax_asdl::env_pair>(var_name, val, Alloc<List<int>>(std::initializer_list<int>{left_token->span_id}));
    more_env->append(pair);
  }
}

Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words) {
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  bool done_prefix;
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;

  preparsed_list = Alloc<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>>();
  suffix_words = Alloc<List<syntax_asdl::compound_word*>>();
  done_prefix = false;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    if (done_prefix) {
      suffix_words->append(w);
      continue;
    }
    Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> tup7 = word_::DetectShAssignment(w);
    left_token = tup7.at0();
    close_token = tup7.at1();
    part_offset = tup7.at2();
    if (left_token) {
      preparsed_list->append((Alloc<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>>(left_token, close_token, part_offset, w)));
    }
    else {
      done_prefix = true;
      suffix_words->append(w);
    }
  }
  return (Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>(preparsed_list, suffix_words));
}

syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir*>* redirects, syntax_asdl::BraceGroup* block) {
  syntax_asdl::compound_word* w;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__Simple* node;

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup8 = it.Value();
    w = tup8->at3();
    if (word_::HasArrayPart(w)) {
      p_die(fmt170(), w);
    }
  }
  words2 = braces::BraceDetectAll(suffix_words);
  words3 = word_::TildeDetectAll(words2);
  more_env = Alloc<List<syntax_asdl::env_pair*>>();
  _AppendMoreEnv(preparsed_list, more_env);
  node = Alloc<command::Simple>(words3, redirects, more_env, block, true);
  return node;
}
List<int> glist9 = {Id::KW_Do, Id::KW_Done, Id::KW_Then, Id::KW_Fi, Id::KW_Elif, Id::KW_Else, Id::KW_Esac};
List<int>* SECONDARY_KEYWORDS = &glist9;

CommandParser::CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CommandParser)) {
  this->parse_ctx = parse_ctx;
  this->aliases = parse_ctx->aliases;
  this->w_parser = w_parser;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->arena = parse_ctx->arena;
  this->eof_id = Id::Eof_Real;
  this->aliases_in_flight = Alloc<List<Tuple2<Str*, int>*>>();
  this->allow_block = true;
  this->return_expr = false;
  this->parse_opts = parse_ctx->parse_opts;
  this->Reset();
}

void CommandParser::Init_EofId(int eof_id) {
  this->eof_id = eof_id;
}

void CommandParser::Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight) {
  this->aliases_in_flight = aliases_in_flight;
}

void CommandParser::Reset() {
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cur_word = nullptr;
  this->c_kind = Kind::Undefined;
  this->c_id = Id::Undefined_Tok;
  this->pending_here_docs = Alloc<List<syntax_asdl::redir*>>();
}

void CommandParser::ResetInputObjects() {
  this->w_parser->Reset();
  this->lexer->ResetInputObjects();
  this->line_reader->Reset();
}

void CommandParser::_Next() {
  _Next(lex_mode_e::ShCommand);
}

void CommandParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void CommandParser::_Peek() {
  syntax_asdl::word_t* w;

  if (this->next_lex_mode != lex_mode_e::Undefined) {
    w = this->w_parser->ReadWord(this->next_lex_mode);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Op_Newline) {
        for (ListIter<syntax_asdl::redir*> it(this->pending_here_docs); !it.Done(); it.Next()) {
          syntax_asdl::redir* h = it.Value();
          _ParseHereDocBody(this->parse_ctx, h, this->line_reader, this->arena);
        }
        this->pending_here_docs->clear();
      }
    }
    this->cur_word = w;
    this->c_kind = word_::CommandKind(this->cur_word);
    this->c_id = word_::CommandId(this->cur_word);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
}

void CommandParser::_Eat(int c_id) {
  int actual_id;
  Str* msg;

  actual_id = word_::CommandId(this->cur_word);
  msg = fmt171(ui::PrettyId(c_id), ui::PrettyId(actual_id));
  this->_Eat2(c_id, msg);
}

void CommandParser::_Eat2(int c_id, Str* msg) {
  this->_Peek();
  if (this->c_id != c_id) {
    p_die(dynamic_fmt_dummy(), this->cur_word);
  }
  this->_Next();
}

void CommandParser::_NewlineOk() {
  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    this->_Next();
    this->_Peek();
  }
}

bool CommandParser::_AtSecondaryKeyword() {
  if (list_contains(SECONDARY_KEYWORDS, this->c_id)) {
    return true;
  }
  return false;
}

syntax_asdl::redir* CommandParser::ParseRedirect() {
  Str* op_val;
  int pos;
  syntax_asdl::redir_loc_t* loc;
  syntax_asdl::redir_param__MultiLine* arg;
  syntax_asdl::redir* r;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::compound_word* tilde;

  this->_Peek();
  Token* op_tok = static_cast<Token*>(this->cur_word);
  op_val = op_tok->val;
  if (str_equals(op_val->index(0), str674)) {
    pos = op_val->find(str675);
    loc = Alloc<redir_loc::VarName>(op_val->slice(1, pos));
  }
  else {
    if (op_val->index(0)->isdigit()) {
      pos = 1;
      if (op_val->index(1)->isdigit()) {
        pos = 2;
      }
      loc = Alloc<redir_loc::Fd>(to_int(op_val->slice(0, pos)));
    }
    else {
      loc = Alloc<redir_loc::Fd>(consts::RedirDefaultFd(op_tok->id));
    }
  }
  this->_Next();
  this->_Peek();
  if ((op_tok->id == Id::Redir_DLess || op_tok->id == Id::Redir_DLessDash)) {
    arg = Alloc<redir_param::MultiLine>();
    arg->here_begin = this->cur_word;
    r = Alloc<redir>(op_tok, loc, arg);
    this->pending_here_docs->append(r);
    this->_Next();
    return r;
  }
  if (this->c_kind != Kind::Word) {
    p_die(fmt172(), this->cur_word);
  }
  arg_word = this->cur_word;
  tilde = word_::TildeDetect(arg_word);
  if (tilde) {
    arg_word = tilde;
  }
  this->_Next();
  return Alloc<redir>(op_tok, loc, static_cast<compound_word*>(arg_word));
}

List<syntax_asdl::redir*>* CommandParser::_ParseRedirectList() {
  List<syntax_asdl::redir*>* redirects;
  syntax_asdl::redir* node;

  redirects = Alloc<List<syntax_asdl::redir*>>();
  while (true) {
    this->_Peek();
    if (this->c_kind != Kind::Redir) {
      break;
    }
    node = this->ParseRedirect();
    redirects->append(node);
    this->_Next();
  }
  return redirects;
}

Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> CommandParser::_ScanSimpleCommand() {
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::BraceGroup* block;
  syntax_asdl::redir* node;

  redirects = Alloc<List<syntax_asdl::redir*>>();
  words = Alloc<List<syntax_asdl::compound_word*>>();
  block = nullptr;
  while (true) {
    this->_Peek();
    if (this->c_kind == Kind::Redir) {
      node = this->ParseRedirect();
      redirects->append(node);
    }
    else {
      if (this->c_kind == Kind::Word) {
        if (this->parse_opts->parse_brace()) {
          if (this->c_id == Id::Lit_LBrace) {
            if (this->allow_block) {
              block = this->ParseBraceGroup();
            }
            break;
          }
          else {
            if (this->c_id == Id::Lit_RBrace) {
              break;
            }
          }
        }
        compound_word* w = static_cast<compound_word*>(this->cur_word);
        words->append(w);
      }
      else {
        break;
      }
    }
    this->_Next();
  }
  return (Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*>(redirects, words, block));
}

syntax_asdl::command_t* CommandParser::_MaybeExpandAliases(List<syntax_asdl::compound_word*>* words) {
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  Str* first_word_str;
  int argv0_spid;
  List<Str*>* expanded;
  int i;
  int n;
  syntax_asdl::compound_word* w;
  bool ok;
  Str* word_str;
  bool quoted;
  Str* alias_exp;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* line;
  Str* piece;
  Str* code_str;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* cp;
  syntax_asdl::source__Alias* src;
  syntax_asdl::command__CommandList* node;

  aliases_in_flight = len(this->aliases_in_flight) ? this->aliases_in_flight : Alloc<List<Tuple2<Str*, int>*>>();
  first_word_str = nullptr;
  argv0_spid = word_::LeftMostSpanForWord(words->index(0));
  expanded = Alloc<List<Str*>>();
  i = 0;
  n = len(words);
  while (i < n) {
    w = words->index(i);
    Tuple3<bool, Str*, bool> tup10 = word_::StaticEval(w);
    ok = tup10.at0();
    word_str = tup10.at1();
    quoted = tup10.at2();
    if ((!ok or quoted)) {
      break;
    }
    alias_exp = this->aliases->get(word_str);
    if (alias_exp == nullptr) {
      break;
    }
    if (list_contains(aliases_in_flight, (Alloc<Tuple2<Str*, int>>(word_str, i)))) {
      break;
    }
    if (i == 0) {
      first_word_str = word_str;
    }
    aliases_in_flight->append((Alloc<Tuple2<Str*, int>>(word_str, i)));
    expanded->append(alias_exp);
    i += 1;
    if (!alias_exp->endswith(str677)) {
      expanded->append(str678);
      break;
    }
  }
  if (len(expanded) == 0) {
    return nullptr;
  }
  while (i < n) {
    w = words->index(i);
    spid1 = word_::LeftMostSpanForWord(w);
    spid2 = word_::RightMostSpanForWord(w);
    span1 = this->arena->GetLineSpan(spid1);
    span2 = this->arena->GetLineSpan(spid2);
    if (span1->line_id == span2->line_id) {
      line = this->arena->GetLine(span1->line_id);
      piece = line->slice(span1->col, (span2->col + span2->length));
      expanded->append(piece);
    }
    else {
      throw Alloc<NotImplementedError>(fmt173(span1->line_id, span2->line_id));
    }
    expanded->append(str680);
    i += 1;
  }
  code_str = str681->join(expanded);
  line_reader = reader::StringLineReader(code_str, this->arena);
  cp = this->parse_ctx->MakeOshParser(line_reader);
  cp->Init_AliasesInFlight(aliases_in_flight);
  src = Alloc<source::Alias>(first_word_str, argv0_spid);
  {  // with
    alloc::ctx_Location ctx(this->arena, src);

    {  // with
      parse_lib::ctx_Alias ctx(this->parse_ctx->trail);

      try {
        node = cp->_ParseCommandTerm();
      }
      catch (error::Parse* e) {
        throw ;
      }
    }
  }
  return node;
}

syntax_asdl::command_t* CommandParser::ParseSimpleCommand() {
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::BraceGroup* block;
  int block_spid;
  syntax_asdl::command__Simple* simple;
  syntax_asdl::word_part_t* part0;
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  syntax_asdl::Token* left_token;
  List<syntax_asdl::assign_pair*>* pairs;
  syntax_asdl::command__ShAssignment* assign;
  int left_spid;
  id_kind_asdl::Kind_t kind;
  syntax_asdl::Token* kw_token;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::command_t* expanded_node;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__ExpandedAlias* exp;
  syntax_asdl::command__Simple* node;

  Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> tup11 = this->_ScanSimpleCommand();
  redirects = tup11.at0();
  words = tup11.at1();
  block = tup11.at2();
  block_spid = block ? block->spids->index(0) : runtime::NO_SPID;
  if (len(words) == 0) {
    if (block) {
      p_die(fmt174(), block_spid);
    }
    simple = Alloc<command::Simple>();
    simple->redirects = redirects;
    return simple;
  }
  part0 = words->index(0)->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    Token* tok = static_cast<Token*>(part0);
    if (tok->id == Id::Lit_Equals) {
      p_die(fmt175(), tok);
    }
  }
  Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> tup12 = _SplitSimpleCommandPrefix(words);
  preparsed_list = tup12.at0();
  suffix_words = tup12.at1();
  if ((this->parse_opts->parse_equals() and len(preparsed_list))) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup13 = preparsed_list->index(0);
    left_token = tup13->at0();
    p_die(fmt176(), left_token);
  }
  this->parse_ctx->trail->SetLatestWords(suffix_words, redirects);
  if (len(suffix_words) == 0) {
    if (block) {
      p_die(fmt177(), block_spid);
    }
    pairs = Alloc<List<syntax_asdl::assign_pair*>>();
    for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed = it.Value();
      pairs->append(_MakeAssignPair(this->parse_ctx, preparsed, this->arena));
    }
    assign = Alloc<command::ShAssignment>(pairs, redirects);
    left_spid = word_::LeftMostSpanForWord(words->index(0));
    assign->spids->append(left_spid);
    return assign;
  }
  Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> tup14 = word_::KeywordToken(suffix_words->index(0));
  kind = tup14.at0();
  kw_token = tup14.at1();
  if (kind == Kind::ControlFlow) {
    if (block) {
      p_die(fmt178(), block_spid);
    }
    if ((!this->parse_opts->parse_ignored() and len(redirects))) {
      p_die(fmt179(), kw_token);
    }
    if (len(preparsed_list)) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup15 = preparsed_list->index(0);
      left_token = tup15->at0();
      p_die(fmt180(), left_token);
    }
    if (len(suffix_words) == 1) {
      arg_word = nullptr;
    }
    else {
      if (len(suffix_words) == 2) {
        arg_word = suffix_words->index(1);
      }
      else {
        p_die(fmt181(kw_token->val), suffix_words->index(2));
      }
    }
    return Alloc<command::ControlFlow>(kw_token, arg_word);
  }
  if (!block) {
    expanded_node = this->_MaybeExpandAliases(suffix_words);
    if (expanded_node) {
      more_env = Alloc<List<syntax_asdl::env_pair*>>();
      _AppendMoreEnv(preparsed_list, more_env);
      exp = Alloc<command::ExpandedAlias>(expanded_node, redirects, more_env);
      return exp;
    }
  }
  node = _MakeSimpleCommand(preparsed_list, suffix_words, redirects, block);
  return node;
}

syntax_asdl::BraceGroup* CommandParser::ParseBraceGroup() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::BraceGroup* node;

  left_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::Lit_LBrace);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::Lit_RBrace);
  node = Alloc<BraceGroup>(c_list->children, nullptr);
  node->spids->append(left_spid);
  return node;
}

syntax_asdl::command__DoGroup* CommandParser::ParseDoGroup() {
  int do_spid;
  syntax_asdl::command__CommandList* c_list;
  int done_spid;
  syntax_asdl::command__DoGroup* node;

  this->_Eat(Id::KW_Do);
  do_spid = _KeywordSpid(this->cur_word);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::KW_Done);
  done_spid = _KeywordSpid(this->cur_word);
  node = Alloc<command::DoGroup>(c_list->children);
  node->spids->append(do_spid);
  node->spids->append(done_spid);
  return node;
}

Tuple2<List<syntax_asdl::compound_word*>*, int> CommandParser::ParseForWords() {
  List<syntax_asdl::compound_word*>* words;
  int semi_spid;

  words = Alloc<List<syntax_asdl::compound_word*>>();
  semi_spid = runtime::NO_SPID;
  while (true) {
    this->_Peek();
    if (this->c_id == Id::Op_Semi) {
      Token* tok = static_cast<Token*>(this->cur_word);
      semi_spid = tok->span_id;
      this->_Next();
      this->_NewlineOk();
      break;
    }
    else {
      if (this->c_id == Id::Op_Newline) {
        this->_Next();
        break;
      }
      else {
        if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
          break;
        }
      }
    }
    if (this->cur_word->tag_() != word_e::Compound) {
      p_die(fmt182(), this->cur_word);
    }
    compound_word* w2 = static_cast<compound_word*>(this->cur_word);
    words->append(w2);
    this->_Next();
  }
  return (Tuple2<List<syntax_asdl::compound_word*>*, int>(words, semi_spid));
}

syntax_asdl::command__ForExpr* CommandParser::_ParseForExprLoop() {
  syntax_asdl::command__ForExpr* node;

  node = this->w_parser->ReadForExpression();
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_Semi) {
    this->_Next();
    this->_NewlineOk();
  }
  else {
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        ;  // pass
      }
      else {
        if (this->c_id == Id::Lit_LBrace) {
          ;  // pass
        }
        else {
          p_die(fmt183(), this->cur_word);
        }
      }
    }
  }
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  return node;
}

syntax_asdl::command__ForEach* CommandParser::_ParseForEachLoop(int for_spid) {
  syntax_asdl::command__ForEach* node;
  bool ok;
  Str* iter_name;
  bool quoted;
  int in_spid;
  int semi_spid;
  List<syntax_asdl::compound_word*>* iter_words;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;

  node = Alloc<command::ForEach>();
  node->do_arg_iter = false;
  node->spids->append(for_spid);
  Tuple3<bool, Str*, bool> tup16 = word_::StaticEval(this->cur_word);
  ok = tup16.at0();
  iter_name = tup16.at1();
  quoted = tup16.at2();
  if ((!ok or quoted)) {
    p_die(fmt184(), this->cur_word);
  }
  if (!match::IsValidVarName(iter_name)) {
    p_die(fmt185(), this->cur_word);
  }
  node->iter_name = iter_name;
  this->_Next();
  this->_NewlineOk();
  in_spid = runtime::NO_SPID;
  semi_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_In) {
    this->_Next();
    in_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
    Tuple2<List<syntax_asdl::compound_word*>*, int> tup17 = this->ParseForWords();
    iter_words = tup17.at0();
    semi_spid = tup17.at1();
    words2 = braces::BraceDetectAll(iter_words);
    words3 = word_::TildeDetectAll(words2);
    node->iter_words = words3;
  }
  else {
    if (this->c_id == Id::Op_Semi) {
      node->do_arg_iter = true;
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        node->do_arg_iter = true;
      }
      else {
        p_die(fmt186(), this->cur_word);
      }
    }
  }
  this->_Peek();
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  node->spids->append(in_spid);
  node->spids->append(semi_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseFor() {
  int for_spid;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::command_t* body;
  syntax_asdl::command__ForExpr* n1;
  syntax_asdl::command__ForEach* n2;

  for_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::KW_For);
  if (this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> tup18 = this->parse_ctx->ParseOilForExpr(this->lexer, grammar_nt::oil_for);
    lvalue = tup18.at0();
    iterable = tup18.at1();
    this->_Peek();
    if (this->c_id == Id::Lit_LBrace) {
      body = this->ParseBraceGroup();
    }
    else {
      body = this->ParseDoGroup();
    }
    return Alloc<command::OilForIn>(lvalue, iterable, body);
  }
  else {
    this->_Peek();
    if (this->c_id == Id::Op_DLeftParen) {
      n1 = this->_ParseForExprLoop();
      n1->redirects = this->_ParseRedirectList();
      return n1;
    }
    else {
      n2 = this->_ParseForEachLoop(for_spid);
      n2->redirects = this->_ParseRedirectList();
      return n2;
    }
  }
}

syntax_asdl::command__WhileUntil* CommandParser::ParseWhileUntil(syntax_asdl::Token* keyword) {
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::command_t* body_node;
  syntax_asdl::command__WhileUntil* node;

  this->_Next();
  if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup19 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup19.at0();
    cond = Alloc<condition::Oil>(enode);
  }
  else {
    this->allow_block = false;
    commands = this->_ParseCommandList();
    this->allow_block = true;
    cond = Alloc<condition::Shell>(commands->children);
  }
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    body_node = this->ParseBraceGroup();
  }
  else {
    body_node = this->ParseDoGroup();
  }
  node = Alloc<command::WhileUntil>(keyword, cond, body_node, nullptr);
  node->spids->append(keyword->span_id);
  return node;
}

syntax_asdl::case_arm* CommandParser::ParseCaseItem() {
  int left_spid;
  List<syntax_asdl::word_t*>* pat_words;
  int rparen_spid;
  syntax_asdl::command__CommandList* c_list;
  List<syntax_asdl::command_t*>* action_children;
  int dsemi_spid;
  int last_spid;
  List<int>* spids;
  syntax_asdl::case_arm* arm;

  this->lexer->PushHint(Id::Op_RParen, Id::Right_CasePat);
  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  if (this->c_id == Id::Op_LParen) {
    this->_Next();
  }
  pat_words = Alloc<List<syntax_asdl::word_t*>>();
  while (true) {
    this->_Peek();
    pat_words->append(this->cur_word);
    this->_Next();
    this->_Peek();
    if (this->c_id == Id::Op_Pipe) {
      this->_Next();
    }
    else {
      break;
    }
  }
  rparen_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_CasePat);
  this->_NewlineOk();
  if ((this->c_id != Id::Op_DSemi && this->c_id != Id::KW_Esac)) {
    c_list = this->_ParseCommandTerm();
    action_children = c_list->children;
  }
  else {
    action_children = Alloc<List<syntax_asdl::command_t*>>();
  }
  dsemi_spid = runtime::NO_SPID;
  last_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Esac) {
    last_spid = word_::LeftMostSpanForWord(this->cur_word);
  }
  else {
    if (this->c_id == Id::Op_DSemi) {
      dsemi_spid = word_::LeftMostSpanForWord(this->cur_word);
      this->_Next();
    }
    else {
      p_die(fmt187(), this->cur_word);
    }
  }
  this->_NewlineOk();
  spids = Alloc<List<int>>(std::initializer_list<int>{left_spid, rparen_spid, dsemi_spid, last_spid});
  arm = Alloc<syntax_asdl::case_arm>(pat_words, action_children, spids);
  return arm;
}

void CommandParser::ParseCaseList(List<syntax_asdl::case_arm*>* arms) {
  syntax_asdl::case_arm* arm;

  this->_Peek();
  while (true) {
    if (this->c_id == Id::KW_Esac) {
      break;
    }
    if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace)) {
      break;
    }
    if ((this->c_kind != Kind::Word and this->c_id != Id::Op_LParen)) {
      break;
    }
    arm = this->ParseCaseItem();
    arms->append(arm);
    this->_Peek();
  }
}

syntax_asdl::command__Case* CommandParser::ParseCase() {
  syntax_asdl::command__Case* case_node;
  int case_spid;
  int in_spid;
  int esac_spid;

  case_node = Alloc<command::Case>();
  case_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  this->_Peek();
  case_node->to_match = this->cur_word;
  this->_Next();
  this->_NewlineOk();
  in_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_In);
  }
  this->_NewlineOk();
  if (this->c_id != Id::KW_Esac) {
    this->ParseCaseList(case_node->arms);
    this->_Peek();
  }
  esac_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace)) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_Esac);
  }
  this->_Next();
  case_node->spids->append(case_spid);
  case_node->spids->append(in_spid);
  case_node->spids->append(esac_spid);
  return case_node;
}

void CommandParser::_ParseOilElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::BraceGroup* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
      Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup20 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
      enode = tup20.at0();
      cond = Alloc<condition::Oil>(enode);
    }
    else {
      this->allow_block = false;
      commands = this->_ParseCommandList();
      this->allow_block = true;
      cond = Alloc<condition::Shell>(commands->children);
    }
    body = this->ParseBraceGroup();
    arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{elif_spid}));
    arms->append(arm);
  }
  this->_Peek();
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->ParseBraceGroup();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::_ParseOilIf(int if_spid, syntax_asdl::condition_t* cond) {
  syntax_asdl::command__If* if_node;
  syntax_asdl::BraceGroup* body1;
  syntax_asdl::if_arm* arm;

  if_node = Alloc<command::If>();
  body1 = this->ParseBraceGroup();
  arm = Alloc<syntax_asdl::if_arm>(cond, body1->children, Alloc<List<int>>(std::initializer_list<int>{if_spid}));
  if_node->arms->append(arm);
  this->_Peek();
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseOilElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  return if_node;
}

void CommandParser::_ParseElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::condition__Shell* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  this->_Peek();
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    commands = this->_ParseCommandList();
    cond = Alloc<condition::Shell>(commands->children);
    then_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Eat(Id::KW_Then);
    body = this->_ParseCommandList();
    arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{elif_spid, then_spid}));
    arms->append(arm);
  }
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->_ParseCommandList();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::ParseIf() {
  int if_spid;
  syntax_asdl::command__If* if_node;
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int fi_spid;

  if_spid = _KeywordSpid(this->cur_word);
  if_node = Alloc<command::If>();
  this->_Next();
  if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup21 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup21.at0();
    cond = Alloc<condition::Oil>(enode);
  }
  else {
    this->allow_block = false;
    commands = this->_ParseCommandList();
    this->allow_block = true;
    cond = Alloc<condition::Shell>(commands->children);
  }
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    return this->_ParseOilIf(if_spid, cond);
  }
  then_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Then);
  body = this->_ParseCommandList();
  arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{if_spid, then_spid}));
  if_node->arms->append(arm);
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  fi_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Fi);
  if_node->spids->append(fi_spid);
  return if_node;
}

syntax_asdl::command_t* CommandParser::ParseTime() {
  int time_spid;
  syntax_asdl::command_t* pipeline;
  syntax_asdl::command__TimeBlock* node;

  time_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  pipeline = this->ParsePipeline();
  node = Alloc<command::TimeBlock>(pipeline);
  node->spids->append(time_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCompoundCommand() {
  syntax_asdl::BraceGroup* n1;
  syntax_asdl::command__Subshell* n2;
  syntax_asdl::Token* keyword;
  syntax_asdl::command__WhileUntil* n3;
  syntax_asdl::command__If* n4;
  syntax_asdl::command__Case* n5;
  syntax_asdl::command__DBracket* n6;
  syntax_asdl::command__DParen* n7;
  syntax_asdl::Token* kw_token;

  if (this->c_id == Id::Lit_LBrace) {
    n1 = this->ParseBraceGroup();
    n1->redirects = this->_ParseRedirectList();
    return n1;
  }
  if (this->c_id == Id::Op_LParen) {
    n2 = this->ParseSubshell();
    n2->redirects = this->_ParseRedirectList();
    return n2;
  }
  if (this->c_id == Id::KW_For) {
    return this->ParseFor();
  }
  if ((this->c_id == Id::KW_While || this->c_id == Id::KW_Until)) {
    keyword = _KeywordToken(this->cur_word);
    n3 = this->ParseWhileUntil(keyword);
    n3->redirects = this->_ParseRedirectList();
    return n3;
  }
  if (this->c_id == Id::KW_If) {
    n4 = this->ParseIf();
    n4->redirects = this->_ParseRedirectList();
    return n4;
  }
  if (this->c_id == Id::KW_Case) {
    n5 = this->ParseCase();
    n5->redirects = this->_ParseRedirectList();
    return n5;
  }
  if (this->c_id == Id::KW_DLeftBracket) {
    n6 = this->ParseDBracket();
    n6->redirects = this->_ParseRedirectList();
    return n6;
  }
  if (this->c_id == Id::Op_DLeftParen) {
    n7 = this->ParseDParen();
    n7->redirects = this->_ParseRedirectList();
    return n7;
  }
  if (this->c_id == Id::KW_Time) {
    return this->ParseTime();
  }
  if ((this->c_id == Id::KW_Var || this->c_id == Id::KW_Const)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParseVarDecl(kw_token);
  }
  if ((this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetRef || this->c_id == Id::KW_SetLocal || this->c_id == Id::KW_SetGlobal)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  if ((this->parse_opts->parse_set() and this->c_id == Id::KW_Set)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  p_die(fmt188(), this->cur_word);
}

syntax_asdl::command__ShFunction* CommandParser::ParseFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt189(), cur_word);
  }
  this->_Next();
  this->_Peek();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
  this->_Next();
  this->_Eat2(Id::Right_ShFunction, str698);
  after_name_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
  this->_NewlineOk();
  func = Alloc<command::ShFunction>();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__ShFunction* CommandParser::ParseKshFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->_Peek();
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt190(), cur_word);
  }
  after_name_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_LParen) {
    this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
    this->_Next();
    this->_Eat(Id::Right_ShFunction);
    after_name_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
  }
  this->_NewlineOk();
  func = Alloc<command::ShFunction>();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__Proc* CommandParser::ParseOilProc() {
  syntax_asdl::command__Proc* node;

  node = Alloc<command::Proc>();
  this->w_parser->ParseProc(node);
  this->_Next();
  this->return_expr = true;
  node->body = this->ParseBraceGroup();
  this->return_expr = false;
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCoproc() {
  throw Alloc<NotImplementedError>();
}

syntax_asdl::command__Subshell* CommandParser::ParseSubshell() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command_t* child;
  syntax_asdl::command__Subshell* node;
  int right_spid;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
  c_list = this->_ParseCommandList();
  if (len(c_list->children) == 1) {
    child = c_list->children->index(0);
  }
  else {
    child = c_list;
  }
  node = Alloc<command::Subshell>(child, nullptr);
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_Subshell);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DBracket* CommandParser::ParseDBracket() {
  int left_spid;
  bool_parse::BoolParser* b_parser;
  syntax_asdl::bool_expr_t* bnode;
  int right_spid;
  syntax_asdl::command__DBracket* node;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  b_parser = Alloc<bool_parse::BoolParser>(this->w_parser);
  bnode = b_parser->Parse();
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  node = Alloc<command::DBracket>(bnode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DParen* CommandParser::ParseDParen() {
  int left_spid;
  syntax_asdl::arith_expr_t* anode;
  int right_spid;
  syntax_asdl::command__DParen* node;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  Tuple2<syntax_asdl::arith_expr_t*, int> tup22 = this->w_parser->ReadDParen();
  anode = tup22.at0();
  right_spid = tup22.at1();
  node = Alloc<command::DParen>(anode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCommand() {
  syntax_asdl::command__Func* out0;
  syntax_asdl::command__Data* out1;
  syntax_asdl::command__Enum* out2;
  syntax_asdl::command__Class* out3;
  syntax_asdl::command__Import* out4;
  syntax_asdl::Token* keyword;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::word_part_t* part0;

  this->_Peek();
  if (this->_AtSecondaryKeyword()) {
    p_die(fmt191(), this->cur_word);
  }
  if (this->c_id == Id::KW_Function) {
    return this->ParseKshFunctionDef();
  }
  if (this->c_id == Id::KW_Proc) {
    return this->ParseOilProc();
  }
  if (this->parse_opts->parse_tea()) {
    if (this->c_id == Id::KW_Func) {
      out0 = Alloc<command::Func>();
      this->parse_ctx->ParseFunc(this->lexer, out0);
      this->_Next();
      return out0;
    }
    if (this->c_id == Id::KW_Data) {
      out1 = Alloc<command::Data>();
      this->parse_ctx->ParseDataType(this->lexer, out1);
      this->_Next();
      return out1;
    }
    if (this->c_id == Id::KW_Enum) {
      out2 = Alloc<command::Enum>();
      this->parse_ctx->ParseEnum(this->lexer, out2);
      this->_Next();
      return out2;
    }
    if (this->c_id == Id::KW_Class) {
      out3 = Alloc<command::Class>();
      this->parse_ctx->ParseClass(this->lexer, out3);
      this->_Next();
      return out3;
    }
    if (this->c_id == Id::KW_Import) {
      out4 = Alloc<command::Import>();
      this->w_parser->ParseImport(out4);
      this->_Next();
      return out4;
    }
  }
  if ((this->c_id == Id::KW_DLeftBracket || this->c_id == Id::Op_DLeftParen || this->c_id == Id::Op_LParen || this->c_id == Id::Lit_LBrace || this->c_id == Id::KW_For || this->c_id == Id::KW_While || this->c_id == Id::KW_Until || this->c_id == Id::KW_If || this->c_id == Id::KW_Case || this->c_id == Id::KW_Time || this->c_id == Id::KW_Var || this->c_id == Id::KW_Const || this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetLocal || this->c_id == Id::KW_SetGlobal || this->c_id == Id::KW_SetRef)) {
    return this->ParseCompoundCommand();
  }
  if ((this->parse_opts->parse_set() and this->c_id == Id::KW_Set)) {
    return this->ParseCompoundCommand();
  }
  if ((this->return_expr and this->c_id == Id::ControlFlow_Return)) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return Alloc<command::Return>(keyword, enode);
  }
  if ((this->c_id == Id::Lit_Underscore || this->c_id == Id::Lit_Equals)) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return Alloc<command::Expr>(Alloc<speck>(keyword->id, keyword->span_id), enode);
  }
  if (this->c_id == Id::Lit_RBrace) {
    p_die(fmt192(), this->cur_word);
  }
  if (this->c_kind == Kind::Redir) {
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Word) {
    compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
    if ((this->w_parser->LookAhead() == Id::Op_LParen and !word_::IsVarLike(cur_word))) {
      return this->ParseFunctionDef();
    }
    parts = cur_word->parts;
    if ((this->parse_opts->parse_equals() and len(parts) == 1)) {
      part0 = parts->index(0);
      if (part0->tag_() == word_part_e::Literal) {
        Token* tok = static_cast<Token*>(part0);
        if ((match::IsValidVarName(tok->val) and this->w_parser->LookAhead() == Id::Lit_Equals)) {
          enode = this->w_parser->ParseBareDecl();
          this->_Next();
          return Alloc<command::VarDecl>(nullptr, Alloc<List<syntax_asdl::name_type*>>(std::initializer_list<syntax_asdl::name_type*>{Alloc<name_type>(tok, nullptr)}), enode);
        }
      }
    }
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Eof) {
    p_die(fmt193(), this->cur_word);
  }
  p_die(fmt194(), this->cur_word);
}

syntax_asdl::command_t* CommandParser::ParsePipeline() {
  bool negated;
  int pipeline_spid;
  syntax_asdl::command_t* child;
  List<syntax_asdl::command_t*>* children;
  List<int>* no_stderrs;
  syntax_asdl::command__Pipeline* node;
  int pipe_index;
  List<int>* stderr_indices;

  negated = false;
  pipeline_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Bang) {
    pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    negated = true;
    this->_Next();
  }
  child = this->ParseCommand();
  children = Alloc<List<syntax_asdl::command_t*>>(std::initializer_list<syntax_asdl::command_t*>{child});
  this->_Peek();
  if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
    if (negated) {
      no_stderrs = Alloc<List<int>>();
      node = Alloc<command::Pipeline>(children, negated, no_stderrs);
      node->spids->append(pipeline_spid);
      return node;
    }
    else {
      return child;
    }
  }
  pipe_index = 0;
  stderr_indices = Alloc<List<int>>();
  if (this->c_id == Id::Op_PipeAmp) {
    stderr_indices->append(pipe_index);
  }
  pipe_index += 1;
  while (true) {
    if (pipeline_spid == runtime::NO_SPID) {
      pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    }
    this->_Next();
    this->_NewlineOk();
    child = this->ParseCommand();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
      break;
    }
    if (this->c_id == Id::Op_PipeAmp) {
      stderr_indices->append(pipe_index);
    }
    pipe_index += 1;
  }
  node = Alloc<command::Pipeline>(children, negated, stderr_indices);
  node->spids->append(pipeline_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseAndOr() {
  syntax_asdl::command_t* child;
  List<int>* ops;
  List<int>* op_spids;
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command__AndOr* node;

  child = this->ParsePipeline();
  this->_Peek();
  if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
    return child;
  }
  ops = Alloc<List<int>>();
  op_spids = Alloc<List<int>>();
  children = Alloc<List<syntax_asdl::command_t*>>(std::initializer_list<syntax_asdl::command_t*>{child});
  while (true) {
    ops->append(this->c_id);
    op_spids->append(word_::LeftMostSpanForWord(this->cur_word));
    this->_Next();
    this->_NewlineOk();
    child = this->ParsePipeline();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
      break;
    }
  }
  node = Alloc<command::AndOr>(ops, children);
  node->spids = op_spids;
  return node;
}

syntax_asdl::command_t* CommandParser::_ParseCommandLine() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;

  END_LIST = Alloc<List<int>>(std::initializer_list<int>{Id::Op_Newline, Id::Eof_Real});
  children = Alloc<List<syntax_asdl::command_t*>>();
  done = false;
  while (!done) {
    child = this->ParseAndOr();
    this->_Peek();
    if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
      Token* tok = static_cast<Token*>(this->cur_word);
      child = Alloc<command::Sentence>(child, tok);
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
      else {
        p_die(fmt195(), this->cur_word);
      }
    }
    children->append(child);
  }
  if (len(children) > 1) {
    return Alloc<command::CommandList>(children);
  }
  else {
    return children->index(0);
  }
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandTerm() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;

  END_LIST = Alloc<List<int>>(std::initializer_list<int>{this->eof_id, Id::Right_Subshell, Id::Lit_RBrace, Id::Op_DSemi});
  children = Alloc<List<syntax_asdl::command_t*>>();
  done = false;
  while (!done) {
    this->_Peek();
    if (this->_AtSecondaryKeyword()) {
      break;
    }
    child = this->ParseAndOr();
    this->_Peek();
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
        Token* tok = static_cast<Token*>(this->cur_word);
        child = Alloc<command::Sentence>(child, tok);
        this->_Next();
        this->_Peek();
        if (this->c_id == Id::Op_Newline) {
          this->_Next();
          this->_Peek();
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
        else {
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
      }
      else {
        if (list_contains(END_LIST, this->c_id)) {
          done = true;
        }
        else {
          if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
            done = true;
          }
          else {
            ;  // pass
          }
        }
      }
    }
    children->append(child);
  }
  this->_Peek();
  return Alloc<command::CommandList>(children);
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandList() {
  syntax_asdl::command__CommandList* node;

  this->_NewlineOk();
  node = this->_ParseCommandTerm();
  return node;
}

syntax_asdl::command_t* CommandParser::ParseLogicalLine() {
  syntax_asdl::command_t* node;

  this->_NewlineOk();
  this->_Peek();
  if (this->c_id == Id::Eof_Real) {
    return nullptr;
  }
  node = this->_ParseCommandLine();
  return node;
}

syntax_asdl::parse_result_t* CommandParser::ParseInteractiveLine() {
  syntax_asdl::command_t* node;

  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    return Alloc<parse_result::EmptyLine>();
  }
  if (this->c_id == Id::Eof_Real) {
    return Alloc<parse_result::Eof>();
  }
  node = this->_ParseCommandLine();
  return Alloc<parse_result::Node>(node);
}

syntax_asdl::command_t* CommandParser::ParseCommandSub() {
  syntax_asdl::command__CommandList* c_list;

  this->_NewlineOk();
  if (this->c_kind == Kind::Eof) {
    return Alloc<command::NoOp>();
  }
  c_list = this->_ParseCommandTerm();
  if (len(c_list->children) == 1) {
    return c_list->children->index(0);
  }
  else {
    return c_list;
  }
}

void CommandParser::CheckForPendingHereDocs() {
  syntax_asdl::redir* node;

  if (len(this->pending_here_docs)) {
    node = this->pending_here_docs->index(0);
    redir_param__MultiLine* h = static_cast<redir_param__MultiLine*>(node->arg);
    p_die(fmt196(), h->here_begin);
  }
}

}  // define namespace cmd_parse

namespace glob_ {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace word_part_e = syntax_asdl::word_part_e;
namespace glob_part_e = syntax_asdl::glob_part_e;
namespace glob_part = syntax_asdl::glob_part;
using syntax_asdl::glob_part_t;
using syntax_asdl::glob_part__Literal;
using syntax_asdl::glob_part__Operator;
using syntax_asdl::glob_part__CharClass;

bool LooksLikeGlob(Str* s) {
  bool left_bracket;
  int i;
  int n;
  Str* c;

  left_bracket = false;
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if (str_equals(c, str706)) {
      i += 1;
    }
    else {
      if ((str_equals(c, str707) or str_equals(c, str708))) {
        return true;
      }
      else {
        if (str_equals(c, str709)) {
          left_bracket = true;
        }
        else {
          if ((str_equals(c, str710) and left_bracket)) {
            return true;
          }
        }
      }
    }
    i += 1;
  }
  return false;
}

bool LooksLikeStaticGlob(syntax_asdl::compound_word* w) {
  bool left_bracket;
  int id_;

  left_bracket = false;
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    if (part->tag_() == word_part_e::Literal) {
      id_ = static_cast<Token*>(part)->id;
      if ((id_ == Id::Lit_Star || id_ == Id::Lit_QMark)) {
        return true;
      }
      else {
        if (id_ == Id::Lit_LBracket) {
          left_bracket = true;
        }
        else {
          if ((id_ == Id::Lit_RBracket and left_bracket)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}
Str* GLOB_META_CHARS = str711;

Str* GlobEscape(Str* s) {
  return pyutil::BackslashEscape(s, GLOB_META_CHARS);
}

Str* EreCharClassEscape(Str* s) {
  return pyutil::BackslashEscape(s, str712);
}
Str* ERE_META_CHARS = str713;

Str* ExtendedRegexEscape(Str* s) {
  return pyutil::BackslashEscape(s, ERE_META_CHARS);
}

Str* GlobUnescape(Str* s) {
  List<Str*>* unescaped;
  int i;
  int n;
  Str* c;
  Str* c2;

  unescaped = Alloc<List<Str*>>();
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if ((str_equals(c, str714) and i != (n - 1))) {
      i += 1;
      c2 = s->index(i);
      if (str_contains(GLOB_META_CHARS, c2)) {
        unescaped->append(c2);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    else {
      unescaped->append(c);
    }
    i += 1;
  }
  return str716->join(unescaped);
}

_GlobParser::_GlobParser(match::SimpleLexer* lexer) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_GlobParser)) {
  this->lexer = lexer;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str717;
  this->warnings = Alloc<List<Str*>>();
}

void _GlobParser::_Next() {
  Tuple2<int, Str*> tup0 = this->lexer->Next();
  this->token_type = tup0.at0();
  this->token_val = tup0.at1();
}

List<syntax_asdl::glob_part_t*>* _GlobParser::_ParseCharClass() {
  syntax_asdl::glob_part__Literal* first_token;
  int balance;
  List<Tuple2<int, Str*>*>* tokens;
  List<syntax_asdl::glob_part_t*>* parts;
  int id_;
  Str* s;
  bool negated;
  int id1;
  List<Str*>* strs;

  first_token = Alloc<glob_part::Literal>(this->token_type, this->token_val);
  balance = 1;
  tokens = Alloc<List<Tuple2<int, Str*>*>>();
  while (true) {
    this->_Next();
    if (this->token_type == Id::Eol_Tok) {
      this->warnings->append(str718);
      parts = Alloc<List<syntax_asdl::glob_part_t*>>(std::initializer_list<syntax_asdl::glob_part_t*>{first_token});
      for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
        Tuple2<int, Str*>* tup1 = it.Value();
        id_ = tup1->at0();
        s = tup1->at1();
        parts->append(Alloc<glob_part::Literal>(id_, s));
      }
      return parts;
    }
    if (this->token_type == Id::Glob_LBracket) {
      balance += 1;
    }
    else {
      if (this->token_type == Id::Glob_RBracket) {
        balance -= 1;
      }
    }
    if (balance == 0) {
      break;
    }
    tokens->append((Alloc<Tuple2<int, Str*>>(this->token_type, this->token_val)));
  }
  negated = false;
  if (len(tokens)) {
    Tuple2<int, Str*>* tup2 = tokens->index(0);
    id1 = tup2->at0();
    if ((id1 == Id::Glob_Bang || id1 == Id::Glob_Caret)) {
      negated = true;
      tokens = tokens->slice(1);
    }
  }
  strs = Alloc<List<Str*>>();
  for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
    Tuple2<int, Str*>* tup3 = it.Value();
    s = tup3->at1();
    strs->append(s);
  }
  return Alloc<List<syntax_asdl::glob_part_t*>>(std::initializer_list<syntax_asdl::glob_part_t*>{Alloc<glob_part::CharClass>(negated, strs)});
}

Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> _GlobParser::Parse() {
  List<syntax_asdl::glob_part_t*>* parts;
  int id_;
  Str* s;

  parts = Alloc<List<syntax_asdl::glob_part_t*>>();
  while (true) {
    this->_Next();
    id_ = this->token_type;
    s = this->token_val;
    if (id_ == Id::Eol_Tok) {
      break;
    }
    if ((id_ == Id::Glob_Star || id_ == Id::Glob_QMark)) {
      parts->append(Alloc<glob_part::Operator>(id_));
    }
    else {
      if (id_ == Id::Glob_LBracket) {
        parts->extend(this->_ParseCharClass());
      }
      else {
        parts->append(Alloc<glob_part::Literal>(id_, s));
      }
    }
    if (id_ == Id::Glob_RBracket) {
      this->warnings->append(str719);
    }
    if (id_ == Id::Glob_BadBackslash) {
      this->warnings->append(str720);
    }
  }
  return (Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*>(parts, this->warnings));
}
Str* _REGEX_CHARS_TO_ESCAPE = str721;

Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts) {
  List<Str*>* out;
  int tag;
  syntax_asdl::glob_part_t* UP_part;
  Str* c;
  List<Str*>* good;
  bool literal_hyphen;
  bool literal_rbracket;

  out = Alloc<List<Str*>>();
  for (ListIter<syntax_asdl::glob_part_t*> it(parts); !it.Done(); it.Next()) {
    syntax_asdl::glob_part_t* part = it.Value();
    tag = part->tag_();
    UP_part = part;
    if (tag == glob_part_e::Literal) {
      glob_part__Literal* part = static_cast<glob_part__Literal*>(UP_part);
      if (part->id == Id::Glob_EscapedChar) {
        c = part->s->index(1);
        if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
          out->append(str722);
        }
        out->append(c);
      }
      else {
        if ((part->id == Id::Glob_CleanLiterals || part->id == Id::Glob_Bang)) {
          out->append(part->s);
        }
        else {
          if ((part->id == Id::Glob_OtherLiteral || part->id == Id::Glob_Caret)) {
            c = part->s;
            if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
              out->append(str723);
            }
            out->append(c);
          }
          else {
            if (part->id == Id::Glob_LBracket) {
              out->append(str724);
            }
            else {
              if (part->id == Id::Glob_RBracket) {
                out->append(str725);
              }
              else {
                if (part->id == Id::Glob_BadBackslash) {
                  out->append(str726);
                }
                else {
                  if (part->id == Id::Glob_Caret) {
                    out->append(str727);
                  }
                  else {
                    throw Alloc<AssertionError>();
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (tag == glob_part_e::Operator) {
        glob_part__Operator* part = static_cast<glob_part__Operator*>(UP_part);
        if (part->op_id == Id::Glob_QMark) {
          out->append(str728);
        }
        else {
          if (part->op_id == Id::Glob_Star) {
            out->append(str729);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
      else {
        if (tag == glob_part_e::CharClass) {
          glob_part__CharClass* part = static_cast<glob_part__CharClass*>(UP_part);
          out->append(str730);
          if (part->negated) {
            out->append(str731);
          }
          good = Alloc<List<Str*>>();
          literal_hyphen = false;
          literal_rbracket = false;
          for (ListIter<Str*> it(part->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (str_equals(s, str732)) {
              literal_hyphen = true;
              continue;
            }
            if (str_equals(s, str733)) {
              literal_rbracket = true;
              continue;
            }
            good->append(s);
          }
          if (literal_rbracket) {
            out->append(str734);
          }
          out->extend(good);
          if (literal_hyphen) {
            out->append(str735);
          }
          out->append(str736);
        }
      }
    }
  }
  return str737->join(out);
}

Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat) {
  match::SimpleLexer* lexer;
  glob_::_GlobParser* p;
  List<syntax_asdl::glob_part_t*>* parts;
  List<Str*>* warnings;
  Str* regex;

  lexer = match::GlobLexer(pat);
  p = Alloc<_GlobParser>(lexer);
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> tup4 = p->Parse();
  parts = tup4.at0();
  warnings = tup4.at1();
  regex = _GenerateERE(parts);
  return (Tuple2<Str*, List<Str*>*>(regex, warnings));
}

Globber::Globber(optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Globber)) {
  this->exec_opts = exec_opts;
}

int Globber::Expand(Str* arg, List<Str*>* out) {
  List<Str*>* results;
  Str* msg;
  int n;

  if (!LooksLikeGlob(arg)) {
    out->append(GlobUnescape(arg));
    return 1;
  }
  if (this->exec_opts->noglob()) {
    out->append(arg);
    return 1;
  }
  try {
    results = libc::glob(arg);
  }
  catch (RuntimeError* e) {
    msg = e->message;
    println_stderr(fmt197(arg, msg));
    throw ;
  }
  n = len(results);
  if (n) {
    for (ListIter<Str*> it(results); !it.Done(); it.Next()) {
      Str* name = it.Value();
      if ((name->startswith(str739) and !this->exec_opts->dashglob())) {
        n -= 1;
        continue;
      }
      out->append(name);
    }
    return n;
  }
  if (this->exec_opts->nullglob()) {
    return 0;
  }
  out->append(GlobUnescape(arg));
  return 1;
}

List<Str*>* Globber::OilFuncCall(Str* arg) {
  List<Str*>* out;

  out = Alloc<List<Str*>>();
  this->Expand(arg, out);
  return out;
}

}  // define namespace glob_

namespace prompt {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using syntax_asdl::command_t;
namespace source = syntax_asdl::source;
using syntax_asdl::compound_word;
Str* PROMPT_ERROR = str740;

_PromptEvaluatorCache::_PromptEvaluatorCache() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_PromptEvaluatorCache)) {
  this->cache = Alloc<Dict<Str*, Str*>>();
  this->euid = -1;
}

int _PromptEvaluatorCache::_GetEuid() {
  if (this->euid == -1) {
    this->euid = posix::geteuid();
  }
  return this->euid;
}

Str* _PromptEvaluatorCache::Get(Str* name) {
  Str* value;

  if (dict_contains(this->cache, name)) {
    return this->cache->index(name);
  }
  if (str_equals(name, str741)) {
    value = this->_GetEuid() == 0 ? str742 : str743;
  }
  else {
    if (str_equals(name, str744)) {
      value = libc::gethostname();
    }
    else {
      if (str_equals(name, str745)) {
        value = pyos::GetUserName(this->_GetEuid());
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  this->cache->set(name, value);
  return value;
}

Evaluator::Evaluator(Str* lang, parse_lib::ParseContext* parse_ctx, state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Evaluator)) {
  this->word_ev = nullptr;
  this->lang = lang;
  this->parse_ctx = parse_ctx;
  this->mem = mem;
  this->default_prompt = str_concat(lang, str746);
  this->cache = Alloc<_PromptEvaluatorCache>();
  this->tokens_cache = Alloc<Dict<Str*, List<Tuple2<int, Str*>*>*>>();
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::compound_word*>>();
}

void Evaluator::CheckCircularDeps() {
}

Str* Evaluator::_ReplaceBackslashCodes(List<Tuple2<int, Str*>*>* tokens) {
  List<Str*>* ret;
  int non_printing;
  int id_;
  Str* value;
  int i;
  Str* ch;
  Str* r;
  Str* hostname;
  Str* pwd;
  Str* home;
  runtime_asdl::value_t* val;

  ret = Alloc<List<Str*>>();
  non_printing = 0;
  for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
    Tuple2<int, Str*>* tup0 = it.Value();
    id_ = tup0->at0();
    value = tup0->at1();
    if ((id_ == Id::PS_Literals || id_ == Id::PS_BadBackslash)) {
      ret->append(value);
    }
    else {
      if (id_ == Id::PS_Octal3) {
        i = to_int(value->slice(1), 8);
        ret->append(chr((i % 256)));
      }
      else {
        if (id_ == Id::PS_LBrace) {
          non_printing += 1;
          ret->append(str747);
        }
        else {
          if (id_ == Id::PS_RBrace) {
            non_printing -= 1;
            if (non_printing < 0) {
              return PROMPT_ERROR;
            }
            ret->append(str748);
          }
          else {
            if (id_ == Id::PS_Subst) {
              ch = value->slice(1);
              if (str_equals(ch, str749)) {
                r = this->cache->Get(str750);
              }
              else {
                if (str_equals(ch, str751)) {
                  r = this->cache->Get(str752);
                }
                else {
                  if (str_equals(ch, str753)) {
                    hostname = this->cache->Get(str754);
                    Tuple2<Str*, Str*> tup1 = mylib::split_once(hostname, str755);
                    r = tup1.at0();
                  }
                  else {
                    if (str_equals(ch, str756)) {
                      r = this->cache->Get(str757);
                    }
                    else {
                      if (str_equals(ch, str758)) {
                        try {
                          pwd = state::GetString(this->mem, str759);
                          home = state::MaybeString(this->mem, str760);
                          r = ui::PrettyDir(pwd, home);
                        }
                        catch (error::Runtime* e) {
                          r = fmt198(e->UserErrorString());
                        }
                      }
                      else {
                        if (str_equals(ch, str762)) {
                          val = this->mem->GetVar(str763);
                          if (val->tag_() == value_e::Str) {
                            value__Str* str_val = static_cast<value__Str*>(val);
                            r = os_path::basename(str_val->s);
                          }
                          else {
                            r = str764;
                          }
                        }
                        else {
                          r = consts::LookupCharPrompt(ch);
                          if (r == nullptr) {
                            r = fmt199(ch);
                          }
                        }
                      }
                    }
                  }
                }
              }
              ret->append(r->replace(str766, str767));
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
  }
  if (non_printing != 0) {
    return PROMPT_ERROR;
  }
  return str769->join(ret);
}

Str* Evaluator::EvalPrompt(runtime_asdl::value_t* UP_val) {
  List<Tuple2<int, Str*>*>* tokens;
  Str* ps1_str;
  syntax_asdl::compound_word* ps1_word;
  word_parse::WordParser* w_parser;
  runtime_asdl::value__Str* val2;

  if (UP_val->tag_() != value_e::Str) {
    return this->default_prompt;
  }
  value__Str* val = static_cast<value__Str*>(UP_val);
  tokens = this->tokens_cache->get(val->s);
  if (tokens == nullptr) {
    tokens = match::Ps1Tokens(val->s);
    this->tokens_cache->set(val->s, tokens);
  }
  ps1_str = this->_ReplaceBackslashCodes(tokens);
  ps1_word = this->parse_cache->get(ps1_str);
  if (ps1_word == nullptr) {
    w_parser = this->parse_ctx->MakeWordParserForPlugin(ps1_str);
    try {
      ps1_word = w_parser->ReadForPlugin();
    }
    catch (error::Parse* e) {
      ps1_word = word_::ErrorWord(fmt200(e->UserErrorString()));
    }
    this->parse_cache->set(ps1_str, ps1_word);
  }
  val2 = this->word_ev->EvalForPlugin(ps1_word);
  return val2->s;
}

Str* Evaluator::EvalFirstPrompt() {
  runtime_asdl::value_t* val;

  if (str_equals(this->lang, str771)) {
    val = this->mem->GetVar(str772);
    return this->EvalPrompt(val);
  }
  else {
    return this->default_prompt;
  }
}

UserPlugin::UserPlugin(state::Mem* mem, parse_lib::ParseContext* parse_ctx, cmd_eval::CommandEvaluator* cmd_ev) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(UserPlugin)) {
  this->mem = mem;
  this->parse_ctx = parse_ctx;
  this->cmd_ev = cmd_ev;
  this->arena = parse_ctx->arena;
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::command_t*>>();
}

void UserPlugin::Run() {
  runtime_asdl::value_t* val;
  Str* prompt_cmd;
  syntax_asdl::command_t* node;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;

  val = this->mem->GetVar(str773);
  if (val->tag_() != value_e::Str) {
    return ;
  }
  prompt_cmd = static_cast<value__Str*>(val)->s;
  node = this->parse_cache->get(prompt_cmd);
  if (node == nullptr) {
    line_reader = reader::StringLineReader(prompt_cmd, this->arena);
    c_parser = this->parse_ctx->MakeOshParser(line_reader);
    {  // with
      alloc::ctx_Location ctx(this->arena, Alloc<source::PromptCommand>(runtime::NO_SPID));

      try {
        node = main_loop::ParseWholeFile(c_parser);
      }
      catch (error::Parse* e) {
        ui::PrettyPrintError(e, this->arena);
        return ;
      }
    }
    this->parse_cache->set(prompt_cmd, node);
  }
  {  // with
    state::ctx_Status ctx(this->mem);

    this->cmd_ev->ExecuteAndCatch(node);
  }
}

}  // define namespace prompt

namespace sh_expr_eval {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::scope_e;
using runtime_asdl::scope_t;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue_t;
using runtime_asdl::lvalue__Named;
using runtime_asdl::lvalue__Indexed;
using runtime_asdl::lvalue__Keyed;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__Int;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
using runtime_asdl::value__Obj;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__Unary;
using syntax_asdl::arith_expr__Binary;
using syntax_asdl::arith_expr__UnaryAssign;
using syntax_asdl::arith_expr__BinaryAssign;
using syntax_asdl::arith_expr__TernaryOp;
namespace bool_expr_e = syntax_asdl::bool_expr_e;
using syntax_asdl::bool_expr_t;
using syntax_asdl::bool_expr__WordTest;
using syntax_asdl::bool_expr__LogicalNot;
using syntax_asdl::bool_expr__LogicalAnd;
using syntax_asdl::bool_expr__LogicalOr;
using syntax_asdl::bool_expr__Unary;
using syntax_asdl::bool_expr__Binary;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace sh_lhs_expr_e = syntax_asdl::sh_lhs_expr_e;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::sh_lhs_expr__Name;
using syntax_asdl::sh_lhs_expr__IndexedName;
namespace source = syntax_asdl::source;
using syntax_asdl::word_t;
using types_asdl::bool_arg_type_e;

runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts) {
  runtime_asdl::value_t* val;

  val = mem->GetVar(name);
  if ((val->tag_() == value_e::Undef and exec_opts->nounset())) {
    e_die(fmt201(name));
  }
  return val;
}

runtime_asdl::value_t* OldValue(runtime_asdl::lvalue_t* lval, state::Mem* mem, optview::Exec* exec_opts) {
  runtime_asdl::lvalue_t* UP_lval;
  Str* var_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::value__MaybeStrArray* array_val;
  Str* s;
  runtime_asdl::value__AssocArray* assoc_val;

  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  val = _LookupVar(var_name, mem, exec_opts);
  UP_val = val;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      return val;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      array_val = nullptr;
      switch (val->tag_()) {
        case value_e::Undef: {
          array_val = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* tmp = static_cast<value__MaybeStrArray*>(UP_val);
          array_val = tmp;
        }
          break;
        default: {
          e_die(fmt202(ui::ValType(val)));
        }
      }
      s = word_eval::GetArrayItem(array_val->strs, lval->index);
      if (s == nullptr) {
        val = Alloc<value::Str>(str776);
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      assoc_val = nullptr;
      switch (val->tag_()) {
        case value_e::Undef: {
          throw Alloc<AssertionError>();
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* tmp2 = static_cast<value__AssocArray*>(UP_val);
          assoc_val = tmp2;
        }
          break;
        default: {
          e_die(fmt203(ui::ValType(val)));
        }
      }
      s = assoc_val->d->get(lval->key);
      if (s == nullptr) {
        val = Alloc<value::Str>(str778);
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return val;
}

ArithEvaluator::ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ArithEvaluator)) {
  this->word_ev = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->parse_ctx = parse_ctx;
  this->errfmt = errfmt;
}

void ArithEvaluator::CheckCircularDeps() {
}

int ArithEvaluator::_StringToInteger(Str* s, int span_id) {
  int integer;
  Str* b;
  Str* digits;
  int base;
  int digit;
  alloc::Arena* arena;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* node2;

  if (s->startswith(str779)) {
    try {
      integer = to_int(s, 16);
    }
    catch (ValueError*) {
      e_strict(fmt204(s), span_id);
    }
    return integer;
  }
  if (s->startswith(str781)) {
    try {
      integer = to_int(s, 8);
    }
    catch (ValueError*) {
      e_strict(fmt205(s), span_id);
    }
    return integer;
  }
  if (str_contains(s, str783)) {
    Tuple2<Str*, Str*> tup0 = mylib::split_once(s, str784);
    b = tup0.at0();
    digits = tup0.at1();
    try {
      base = to_int(b);
    }
    catch (ValueError*) {
      e_strict(fmt206(b), span_id);
    }
    integer = 0;
    for (StrIter it(digits); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if (IsLower(ch)) {
        digit = ((ord(ch) - ord(str786)) + 10);
      }
      else {
        if (IsUpper(ch)) {
          digit = ((ord(ch) - ord(str787)) + 36);
        }
        else {
          if (str_equals(ch, str788)) {
            digit = 62;
          }
          else {
            if (str_equals(ch, str789)) {
              digit = 63;
            }
            else {
              if (ch->isdigit()) {
                digit = to_int(ch);
              }
              else {
                e_strict(fmt207(digits), span_id);
              }
            }
          }
        }
      }
      if (digit >= base) {
        e_strict(fmt208(digits, base), span_id);
      }
      integer = ((integer * base) + digit);
    }
    return integer;
  }
  try {
    integer = to_int(s);
  }
  catch (ValueError*) {
    if ((this->exec_opts->eval_unsafe_arith() and this->parse_ctx)) {
      if (len(s->strip()) == 0) {
        return 0;
      }
      arena = this->parse_ctx->arena;
      a_parser = this->parse_ctx->MakeArithParser(s);
      {  // with
        alloc::ctx_Location ctx(arena, Alloc<source::Variable>(span_id));

        try {
          node2 = a_parser->Parse();
        }
        catch (error::Parse* e) {
          ui::PrettyPrintError(e, arena);
          e_die(fmt209(), e->span_id);
        }
      }
      if (node2->tag_() == arith_expr_e::Word) {
        e_die(fmt210(s), span_id);
      }
      else {
        integer = this->EvalToInt(node2);
      }
    }
    else {
      if ((len(s->strip()) == 0 or match::IsValidVarName(s))) {
        e_strict(fmt211(s), span_id);
      }
      else {
        e_die(fmt212(s), span_id);
      }
    }
  }
  return integer;
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val) {
  return _ValToIntOrError(val, runtime::NO_SPID);
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val, int span_id) {
  runtime_asdl::value_t* UP_val;

  try {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        e_strict(fmt213(), span_id);
      }
        break;
      case value_e::Int: {
        value__Int* val = static_cast<value__Int*>(UP_val);
        return val->i;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        return this->_StringToInteger(val->s, span_id);
      }
        break;
      case value_e::Obj: {
        throw Alloc<AssertionError>();
      }
        break;
    }
  }
  catch (error::Strict* e) {
    if (this->exec_opts->strict_arith()) {
      throw ;
    }
    else {
      return 0;
    }
  }
  e_die(fmt214(ui::ValType(val)), span_id);
}

Tuple2<int, runtime_asdl::lvalue_t*> ArithEvaluator::_EvalLhsAndLookupArith(syntax_asdl::arith_expr_t* node) {
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::value_t* val;
  int span_id;
  int i;

  lval = this->EvalArithLhs(node, runtime::NO_SPID);
  val = OldValue(lval, this->mem, this->exec_opts);
  if (((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray) and lval->tag_() == lvalue_e::Named)) {
    lvalue__Named* named_lval = static_cast<lvalue__Named*>(lval);
    if (word_eval::CheckCompatArray(named_lval->name, this->exec_opts)) {
      if (val->tag_() == value_e::MaybeStrArray) {
        lval = Alloc<lvalue::Indexed>(named_lval->name, 0);
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          lval = Alloc<lvalue::Keyed>(named_lval->name, str798);
        }
      }
      val = word_eval::ResolveCompatArray(val);
    }
  }
  span_id = location::SpanForArithExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return (Tuple2<int, runtime_asdl::lvalue_t*>(i, lval));
}

void ArithEvaluator::_Store(runtime_asdl::lvalue_t* lval, int new_int) {
  runtime_asdl::value__Str* val;

  val = Alloc<value::Str>(str(new_int));
  this->mem->SetVar(lval, val, scope_e::Dynamic);
}

int ArithEvaluator::EvalToInt(syntax_asdl::arith_expr_t* node) {
  runtime_asdl::value_t* val;
  int span_id;
  int i;

  val = this->Eval(node);
  if (((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray) and node->tag_() == arith_expr_e::VarRef)) {
    Token* tok = static_cast<Token*>(node);
    if (word_eval::CheckCompatArray(tok->val, this->exec_opts)) {
      val = word_eval::ResolveCompatArray(val);
    }
  }
  span_id = location::SpanForArithExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return i;
}

runtime_asdl::value_t* ArithEvaluator::Eval(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  int op_id;
  int old_int;
  runtime_asdl::lvalue_t* lval;
  int new_int;
  int ret;
  int rhs_int;
  int rhs;
  int i;
  int lhs;
  runtime_asdl::value_t* left;
  runtime_asdl::value_t* UP_left;
  int index;
  Str* s;
  Str* key;
  runtime_asdl::value_t* val;
  int cond;

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      Token* tok = static_cast<Token*>(UP_node);
      return _LookupVar(tok->val, this->mem, this->exec_opts);
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_node);
      return this->word_ev->EvalWordToString(w);
    }
      break;
    case arith_expr_e::UnaryAssign: {
      arith_expr__UnaryAssign* node = static_cast<arith_expr__UnaryAssign*>(UP_node);
      op_id = node->op_id;
      Tuple2<int, runtime_asdl::lvalue_t*> tup1 = this->_EvalLhsAndLookupArith(node->child);
      old_int = tup1.at0();
      lval = tup1.at1();
      if (op_id == Id::Node_PostDPlus) {
        new_int = (old_int + 1);
        ret = old_int;
      }
      else {
        if (op_id == Id::Node_PostDMinus) {
          new_int = (old_int - 1);
          ret = old_int;
        }
        else {
          if (op_id == Id::Arith_DPlus) {
            new_int = (old_int + 1);
            ret = new_int;
          }
          else {
            if (op_id == Id::Arith_DMinus) {
              new_int = (old_int - 1);
              ret = new_int;
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
      this->_Store(lval, new_int);
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::BinaryAssign: {
      arith_expr__BinaryAssign* node = static_cast<arith_expr__BinaryAssign*>(UP_node);
      op_id = node->op_id;
      if (op_id == Id::Arith_Equal) {
        lval = this->EvalArithLhs(node->left, runtime::NO_SPID);
        rhs_int = this->EvalToInt(node->right);
        this->_Store(lval, rhs_int);
        return Alloc<value::Int>(rhs_int);
      }
      Tuple2<int, runtime_asdl::lvalue_t*> tup2 = this->_EvalLhsAndLookupArith(node->left);
      old_int = tup2.at0();
      lval = tup2.at1();
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_PlusEqual) {
        new_int = (old_int + rhs);
      }
      else {
        if (op_id == Id::Arith_MinusEqual) {
          new_int = (old_int - rhs);
        }
        else {
          if (op_id == Id::Arith_StarEqual) {
            new_int = (old_int * rhs);
          }
          else {
            if (op_id == Id::Arith_SlashEqual) {
              if (rhs == 0) {
                e_die(str799);
              }
              new_int = (old_int / rhs);
            }
            else {
              if (op_id == Id::Arith_PercentEqual) {
                if (rhs == 0) {
                  e_die(str800);
                }
                new_int = (old_int % rhs);
              }
              else {
                if (op_id == Id::Arith_DGreatEqual) {
                  new_int = (old_int >> rhs);
                }
                else {
                  if (op_id == Id::Arith_DLessEqual) {
                    new_int = (old_int << rhs);
                  }
                  else {
                    if (op_id == Id::Arith_AmpEqual) {
                      new_int = (old_int & rhs);
                    }
                    else {
                      if (op_id == Id::Arith_PipeEqual) {
                        new_int = (old_int | rhs);
                      }
                      else {
                        if (op_id == Id::Arith_CaretEqual) {
                          new_int = (old_int ^ rhs);
                        }
                        else {
                          throw Alloc<AssertionError>();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      this->_Store(lval, new_int);
      return Alloc<value::Int>(new_int);
    }
      break;
    case arith_expr_e::Unary: {
      arith_expr__Unary* node = static_cast<arith_expr__Unary*>(UP_node);
      op_id = node->op_id;
      i = this->EvalToInt(node->child);
      if (op_id == Id::Node_UnaryPlus) {
        ret = i;
      }
      else {
        if (op_id == Id::Node_UnaryMinus) {
          ret = -i;
        }
        else {
          if (op_id == Id::Arith_Bang) {
            ret = i == 0 ? 1 : 0;
          }
          else {
            if (op_id == Id::Arith_Tilde) {
              ret = ~i;
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::Binary: {
      arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
      op_id = node->op_id;
      if (op_id == Id::Arith_DPipe) {
        lhs = this->EvalToInt(node->left);
        if (lhs == 0) {
          rhs = this->EvalToInt(node->right);
          ret = to_int(rhs != 0);
        }
        else {
          ret = 1;
        }
        return Alloc<value::Int>(ret);
      }
      if (op_id == Id::Arith_DAmp) {
        lhs = this->EvalToInt(node->left);
        if (lhs == 0) {
          ret = 0;
        }
        else {
          rhs = this->EvalToInt(node->right);
          ret = to_int(rhs != 0);
        }
        return Alloc<value::Int>(ret);
      }
      if (op_id == Id::Arith_LBracket) {
        left = this->Eval(node->left);
        UP_left = left;
        switch (left->tag_()) {
          case value_e::MaybeStrArray: {
            value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_left);
            index = this->EvalToInt(node->right);
            s = word_eval::GetArrayItem(array_val->strs, index);
          }
            break;
          case value_e::AssocArray: {
            value__AssocArray* left = static_cast<value__AssocArray*>(UP_left);
            key = this->EvalWordToString(node->right);
            s = left->d->get(key);
          }
            break;
          default: {
            e_die(fmt215(ui::ValType(left)));
          }
        }
        if (s == nullptr) {
          val = Alloc<value::Undef>();
        }
        else {
          val = Alloc<value::Str>(s);
        }
        return val;
      }
      if (op_id == Id::Arith_Comma) {
        this->EvalToInt(node->left);
        ret = this->EvalToInt(node->right);
        return Alloc<value::Int>(ret);
      }
      lhs = this->EvalToInt(node->left);
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_Plus) {
        ret = (lhs + rhs);
      }
      else {
        if (op_id == Id::Arith_Minus) {
          ret = (lhs - rhs);
        }
        else {
          if (op_id == Id::Arith_Star) {
            ret = (lhs * rhs);
          }
          else {
            if (op_id == Id::Arith_Slash) {
              if (rhs == 0) {
                e_die(fmt216(), location::SpanForArithExpr(node->right));
              }
              ret = (lhs / rhs);
            }
            else {
              if (op_id == Id::Arith_Percent) {
                if (rhs == 0) {
                  e_die(fmt217(), location::SpanForArithExpr(node->right));
                }
                ret = (lhs % rhs);
              }
              else {
                if (op_id == Id::Arith_DStar) {
                  if (rhs < 0) {
                    e_die(str804);
                  }
                  ret = 1;
                  for (int i = 0; i < rhs; ++i) {
                    ret *= lhs;
                  }
                }
                else {
                  if (op_id == Id::Arith_DEqual) {
                    ret = to_int(lhs == rhs);
                  }
                  else {
                    if (op_id == Id::Arith_NEqual) {
                      ret = to_int(lhs != rhs);
                    }
                    else {
                      if (op_id == Id::Arith_Great) {
                        ret = to_int(lhs > rhs);
                      }
                      else {
                        if (op_id == Id::Arith_GreatEqual) {
                          ret = to_int(lhs >= rhs);
                        }
                        else {
                          if (op_id == Id::Arith_Less) {
                            ret = to_int(lhs < rhs);
                          }
                          else {
                            if (op_id == Id::Arith_LessEqual) {
                              ret = to_int(lhs <= rhs);
                            }
                            else {
                              if (op_id == Id::Arith_Pipe) {
                                ret = (lhs | rhs);
                              }
                              else {
                                if (op_id == Id::Arith_Amp) {
                                  ret = (lhs & rhs);
                                }
                                else {
                                  if (op_id == Id::Arith_Caret) {
                                    ret = (lhs ^ rhs);
                                  }
                                  else {
                                    if (op_id == Id::Arith_DLess) {
                                      ret = (lhs << rhs);
                                    }
                                    else {
                                      if (op_id == Id::Arith_DGreat) {
                                        ret = (lhs >> rhs);
                                      }
                                      else {
                                        throw Alloc<AssertionError>();
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::TernaryOp: {
      arith_expr__TernaryOp* node = static_cast<arith_expr__TernaryOp*>(UP_node);
      cond = this->EvalToInt(node->cond);
      if (cond) {
        return this->Eval(node->true_expr);
      }
      else {
        return this->Eval(node->false_expr);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Str* ArithEvaluator::EvalWordToString(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  runtime_asdl::value__Str* val;

  UP_node = node;
  if (node->tag_() == arith_expr_e::Word) {
    compound_word* w = static_cast<compound_word*>(UP_node);
    val = this->word_ev->EvalWordToString(w);
    return val->s;
  }
  else {
    e_die(str805);
  }
}

runtime_asdl::lvalue_t* ArithEvaluator::EvalShellLhs(syntax_asdl::sh_lhs_expr_t* node, int spid, runtime_asdl::scope_t lookup_mode) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::lvalue__Named* lval1;
  Str* key;
  runtime_asdl::lvalue__Keyed* lval2;
  int index;
  runtime_asdl::lvalue__Indexed* lval3;

  UP_node = node;
  lval = nullptr;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      lval1 = Alloc<lvalue::Named>(node->name);
      lval1->spids->append(spid);
      lval = lval1;
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      if (this->mem->IsAssocArray(node->name, lookup_mode)) {
        key = this->EvalWordToString(node->index);
        lval2 = Alloc<lvalue::Keyed>(node->name, key);
        lval2->spids->append(node->spids->index(0));
        lval = lval2;
      }
      else {
        index = this->EvalToInt(node->index);
        lval3 = Alloc<lvalue::Indexed>(node->name, index);
        lval3->spids->append(node->spids->index(0));
        lval = lval3;
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return lval;
}

Tuple2<Str*, int> ArithEvaluator::_VarRefOrWord(syntax_asdl::arith_expr_t* anode) {
  syntax_asdl::arith_expr_t* UP_anode;
  Str* var_name;
  int span_id;
  Str* no_str;

  UP_anode = anode;
  switch (anode->tag_()) {
    case arith_expr_e::VarRef: {
      Token* tok = static_cast<Token*>(UP_anode);
      return (Tuple2<Str*, int>(tok->val, tok->span_id));
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_anode);
      var_name = this->EvalWordToString(w);
      span_id = word_::LeftMostSpanForWord(w);
      return (Tuple2<Str*, int>(var_name, span_id));
    }
      break;
  }
  no_str = nullptr;
  return (Tuple2<Str*, int>(no_str, runtime::NO_SPID));
}

runtime_asdl::lvalue_t* ArithEvaluator::EvalArithLhs(syntax_asdl::arith_expr_t* anode, int span_id) {
  syntax_asdl::arith_expr_t* UP_anode;
  Str* var_name;
  Str* key;
  runtime_asdl::lvalue__Keyed* lval2;
  runtime_asdl::lvalue_t* lval;
  int index;
  runtime_asdl::lvalue__Indexed* lval3;
  runtime_asdl::lvalue__Named* lval1;

  UP_anode = anode;
  if (anode->tag_() == arith_expr_e::Binary) {
    arith_expr__Binary* anode = static_cast<arith_expr__Binary*>(UP_anode);
    if (anode->op_id == Id::Arith_LBracket) {
      Tuple2<Str*, int> tup3 = this->_VarRefOrWord(anode->left);
      var_name = tup3.at0();
      span_id = tup3.at1();
      if (var_name != nullptr) {
        if (this->mem->IsAssocArray(var_name, scope_e::Dynamic)) {
          key = this->EvalWordToString(anode->right);
          lval2 = Alloc<lvalue::Keyed>(var_name, key);
          lval2->spids->append(span_id);
          lval = lval2;
          return lval;
        }
        else {
          index = this->EvalToInt(anode->right);
          lval3 = Alloc<lvalue::Indexed>(var_name, index);
          lval3->spids->append(span_id);
          lval = lval3;
          return lval;
        }
      }
    }
  }
  Tuple2<Str*, int> tup4 = this->_VarRefOrWord(anode);
  var_name = tup4.at0();
  span_id = tup4.at1();
  if (var_name != nullptr) {
    lval1 = Alloc<lvalue::Named>(var_name);
    lval1->spids->append(span_id);
    lval = lval1;
    return lval;
  }
  e_die(fmt218(span_id), 2);
}

BoolEvaluator::BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) : ArithEvaluator(mem, exec_opts, parse_ctx, errfmt) {
  this->always_strict = false;
}

void BoolEvaluator::Init_AlwaysStrict() {
  this->always_strict = true;
}

int BoolEvaluator::_StringToIntegerOrError(Str* s) {
  return _StringToIntegerOrError(s, nullptr);
}

int BoolEvaluator::_StringToIntegerOrError(Str* s, syntax_asdl::word_t* blame_word) {
  int span_id;
  int i;

  if (blame_word) {
    span_id = word_::LeftMostSpanForWord(blame_word);
  }
  else {
    span_id = runtime::NO_SPID;
  }
  try {
    i = this->_StringToInteger(s, span_id);
  }
  catch (error::Strict* e) {
    if ((this->always_strict or this->exec_opts->strict_arith())) {
      throw ;
    }
    else {
      i = 0;
    }
  }
  return i;
}

Str* BoolEvaluator::_EvalCompoundWord(syntax_asdl::word_t* word) {
  return _EvalCompoundWord(word, quote_e::Default);
}

Str* BoolEvaluator::_EvalCompoundWord(syntax_asdl::word_t* word, runtime_asdl::quote_t quote_kind) {
  runtime_asdl::value__Str* val;

  val = this->word_ev->EvalWordToString(word, quote_kind);
  return val->s;
}

void BoolEvaluator::_SetRegexMatches(List<Str*>* matches) {
  state::SetGlobalArray(this->mem, str807, matches);
}

bool BoolEvaluator::EvalB(syntax_asdl::bool_expr_t* node) {
  syntax_asdl::bool_expr_t* UP_node;
  Str* s;
  bool b;
  int op_id;
  types_asdl::bool_arg_type_t arg_type;
  int index;
  runtime_asdl::value_t* val;
  runtime_asdl::quote_t quote_kind;
  Str* s1;
  Str* s2;
  int i1;
  int i2;
  List<Str*>* matches;
  Str* msg;

  UP_node = node;
  switch (node->tag_()) {
    case bool_expr_e::WordTest: {
      bool_expr__WordTest* node = static_cast<bool_expr__WordTest*>(UP_node);
      s = this->_EvalCompoundWord(node->w);
      return to_bool(s);
    }
      break;
    case bool_expr_e::LogicalNot: {
      bool_expr__LogicalNot* node = static_cast<bool_expr__LogicalNot*>(UP_node);
      b = this->EvalB(node->child);
      return !b;
    }
      break;
    case bool_expr_e::LogicalAnd: {
      bool_expr__LogicalAnd* node = static_cast<bool_expr__LogicalAnd*>(UP_node);
      if (this->EvalB(node->left)) {
        return this->EvalB(node->right);
      }
      else {
        return false;
      }
    }
      break;
    case bool_expr_e::LogicalOr: {
      bool_expr__LogicalOr* node = static_cast<bool_expr__LogicalOr*>(UP_node);
      if (this->EvalB(node->left)) {
        return true;
      }
      else {
        return this->EvalB(node->right);
      }
    }
      break;
    case bool_expr_e::Unary: {
      bool_expr__Unary* node = static_cast<bool_expr__Unary*>(UP_node);
      op_id = node->op_id;
      s = this->_EvalCompoundWord(node->child);
      arg_type = consts::BoolArgType(op_id);
      if (arg_type == bool_arg_type_e::Path) {
        return bool_stat::DoUnaryOp(op_id, s);
      }
      if (arg_type == bool_arg_type_e::Str) {
        if (op_id == Id::BoolUnary_z) {
          return !to_bool(s);
        }
        if (op_id == Id::BoolUnary_n) {
          return to_bool(s);
        }
        throw Alloc<AssertionError>();
      }
      if (arg_type == bool_arg_type_e::Other) {
        if (op_id == Id::BoolUnary_t) {
          return bool_stat::isatty(s, node->child);
        }
        if (op_id == Id::BoolUnary_o) {
          index = match::MatchOption(s);
          if (index == 0) {
            return false;
          }
          else {
            return this->exec_opts->opt0_array->index(index);
          }
        }
        if (op_id == Id::BoolUnary_v) {
          val = this->mem->GetVar(s);
          return val->tag_() != value_e::Undef;
        }
        e_die(fmt219(ui::PrettyId(op_id)));
      }
      throw Alloc<AssertionError>();
    }
      break;
    case bool_expr_e::Binary: {
      bool_expr__Binary* node = static_cast<bool_expr__Binary*>(UP_node);
      op_id = node->op_id;
      switch (op_id) {
        case Id::BoolBinary_GlobEqual: 
        case Id::BoolBinary_GlobDEqual: 
        case Id::BoolBinary_GlobNEqual: {
          quote_kind = quote_e::FnMatch;
        }
          break;
        case Id::BoolBinary_EqualTilde: {
          quote_kind = quote_e::ERE;
        }
          break;
        default: {
          quote_kind = quote_e::Default;
        }
      }
      s1 = this->_EvalCompoundWord(node->left);
      s2 = this->_EvalCompoundWord(node->right, quote_kind);
      arg_type = consts::BoolArgType(op_id);
      if (arg_type == bool_arg_type_e::Path) {
        return bool_stat::DoBinaryOp(op_id, s1, s2);
      }
      if (arg_type == bool_arg_type_e::Int) {
        i1 = this->_StringToIntegerOrError(s1, node->left);
        i2 = this->_StringToIntegerOrError(s2, node->right);
        if (op_id == Id::BoolBinary_eq) {
          return i1 == i2;
        }
        if (op_id == Id::BoolBinary_ne) {
          return i1 != i2;
        }
        if (op_id == Id::BoolBinary_gt) {
          return i1 > i2;
        }
        if (op_id == Id::BoolBinary_ge) {
          return i1 >= i2;
        }
        if (op_id == Id::BoolBinary_lt) {
          return i1 < i2;
        }
        if (op_id == Id::BoolBinary_le) {
          return i1 <= i2;
        }
        throw Alloc<AssertionError>();
      }
      if (arg_type == bool_arg_type_e::Str) {
        if ((op_id == Id::BoolBinary_GlobEqual || op_id == Id::BoolBinary_GlobDEqual)) {
          return libc::fnmatch(s2, s1, this->exec_opts->extglob());
        }
        if (op_id == Id::BoolBinary_GlobNEqual) {
          return !libc::fnmatch(s2, s1, this->exec_opts->extglob());
        }
        if ((op_id == Id::BoolBinary_Equal || op_id == Id::BoolBinary_DEqual)) {
          return str_equals(s1, s2);
        }
        if (op_id == Id::BoolBinary_NEqual) {
          return !(str_equals(s1, s2));
        }
        if (op_id == Id::BoolBinary_EqualTilde) {
          try {
            matches = libc::regex_match(s2, s1);
          }
          catch (RuntimeError* e) {
            msg = e->message;
            e_die(fmt220(s2, msg, node->right), 2);
          }
          if (matches == nullptr) {
            return false;
          }
          this->_SetRegexMatches(matches);
          return true;
        }
        if (op_id == Id::Op_Less) {
          return str_cmp(s1, s2) < 0;
        }
        if (op_id == Id::Op_Great) {
          return str_cmp(s1, s2) > 0;
        }
        throw Alloc<AssertionError>();
      }
    }
      break;
  }
  throw Alloc<AssertionError>();
}

}  // define namespace sh_expr_eval

namespace split {  // define
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::span_e;
using runtime_asdl::value__Str;
namespace emit_i = runtime_asdl::emit_i;
namespace char_kind_i = runtime_asdl::char_kind_i;
namespace state_i = runtime_asdl::state_i;
Str* DEFAULT_IFS = str810;

List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans) {
  List<mylib::BufWriter*>* parts;
  int start_index;
  bool join_next;
  bool last_span_was_black;
  runtime_asdl::span_t span_type;
  int end_index;
  mylib::BufWriter* buf;
  List<Str*>* result;

  parts = Alloc<List<mylib::BufWriter*>>();
  start_index = 0;
  join_next = false;
  last_span_was_black = false;
  for (ListIter<Tuple2<runtime_asdl::span_t, int>*> it(spans); !it.Done(); it.Next()) {
    Tuple2<runtime_asdl::span_t, int>* tup0 = it.Value();
    span_type = tup0->at0();
    end_index = tup0->at1();
    if (span_type == span_e::Black) {
      if ((len(parts) and join_next)) {
        parts->index(-1)->write(s->slice(start_index, end_index));
        join_next = false;
      }
      else {
        buf = Alloc<mylib::BufWriter>();
        buf->write(s->slice(start_index, end_index));
        parts->append(buf);
      }
      last_span_was_black = true;
    }
    else {
      if (span_type == span_e::Backslash) {
        if (last_span_was_black) {
          join_next = true;
        }
        last_span_was_black = false;
      }
      else {
        last_span_was_black = false;
      }
    }
    start_index = end_index;
  }
  result = Alloc<List<Str*>>();
  for (ListIter<mylib::BufWriter*> it(parts); !it.Done(); it.Next()) {
    mylib::BufWriter* buf = it.Value();
    result->append(buf->getvalue());
  }
  return result;
}

SplitContext::SplitContext(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(SplitContext)) {
  this->mem = mem;
  this->splitters = Alloc<Dict<Str*, split::IfsSplitter*>>();
}

split::IfsSplitter* SplitContext::_GetSplitter() {
  return _GetSplitter(nullptr);
}

split::IfsSplitter* SplitContext::_GetSplitter(Str* ifs) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  split::IfsSplitter* sp;
  mylib::BufWriter* ifs_whitespace;
  mylib::BufWriter* ifs_other;

  if (ifs == nullptr) {
    val = this->mem->GetVar(str811);
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        ifs = DEFAULT_IFS;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        ifs = val->s;
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  sp = this->splitters->get(ifs);
  if (sp == nullptr) {
    ifs_whitespace = Alloc<mylib::BufWriter>();
    ifs_other = Alloc<mylib::BufWriter>();
    for (StrIter it(ifs); !it.Done(); it.Next()) {
      Str* c = it.Value();
      if (str_contains(str813, c)) {
        ifs_whitespace->write(c);
      }
      else {
        ifs_other->write(c);
      }
    }
    sp = Alloc<IfsSplitter>(ifs_whitespace->getvalue(), ifs_other->getvalue());
    this->splitters->set(ifs, sp);
  }
  return sp;
}

Str* SplitContext::GetJoinChar() {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;

  val = this->mem->GetVar(str814);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return str815;
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      if (len(val->s)) {
        return val->s->index(0);
      }
      else {
        return str816;
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Str* SplitContext::Escape(Str* s) {
  split::IfsSplitter* sp;

  sp = this->_GetSplitter();
  return sp->Escape(s);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s) {
  return SplitForWordEval(s, nullptr);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s, Str* ifs) {
  split::IfsSplitter* sp;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;

  sp = this->_GetSplitter(ifs);
  spans = sp->Split(s, true);
  return _SpansToParts(s, spans);
}

List<Tuple2<runtime_asdl::span_t, int>*>* SplitContext::SplitForRead(Str* line, bool allow_escape) {
  split::IfsSplitter* sp;

  sp = this->_GetSplitter();
  return sp->Split(line, allow_escape);
}

_BaseSplitter::_BaseSplitter(Str* escape_chars) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_BaseSplitter)) {
  this->escape_chars = str_concat(escape_chars, str818);
}

Str* _BaseSplitter::Escape(Str* s) {
  return pyutil::BackslashEscape(s, this->escape_chars);
}

IfsSplitter::IfsSplitter(Str* ifs_whitespace, Str* ifs_other) : _BaseSplitter(str_concat(ifs_whitespace, ifs_other)) {
  this->ifs_whitespace = ifs_whitespace;
  this->ifs_other = ifs_other;
}

List<Tuple2<runtime_asdl::span_t, int>*>* IfsSplitter::Split(Str* s, bool allow_escape) {
  Str* ws_chars;
  Str* other_chars;
  int n;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;
  int i;
  int state;
  Str* c;
  int ch;
  int new_state;
  int action;

  ws_chars = this->ifs_whitespace;
  other_chars = this->ifs_other;
  n = len(s);
  spans = Alloc<List<Tuple2<runtime_asdl::span_t, int>*>>();
  if (n == 0) {
    return spans;
  }
  i = 0;
  while ((i < n and str_contains(this->ifs_whitespace, s->index(i)))) {
    i += 1;
  }
  if (i != 0) {
    spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
  }
  if (i == n) {
    return spans;
  }
  state = state_i::Start;
  while (state != state_i::Done) {
    if (i < n) {
      c = s->index(i);
      if (str_contains(ws_chars, c)) {
        ch = char_kind_i::DE_White;
      }
      else {
        if (str_contains(other_chars, c)) {
          ch = char_kind_i::DE_Gray;
        }
        else {
          if ((allow_escape and str_equals(c, str819))) {
            ch = char_kind_i::Backslash;
          }
          else {
            ch = char_kind_i::Black;
          }
        }
      }
    }
    else {
      if (i == n) {
        ch = char_kind_i::Sentinel;
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    Tuple2<int, int> tup1 = consts::IfsEdge(state, ch);
    new_state = tup1.at0();
    action = tup1.at1();
    if (new_state == state_i::Invalid) {
      throw Alloc<AssertionError>();
    }
    if (action == emit_i::Part) {
      spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Black, i)));
    }
    else {
      if (action == emit_i::Delim) {
        spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
      }
      else {
        if (action == emit_i::Empty) {
          spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
          spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Black, i)));
        }
        else {
          if (action == emit_i::Escape) {
            spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Backslash, i)));
          }
          else {
            if (action == emit_i::Nothing) {
              ;  // pass
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
    state = new_state;
    i += 1;
  }
  return spans;
}

}  // define namespace split

namespace string_ops {  // define
namespace Id = id_kind_asdl::Id;

Str* Utf8Encode(int code) {
  int num_cont_bytes;
  List<int>* bytes_;
  int b;
  List<Str*>* tmp;

  num_cont_bytes = 0;
  if (code <= 127) {
    return chr((code & 127));
  }
  else {
    if (code <= 2047) {
      num_cont_bytes = 1;
    }
    else {
      if (code <= 65535) {
        num_cont_bytes = 2;
      }
      else {
        if (code <= 1114111) {
          num_cont_bytes = 3;
        }
        else {
          return str821;
        }
      }
    }
  }
  bytes_ = Alloc<List<int>>();
  for (int _ = 0; _ < num_cont_bytes; ++_) {
    bytes_->append((128 | (code & 63)));
    code >>= 6;
  }
  b = ((30 << (6 - num_cont_bytes)) | (code & (63 >> num_cont_bytes)));
  bytes_->append(b);
  bytes_->reverse();
  tmp = Alloc<List<Str*>>();
  for (ListIter<int> it(bytes_); !it.Done(); it.Next()) {
    int b = it.Value();
    tmp->append(chr((b & 255)));
  }
  return str822->join(tmp);
}
Str* INCOMPLETE_CHAR = str823;
Str* INVALID_CONT = str824;
Str* INVALID_START = str825;

void _CheckContinuationByte(Str* byte) {
  if ((ord(byte) >> 6) != 2) {
    e_strict(INVALID_CONT);
  }
}

int _Utf8CharLen(int starting_byte) {
  if ((starting_byte >> 7) == 0) {
    return 1;
  }
  else {
    if ((starting_byte >> 5) == 6) {
      return 2;
    }
    else {
      if ((starting_byte >> 4) == 14) {
        return 3;
      }
      else {
        if ((starting_byte >> 3) == 30) {
          return 4;
        }
        else {
          e_strict(INVALID_START);
        }
      }
    }
  }
}

int _NextUtf8Char(Str* s, int i) {
  int n;
  int byte_as_int;
  int length;

  n = len(s);
  byte_as_int = ord(s->index(i));
  length = _Utf8CharLen(byte_as_int);
  for (int j = (i + 1); j < (i + length); ++j) {
    if (j >= n) {
      e_strict(INCOMPLETE_CHAR);
    }
    _CheckContinuationByte(s->index(j));
  }
  return (i + length);
}

int PreviousUtf8Char(Str* s, int i) {
  int orig_i;
  int byte_as_int;
  int offset;

  orig_i = i;
  while (i > 0) {
    i -= 1;
    byte_as_int = ord(s->index(i));
    if ((byte_as_int >> 6) != 2) {
      offset = (orig_i - i);
      if (offset != _Utf8CharLen(byte_as_int)) {
        e_strict(INVALID_START);
      }
      return i;
    }
  }
  e_strict(INVALID_START);
}

int CountUtf8Chars(Str* s) {
  int num_chars;
  int num_bytes;
  int i;

  num_chars = 0;
  num_bytes = len(s);
  i = 0;
  while (i < num_bytes) {
    i = _NextUtf8Char(s, i);
    num_chars += 1;
  }
  return num_chars;
}

int AdvanceUtf8Chars(Str* s, int num_chars, int byte_offset) {
  int num_bytes;
  int i;

  num_bytes = len(s);
  i = byte_offset;
  for (int _ = 0; _ < num_chars; ++_) {
    if (i >= num_bytes) {
      return i;
    }
    i = _NextUtf8Char(s, i);
  }
  return i;
}

Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg, bool extglob) {
  int n;
  int i;

  if (!glob_::LooksLikeGlob(arg)) {
    arg = glob_::GlobUnescape(arg);
    if ((op->op_id == Id::VOp1_Pound || op->op_id == Id::VOp1_DPound)) {
      if ((len(arg) and s->startswith(arg))) {
        return s->slice(len(arg));
      }
      else {
        return s;
      }
    }
    else {
      if ((op->op_id == Id::VOp1_Percent || op->op_id == Id::VOp1_DPercent)) {
        if ((len(arg) and s->endswith(arg))) {
          return s->slice(0, -len(arg));
        }
        else {
          return s;
        }
      }
      else {
        if (op->op_id == Id::VOp1_Comma) {
          if (!(str_equals(arg, str826))) {
            e_die(fmt221(ui::PrettyId(op->op_id)));
          }
          if (len(s)) {
            return str_concat(s->index(0)->lower(), s->slice(1));
          }
          else {
            return s;
          }
        }
        else {
          if (op->op_id == Id::VOp1_DComma) {
            if (!(str_equals(arg, str828))) {
              e_die(fmt222(ui::PrettyId(op->op_id)));
            }
            return s->lower();
          }
          else {
            if (op->op_id == Id::VOp1_Caret) {
              if (!(str_equals(arg, str830))) {
                e_die(fmt223(ui::PrettyId(op->op_id)));
              }
              if (len(s)) {
                return str_concat(s->index(0)->upper(), s->slice(1));
              }
              else {
                return s;
              }
            }
            else {
              if (op->op_id == Id::VOp1_DCaret) {
                if (!(str_equals(arg, str832))) {
                  e_die(fmt224(ui::PrettyId(op->op_id)));
                }
                return s->upper();
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
  n = len(s);
  if (op->op_id == Id::VOp1_Pound) {
    i = 0;
    while (true) {
      if (libc::fnmatch(arg, s->slice(0, i), extglob)) {
        return s->slice(i);
      }
      if (i >= n) {
        break;
      }
      i = _NextUtf8Char(s, i);
    }
    return s;
  }
  else {
    if (op->op_id == Id::VOp1_DPound) {
      i = n;
      while (true) {
        if (libc::fnmatch(arg, s->slice(0, i), extglob)) {
          return s->slice(i);
        }
        if (i == 0) {
          break;
        }
        i = PreviousUtf8Char(s, i);
      }
      return s;
    }
    else {
      if (op->op_id == Id::VOp1_Percent) {
        i = n;
        while (true) {
          if (libc::fnmatch(arg, s->slice(i), extglob)) {
            return s->slice(0, i);
          }
          if (i == 0) {
            break;
          }
          i = PreviousUtf8Char(s, i);
        }
        return s;
      }
      else {
        if (op->op_id == Id::VOp1_DPercent) {
          i = 0;
          while (true) {
            if (libc::fnmatch(arg, s->slice(i), extglob)) {
              return s->slice(0, i);
            }
            if (i >= n) {
              break;
            }
            i = _NextUtf8Char(s, i);
          }
          return s;
        }
        else {
          throw Alloc<NotImplementedError>(ui::PrettyId(op->op_id));
        }
      }
    }
  }
}

List<Tuple2<int, int>*>* _AllMatchPositions(Str* s, Str* regex) {
  List<Tuple2<int, int>*>* matches;
  int pos;
  int n;
  Tuple2<int, int>* m;
  int start;
  int end;

  matches = Alloc<List<Tuple2<int, int>*>>();
  pos = 0;
  n = len(s);
  while (pos < n) {
    m = libc::regex_first_group_match(regex, s, pos);
    if (m == nullptr) {
      break;
    }
    matches->append(m);
    Tuple2<int, int>* tup0 = m;
    start = tup0->at0();
    end = tup0->at1();
    pos = end;
  }
  return matches;
}

Str* _PatSubAll(Str* s, Str* regex, Str* replace_str) {
  List<Str*>* parts;
  int prev_end;
  int start;
  int end;

  parts = Alloc<List<Str*>>();
  prev_end = 0;
  for (ListIter<Tuple2<int, int>*> it(_AllMatchPositions(s, regex)); !it.Done(); it.Next()) {
    Tuple2<int, int>* tup1 = it.Value();
    start = tup1->at0();
    end = tup1->at1();
    parts->append(s->slice(prev_end, start));
    parts->append(replace_str);
    prev_end = end;
  }
  parts->append(s->slice(prev_end));
  return str834->join(parts);
}

GlobReplacer::GlobReplacer(Str* regex, Str* replace_str, int slash_spid) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(GlobReplacer)) {
  this->regex = regex;
  this->replace_str = replace_str;
  this->slash_spid = slash_spid;
}

Str* GlobReplacer::Replace(Str* s, syntax_asdl::suffix_op__PatSub* op) {
  Str* regex;
  Str* msg;
  Tuple2<int, int>* m;
  int start;
  int end;

  regex = fmt225(this->regex);
  if (op->replace_mode == Id::Lit_Slash) {
    try {
      return _PatSubAll(s, regex, this->replace_str);
    }
    catch (RuntimeError* e) {
      msg = e->message;
      e_die(fmt226(regex, msg), this->slash_spid);
    }
  }
  if (op->replace_mode == Id::Lit_Pound) {
    regex = str_concat(str838, regex);
  }
  else {
    if (op->replace_mode == Id::Lit_Percent) {
      regex = str_concat(regex, str839);
    }
  }
  m = libc::regex_first_group_match(regex, s, 0);
  if (m == nullptr) {
    return s;
  }
  Tuple2<int, int>* tup2 = m;
  start = tup2->at0();
  end = tup2->at1();
  return str_concat(str_concat(s->slice(0, start), this->replace_str), s->slice(end));
}

Str* ShellQuoteB(Str* s) {
  s = s->replace(str840, str841)->replace(str842, str843);
  return pyutil::BackslashEscape(s, str844);
}

}  // define namespace string_ops

namespace tdop {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace arith_expr = syntax_asdl::arith_expr;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__Binary;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
using types_asdl::lex_mode_e;

bool IsIndexable(syntax_asdl::arith_expr_t* node, bool parse_dynamic_arith) {
  int tag;

  tag = node->tag_();
  if (tag == arith_expr_e::VarRef) {
    return true;
  }
  if ((parse_dynamic_arith and tag == arith_expr_e::Word)) {
    return true;
  }
  return false;
}

bool _VarRefOrWord(syntax_asdl::arith_expr_t* node, bool dynamic_arith) {
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      return true;
    }
      break;
    case arith_expr_e::Word: {
      if (dynamic_arith) {
        return true;
      }
    }
      break;
  }
  return false;
}

void CheckLhsExpr(syntax_asdl::arith_expr_t* node, bool dynamic_arith, syntax_asdl::word_t* blame_word) {
  syntax_asdl::arith_expr_t* UP_node;

  UP_node = node;
  if (node->tag_() == arith_expr_e::Binary) {
    arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
    if ((node->op_id == Id::Arith_LBracket and _VarRefOrWord(node->left, dynamic_arith))) {
      return ;
    }
  }
  if (_VarRefOrWord(node, dynamic_arith)) {
    return ;
  }
  p_die(fmt227(), blame_word);
}

syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  p_die(fmt228(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::Token* var_name_token;

  var_name_token = word_::LooksLikeArithVar(w);
  if (var_name_token) {
    return var_name_token;
  }
  return static_cast<compound_word*>(w);
}

syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* r;

  r = p->ParseUntil(bp);
  p->Eat(Id::Arith_RParen);
  return r;
}

syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp) {
  p_die(fmt229(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  return Alloc<arith_expr::Binary>(word_::ArithId(w), left, p->ParseUntil(rbp));
}

syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  CheckLhsExpr(left, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::BinaryAssign>(word_::ArithId(w), left, p->ParseUntil(rbp));
}

TdopParser::TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser, optview::Parse* parse_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(TdopParser)) {
  this->spec = spec;
  this->w_parser = w_parser;
  this->parse_opts = parse_opts;
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
}

int TdopParser::CurrentId() {
  return word_::CommandId(this->cur_word);
}

bool TdopParser::AtToken(int token_type) {
  return this->op_id == token_type;
}

void TdopParser::Eat(int token_type) {
  if (!this->AtToken(token_type)) {
    p_die(fmt230(ui::PrettyId(token_type), ui::PrettyId(this->op_id)), this->cur_word);
  }
  this->Next();
}

bool TdopParser::Next() {
  this->cur_word = this->w_parser->ReadWord(lex_mode_e::Arith);
  this->op_id = word_::ArithId(this->cur_word);
  return true;
}

syntax_asdl::arith_expr_t* TdopParser::ParseUntil(int rbp) {
  syntax_asdl::word_t* t;
  tdop::NullInfo* null_info;
  syntax_asdl::arith_expr_t* node;
  tdop::LeftInfo* left_info;

  if ((this->op_id == Id::Eof_Real || this->op_id == Id::Eof_RParen || this->op_id == Id::Eof_Backtick)) {
    p_die(fmt231(), this->cur_word);
  }
  t = this->cur_word;
  null_info = this->spec->LookupNud(this->op_id);
  this->Next();
  node = null_info->nud(this, t, null_info->bp);
  while (true) {
    t = this->cur_word;
    left_info = this->spec->LookupLed(this->op_id);
    if (rbp >= left_info->lbp) {
      break;
    }
    this->Next();
    node = left_info->led(this, t, node, left_info->rbp);
  }
  return node;
}

syntax_asdl::arith_expr_t* TdopParser::Parse() {
  this->Next();
  return this->ParseUntil(0);
}

}  // define namespace tdop

namespace word_compile {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;

syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok) {
  int id_;
  Str* value;
  Str* c;
  Str* s;
  int i;

  id_ = tok->id;
  value = tok->val;
  if (id_ == Id::Char_OneChar) {
    c = value->index(1);
    s = consts::LookupCharC(c);
    return Alloc<class_literal_term::ByteSet>(s, tok->span_id);
  }
  else {
    if (id_ == Id::Char_Hex) {
      s = value->slice(2);
      i = to_int(s, 16);
      return Alloc<class_literal_term::ByteSet>(chr(i), tok->span_id);
    }
    else {
      if (id_ == Id::Char_UBraced) {
        s = value->slice(3, -1);
        i = to_int(s, 16);
        return Alloc<class_literal_term::CodePoint>(i, tok->span_id);
      }
      else {
        if (id_ == Id::Expr_Name) {
          return nullptr;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
}

Str* EvalCStringToken(syntax_asdl::Token* tok) {
  int id_;
  Str* value;
  Str* c;
  Str* s;
  int i;

  id_ = tok->id;
  value = tok->val;
  if ((id_ == Id::Char_Literals || id_ == Id::Unknown_Backslash)) {
    return value;
  }
  else {
    if (id_ == Id::Char_OneChar) {
      c = value->index(1);
      return consts::LookupCharC(c);
    }
    else {
      if (id_ == Id::Char_Stop) {
        return nullptr;
      }
      else {
        if ((id_ == Id::Char_Octal3 || id_ == Id::Char_Octal4)) {
          if (id_ == Id::Char_Octal3) {
            s = value->slice(1);
          }
          else {
            s = value->slice(2);
          }
          i = to_int(s, 8);
          if (i >= 256) {
            i = (i % 256);
          }
          return chr(i);
        }
        else {
          if (id_ == Id::Char_Hex) {
            s = value->slice(2);
            i = to_int(s, 16);
            return chr(i);
          }
          else {
            if ((id_ == Id::Char_Unicode4 || id_ == Id::Char_Unicode8)) {
              s = value->slice(2);
              i = to_int(s, 16);
              return string_ops::Utf8Encode(i);
            }
            else {
              if (id_ == Id::Char_UBraced) {
                s = value->slice(3, -1);
                i = to_int(s, 16);
                return string_ops::Utf8Encode(i);
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
}

}  // define namespace word_compile

namespace word_eval {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Kind_str;
using syntax_asdl::braced_var_sub;
using syntax_asdl::Token;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
namespace bracket_op_e = syntax_asdl::bracket_op_e;
using syntax_asdl::bracket_op__ArrayIndex;
using syntax_asdl::bracket_op__WholeArray;
namespace suffix_op_e = syntax_asdl::suffix_op_e;
using syntax_asdl::suffix_op__PatSub;
using syntax_asdl::suffix_op__Slice;
using syntax_asdl::suffix_op__Unary;
using syntax_asdl::sh_array_literal;
using syntax_asdl::single_quoted;
using syntax_asdl::double_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::command_sub;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__EscapedLiteral;
using syntax_asdl::word_part__AssocArrayLiteral;
using syntax_asdl::word_part__ExprSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__FuncCall;
using syntax_asdl::word_part__Splice;
using syntax_asdl::word_part__TildeSub;
namespace part_value = runtime_asdl::part_value;
namespace part_value_e = runtime_asdl::part_value_e;
using runtime_asdl::part_value_t;
using runtime_asdl::part_value__String;
using runtime_asdl::part_value__Array;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__AssocArray;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__Obj;
namespace lvalue = runtime_asdl::lvalue;
using runtime_asdl::lvalue_t;
using runtime_asdl::assign_arg;
namespace cmd_value_e = runtime_asdl::cmd_value_e;
using runtime_asdl::cmd_value_t;
namespace cmd_value = runtime_asdl::cmd_value;
using runtime_asdl::cmd_value__Assign;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace a_index = runtime_asdl::a_index;
namespace a_index_e = runtime_asdl::a_index_e;
using runtime_asdl::a_index_t;
using runtime_asdl::a_index__Int;
using runtime_asdl::a_index__Str;
using runtime_asdl::scope_e;
List<Str*> glist0 = {str850, str851, str852};
List<Str*>* _STRING_AND_ARRAY = &glist0;

bool CheckCompatArray(Str* var_name, optview::Exec* opts) {
  return CheckCompatArray(var_name, opts, true);
}

bool CheckCompatArray(Str* var_name, optview::Exec* opts, bool is_plain_var_sub) {
  return (opts->compat_array() or (is_plain_var_sub and list_contains(_STRING_AND_ARRAY, var_name)));
}

runtime_asdl::value_t* ResolveCompatArray(runtime_asdl::value_t* val) {
  Str* s;

  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
    s = len(array_val->strs) ? array_val->strs->index(0) : nullptr;
  }
  else {
    if (val->tag_() == value_e::AssocArray) {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
      s = dict_contains(assoc_val->d, str853) ? assoc_val->d->index(str854) : nullptr;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  if (s == nullptr) {
    return Alloc<value::Undef>();
  }
  else {
    return Alloc<value::Str>(s);
  }
}

Str* GetArrayItem(List<Str*>* strs, int index) {
  int n;
  Str* s;

  n = len(strs);
  if (index < 0) {
    index += n;
  }
  if ((0 <= index and index < n)) {
    s = strs->index(index);
  }
  else {
    s = nullptr;
  }
  return s;
}

Str* EvalSingleQuoted(syntax_asdl::single_quoted* part) {
  List<Str*>* tmp;
  Str* s;

  if (part->left->id == Id::Left_SingleQuoteRaw) {
    tmp = Alloc<List<Str*>>();
    for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
      syntax_asdl::Token* t = it.Value();
      tmp->append(t->val);
    }
    s = str855->join(tmp);
  }
  else {
    if (part->left->id == Id::Left_SingleQuoteC) {
      tmp = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(word_compile::EvalCStringToken(t));
      }
      s = str856->join(tmp);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return s;
}

Str* _BackslashEscape(Str* s) {
  return s->replace(str857, str858);
}

runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted) {
  runtime_asdl::value_t* UP_val;

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return Alloc<part_value::String>(str859, quoted, !quoted);
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return Alloc<part_value::String>(val->s, quoted, !quoted);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      return Alloc<part_value::Array>(val->strs);
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      return Alloc<part_value::Array>(val->d->values());
    }
      break;
    case value_e::Obj: {
      throw Alloc<AssertionError>();
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals) {
  List<Tuple3<Str*, bool, bool>*>* current;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  runtime_asdl::part_value_t* UP_p;
  bool is_first;
  Tuple3<Str*, bool, bool>* portion;

  current = Alloc<List<Tuple3<Str*, bool, bool>*>>();
  frames = Alloc<List<List<Tuple3<Str*, bool, bool>*>*>>(std::initializer_list<List<Tuple3<Str*, bool, bool>*>*>{current});
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* p = it.Value();
    UP_p = p;
    switch (p->tag_()) {
      case part_value_e::String: {
        part_value__String* p = static_cast<part_value__String*>(UP_p);
        current->append((Alloc<Tuple3<Str*, bool, bool>>(p->s, p->quoted, p->do_split)));
      }
        break;
      case part_value_e::Array: {
        part_value__Array* p = static_cast<part_value__Array*>(UP_p);
        is_first = true;
        for (ListIter<Str*> it(p->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s == nullptr) {
            continue;
          }
          portion = (Alloc<Tuple3<Str*, bool, bool>>(s, true, false));
          if (is_first) {
            current->append(portion);
            is_first = false;
          }
          else {
            current = Alloc<List<Tuple3<Str*, bool, bool>*>>(std::initializer_list<Tuple3<Str*, bool, bool>*>{portion});
            frames->append(current);
          }
        }
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  return frames;
}

Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char) {
  List<Str*>* out;
  runtime_asdl::part_value_t* UP_p;
  List<Str*>* tmp;

  out = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* p = it.Value();
    UP_p = p;
    switch (p->tag_()) {
      case part_value_e::String: {
        part_value__String* p = static_cast<part_value__String*>(UP_p);
        out->append(p->s);
      }
        break;
      default: {
        part_value__Array* p = static_cast<part_value__Array*>(UP_p);
        tmp = Alloc<List<Str*>>();
        for (ListIter<Str*> it(p->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            tmp->append(s);
          }
        }
        out->append(join_char->join(tmp));
      }
    }
  }
  return str860->join(out);
}

runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part, runtime_asdl::value__Str* arg0_val) {
  runtime_asdl::value_t* UP_val;
  Str* s;
  int n;
  int byte_begin;
  int num_iters;
  int byte_end;
  Str* substr;
  runtime_asdl::value_t* result;
  List<Str*>* orig;
  int i;
  List<Str*>* strs;
  int count;

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      s = val->s;
      n = len(s);
      if (begin < 0) {
        byte_begin = n;
        num_iters = -begin;
        for (int _ = 0; _ < num_iters; ++_) {
          byte_begin = string_ops::PreviousUtf8Char(s, byte_begin);
        }
      }
      else {
        byte_begin = string_ops::AdvanceUtf8Chars(s, begin, 0);
      }
      if (has_length) {
        if (length < 0) {
          byte_end = n;
          num_iters = -length;
          for (int _ = 0; _ < num_iters; ++_) {
            byte_end = string_ops::PreviousUtf8Char(s, byte_end);
          }
        }
        else {
          byte_end = string_ops::AdvanceUtf8Chars(s, length, byte_begin);
        }
      }
      else {
        byte_end = len(s);
      }
      substr = s->slice(byte_begin, byte_end);
      result = Alloc<value::Str>(substr);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if ((has_length and length < 0)) {
        e_die(fmt232(length), part);
      }
      if (arg0_val != nullptr) {
        orig = Alloc<List<Str*>>(std::initializer_list<Str*>{arg0_val->s});
        orig->extend(val->strs);
      }
      else {
        orig = val->strs;
      }
      n = len(orig);
      if (begin < 0) {
        i = (n + begin);
      }
      else {
        i = begin;
      }
      strs = Alloc<List<Str*>>();
      count = 0;
      while (i < n) {
        if ((has_length and count == length)) {
          break;
        }
        s = orig->index(i);
        if (s != nullptr) {
          strs->append(s);
          count += 1;
        }
        i += 1;
      }
      result = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    case value_e::AssocArray: {
      e_die(fmt233(), part);
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(val->tag_());
    }
  }
  return result;
}

StringWordEvaluator::StringWordEvaluator() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(StringWordEvaluator)) {
  ;  // pass
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w) {
  return EvalWordToString(w, quote_e::Default);
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind) {
  throw Alloc<NotImplementedError>();
}

Str* _GetDollarHyphen(optview::Exec* exec_opts) {
  List<Str*>* chars;

  chars = Alloc<List<Str*>>();
  if (exec_opts->interactive()) {
    chars->append(str863);
  }
  if (exec_opts->errexit()) {
    chars->append(str864);
  }
  if (exec_opts->noglob()) {
    chars->append(str865);
  }
  if (exec_opts->noexec()) {
    chars->append(str866);
  }
  if (exec_opts->nounset()) {
    chars->append(str867);
  }
  if (exec_opts->xtrace()) {
    chars->append(str868);
  }
  if (exec_opts->noclobber()) {
    chars->append(str869);
  }
  return str870->join(chars);
}

TildeEvaluator::TildeEvaluator(state::Mem* mem, optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(TildeEvaluator)) {
  this->mem = mem;
  this->exec_opts = exec_opts;
}

Str* TildeEvaluator::Eval(syntax_asdl::Token* token) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  Str* result;

  if (maybe_str_equals(token->val, str871)) {
    val = this->mem->GetVar(str872);
    UP_val = val;
    if (val->tag_() == value_e::Str) {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return val->s;
    }
    result = pyos::GetMyHomeDir();
  }
  else {
    result = pyos::GetHomeDir(token->val->slice(1));
  }
  if (result == nullptr) {
    if (this->exec_opts->strict_tilde()) {
      e_die(fmt234(), token);
    }
    else {
      return token->val;
    }
  }
  return result;
}

AbstractWordEvaluator::AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) {
  this->arith_ev = nullptr;
  this->expr_ev = nullptr;
  this->prompt_ev = nullptr;
  this->tilde_ev = Alloc<TildeEvaluator>(mem, exec_opts);
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->splitter = splitter;
  this->errfmt = errfmt;
  this->globber = Alloc<glob_::Globber>(exec_opts);
}

void AbstractWordEvaluator::CheckCircularDeps() {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalVarNum(int var_num) {
  return this->mem->GetArgNum(var_num);
}

Tuple2<runtime_asdl::value_t*, bool> AbstractWordEvaluator::_EvalSpecialVar(int op_id, bool quoted) {
  bool maybe_decay_array;
  List<Str*>* argv;
  runtime_asdl::value_t* val;

  maybe_decay_array = false;
  if ((op_id == Id::VSub_At || op_id == Id::VSub_Star)) {
    argv = this->mem->GetArgv();
    val = Alloc<value::MaybeStrArray>(argv);
    if (op_id == Id::VSub_At) {
      maybe_decay_array = !quoted;
    }
    else {
      maybe_decay_array = true;
    }
  }
  else {
    if (op_id == Id::VSub_Hyphen) {
      val = Alloc<value::Str>(_GetDollarHyphen(this->exec_opts));
    }
    else {
      val = this->mem->GetSpecialVar(op_id);
    }
  }
  return (Tuple2<runtime_asdl::value_t*, bool>(val, maybe_decay_array));
}

bool AbstractWordEvaluator::_ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, Str* var_name, runtime_asdl::a_index_t* var_index, syntax_asdl::Token* blame_token) {
  runtime_asdl::value_t* UP_val;
  bool is_falsey;
  List<runtime_asdl::part_value_t*>* assign_part_vals;
  Str* rhs_str;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::a_index_t* UP_var_index;
  List<runtime_asdl::part_value_t*>* error_part_vals;
  Str* error_str;

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      is_falsey = true;
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_ColonPlus)) {
        is_falsey = len(val->s) == 0;
      }
      else {
        is_falsey = false;
      }
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      is_falsey = len(val->strs) == 0;
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      is_falsey = len(val->d) == 0;
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(val->tag_());
    }
  }
  if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_Hyphen)) {
    if (is_falsey) {
      this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
      return true;
    }
    else {
      return false;
    }
  }
  else {
    if ((op->op_id == Id::VTest_ColonPlus || op->op_id == Id::VTest_Plus)) {
      if (is_falsey) {
        return false;
      }
      else {
        this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
        return true;
      }
    }
    else {
      if ((op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_Equals)) {
        if (is_falsey) {
          assign_part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
          this->_EvalWordToParts(op->arg_word, quoted, assign_part_vals, true);
          part_vals->extend(assign_part_vals);
          if (var_name == nullptr) {
            e_die(str874);
          }
          else {
            rhs_str = _DecayPartValuesToString(assign_part_vals, this->splitter->GetJoinChar());
            if (var_index == nullptr) {
              lval = Alloc<lvalue::Named>(var_name);
            }
            else {
              UP_var_index = var_index;
              switch (var_index->tag_()) {
                case a_index_e::Int: {
                  a_index__Int* var_index = static_cast<a_index__Int*>(UP_var_index);
                  lval = Alloc<lvalue::Indexed>(var_name, var_index->i);
                }
                  break;
                case a_index_e::Str: {
                  a_index__Str* var_index = static_cast<a_index__Str*>(UP_var_index);
                  lval = Alloc<lvalue::Keyed>(var_name, var_index->s);
                }
                  break;
                default: {
                  throw Alloc<AssertionError>();
                }
              }
            }
            this->mem->SetVar(lval, Alloc<value::Str>(rhs_str), scope_e::Dynamic);
          }
          return true;
        }
        else {
          return false;
        }
      }
      else {
        if ((op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_QMark)) {
          if (is_falsey) {
            error_part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
            this->_EvalWordToParts(op->arg_word, quoted, error_part_vals, true);
            error_str = _DecayPartValuesToString(error_part_vals, this->splitter->GetJoinChar());
            e_die(fmt235(error_str), blame_token);
          }
          else {
            return false;
          }
        }
        else {
          throw Alloc<NotImplementedError>(op->op_id);
        }
      }
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalIndirectArrayExpansion(Str* name, Str* index) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  int index_num;
  Str* s;

  if (!match::IsValidVarName(name)) {
    return nullptr;
  }
  val = this->mem->GetVar(name);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return Alloc<value::Undef>();
    }
      break;
    case value_e::Str: {
      return nullptr;
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if ((str_equals(index, str876) || str_equals(index, str877))) {
        return Alloc<value::MaybeStrArray>(val->strs);
      }
      try {
        index_num = to_int(index);
      }
      catch (ValueError*) {
        return nullptr;
      }
      if (index_num < len(val->strs)) {
        return Alloc<value::Str>(val->strs->index(index_num));
      }
      else {
        return Alloc<value::Undef>();
      }
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      if ((str_equals(index, str878) || str_equals(index, str879))) {
        throw Alloc<NotImplementedError>();
      }
      s = val->d->get(index);
      if (s != nullptr) {
        return Alloc<value::Str>(s);
      }
      else {
        return Alloc<value::Undef>();
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_ApplyPrefixOp(runtime_asdl::value_t* val, syntax_asdl::speck* prefix_op, syntax_asdl::Token* token) {
  int op_id;
  runtime_asdl::value_t* UP_val;
  int length;
  int i;
  Str* name;
  Str* index;
  runtime_asdl::value_t* result;
  List<Str*>* indices;

  op_id = prefix_op->id;
  if (op_id == Id::VSub_Pound) {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        try {
          length = string_ops::CountUtf8Chars(val->s);
        }
        catch (error::Strict* e) {
          e->span_id = token->span_id;
          if (this->exec_opts->strict_word_eval()) {
            throw ;
          }
          else {
            this->errfmt->PrettyPrintError(e, str880);
            return Alloc<value::Str>(str881);
          }
        }
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        length = 0;
        for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            length += 1;
          }
        }
      }
        break;
      case value_e::AssocArray: {
        value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
        length = len(val->d);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
    return Alloc<value::Str>(str(length));
  }
  else {
    if (op_id == Id::VSub_Bang) {
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Str: {
          value__Str* val = static_cast<value__Str*>(UP_val);
          if (match::IsValidVarName(val->s)) {
            return this->mem->GetVar(val->s);
          }
          try {
            return this->mem->GetArgNum(to_int(val->s));
          }
          catch (ValueError*) {
            ;  // pass
          }
          if ((maybe_str_equals(val->s, str882) || maybe_str_equals(val->s, str883))) {
            return Alloc<value::MaybeStrArray>(this->mem->GetArgv());
          }
          i = val->s->find(str884);
          if ((i >= 0 and str_equals(val->s->index(-1), str885))) {
            name = val->s->slice(0, i);
            index = val->s->slice((i + 1), -1);
            result = this->_EvalIndirectArrayExpansion(name, index);
            if (result != nullptr) {
              return result;
            }
          }
          e_die(fmt236(val->s), token);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          indices = Alloc<List<Str*>>();
          i = 0;
          for (ListIter<Str*> it(val->strs); !it.Done(); it.Next(), ++i) {
            Str* s = it.Value();
            if (s != nullptr) {
              indices->append(str(i));
            }
          }
          return Alloc<value::MaybeStrArray>(indices);
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
          return Alloc<value::MaybeStrArray>(val->d->keys());
        }
          break;
        default: {
          throw Alloc<NotImplementedError>(val->tag_());
        }
      }
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op) {
  id_kind_asdl::Kind_t op_kind;
  runtime_asdl::value__Str* arg_val;
  bool extglob;
  runtime_asdl::value_t* UP_val;
  Str* s;
  runtime_asdl::value_t* new_val;
  List<Str*>* strs;

  op_kind = consts::GetKind(op->op_id);
  if (op_kind == Kind::VOp1) {
    arg_val = this->EvalWordToString(op->arg_word, quote_e::FnMatch);
    extglob = this->exec_opts->extglob();
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        s = string_ops::DoUnarySuffixOp(val->s, op, arg_val->s, extglob);
        new_val = Alloc<value::Str>(s);
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        strs = Alloc<List<Str*>>();
        for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s, extglob));
          }
        }
        new_val = Alloc<value::MaybeStrArray>(strs);
      }
        break;
      case value_e::AssocArray: {
        value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
        strs = Alloc<List<Str*>>();
        for (ListIter<Str*> it(val->d->values()); !it.Done(); it.Next()) {
          Str* s = it.Value();
          strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s, extglob));
        }
        new_val = Alloc<value::MaybeStrArray>(strs);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  else {
    throw Alloc<AssertionError>();
  }
  return new_val;
}

runtime_asdl::value_t* AbstractWordEvaluator::_PatSub(runtime_asdl::value_t* val, syntax_asdl::suffix_op__PatSub* op) {
  runtime_asdl::value__Str* pat_val;
  runtime_asdl::value__Str* replace_val;
  Str* replace_str;
  Str* regex;
  List<Str*>* warnings;
  string_ops::GlobReplacer* replacer;
  Str* s;
  List<Str*>* strs;

  pat_val = this->EvalWordToString(op->pat, quote_e::FnMatch);
  if (op->replace) {
    replace_val = this->EvalWordToString(op->replace);
    replace_str = replace_val->s;
  }
  else {
    replace_str = str887;
  }
  Tuple2<Str*, List<Str*>*> tup1 = glob_::GlobToERE(pat_val->s);
  regex = tup1.at0();
  warnings = tup1.at1();
  if (len(warnings)) {
    ;  // pass
  }
  replacer = Alloc<string_ops::GlobReplacer>(regex, replace_str, op->spids->index(0));
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* str_val = static_cast<value__Str*>(val);
      s = replacer->Replace(str_val->s, op);
      val = Alloc<value::Str>(s);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
      strs = Alloc<List<Str*>>();
      for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
        Str* s = it.Value();
        if (s != nullptr) {
          strs->append(replacer->Replace(s, op));
        }
      }
      val = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
      strs = Alloc<List<Str*>>();
      for (ListIter<Str*> it(assoc_val->d->values()); !it.Done(); it.Next()) {
        Str* s = it.Value();
        strs->append(replacer->Replace(s, op));
      }
      val = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return val;
}

runtime_asdl::value_t* AbstractWordEvaluator::_Slice(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Slice* op, Str* var_name, syntax_asdl::braced_var_sub* part) {
  int begin;
  bool has_length;
  int length;
  runtime_asdl::value__Str* arg0_val;

  if (op->begin) {
    begin = this->arith_ev->EvalToInt(op->begin);
  }
  else {
    begin = 0;
  }
  has_length = false;
  length = -1;
  if (op->length) {
    has_length = true;
    length = this->arith_ev->EvalToInt(op->length);
  }
  try {
    arg0_val = nullptr;
    if (var_name == nullptr) {
      arg0_val = this->mem->GetArg0();
    }
    val = _PerformSlice(val, begin, length, has_length, part, arg0_val);
  }
  catch (error::Strict* e) {
    if (this->exec_opts->strict_word_eval()) {
      throw ;
    }
    else {
      this->errfmt->PrettyPrintError(e, str888);
      switch (val->tag_()) {
        case value_e::Str: {
          val = Alloc<value::Str>(str889);
        }
          break;
        case value_e::MaybeStrArray: {
          val = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
          break;
        default: {
          throw Alloc<NotImplementedError>();
        }
      }
    }
  }
  return val;
}

Tuple2<runtime_asdl::value__Str*, bool> AbstractWordEvaluator::_Nullary(runtime_asdl::value_t* val, syntax_asdl::Token* op, Str* var_name) {
  runtime_asdl::value_t* UP_val;
  bool quoted2;
  int op_id;
  Str* prompt;
  Str* p;
  runtime_asdl::value__Str* result;
  List<Str*>* tmp;
  List<Str*>* chars;
  runtime_asdl::cell* cell;

  UP_val = val;
  quoted2 = false;
  op_id = op->id;
  if (op_id == Id::VOp0_P) {
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* str_val = static_cast<value__Str*>(UP_val);
        prompt = this->prompt_ev->EvalPrompt(str_val);
        p = prompt->replace(str890, str891)->replace(str892, str893);
        result = Alloc<value::Str>(p);
      }
        break;
      default: {
        e_die(fmt237(ui::ValType(val)));
      }
    }
  }
  else {
    if (op_id == Id::VOp0_Q) {
      switch (val->tag_()) {
        case value_e::Str: {
          value__Str* str_val = static_cast<value__Str*>(UP_val);
          result = Alloc<value::Str>(qsn::maybe_shell_encode(str_val->s));
          quoted2 = true;
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            tmp->append(qsn::maybe_shell_encode(s));
          }
          result = Alloc<value::Str>(str895->join(tmp));
        }
          break;
        default: {
          e_die(fmt238(ui::ValType(val)));
        }
      }
    }
    else {
      if (op_id == Id::VOp0_a) {
        chars = Alloc<List<Str*>>();
        switch (val->tag_()) {
          case value_e::MaybeStrArray: {
            chars->append(str897);
          }
            break;
          case value_e::AssocArray: {
            chars->append(str898);
          }
            break;
        }
        if (var_name != nullptr) {
          cell = this->mem->GetCell(var_name);
          if (cell) {
            if (cell->readonly) {
              chars->append(str899);
            }
            if (cell->exported) {
              chars->append(str900);
            }
            if (cell->nameref) {
              chars->append(str901);
            }
          }
        }
        result = Alloc<value::Str>(str902->join(chars));
      }
      else {
        e_die(fmt239(op->val), op);
      }
    }
  }
  return (Tuple2<runtime_asdl::value__Str*, bool>(result, quoted2));
}

Tuple2<runtime_asdl::value_t*, bool> AbstractWordEvaluator::_WholeArray(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part, bool quoted) {
  int op_id;
  bool maybe_decay_array;
  runtime_asdl::value_t* UP_val;

  bracket_op__WholeArray* bracket_op = static_cast<bracket_op__WholeArray*>(part->bracket_op);
  op_id = bracket_op->op_id;
  if (op_id == Id::Lit_At) {
    maybe_decay_array = !quoted;
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        val = this->_EmptyMaybeStrArrayOrError(part->token);
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        e_die(fmt240(), part);
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        val = Alloc<value::MaybeStrArray>(val->strs);
      }
        break;
    }
  }
  else {
    if (op_id == Id::Arith_Star) {
      maybe_decay_array = true;
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Undef: {
          val = this->_EmptyMaybeStrArrayOrError(part->token);
        }
          break;
        case value_e::Str: {
          value__Str* val = static_cast<value__Str*>(UP_val);
          e_die(fmt241(), part);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          val = Alloc<value::MaybeStrArray>(val->strs);
        }
          break;
      }
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return (Tuple2<runtime_asdl::value_t*, bool>(val, maybe_decay_array));
}

Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> AbstractWordEvaluator::_ArrayIndex(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part) {
  runtime_asdl::a_index_t* var_index;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::value_t* UP_val;
  int index;
  Str* s;
  Str* key;

  var_index = nullptr;
  bracket_op__ArrayIndex* bracket_op = static_cast<bracket_op__ArrayIndex*>(part->bracket_op);
  anode = bracket_op->expr;
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      ;  // pass
    }
      break;
    case value_e::Str: {
      e_die(fmt242(part->token->val), part->token);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
      index = this->arith_ev->EvalToInt(anode);
      var_index = Alloc<a_index::Int>(index);
      s = GetArrayItem(array_val->strs, index);
      if (s == nullptr) {
        val = Alloc<value::Undef>();
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(UP_val);
      key = this->arith_ev->EvalWordToString(anode);
      var_index = Alloc<a_index::Str>(key);
      s = assoc_val->d->get(key);
      if (s == nullptr) {
        val = Alloc<value::Undef>();
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return (Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*>(val, var_index));
}

void AbstractWordEvaluator::_EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals) {
  runtime_asdl::part_value__String* v;

  if (len(parts) == 0) {
    v = Alloc<part_value::String>(str907, true, false);
    part_vals->append(v);
    return ;
  }
  for (ListIter<syntax_asdl::word_part_t*> it(parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* p = it.Value();
    this->_EvalWordPart(p, part_vals, true);
  }
}

Str* AbstractWordEvaluator::EvalDoubleQuotedToString(syntax_asdl::double_quoted* dq_part) {
  List<runtime_asdl::part_value_t*>* part_vals;

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalDoubleQuoted(dq_part->parts, part_vals);
  return this->_PartValsToString(part_vals, dq_part->left->span_id);
}

runtime_asdl::value__Str* AbstractWordEvaluator::_DecayArray(runtime_asdl::value__MaybeStrArray* val) {
  Str* sep;
  List<Str*>* tmp;

  sep = this->splitter->GetJoinChar();
  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
    Str* s = it.Value();
    if (s != nullptr) {
      tmp->append(s);
    }
  }
  return Alloc<value::Str>(sep->join(tmp));
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyStrOrError(runtime_asdl::value_t* val, syntax_asdl::Token* token) {
  Str* name;

  if (val->tag_() != value_e::Undef) {
    return val;
  }
  if (!this->exec_opts->nounset()) {
    return Alloc<value::Str>(str908);
  }
  name = token->val->startswith(str909) ? token->val->slice(1) : token->val;
  e_die(fmt243(name), token);
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyMaybeStrArrayOrError(syntax_asdl::Token* token) {
  if (this->exec_opts->nounset()) {
    e_die(fmt244(token->val), token);
  }
  else {
    return Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
  }
}

void AbstractWordEvaluator::_EvalBracedVarSub(syntax_asdl::braced_var_sub* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  Str* var_name;
  List<Str*>* names;
  Str* sep;
  runtime_asdl::value_t* val;
  int var_num;
  runtime_asdl::a_index_t* var_index;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::bracket_op_t* UP_bracket_op;
  syntax_asdl::suffix_op_t* tmp;
  bool undef_check;
  syntax_asdl::suffix_op_t* suffix_op;
  syntax_asdl::suffix_op_t* UP_op;
  bool quoted2;
  syntax_asdl::suffix_op_t* op;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::part_value_t* part_val;

  maybe_decay_array = false;
  var_name = nullptr;
  if (part->token->id == Id::VSub_Name) {
    if ((part->prefix_op != nullptr and (part->bracket_op == nullptr and (part->suffix_op != nullptr and part->suffix_op->tag_() == suffix_op_e::Nullary)))) {
      Token* suffix_op_ = static_cast<Token*>(part->suffix_op);
      if (consts::GetKind(suffix_op_->id) == Kind::VOp3) {
        names = this->mem->VarNamesStartingWith(part->token->val);
        names->sort();
        Token* suffix_op_ = static_cast<Token*>(part->suffix_op);
        if ((quoted and suffix_op_->id == Id::VOp3_At)) {
          part_vals->append(Alloc<part_value::Array>(names));
        }
        else {
          sep = this->splitter->GetJoinChar();
          part_vals->append(Alloc<part_value::String>(sep->join(names), quoted, true));
        }
        return ;
      }
    }
    var_name = part->token->val;
    val = this->mem->GetVar(var_name);
  }
  else {
    if (part->token->id == Id::VSub_Number) {
      var_num = to_int(part->token->val);
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup2 = this->_EvalSpecialVar(part->token->id, quoted);
      val = tup2.at0();
      maybe_decay_array = tup2.at1();
    }
  }
  var_index = nullptr;
  if (part->bracket_op) {
    bracket_op = part->bracket_op;
    UP_bracket_op = bracket_op;
    switch (bracket_op->tag_()) {
      case bracket_op_e::WholeArray: {
        Tuple2<runtime_asdl::value_t*, bool> tup3 = this->_WholeArray(val, part, quoted);
        val = tup3.at0();
        maybe_decay_array = tup3.at1();
      }
        break;
      case bracket_op_e::ArrayIndex: {
        bracket_op__ArrayIndex* bracket_op = static_cast<bracket_op__ArrayIndex*>(UP_bracket_op);
        Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> tup4 = this->_ArrayIndex(val, part);
        val = tup4.at0();
        var_index = tup4.at1();
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  else {
    if ((var_name and (val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray))) {
      if (CheckCompatArray(var_name, this->exec_opts, !(part->prefix_op or part->suffix_op))) {
        val = ResolveCompatArray(val);
      }
      else {
        tmp = part->suffix_op;
        if ((tmp and (tmp->tag_() == suffix_op_e::Nullary and static_cast<Token*>(tmp)->id == Id::VOp0_a))) {
          ;  // pass
        }
        else {
          e_die(fmt245(var_name), part);
        }
      }
    }
  }
  undef_check = true;
  suffix_op = part->suffix_op;
  UP_op = suffix_op;
  if ((suffix_op != nullptr and suffix_op->tag_() == suffix_op_e::Unary)) {
    suffix_op__Unary* suffix_op = static_cast<suffix_op__Unary*>(UP_op);
    if (consts::GetKind(suffix_op->op_id) == Kind::VTest) {
      undef_check = false;
    }
  }
  if (undef_check) {
    val = this->_EmptyStrOrError(val, part->token);
  }
  if (part->prefix_op) {
    val = this->_ApplyPrefixOp(val, part->prefix_op, part->token);
  }
  quoted2 = false;
  if (suffix_op) {
    op = suffix_op;
    switch (suffix_op->tag_()) {
      case suffix_op_e::Nullary: {
        Token* op = static_cast<Token*>(UP_op);
        Tuple2<runtime_asdl::value__Str*, bool> tup5 = this->_Nullary(val, op, var_name);
        val = tup5.at0();
        quoted2 = tup5.at1();
      }
        break;
      case suffix_op_e::Unary: {
        suffix_op__Unary* op = static_cast<suffix_op__Unary*>(UP_op);
        if (consts::GetKind(op->op_id) == Kind::VTest) {
          if (this->_ApplyTestOp(val, op, quoted, part_vals, var_name, var_index, part->token)) {
            return ;
          }
        }
        else {
          val = this->_ApplyUnarySuffixOp(val, op);
        }
      }
        break;
      case suffix_op_e::PatSub: {
        suffix_op__PatSub* op = static_cast<suffix_op__PatSub*>(UP_op);
        val = this->_PatSub(val, op);
      }
        break;
      case suffix_op_e::Slice: {
        suffix_op__Slice* op = static_cast<suffix_op__Slice*>(UP_op);
        val = this->_Slice(val, op, var_name, part);
      }
        break;
    }
  }
  UP_val = val;
  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
    if (maybe_decay_array) {
      val = this->_DecayArray(array_val);
    }
    else {
      val = array_val;
    }
  }
  part_val = _ValueToPartValue(val, (quoted or quoted2));
  part_vals->append(part_val);
}

Str* AbstractWordEvaluator::_PartValsToString(List<runtime_asdl::part_value_t*>* part_vals, int span_id) {
  List<Str*>* strs;
  runtime_asdl::part_value_t* UP_part_val;
  Str* s;
  List<Str*>* tmp;

  strs = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* part_val = it.Value();
    UP_part_val = part_val;
    switch (part_val->tag_()) {
      case part_value_e::String: {
        part_value__String* part_val = static_cast<part_value__String*>(UP_part_val);
        s = part_val->s;
      }
        break;
      case part_value_e::Array: {
        part_value__Array* part_val = static_cast<part_value__Array*>(UP_part_val);
        if (this->exec_opts->strict_array()) {
          e_die(fmt246(), span_id);
        }
        else {
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (s != nullptr) {
              tmp->append(s);
            }
          }
          s = str914->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return str915->join(strs);
}

Str* AbstractWordEvaluator::EvalBracedVarSubToString(syntax_asdl::braced_var_sub* part) {
  List<runtime_asdl::part_value_t*>* part_vals;

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalBracedVarSub(part, part_vals, false);
  return this->_PartValsToString(part_vals, part->spids->index(0));
}

void AbstractWordEvaluator::_EvalSimpleVarSub(syntax_asdl::Token* token, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  Str* var_name;
  runtime_asdl::value_t* val;
  int var_num;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::part_value_t* v;

  maybe_decay_array = false;
  if (token->id == Id::VSub_DollarName) {
    var_name = token->val->slice(1);
    val = this->mem->GetVar(var_name);
    if ((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray)) {
      if (CheckCompatArray(var_name, this->exec_opts)) {
        val = ResolveCompatArray(val);
      }
      else {
        e_die(fmt247(var_name), token);
      }
    }
  }
  else {
    if (token->id == Id::VSub_Number) {
      var_num = to_int(token->val->slice(1));
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup6 = this->_EvalSpecialVar(token->id, quoted);
      val = tup6.at0();
      maybe_decay_array = tup6.at1();
    }
  }
  val = this->_EmptyStrOrError(val, token);
  UP_val = val;
  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
    if (maybe_decay_array) {
      val = this->_DecayArray(array_val);
    }
    else {
      val = array_val;
    }
  }
  v = _ValueToPartValue(val, quoted);
  part_vals->append(v);
}

Str* AbstractWordEvaluator::EvalSimpleVarSubToString(syntax_asdl::Token* tok) {
  List<runtime_asdl::part_value_t*>* part_vals;

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalSimpleVarSub(tok, part_vals, false);
  return this->_PartValsToString(part_vals, tok->span_id);
}

void AbstractWordEvaluator::_EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  _EvalWordPart(part, part_vals, quoted, false);
}

void AbstractWordEvaluator::_EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted, bool is_subst) {
  syntax_asdl::word_part_t* UP_part;
  runtime_asdl::part_value__String* v;
  Str* tval;
  Str* s;
  int id_;
  runtime_asdl::part_value_t* sv;
  int num;
  syntax_asdl::Token* op;
  Str* op_str;
  int i;
  Str* var_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* items;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      e_die(fmt248(), part);
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      e_die(fmt249(), part);
    }
      break;
    case word_part_e::Literal: {
      Token* part = static_cast<Token*>(UP_part);
      v = Alloc<part_value::String>(part->val, quoted, is_subst);
      part_vals->append(v);
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      tval = part->token->val;
      s = tval->index(1);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      s = EvalSingleQuoted(part);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      this->_EvalDoubleQuoted(part->parts, part_vals);
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      id_ = part->left_token->id;
      if ((id_ == Id::Left_DollarParen || id_ == Id::Left_AtParen || id_ == Id::Left_Backtick)) {
        sv = this->_EvalCommandSub(part, quoted);
      }
      else {
        if ((id_ == Id::Left_ProcSubIn || id_ == Id::Left_ProcSubOut)) {
          sv = this->_EvalProcessSub(part);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      part_vals->append(sv);
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      this->_EvalSimpleVarSub(part->token, part_vals, quoted);
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      this->_EvalBracedVarSub(part, part_vals, quoted);
    }
      break;
    case word_part_e::TildeSub: {
      word_part__TildeSub* part = static_cast<word_part__TildeSub*>(UP_part);
      s = this->tilde_ev->Eval(part->token);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      num = this->arith_ev->EvalToInt(part->anode);
      v = Alloc<part_value::String>(str(num), quoted, !quoted);
      part_vals->append(v);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      op = part->op;
      if (op->id == Id::ExtGlob_Comma) {
        op_str = str919;
      }
      else {
        op_str = op->val;
      }
      part_vals->append(Alloc<part_value::String>(op_str, false, false));
      i = 0;
      for (ListIter<syntax_asdl::word_t*> it(part->arms); !it.Done(); it.Next(), ++i) {
        syntax_asdl::word_t* w = it.Value();
        if (i != 0) {
          part_vals->append(Alloc<part_value::String>(str920, false, false));
        }
        this->_EvalWordToParts(w, false, part_vals);
      }
      part_vals->append(Alloc<part_value::String>(str921, false, false));
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      var_name = part->name->val->slice(1);
      val = this->mem->GetVar(var_name);
      UP_val = val;
      switch (val->tag_()) {
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          items = val->strs;
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
          items = val->d->keys();
        }
          break;
        case value_e::Obj: {
          // if not PYTHON
          {
            throw Alloc<AssertionError>();
          }
          // endif MYCPP
        }
          break;
        default: {
          e_die(fmt250(var_name), part);
        }
      }
      part_vals->append(Alloc<part_value::Array>(items));
    }
      break;
    case word_part_e::FuncCall: {
      word_part__FuncCall* part = static_cast<word_part__FuncCall*>(UP_part);
    }
      break;
    case word_part_e::ExprSub: {
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals) {
  _EvalWordToParts(w, quoted, part_vals, false);
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, bool is_subst) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        this->_EvalWordPart(p, part_vals, quoted, is_subst);
      }
    }
      break;
    case word_e::Empty: {
      part_vals->append(Alloc<part_value::String>(str923, quoted, !quoted));
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToPattern(syntax_asdl::word_t* UP_w) {
  ;  // pass
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToString(syntax_asdl::word_t* UP_w) {
  return EvalWordToString(UP_w, quote_e::Default);
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToString(syntax_asdl::word_t* UP_w, runtime_asdl::quote_t quote_kind) {
  List<runtime_asdl::part_value_t*>* part_vals;
  List<Str*>* strs;
  runtime_asdl::part_value_t* UP_part_val;
  Str* s;
  List<Str*>* tmp;

  if (UP_w->tag_() == word_e::Empty) {
    return Alloc<value::Str>(str924);
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* p = it.Value();
    this->_EvalWordPart(p, part_vals, false);
  }
  strs = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* part_val = it.Value();
    UP_part_val = part_val;
    switch (part_val->tag_()) {
      case part_value_e::String: {
        part_value__String* part_val = static_cast<part_value__String*>(UP_part_val);
        s = part_val->s;
        if (part_val->quoted) {
          if (quote_kind == quote_e::FnMatch) {
            s = glob_::GlobEscape(s);
          }
          else {
            if (quote_kind == quote_e::ERE) {
              s = glob_::ExtendedRegexEscape(s);
            }
          }
        }
      }
        break;
      case part_value_e::Array: {
        part_value__Array* part_val = static_cast<part_value__Array*>(UP_part_val);
        if (this->exec_opts->strict_array()) {
          e_die(fmt251(), w);
        }
        else {
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (s != nullptr) {
              tmp->append(s);
            }
          }
          s = str926->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return Alloc<value::Str>(str927->join(strs));
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalForPlugin(syntax_asdl::compound_word* w) {
  runtime_asdl::value__Str* val;

  {  // with
    state::ctx_Status ctx(this->mem);

    try {
      val = this->EvalWordToString(w);
    }
    catch (error::FatalRuntime* e) {
      val = Alloc<value::Str>(fmt252(e->UserErrorString()));
    }
    catch (_OSError* e) {
      val = Alloc<value::Str>(fmt253(pyutil::strerror(e)));
    }
    catch (KeyboardInterrupt*) {
      val = Alloc<value::Str>(str930);
    }
  }
  return val;
}

runtime_asdl::value_t* AbstractWordEvaluator::EvalRhsWord(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;
  syntax_asdl::word_part_t* UP_part0;
  int tag;
  List<syntax_asdl::word_t*>* array_words;
  List<syntax_asdl::compound_word*>* words;
  List<Str*>* strs;
  Dict<Str*, Str*>* d;
  int n;
  int i;
  runtime_asdl::value__Str* k;
  runtime_asdl::value__Str* v;

  if (UP_w->tag_() == word_e::Empty) {
    return Alloc<value::Str>(str931);
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) == 1) {
    part0 = w->parts->index(0);
    UP_part0 = part0;
    tag = part0->tag_();
    if (tag == word_part_e::ShArrayLiteral) {
      sh_array_literal* part0 = static_cast<sh_array_literal*>(UP_part0);
      array_words = part0->words;
      words = braces::BraceExpandWords(array_words);
      strs = this->EvalWordSequence(words);
      return Alloc<value::MaybeStrArray>(strs);
    }
    if (tag == word_part_e::AssocArrayLiteral) {
      word_part__AssocArrayLiteral* part0 = static_cast<word_part__AssocArrayLiteral*>(UP_part0);
      d = Alloc<Dict<Str*, Str*>>();
      n = len(part0->pairs);
      i = 0;
      while (i < n) {
        k = this->EvalWordToString(part0->pairs->index(i));
        v = this->EvalWordToString(part0->pairs->index((i + 1)));
        d->set(k->s, v->s);
        i += 2;
      }
      return Alloc<value::AssocArray>(d);
    }
  }
  return this->EvalWordToString(w);
}

void AbstractWordEvaluator::_EvalWordFrame(List<Tuple3<Str*, bool, bool>*>* frame, List<Str*>* argv) {
  bool all_empty;
  bool all_quoted;
  bool any_quoted;
  Str* s;
  bool quoted;
  List<Str*>* tmp;
  Str* a;
  bool will_glob;
  List<Str*>* frags;
  Str* frag;
  bool do_split;
  Str* flat;
  List<Str*>* args;

  all_empty = true;
  all_quoted = true;
  any_quoted = false;
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup7 = it.Value();
    s = tup7->at0();
    quoted = tup7->at1();
    if (len(s)) {
      all_empty = false;
    }
    if (quoted) {
      any_quoted = true;
    }
    else {
      all_quoted = false;
    }
  }
  if ((all_empty and !any_quoted)) {
    return ;
  }
  if (all_quoted) {
    tmp = Alloc<List<Str*>>();
    for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
      Tuple3<Str*, bool, bool>* tup8 = it.Value();
      s = tup8->at0();
      tmp->append(s);
    }
    a = str932->join(tmp);
    argv->append(a);
    return ;
  }
  will_glob = !this->exec_opts->noglob();
  frags = Alloc<List<Str*>>();
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup9 = it.Value();
    frag = tup9->at0();
    quoted = tup9->at1();
    do_split = tup9->at2();
    if ((will_glob and quoted)) {
      frag = glob_::GlobEscape(frag);
    }
    else {
      frag = _BackslashEscape(frag);
    }
    if (do_split) {
      frag = _BackslashEscape(frag);
    }
    else {
      frag = this->splitter->Escape(frag);
    }
    frags->append(frag);
  }
  flat = str933->join(frags);
  args = this->splitter->SplitForWordEval(flat);
  if ((!args and any_quoted)) {
    argv->append(str934);
    return ;
  }
  for (ListIter<Str*> it(args); !it.Done(); it.Next()) {
    Str* a = it.Value();
    this->globber->Expand(a, argv);
  }
}

List<Str*>* AbstractWordEvaluator::_EvalWordToArgv(syntax_asdl::compound_word* w) {
  List<runtime_asdl::part_value_t*>* part_vals;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  List<Str*>* argv;
  List<Str*>* tmp;
  Str* s;

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalWordToParts(w, false, part_vals);
  frames = _MakeWordFrames(part_vals);
  argv = Alloc<List<Str*>>();
  for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
    List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
    if (len(frame)) {
      tmp = Alloc<List<Str*>>();
      for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
        Tuple3<Str*, bool, bool>* tup10 = it.Value();
        s = tup10->at0();
        tmp->append(s);
      }
      argv->append(str935->join(tmp));
    }
  }
  return argv;
}

runtime_asdl::cmd_value__Assign* AbstractWordEvaluator::_EvalAssignBuiltin(int builtin_id, Str* arg0, List<syntax_asdl::compound_word*>* words) {
  bool eval_to_pairs;
  bool started_pairs;
  List<Str*>* flags;
  List<int>* flag_spids;
  List<runtime_asdl::assign_arg*>* assign_args;
  int n;
  syntax_asdl::compound_word* w;
  int word_spid;
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  Str* tok_val;
  Str* var_name;
  syntax_asdl::word_t* rhs_word;
  syntax_asdl::compound_word* tmp;
  runtime_asdl::value_t* right;
  runtime_asdl::assign_arg* arg2;
  List<Str*>* argv;
  Str* left;

  eval_to_pairs = true;
  started_pairs = false;
  flags = Alloc<List<Str*>>(std::initializer_list<Str*>{arg0});
  flag_spids = Alloc<List<int>>(std::initializer_list<int>{word_::LeftMostSpanForWord(words->index(0))});
  assign_args = Alloc<List<runtime_asdl::assign_arg*>>();
  n = len(words);
  for (int i = 1; i < n; ++i) {
    w = words->index(i);
    word_spid = word_::LeftMostSpanForWord(w);
    if (word_::IsVarLike(w)) {
      started_pairs = true;
    }
    if (started_pairs) {
      Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> tup11 = word_::DetectShAssignment(w);
      left_token = tup11.at0();
      close_token = tup11.at1();
      part_offset = tup11.at2();
      if (left_token) {
        if (left_token->id != Id::Lit_VarLike) {
          e_die(fmt254(), w);
        }
        tok_val = left_token->val;
        if (str_equals(tok_val->index(-2), str937)) {
          e_die(fmt255(), w);
        }
        var_name = tok_val->slice(0, -1);
        if (part_offset == len(w->parts)) {
          rhs_word = Alloc<word::Empty>();
        }
        else {
          tmp = Alloc<compound_word>(w->parts->slice(part_offset));
          word_::TildeDetectAssign(tmp);
          rhs_word = tmp;
        }
        right = this->EvalRhsWord(rhs_word);
        arg2 = Alloc<assign_arg>(var_name, right, word_spid);
        assign_args->append(arg2);
      }
      else {
        argv = this->_EvalWordToArgv(w);
        for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
          Str* arg = it.Value();
          Tuple2<Str*, runtime_asdl::value__Str*> tup12 = _SplitAssignArg(arg, w);
          left = tup12.at0();
          right = tup12.at1();
          arg2 = Alloc<assign_arg>(left, right, word_spid);
          assign_args->append(arg2);
        }
      }
    }
    else {
      argv = this->_EvalWordToArgv(w);
      for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
        Str* arg = it.Value();
        if ((arg->startswith(str939) or arg->startswith(str940))) {
          flags->append(arg);
          flag_spids->append(word_spid);
          if ((str_contains(arg, str941) or str_contains(arg, str942))) {
            eval_to_pairs = false;
          }
        }
        else {
          if (eval_to_pairs) {
            Tuple2<Str*, runtime_asdl::value__Str*> tup13 = _SplitAssignArg(arg, w);
            left = tup13.at0();
            right = tup13.at1();
            arg2 = Alloc<assign_arg>(left, right, word_spid);
            assign_args->append(arg2);
            started_pairs = true;
          }
          else {
            flags->append(arg);
          }
        }
      }
    }
  }
  return Alloc<cmd_value::Assign>(builtin_id, flags, flag_spids, assign_args);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::StaticEvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign) {
  List<Str*>* strs;
  List<int>* spids;
  int n;
  int i;
  int word_spid;
  List<Str*>* strs0;
  Str* arg0;
  int builtin_id;
  runtime_asdl::value__Str* val;
  int num_appended;
  List<runtime_asdl::part_value_t*>* part_vals;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  List<Str*>* tmp;
  Str* s;

  strs = Alloc<List<Str*>>();
  spids = Alloc<List<int>>();
  n = 0;
  i = 0;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next(), ++i) {
    syntax_asdl::compound_word* w = it.Value();
    word_spid = word_::LeftMostSpanForWord(w);
    if (i == 0) {
      strs0 = this->_EvalWordToArgv(w);
      if (len(strs0) == 1) {
        arg0 = strs0->index(0);
        builtin_id = consts::LookupAssignBuiltin(arg0);
        if (builtin_id != consts::NO_INDEX) {
          return this->_EvalAssignBuiltin(builtin_id, arg0, words);
        }
      }
      strs->extend(strs0);
      for (ListIter<Str*> it(strs0); !it.Done(); it.Next()) {
        Str* _ = it.Value();
        spids->append(word_spid);
      }
      continue;
    }
    if (glob_::LooksLikeStaticGlob(w)) {
      val = this->EvalWordToString(w);
      num_appended = this->globber->Expand(val->s, strs);
      for (int _ = 0; _ < num_appended; ++_) {
        spids->append(word_spid);
      }
      continue;
    }
    part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
    this->_EvalWordToParts(w, false, part_vals);
    frames = _MakeWordFrames(part_vals);
    for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
      List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
      if (len(frame)) {
        tmp = Alloc<List<Str*>>();
        for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
          Tuple3<Str*, bool, bool>* tup14 = it.Value();
          s = tup14->at0();
          tmp->append(s);
        }
        strs->append(str943->join(tmp));
        spids->append(word_spid);
      }
    }
  }
  return Alloc<cmd_value::Argv>(strs, spids, nullptr);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::EvalWordSequence2(List<syntax_asdl::compound_word*>* words) {
  return EvalWordSequence2(words, false);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::EvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign) {
  List<Str*>* strs;
  List<int>* spids;
  int n;
  int i;
  List<runtime_asdl::part_value_t*>* part_vals;
  runtime_asdl::part_value_t* val0;
  runtime_asdl::part_value_t* UP_val0;
  int builtin_id;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  int n_next;
  int spid;

  if (this->exec_opts->simple_word_eval()) {
    return this->StaticEvalWordSequence2(words, allow_assign);
  }
  strs = Alloc<List<Str*>>();
  spids = Alloc<List<int>>();
  n = 0;
  i = 0;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next(), ++i) {
    syntax_asdl::compound_word* w = it.Value();
    part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
    this->_EvalWordToParts(w, false, part_vals);
    if ((allow_assign and (i == 0 and len(part_vals) == 1))) {
      val0 = part_vals->index(0);
      UP_val0 = val0;
      if (val0->tag_() == part_value_e::String) {
        part_value__String* val0 = static_cast<part_value__String*>(UP_val0);
        if (!val0->quoted) {
          builtin_id = consts::LookupAssignBuiltin(val0->s);
          if (builtin_id != consts::NO_INDEX) {
            return this->_EvalAssignBuiltin(builtin_id, val0->s, words);
          }
        }
      }
    }
    frames = _MakeWordFrames(part_vals);
    for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
      List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
      this->_EvalWordFrame(frame, strs);
    }
    n_next = len(strs);
    spid = word_::LeftMostSpanForWord(w);
    for (int _ = 0; _ < (n_next - n); ++_) {
      spids->append(spid);
    }
    n = n_next;
  }
  return Alloc<cmd_value::Argv>(strs, spids, nullptr);
}

List<Str*>* AbstractWordEvaluator::EvalWordSequence(List<syntax_asdl::compound_word*>* words) {
  runtime_asdl::cmd_value_t* UP_cmd_val;

  UP_cmd_val = this->EvalWordSequence2(words);
  cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
  return cmd_val->argv;
}

Tuple2<Str*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w) {
  int i;
  Str* prefix;
  runtime_asdl::value__Str* no_str;

  i = arg->find(str944);
  prefix = arg->slice(0, i);
  if ((i != -1 and match::IsValidVarName(prefix))) {
    return (Tuple2<Str*, runtime_asdl::value__Str*>(prefix, Alloc<value::Str>(arg->slice((i + 1)))));
  }
  else {
    if (match::IsValidVarName(arg)) {
      no_str = nullptr;
      return (Tuple2<Str*, runtime_asdl::value__Str*>(arg, no_str));
    }
    else {
      e_die(fmt256(arg), w);
    }
  }
}

NormalWordEvaluator::NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) : AbstractWordEvaluator(mem, exec_opts, splitter, errfmt) {
  this->shell_ex = nullptr;
}

void NormalWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value_t* NormalWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  Str* stdout;
  List<Str*>* strs;

  stdout = this->shell_ex->RunCommandSub(cs_part);
  if (cs_part->left_token->id == Id::Left_AtParen) {
    strs = this->splitter->SplitForWordEval(stdout);
    return Alloc<part_value::Array>(strs);
  }
  else {
    return Alloc<part_value::String>(stdout, quoted, !quoted);
  }
}

runtime_asdl::part_value__String* NormalWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  Str* dev_path;

  dev_path = this->shell_ex->RunProcessSub(cs_part);
  return Alloc<part_value::String>(dev_path, true, false);
}
Str* _DUMMY = str946;

void CompletionWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value_t* CompletionWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  if (cs_part->left_token->id == Id::Left_AtParen) {
    return Alloc<part_value::Array>(Alloc<List<Str*>>(std::initializer_list<Str*>{_DUMMY}));
  }
  else {
    return Alloc<part_value::String>(_DUMMY, quoted, !quoted);
  }
}

runtime_asdl::part_value__String* CompletionWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  return Alloc<part_value::String>(str947, true, false);
}

}  // define namespace word_eval

namespace word_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::arith_expr_t;
namespace bracket_op = syntax_asdl::bracket_op;
using syntax_asdl::bracket_op_t;
namespace suffix_op = syntax_asdl::suffix_op;
using syntax_asdl::suffix_op_t;
using syntax_asdl::suffix_op__Slice;
using syntax_asdl::suffix_op__PatSub;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__ExprSub;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Import;
using syntax_asdl::expr_t;
namespace source = syntax_asdl::source;
using syntax_asdl::arg_list;
List<id_kind_asdl::Kind_t> glist0 = {Kind::Eof, Kind::WS, Kind::Op, Kind::Right};
List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS = &glist0;

WordEmitter::WordEmitter() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(WordEmitter)) {
  ;  // pass
}

syntax_asdl::word_t* WordEmitter::ReadWord(types_asdl::lex_mode_t lex_mode) {
  throw Alloc<NotImplementedError>();
}

WordParser::WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->parse_opts = parse_ctx->parse_opts;
  this->a_parser = Alloc<tdop::TdopParser>(arith_parse::Spec(), this, this->parse_opts);
  this->Reset();
}

void WordParser::Init(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void WordParser::Reset() {
  this->cur_token = nullptr;
  this->token_kind = Kind::Undefined;
  this->token_type = Id::Undefined_Tok;
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cursor = nullptr;
  this->cursor_was_newline = false;
  this->buffered_word = nullptr;
}

void WordParser::_Peek() {
  if (this->next_lex_mode != lex_mode_e::Undefined) {
    this->cur_token = this->lexer->Read(this->next_lex_mode);
    this->token_type = this->cur_token->id;
    this->token_kind = consts::GetKind(this->token_type);
    this->parse_ctx->trail->AppendToken(this->cur_token);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
}

void WordParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

syntax_asdl::word_t* WordParser::_ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode) {
  syntax_asdl::compound_word* w;

  w = this->_ReadVarOpArg2(arg_lex_mode, Id::Undefined_Tok, true);
  if ((len(w->parts) == 0 and arg_lex_mode == lex_mode_e::VSub_ArgDQ)) {
    return Alloc<word::Empty>();
  }
  return w;
}

syntax_asdl::compound_word* WordParser::_ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type) {
  return _ReadVarOpArg2(arg_lex_mode, eof_type, false);
}

syntax_asdl::compound_word* WordParser::_ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;
  syntax_asdl::compound_word* tilde;

  this->_Next(arg_lex_mode);
  this->_Peek();
  w = this->_ReadCompoundWord3(arg_lex_mode, eof_type, empty_ok);
  tilde = word_::TildeDetect(w);
  if (tilde) {
    w = tilde;
  }
  return w;
}

syntax_asdl::suffix_op__Slice* WordParser::_ReadSliceVarOp() {
  int cur_id;
  syntax_asdl::arith_expr_t* begin;
  syntax_asdl::arith_expr_t* no_length;
  syntax_asdl::arith_expr_t* length;

  this->_Next(lex_mode_e::Arith);
  this->_Peek();
  cur_id = this->token_type;
  if (this->token_type == Id::Arith_Colon) {
    begin = nullptr;
  }
  else {
    begin = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  if (cur_id == Id::Arith_RBrace) {
    no_length = nullptr;
    return Alloc<suffix_op::Slice>(begin, no_length);
  }
  if (cur_id == Id::Arith_Colon) {
    this->_Next(lex_mode_e::Arith);
    length = this->_ReadArithExpr(Id::Arith_RBrace);
    return Alloc<suffix_op::Slice>(begin, length);
  }
  p_die(fmt257(), this->cur_token);
  throw Alloc<AssertionError>();
}

syntax_asdl::suffix_op__PatSub* WordParser::_ReadPatSubVarOp() {
  syntax_asdl::compound_word* pat;
  int replace_mode;
  syntax_asdl::word_part_t* UP_first_part;
  int lit_id;
  syntax_asdl::compound_word* tilde;
  syntax_asdl::word_t* replace;

  pat = this->_ReadVarOpArg2(lex_mode_e::VSub_ArgUnquoted, Id::Lit_Slash);
  if ((len(pat->parts) == 1 and word_::LiteralId(pat->parts->index(0)) == Id::Lit_Slash)) {
    this->_Next(lex_mode_e::VSub_ArgUnquoted);
    this->_Peek();
    pat->parts->append(this->cur_token);
  }
  if (len(pat->parts) == 0) {
    p_die(fmt258(), this->cur_token);
  }
  replace_mode = Id::Undefined_Tok;
  UP_first_part = pat->parts->index(0);
  if (UP_first_part->tag_() == word_part_e::Literal) {
    lit_id = static_cast<Token*>(UP_first_part)->id;
    if ((lit_id == Id::Lit_Slash || lit_id == Id::Lit_Pound || lit_id == Id::Lit_Percent)) {
      pat->parts->pop(0);
      replace_mode = lit_id;
    }
  }
  tilde = word_::TildeDetect(pat);
  if (tilde) {
    pat = tilde;
  }
  if (this->token_type == Id::Right_DollarBrace) {
    return Alloc<suffix_op::PatSub>(pat, nullptr, replace_mode);
  }
  if (this->token_type == Id::Lit_Slash) {
    replace = this->_ReadVarOpArg(lex_mode_e::VSub_ArgUnquoted);
    this->_Peek();
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt259(ui::PrettyId(this->token_type)), this->cur_token);
    }
    return Alloc<suffix_op::PatSub>(pat, replace, replace_mode);
  }
  p_die(fmt260(), this->cur_token);
}

syntax_asdl::bracket_op_t* WordParser::_ReadSubscript() {
  int next_id;
  syntax_asdl::bracket_op_t* op;
  syntax_asdl::arith_expr_t* anode;

  next_id = this->lexer->LookAhead(lex_mode_e::Arith);
  if ((next_id == Id::Lit_At || next_id == Id::Arith_Star)) {
    op = Alloc<bracket_op::WholeArray>(next_id);
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
  }
  else {
    this->_Next(lex_mode_e::Arith);
    anode = this->_ReadArithExpr(Id::Arith_RBracket);
    op = Alloc<bracket_op::ArrayIndex>(anode);
  }
  if (this->token_type != Id::Arith_RBracket) {
    p_die(fmt261(), this->cur_token);
  }
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  return op;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarOf() {
  syntax_asdl::Token* name_token;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::braced_var_sub* part;

  this->_Peek();
  name_token = this->cur_token;
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  if (this->token_type == Id::VOp2_LBracket) {
    bracket_op = this->_ReadSubscript();
  }
  else {
    bracket_op = nullptr;
  }
  part = Alloc<braced_var_sub>();
  part->token = name_token;
  part->bracket_op = bracket_op;
  return part;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode) {
  return _ParseVarExpr(arg_lex_mode, false);
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query) {
  syntax_asdl::braced_var_sub* part;
  id_kind_asdl::Kind_t op_kind;
  int op_id;
  syntax_asdl::word_t* arg_word;
  int op_spid;
  syntax_asdl::suffix_op__PatSub* patsub_op;
  suffix_op_t* temp;

  part = this->_ParseVarOf();
  this->_Peek();
  if (this->token_type == Id::Right_DollarBrace) {
    return part;
  }
  op_kind = this->token_kind;
  if (op_kind == Kind::VTest) {
    op_id = this->token_type;
    arg_word = this->_ReadVarOpArg(arg_lex_mode);
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt262(), this->cur_token);
    }
    part->suffix_op = Alloc<suffix_op::Unary>(op_id, arg_word);
  }
  else {
    if (op_kind == Kind::VOp0) {
      part->suffix_op = this->cur_token;
      this->_Next(lex_mode_e::VSub_2);
      this->_Peek();
    }
    else {
      if (op_kind == Kind::VOp1) {
        op_id = this->token_type;
        arg_word = this->_ReadVarOpArg(lex_mode_e::VSub_ArgUnquoted);
        if (this->token_type != Id::Right_DollarBrace) {
          p_die(fmt263(), this->cur_token);
        }
        part->suffix_op = Alloc<suffix_op::Unary>(op_id, arg_word);
      }
      else {
        if (op_kind == Kind::VOp2) {
          if (this->token_type == Id::VOp2_Slash) {
            op_spid = this->cur_token->span_id;
            patsub_op = this->_ReadPatSubVarOp();
            patsub_op->spids->append(op_spid);
            temp = static_cast<suffix_op_t*>(patsub_op);
            part->suffix_op = temp;
          }
          else {
            if (this->token_type == Id::VOp2_Colon) {
              part->suffix_op = this->_ReadSliceVarOp();
              if (this->token_type != Id::Arith_RBrace) {
                p_die(fmt264(), this->cur_token);
              }
            }
            else {
              p_die(fmt265(str957), this->cur_token);
            }
          }
        }
        else {
          if (op_kind == Kind::VOp3) {
            if (allow_query) {
              part->suffix_op = this->cur_token;
              this->_Next(lex_mode_e::VSub_2);
              this->_Peek();
            }
            else {
              p_die(fmt266(str959), this->cur_token);
            }
          }
        }
      }
    }
  }
  if ((this->token_type != Id::Right_DollarBrace && this->token_type != Id::Arith_RBrace)) {
    p_die(fmt267(), this->cur_token);
  }
  return part;
}

Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> WordParser::ReadBracedVarSub(syntax_asdl::Token* left_token) {
  syntax_asdl::braced_var_sub* part;
  syntax_asdl::Token* last_token;

  part = this->_ReadBracedVarSub(left_token, false);
  last_token = this->cur_token;
  return (Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*>(part, last_token));
}

syntax_asdl::braced_var_sub* WordParser::_ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted) {
  types_asdl::lex_mode_t arg_lex_mode;
  int ty;
  int next_id;
  syntax_asdl::braced_var_sub* part;
  int right_spid;

  if (d_quoted) {
    arg_lex_mode = lex_mode_e::VSub_ArgDQ;
  }
  else {
    arg_lex_mode = lex_mode_e::VSub_ArgUnquoted;
  }
  this->_Next(lex_mode_e::VSub_1);
  this->_Peek();
  ty = this->token_type;
  if (ty == Id::VSub_Pound) {
    next_id = this->lexer->LookAhead(lex_mode_e::VSub_1);
    if ((next_id != Id::Unknown_Tok && next_id != Id::Right_DollarBrace)) {
      this->_Next(lex_mode_e::VSub_1);
      part = this->_ParseVarOf();
      this->_Peek();
      if (this->token_type != Id::Right_DollarBrace) {
        p_die(fmt268(), this->cur_token);
      }
      part->prefix_op = Alloc<speck>(ty, this->cur_token->span_id);
    }
    else {
      part = this->_ParseVarExpr(arg_lex_mode);
    }
  }
  else {
    if (ty == Id::VSub_Bang) {
      next_id = this->lexer->LookAhead(lex_mode_e::VSub_1);
      if ((next_id != Id::Unknown_Tok && next_id != Id::Right_DollarBrace)) {
        this->_Next(lex_mode_e::VSub_1);
        part = this->_ParseVarExpr(arg_lex_mode, true);
        part->prefix_op = Alloc<speck>(ty, this->cur_token->span_id);
      }
      else {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
    }
    else {
      if (this->token_kind == Kind::VSub) {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
      else {
        p_die(fmt269(), this->cur_token);
      }
    }
  }
  part->spids->append(left_token->span_id);
  right_spid = this->cur_token->span_id;
  part->spids->append(right_spid);
  return part;
}

syntax_asdl::single_quoted* WordParser::_ReadSingleQuoted(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::Token*>* tokens;
  syntax_asdl::single_quoted* node;

  left_token = this->cur_token;
  tokens = Alloc<List<syntax_asdl::Token*>>();
  this->ReadSingleQuoted(lex_mode, left_token, tokens, false);
  node = Alloc<single_quoted>(left_token, tokens);
  node->spids->append(left_token->span_id);
  node->spids->append(this->cur_token->span_id);
  return node;
}

syntax_asdl::Token* WordParser::ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool is_oil_expr) {
  bool no_backslashes;
  bool done;
  syntax_asdl::Token* tok;

  no_backslashes = (is_oil_expr and maybe_str_equals(left_token->val, str963));
  done = false;
  while (!done) {
    this->_Next(lex_mode);
    this->_Peek();
    if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Char)) {
      tok = this->cur_token;
      if ((no_backslashes and str_contains(tok->val, str964))) {
        p_die(fmt270(), tok);
      }
      if (is_oil_expr) {
        if (this->token_type == Id::Char_Octal3) {
          p_die(fmt271(), tok);
        }
        if ((this->token_type == Id::Char_Hex and len(this->cur_token->val) != 4)) {
          p_die(fmt272(), tok);
        }
      }
      tokens->append(tok);
    }
    else {
      if (this->token_kind == Kind::Unknown) {
        tok = this->cur_token;
        if ((is_oil_expr or this->parse_opts->strict_backslash())) {
          p_die(fmt273(), tok);
        }
        tokens->append(tok);
      }
      else {
        if (this->token_kind == Kind::Eof) {
          p_die(fmt274(), left_token);
        }
        else {
          if (this->token_kind == Kind::Right) {
            done = true;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  return this->cur_token;
}

syntax_asdl::word_part_t* WordParser::_ReadDoubleQuotedLeftParts() {
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, true);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::DQ);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::word_part_t* WordParser::_ReadLeftParts() {
  if (this->token_type == Id::Left_DoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_DollarDoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_SingleQuoteRaw) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_Raw);
  }
  if (this->token_type == Id::Left_SingleQuoteC) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_C);
  }
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick || this->token_type == Id::Left_ProcSubIn || this->token_type == Id::Left_ProcSubOut)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, false);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::ShCommand);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::word_part__ExtGlob* WordParser::_ReadExtGlob() {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::word_t*>* arms;
  List<int>* spids;
  bool read_word;
  syntax_asdl::compound_word* w;
  syntax_asdl::word_part__ExtGlob* part;

  left_token = this->cur_token;
  arms = Alloc<List<syntax_asdl::word_t*>>();
  spids = Alloc<List<int>>();
  spids->append(left_token->span_id);
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ExtGlob);
  this->_Next(lex_mode_e::ExtGlob);
  read_word = false;
  while (true) {
    this->_Peek();
    if (this->token_type == Id::Right_ExtGlob) {
      if (!read_word) {
        arms->append(Alloc<compound_word>());
      }
      spids->append(this->cur_token->span_id);
      break;
    }
    else {
      if (this->token_type == Id::Op_Pipe) {
        if (!read_word) {
          arms->append(Alloc<compound_word>());
        }
        read_word = false;
        this->_Next(lex_mode_e::ExtGlob);
      }
      else {
        if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub || this->token_kind == Kind::ExtGlob)) {
          w = this->_ReadCompoundWord(lex_mode_e::ExtGlob);
          arms->append(w);
          read_word = true;
        }
        else {
          if (this->token_kind == Kind::Eof) {
            p_die(fmt275(), left_token);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  part = Alloc<word_part::ExtGlob>(left_token, arms);
  part->spids->extend(spids);
  return part;
}

void WordParser::_ReadLikeDQ(syntax_asdl::Token* left_dq_token, bool is_oil_expr, List<syntax_asdl::word_part_t*>* out_parts) {
  bool done;
  syntax_asdl::word_part_t* part;

  done = false;
  while (!done) {
    this->_Next(lex_mode_e::DQ);
    this->_Peek();
    if (this->token_kind == Kind::Lit) {
      if (this->token_type == Id::Lit_EscapedChar) {
        part = Alloc<word_part::EscapedLiteral>(this->cur_token);
      }
      else {
        if (this->token_type == Id::Lit_BadBackslash) {
          if ((is_oil_expr or this->parse_opts->strict_backslash())) {
            p_die(fmt276(), this->cur_token);
          }
        }
        else {
          if (this->token_type == Id::Lit_Dollar) {
            if ((is_oil_expr or this->parse_opts->strict_dollar())) {
              p_die(fmt277(), this->cur_token);
            }
          }
        }
        part = this->cur_token;
      }
      out_parts->append(part);
    }
    else {
      if (this->token_kind == Kind::Left) {
        if ((this->token_type == Id::Left_Backtick and is_oil_expr)) {
          p_die(fmt278(), this->cur_token);
        }
        part = this->_ReadDoubleQuotedLeftParts();
        out_parts->append(part);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          part = Alloc<simple_var_sub>(this->cur_token);
          out_parts->append(part);
        }
        else {
          if (this->token_kind == Kind::Right) {
            if (left_dq_token) {
              done = true;
            }
            else {
              out_parts->append(this->cur_token);
            }
          }
          else {
            if (this->token_kind == Kind::Eof) {
              if (left_dq_token) {
                p_die(fmt279(), left_dq_token);
              }
              else {
                done = true;
              }
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
  }
}

syntax_asdl::double_quoted* WordParser::_ReadDoubleQuoted() {
  syntax_asdl::Token* left_dq_token;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::double_quoted* dq_part;

  left_dq_token = this->cur_token;
  parts = Alloc<List<syntax_asdl::word_part_t*>>();
  this->_ReadLikeDQ(left_dq_token, false, parts);
  dq_part = Alloc<double_quoted>(left_dq_token, parts);
  dq_part->spids->append(left_dq_token->span_id);
  dq_part->spids->append(this->cur_token->span_id);
  return dq_part;
}

syntax_asdl::Token* WordParser::ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(left_token, true, parts);
  return this->cur_token;
}

syntax_asdl::command_sub* WordParser::_ReadCommandSub(int left_id) {
  syntax_asdl::Token* left_token;
  int left_spid;
  int right_id;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::command_t* node;
  int right_spid;
  List<Str*>* parts;
  Str* code_str;
  alloc::Arena* arena;
  reader::FileLineReader* line_reader;
  syntax_asdl::command_sub* cs_part;

  left_token = this->cur_token;
  left_spid = left_token->span_id;
  if ((left_id == Id::Left_DollarParen || left_id == Id::Left_AtParen || left_id == Id::Left_ProcSubIn || left_id == Id::Left_ProcSubOut)) {
    this->_Next(lex_mode_e::ShCommand);
    right_id = Id::Eof_RParen;
    this->lexer->PushHint(Id::Op_RParen, right_id);
    c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
    node = c_parser->ParseCommandSub();
    right_spid = c_parser->w_parser->cur_token->span_id;
  }
  else {
    if ((left_id == Id::Left_Backtick and this->parse_ctx->one_pass_parse)) {
      right_id = Id::Eof_Backtick;
      this->lexer->PushHint(Id::Left_Backtick, right_id);
      c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
      node = c_parser->ParseCommandSub();
      right_spid = c_parser->w_parser->cur_token->span_id;
    }
    else {
      if (left_id == Id::Left_Backtick) {
        if (this->parse_opts->strict_backticks()) {
          p_die(fmt280(), left_token);
        }
        this->_Next(lex_mode_e::Backtick);
        parts = Alloc<List<Str*>>();
        while (true) {
          this->_Peek();
          if (this->token_type == Id::Backtick_Quoted) {
            parts->append(this->cur_token->val->slice(1));
          }
          else {
            if (this->token_type == Id::Backtick_Other) {
              parts->append(this->cur_token->val);
            }
            else {
              if (this->token_type == Id::Backtick_Right) {
                break;
              }
              else {
                if (this->token_type == Id::Eof_Real) {
                  p_die(fmt281(), left_token);
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
          }
          this->_Next(lex_mode_e::Backtick);
        }
        right_spid = this->cur_token->span_id;
        code_str = str977->join(parts);
        arena = this->parse_ctx->arena;
        line_reader = reader::StringLineReader(code_str, arena);
        c_parser = this->parse_ctx->MakeOshParser(line_reader);
        {  // with
          alloc::ctx_Location ctx(arena, Alloc<source::Backticks>(left_spid, right_spid));

          node = c_parser->ParseCommandSub();
        }
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  cs_part = Alloc<command_sub>(left_token, node);
  cs_part->spids->append(left_spid);
  cs_part->spids->append(right_spid);
  return cs_part;
}

syntax_asdl::word_part__ExprSub* WordParser::_ReadExprSub(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  syntax_asdl::expr_t* enode;
  syntax_asdl::word_part__ExprSub* node;

  left_token = this->cur_token;
  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup1 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr_sub);
  enode = tup1.at0();
  this->_Next(lex_mode);
  node = Alloc<word_part::ExprSub>(left_token, enode);
  return node;
}

syntax_asdl::command_t* WordParser::ParseVarDecl(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__VarDecl* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> tup2 = this->parse_ctx->ParseVarDecl(kw_token, this->lexer);
  enode = tup2.at0();
  last_token = tup2.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::command_t* WordParser::ParsePlaceMutation(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__PlaceMutation* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> tup3 = this->parse_ctx->ParsePlaceMutation(kw_token, this->lexer);
  enode = tup3.at0();
  last_token = tup3.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseBareDecl() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  this->_Peek();
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup4 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup4.at0();
  last_token = tup4.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseCommandExpr() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;

  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup5 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup5.at0();
  last_token = tup5.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  return enode;
}

void WordParser::ParseProc(syntax_asdl::command__Proc* node) {
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Lit_Chars) {
    p_die(fmt282(ui::PrettyToken(this->cur_token, this->arena)), this->cur_token);
  }
  node->name = this->cur_token;
  last_token = this->parse_ctx->ParseProc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
}

void WordParser::ParseImport(syntax_asdl::command__Import* node) {
  syntax_asdl::Token* last_token;

  last_token = this->parse_ctx->ParseImport(this->lexer, node);
  this->buffered_word = last_token;
}

syntax_asdl::arith_expr_t* WordParser::_ReadArithExpr(int end_id) {
  syntax_asdl::arith_expr_t* anode;
  int cur_id;

  anode = this->a_parser->Parse();
  cur_id = this->a_parser->CurrentId();
  if ((end_id != Id::Undefined_Tok and cur_id != end_id)) {
    p_die(fmt283(ui::PrettyId(cur_id), ui::PrettyId(end_id)), this->a_parser->cur_word);
  }
  return anode;
}

syntax_asdl::word_part__ArithSub* WordParser::_ReadArithSub() {
  int left_span_id;
  syntax_asdl::arith_expr_t* anode;
  int right_span_id;
  syntax_asdl::word_part__ArithSub* node;

  left_span_id = this->cur_token->span_id;
  this->lexer->PushHint(Id::Op_RParen, Id::Right_DollarDParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr(Id::Arith_RParen);
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Right_DollarDParen) {
    p_die(fmt284(), this->cur_token);
  }
  right_span_id = this->cur_token->span_id;
  node = Alloc<word_part::ArithSub>(anode);
  node->spids->append(left_span_id);
  node->spids->append(right_span_id);
  return node;
}

Tuple2<syntax_asdl::arith_expr_t*, int> WordParser::ReadDParen() {
  syntax_asdl::arith_expr_t* anode;

  this->lexer->PushHint(Id::Op_RParen, Id::Op_DRightParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr(Id::Arith_RParen);
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Op_DRightParen) {
    p_die(fmt285(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  return (Tuple2<syntax_asdl::arith_expr_t*, int>(anode, this->cur_token->span_id));
}

void WordParser::_NextNonSpace() {
  while (true) {
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    if ((this->token_kind != Kind::Ignored && this->token_kind != Kind::WS)) {
      break;
    }
  }
}

syntax_asdl::command__ForExpr* WordParser::ReadForExpression() {
  int cur_id;
  syntax_asdl::arith_expr_t* init_node;
  syntax_asdl::arith_expr_t* cond_node;
  syntax_asdl::arith_expr_t* update_node;
  syntax_asdl::command__ForExpr* node;

  this->_NextNonSpace();
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_Semi) {
    init_node = nullptr;
  }
  else {
    init_node = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  this->_NextNonSpace();
  if (cur_id != Id::Arith_Semi) {
    p_die(fmt286(), this->a_parser->cur_word);
  }
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_Semi) {
    cond_node = nullptr;
  }
  else {
    cond_node = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  this->_NextNonSpace();
  if (cur_id != Id::Arith_Semi) {
    p_die(fmt287(), this->a_parser->cur_word);
  }
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_RParen) {
    update_node = nullptr;
  }
  else {
    update_node = this->_ReadArithExpr(Id::Arith_RParen);
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt288(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  node = Alloc<command::ForExpr>();
  node->init = init_node;
  node->cond = cond_node;
  node->update = update_node;
  return node;
}

syntax_asdl::word_part_t* WordParser::_ReadArrayLiteral() {
  syntax_asdl::Token* left_token;
  int paren_spid;
  word_parse::WordParser* w_parser;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::word_t* w;
  List<syntax_asdl::word_t*>* no_words;
  syntax_asdl::sh_array_literal* node;
  Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* pair;
  syntax_asdl::compound_word* k;
  syntax_asdl::compound_word* v;
  List<syntax_asdl::compound_word*>* pairs;
  int n;
  syntax_asdl::compound_word* w2;
  syntax_asdl::word_part__AssocArrayLiteral* node2;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->cur_token->id != Id::Op_LParen) {
    p_die(fmt289(), this->cur_token);
  }
  left_token = this->cur_token;
  paren_spid = this->cur_token->span_id;
  w_parser = this->parse_ctx->MakeWordParser(this->lexer, this->line_reader);
  words = Alloc<List<syntax_asdl::compound_word*>>();
  while (true) {
    w = w_parser->ReadWord(lex_mode_e::ShCommand);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Right_ShArrayLiteral) {
        break;
      }
      else {
        if (tok->id == Id::Op_Newline) {
          continue;
        }
        else {
          p_die(fmt290(), w);
        }
      }
    }
    words->append(static_cast<compound_word*>(w));
  }
  if (len(words) == 0) {
    no_words = Alloc<List<syntax_asdl::word_t*>>();
    node = Alloc<sh_array_literal>(left_token, no_words);
    node->spids->append(left_token->span_id);
    return node;
  }
  pair = word_::DetectAssocPair(words->index(0));
  if (pair) {
    Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup6 = pair;
    k = tup6->at0();
    v = tup6->at1();
    pairs = Alloc<List<syntax_asdl::compound_word*>>(std::initializer_list<syntax_asdl::compound_word*>{k, v});
    n = len(words);
    for (int i = 1; i < n; ++i) {
      w2 = words->index(i);
      pair = word_::DetectAssocPair(w2);
      if (!pair) {
        p_die(fmt291(), w2);
      }
      Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup7 = pair;
      k = tup7->at0();
      v = tup7->at1();
      pairs->append(k);
      pairs->append(v);
    }
    node2 = Alloc<word_part::AssocArrayLiteral>(left_token, pairs);
    node2->spids->append(paren_spid);
    return node2;
  }
  words2 = braces::BraceDetectAll(words);
  words3 = word_::TildeDetectAll(words2);
  node = Alloc<sh_array_literal>(left_token, words3);
  node->spids->append(paren_spid);
  return node;
}

void WordParser::_ParseCallArguments(syntax_asdl::arg_list* arglist) {
  this->lexer->PushHint(Id::Op_RParen, Id::Op_RParen);
  this->parse_ctx->ParseOilArgList(this->lexer, arglist);
}

bool WordParser::_MaybeReadWholeWord(bool is_first, types_asdl::lex_mode_t lex_mode, List<syntax_asdl::word_part_t*>* parts) {
  bool done;
  syntax_asdl::word_part_t* part;
  int next_id;
  syntax_asdl::word_part_t* part2;
  syntax_asdl::Token* splice_token;
  syntax_asdl::arg_list* arglist;

  done = false;
  if (this->token_type == Id::Lit_EscapedChar) {
    part = Alloc<word_part::EscapedLiteral>(this->cur_token);
  }
  else {
    part = this->cur_token;
  }
  if ((is_first and this->token_type == Id::Lit_VarLike)) {
    parts->append(part);
    next_id = this->lexer->LookAhead(lex_mode);
    if (next_id == Id::Op_LParen) {
      this->lexer->PushHint(Id::Op_RParen, Id::Right_ShArrayLiteral);
      part2 = this->_ReadArrayLiteral();
      parts->append(part2);
      this->_Next(lex_mode);
      this->_Peek();
      if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
        p_die(fmt292(), this->cur_token);
      }
      done = true;
    }
  }
  else {
    if ((is_first and (this->parse_opts->parse_at() and this->token_type == Id::Lit_Splice))) {
      splice_token = this->cur_token;
      next_id = this->lexer->LookAhead(lex_mode);
      if (next_id == Id::Op_LParen) {
        arglist = Alloc<arg_list>();
        this->_ParseCallArguments(arglist);
        part2 = Alloc<word_part::FuncCall>(splice_token, arglist);
      }
      else {
        part2 = Alloc<word_part::Splice>(splice_token);
      }
      parts->append(part2);
      this->_Next(lex_mode);
      this->_Peek();
      if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
        p_die(fmt293(), this->cur_token);
      }
      done = true;
    }
    else {
      if ((is_first and (this->parse_opts->parse_at_all() and this->token_type == Id::Lit_At))) {
        p_die(fmt294(), this->cur_token);
      }
      else {
        parts->append(part);
      }
    }
  }
  return done;
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord(types_asdl::lex_mode_t lex_mode) {
  return this->_ReadCompoundWord3(lex_mode, Id::Undefined_Tok, true);
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;
  int num_parts;
  int brace_count;
  bool done;
  bool allow_done;
  syntax_asdl::Token* vsub_token;
  syntax_asdl::word_part_t* part;
  int next_id;
  syntax_asdl::arg_list* arglist;
  syntax_asdl::command_sub* cs_part;

  w = Alloc<compound_word>();
  num_parts = 0;
  brace_count = 0;
  done = false;
  while (!done) {
    this->_Peek();
    allow_done = (empty_ok or num_parts != 0);
    if ((allow_done and this->token_type == eof_type)) {
      done = true;
    }
    else {
      if ((this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary)) {
        if (this->token_type == Id::Lit_LBrace) {
          brace_count += 1;
        }
        else {
          if (this->token_type == Id::Lit_RBrace) {
            brace_count -= 1;
          }
          else {
            if (this->token_type == Id::Lit_Dollar) {
              if (this->parse_opts->strict_dollar()) {
                p_die(fmt295(), this->cur_token);
              }
            }
          }
        }
        done = this->_MaybeReadWholeWord(num_parts == 0, lex_mode, w->parts);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          vsub_token = this->cur_token;
          part = Alloc<simple_var_sub>(vsub_token);
          if (this->token_type == Id::VSub_DollarName) {
            next_id = this->lexer->LookAhead(lex_mode);
            if (next_id == Id::Op_LParen) {
              arglist = Alloc<arg_list>();
              this->_ParseCallArguments(arglist);
              part = Alloc<word_part::FuncCall>(vsub_token, arglist);
            }
          }
          w->parts->append(part);
        }
        else {
          if (this->token_kind == Kind::ExtGlob) {
            if ((this->parse_opts->parse_at() and (this->token_type == Id::ExtGlob_At and num_parts == 0))) {
              cs_part = this->_ReadCommandSub(Id::Left_AtParen);
              cs_part->left_token->id = Id::Left_AtParen;
              part = cs_part;
            }
            else {
              part = this->_ReadExtGlob();
            }
            w->parts->append(part);
          }
          else {
            if (this->token_kind == Kind::Left) {
              part = this->_ReadLeftParts();
              w->parts->append(part);
            }
            else {
              if (this->token_kind == Kind::Right) {
                if (this->token_type == Id::Right_DoubleQuote) {
                  ;  // pass
                }
                else {
                  if (this->token_type == Id::Right_Subshell) {
                    if (this->lexer->MaybeUnreadOne()) {
                      this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
                      this->_Next(lex_mode);
                    }
                    done = true;
                  }
                  else {
                    done = true;
                  }
                }
              }
              else {
                if (this->token_kind == Kind::Ignored) {
                  done = true;
                }
                else {
                  if ((this->token_type == Id::Op_RParen || this->token_type == Id::Eof_RParen)) {
                    if (this->lexer->MaybeUnreadOne()) {
                      if (this->token_type == Id::Eof_RParen) {
                        this->lexer->PushHint(Id::Op_RParen, Id::Eof_RParen);
                      }
                      this->_Next(lex_mode);
                    }
                  }
                  done = true;
                }
              }
            }
          }
        }
      }
    }
    if (!done) {
      this->_Next(lex_mode);
      num_parts += 1;
    }
  }
  if ((this->parse_opts->parse_brace() and (num_parts > 1 and brace_count != 0))) {
    p_die(fmt296(), w);
  }
  return w;
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadArithWord() {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

  this->_Peek();
  if (this->token_kind == Kind::Unknown) {
    p_die(fmt297(this->cur_token->val), this->cur_token);
  }
  else {
    if (this->token_kind == Kind::Eof) {
      return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Ignored) {
        this->_Next(lex_mode_e::Arith);
        no_word = nullptr;
        return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
      }
      else {
        if ((this->token_kind == Kind::Arith || this->token_kind == Kind::Right)) {
          this->_Next(lex_mode_e::Arith);
          return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
        }
        else {
          if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub)) {
            w = this->_ReadCompoundWord(lex_mode_e::Arith);
            return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

  no_word = nullptr;
  this->_Peek();
  if (this->token_kind == Kind::Eof) {
    return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
  }
  else {
    if ((this->token_kind == Kind::Op || this->token_kind == Kind::Redir || this->token_kind == Kind::Arith)) {
      this->_Next(lex_mode);
      if (this->token_type == Id::Op_Newline) {
        if (this->cursor_was_newline) {
          return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
      }
      return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Right) {
        if ((this->token_type != Id::Right_Subshell && this->token_type != Id::Right_ShFunction && this->token_type != Id::Right_CasePat && this->token_type != Id::Right_ShArrayLiteral)) {
          throw Alloc<AssertionError>();
        }
        this->_Next(lex_mode);
        return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
      }
      else {
        if ((this->token_kind == Kind::Ignored || this->token_kind == Kind::WS)) {
          this->_Next(lex_mode);
          return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
        else {
          if ((this->token_kind == Kind::VSub || this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::Left || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary || this->token_kind == Kind::ExtGlob)) {
            if (this->token_type == Id::Lit_Pound) {
              this->_Next(lex_mode_e::Comment);
              this->_Peek();
              return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
            }
            else {
              w = this->_ReadCompoundWord(lex_mode);
              return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
            }
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

int WordParser::LookAhead() {
  if (this->cur_token->id == Id::WS_Space) {
    return this->lexer->LookAhead(lex_mode_e::ShCommand);
  }
  else {
    return this->cur_token->id;
  }
}

syntax_asdl::word_t* WordParser::ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* w;
  bool need_more;

  if (this->buffered_word) {
    w = this->buffered_word;
    this->buffered_word = nullptr;
  }
  else {
    while (true) {
      if (lex_mode == lex_mode_e::Arith) {
        Tuple2<syntax_asdl::word_t*, bool> tup8 = this->_ReadArithWord();
        w = tup8.at0();
        need_more = tup8.at1();
      }
      else {
        if ((lex_mode == lex_mode_e::ShCommand || lex_mode == lex_mode_e::DBracket || lex_mode == lex_mode_e::BashRegex)) {
          Tuple2<syntax_asdl::word_t*, bool> tup9 = this->_ReadWord(lex_mode);
          w = tup9.at0();
          need_more = tup9.at1();
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      if (!need_more) {
        break;
      }
    }
  }
  this->cursor = w;
  this->cursor_was_newline = word_::CommandId(this->cursor) == Id::Op_Newline;
  return this->cursor;
}

void WordParser::ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(nullptr, false, parts);
}

syntax_asdl::compound_word* WordParser::ReadForPlugin() {
  syntax_asdl::compound_word* w;

  w = Alloc<compound_word>();
  this->_ReadLikeDQ(nullptr, false, w->parts);
  return w;
}

}  // define namespace word_parse

namespace word_ {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace word_part = syntax_asdl::word_part;
using syntax_asdl::word_part_t;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part__AssocArrayLiteral;
using syntax_asdl::word_part__EscapedLiteral;
using syntax_asdl::word_part__TildeSub;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__Splice;
using syntax_asdl::word_part__FuncCall;
using syntax_asdl::word_part__ExprSub;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
using syntax_asdl::word__String;
namespace sh_lhs_expr_e = syntax_asdl::sh_lhs_expr_e;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::sh_lhs_expr__Name;
using syntax_asdl::sh_lhs_expr__IndexedName;

int LiteralId(syntax_asdl::word_part_t* p) {
  syntax_asdl::word_part_t* UP_part;

  UP_part = p;
  if (p->tag_() == word_part_e::Literal) {
    return static_cast<Token*>(UP_part)->id;
  }
  else {
    return Id::Undefined_Tok;
  }
}

Tuple3<bool, Str*, bool> _EvalWordPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  Str* val;
  Str* s;
  List<Str*>* tmp;
  List<Str*>* strs;
  bool ok;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str996, false));
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str997, false));
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return (Tuple3<bool, Str*, bool>(true, tok->val, false));
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      val = part->token->val;
      s = val->index(1);
      return (Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      tmp = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(t->val);
      }
      s = str998->join(tmp);
      return (Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      strs = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::word_part_t*> it(part->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        Tuple3<bool, Str*, bool> tup0 = _EvalWordPart(p);
        ok = tup0.at0();
        s = tup0.at1();
        if (!ok) {
          return (Tuple3<bool, Str*, bool>(false, str999, true));
        }
        strs->append(s);
      }
      return (Tuple3<bool, Str*, bool>(true, str1000->join(strs), true));
    }
      break;
    case word_part_e::CommandSub: 
    case word_part_e::SimpleVarSub: 
    case word_part_e::BracedVarSub: 
    case word_part_e::TildeSub: 
    case word_part_e::ArithSub: 
    case word_part_e::ExtGlob: 
    case word_part_e::Splice: {
      return (Tuple3<bool, Str*, bool>(false, str1001, false));
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w) {
  bool quoted;
  List<Str*>* strs;
  bool ok;
  Str* s;
  bool q;

  quoted = false;
  if (UP_w->tag_() != word_e::Compound) {
    return (Tuple3<bool, Str*, bool>(false, str1002, quoted));
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  strs = Alloc<List<Str*>>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    Tuple3<bool, Str*, bool> tup1 = _EvalWordPart(part);
    ok = tup1.at0();
    s = tup1.at1();
    q = tup1.at2();
    if (!ok) {
      return (Tuple3<bool, Str*, bool>(false, str1003, quoted));
    }
    if (q) {
      quoted = true;
    }
    strs->append(s);
  }
  return (Tuple3<bool, Str*, bool>(true, str1004->join(strs), quoted));
}

int LeftMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return tok->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::TildeSub: {
      word_part__TildeSub* part = static_cast<word_part__TildeSub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::BracedTuple: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::FuncCall: {
      word_part__FuncCall* part = static_cast<word_part__FuncCall*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::ExprSub: {
      word_part__ExprSub* part = static_cast<word_part__ExprSub*>(UP_part);
      return part->left->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int _RightMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  int spid;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return LeftMostSpanForWord(part->words->index(0));
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return tok->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      spid = part->spids->index(1);
      return spid;
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::TildeSub: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(1);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int LeftMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts)) {
        return LeftMostSpanForPart(w->parts->index(0));
      }
      else {
        return runtime::NO_SPID;
      }
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::BracedTree: {
      word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
      return LeftMostSpanForPart(w->parts->index(0));
    }
      break;
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int RightMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  syntax_asdl::word_part_t* end;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) == 0) {
        throw Alloc<AssertionError>();
      }
      else {
        end = w->parts->index(-1);
        return _RightMostSpanForPart(end);
      }
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;
  List<syntax_asdl::word_part_t*>* new_parts;
  syntax_asdl::word_part_t* part1;
  int id_;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) == 0) {
    return nullptr;
  }
  part0 = w->parts->index(0);
  if (LiteralId(part0) != Id::Lit_TildeLike) {
    return nullptr;
  }
  Token* tok0 = static_cast<Token*>(part0);
  new_parts = Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{Alloc<word_part::TildeSub>(tok0)});
  if (len(w->parts) == 1) {
    return Alloc<compound_word>(new_parts);
  }
  part1 = w->parts->index(1);
  id_ = LiteralId(part1);
  if (id_ == Id::Lit_Slash) {
    new_parts->extend(w->parts->slice(1));
    return Alloc<compound_word>(new_parts);
  }
  if ((id_ == Id::Lit_Chars and static_cast<Token*>(part1)->val->startswith(str1006))) {
    new_parts->extend(w->parts->slice(1));
    return Alloc<compound_word>(new_parts);
  }
  return nullptr;
}

void TildeDetectAssign(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* parts;
  int n;
  bool do_expand;
  syntax_asdl::word_part_t* cur;
  syntax_asdl::word_part_t* next_part;
  bool is_tilde;

  parts = w->parts;
  n = len(parts);
  parts->append(nullptr);
  do_expand = true;
  for (int i = 0; i < n; ++i) {
    cur = parts->index(i);
    if ((do_expand and LiteralId(cur) == Id::Lit_TildeLike)) {
      next_part = parts->index((i + 1));
      if (next_part) {
        is_tilde = (LiteralId(next_part) == Id::Lit_Colon or (LiteralId(next_part) == Id::Lit_Chars and static_cast<Token*>(next_part)->val->startswith(str1007)));
      }
      else {
        is_tilde = true;
      }
      if (is_tilde) {
        parts->set(i, Alloc<word_part::TildeSub>(static_cast<Token*>(cur)));
      }
    }
    do_expand = LiteralId(cur) == Id::Lit_Colon;
  }
  parts->pop();
}

List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::compound_word* t;

  out = Alloc<List<syntax_asdl::word_t*>>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    t = TildeDetect(w);
    if (t) {
      out->append(t);
    }
    else {
      out->append(w);
    }
  }
  return out;
}

bool HasArrayPart(syntax_asdl::compound_word* w) {
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    if (part->tag_() == word_part_e::ShArrayLiteral) {
      return true;
    }
  }
  return false;
}

Str* ShFunctionName(syntax_asdl::compound_word* w) {
  bool ok;
  Str* s;
  bool quoted;

  Tuple3<bool, Str*, bool> tup2 = StaticEval(w);
  ok = tup2.at0();
  s = tup2.at1();
  quoted = tup2.at2();
  if ((!ok or quoted)) {
    return str1008;
  }
  return s;
}

syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  UP_part0 = w->parts->index(0);
  if (LiteralId(UP_part0) != Id::Lit_ArithVarLike) {
    return nullptr;
  }
  return static_cast<Token*>(UP_part0);
}

bool IsVarLike(syntax_asdl::compound_word* w) {
  if (len(w->parts) == 0) {
    return false;
  }
  return LiteralId(w->parts->index(0)) == Id::Lit_VarLike;
}

Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> DetectShAssignment(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  int n;
  syntax_asdl::word_part_t* UP_part0;
  int id0;
  syntax_asdl::word_part_t* UP_part;

  no_token = nullptr;
  n = len(w->parts);
  if (n == 0) {
    return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
  }
  UP_part0 = w->parts->index(0);
  id0 = LiteralId(UP_part0);
  if (id0 == Id::Lit_VarLike) {
    Token* tok = static_cast<Token*>(UP_part0);
    return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(tok, no_token, 1));
  }
  if (id0 == Id::Lit_ArrayLhsOpen) {
    Token* tok0 = static_cast<Token*>(UP_part0);
    if (n < 2) {
      return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
    }
    for (int i = 1; i < n; ++i) {
      UP_part = w->parts->index(i);
      if (LiteralId(UP_part) == Id::Lit_ArrayLhsClose) {
        Token* tok_close = static_cast<Token*>(UP_part);
        return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(tok0, tok_close, (i + 1)));
      }
    }
  }
  return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
}

Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* parts;
  int n;
  int id_;
  syntax_asdl::compound_word* key;
  syntax_asdl::compound_word* value;
  Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* ret;

  parts = w->parts;
  if (LiteralId(parts->index(0)) != Id::Lit_LBracket) {
    return nullptr;
  }
  n = len(parts);
  for (int i = 0; i < n; ++i) {
    id_ = LiteralId(parts->index(i));
    if (id_ == Id::Lit_ArrayLhsClose) {
      key = Alloc<compound_word>(parts->slice(1, i));
      value = Alloc<compound_word>(parts->slice((i + 1)));
      ret = (Alloc<Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>>(key, value));
      return ret;
    }
  }
  return nullptr;
}

Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> KeywordToken(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  syntax_asdl::word_part_t* UP_part0;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  no_token = nullptr;
  if (len(w->parts) != 1) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  }
  UP_part0 = w->parts->index(0);
  token_type = LiteralId(UP_part0);
  if (token_type == Id::Undefined_Tok) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  }
  token_kind = consts::GetKind(token_type);
  if (token_kind == Kind::ControlFlow) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(token_kind, static_cast<Token*>(UP_part0)));
  }
  return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
}

syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;

  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  part0 = w->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    return static_cast<Token*>(part0);
  }
  return nullptr;
}

int ArithId(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return tok->id;
  }
  return Id::Word_Compound;
}

int BoolId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->id;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      if ((token_type == Id::KW_Bang || token_type == Id::Lit_DRightBracket)) {
        return token_type;
      }
      token_kind = consts::GetKind(token_type);
      if ((token_kind == Kind::BoolUnary || token_kind == Kind::BoolBinary)) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int CommandId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      else {
        if ((token_type == Id::Lit_LBrace || token_type == Id::Lit_RBrace || token_type == Id::Lit_Equals || token_type == Id::Lit_Underscore || token_type == Id::ControlFlow_Return)) {
          return token_type;
        }
      }
      token_kind = consts::GetKind(token_type);
      if (token_kind == Kind::KW) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return consts::GetKind(tok->id);
  }
  return Kind::Word;
}

bool IsVarSub(syntax_asdl::word_t* w) {
  return false;
}

int SpanForLhsExpr(syntax_asdl::sh_lhs_expr_t* node) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  List<int>* spids;

  UP_node = node;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      spids = node->spids;
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      spids = node->spids;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  if (len(spids)) {
    return spids->index(0);
  }
  else {
    return runtime::NO_SPID;
  }
}

int SpanIdFromError(error::_ErrorWithLocation* error) {
  if (error->span_id != runtime::NO_SPID) {
    return error->span_id;
  }
  if (error->token) {
    return error->token->span_id;
  }
  if (error->part) {
    return LeftMostSpanForPart(error->part);
  }
  if (error->word) {
    return LeftMostSpanForWord(error->word);
  }
  return runtime::NO_SPID;
}

syntax_asdl::compound_word* ErrorWord(Str* error_str) {
  syntax_asdl::Token* t;

  t = Alloc<Token>(Id::Lit_Chars, runtime::NO_SPID, error_str);
  return Alloc<compound_word>(Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{t}));
}

Str* Pretty(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  if (w->tag_() == word_e::String) {
    word__String* w = static_cast<word__String*>(UP_w);
    if (w->id == Id::Eof_Real) {
      return str1009;
    }
    else {
      return repr(w->s);
    }
  }
  else {
    return str(w);
  }
}

}  // define namespace word_

namespace grammar {  // define

Grammar::Grammar() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Grammar)) {
  this->symbol2number = Alloc<Dict<Str*, int>>();
  this->number2symbol = Alloc<Dict<int, Str*>>();
  this->states = Alloc<List<List<Tuple2<int, int>*>*>>();
  this->dfas = Alloc<Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>>();
  this->labels = Alloc<List<int>>(std::initializer_list<int>{0});
  this->keywords = Alloc<Dict<Str*, int>>();
  this->tokens = Alloc<Dict<int, int>>();
  this->symbol2label = Alloc<Dict<Str*, int>>();
  this->start = 256;
}

}  // define namespace grammar

namespace pnode {  // define

PNode::PNode(int typ, syntax_asdl::Token* tok, List<pnode::PNode*>* children) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(PNode)) {
  this->typ = typ;
  this->tok = tok;
  this->children = children;
}

}  // define namespace pnode

namespace cgi {  // define

Str* escape(Str* s) {
  s = s->replace(str1017, str1018);
  s = s->replace(str1019, str1020);
  s = s->replace(str1021, str1022);
  return s;
}

}  // define namespace cgi

namespace os_path {  // define
Str* extsep = str1023;
Str* sep = str1024;

Str* join(Str* s1, Str* s2) {
  if ((s2->startswith(str1025) or len(s1) == 0)) {
    return s2;
  }
  if (s1->endswith(str1026)) {
    return str_concat(s1, s2);
  }
  return fmt298(s1, s2);
}

Tuple2<Str*, Str*> split(Str* p) {
  int i;
  Str* head;
  Str* tail;

  i = (p->rfind(str1028) + 1);
  head = p->slice(0, i);
  tail = p->slice(i);
  if ((len(head) and !(str_equals(head, str_repeat(str1029, len(head)))))) {
    head = head->rstrip(str1030);
  }
  return (Tuple2<Str*, Str*>(head, tail));
}

Tuple2<Str*, Str*> _splitext(Str* p, Str* sep, Str* extsep) {
  int sepIndex;
  int dotIndex;
  int filenameIndex;

  sepIndex = p->rfind(sep);
  dotIndex = p->rfind(extsep);
  if (dotIndex > sepIndex) {
    filenameIndex = (sepIndex + 1);
    while (filenameIndex < dotIndex) {
      if (!(str_equals(p->index(filenameIndex), extsep))) {
        return (Tuple2<Str*, Str*>(p->slice(0, dotIndex), p->slice(dotIndex)));
      }
      filenameIndex += 1;
    }
  }
  return (Tuple2<Str*, Str*>(p, str1031));
}

Tuple2<Str*, Str*> splitext(Str* p) {
  return _splitext(p, sep, extsep);
}

Str* basename(Str* p) {
  int i;

  i = (p->rfind(str1032) + 1);
  return p->slice(i);
}

Str* dirname(Str* p) {
  int i;
  Str* head;

  i = (p->rfind(str1033) + 1);
  head = p->slice(0, i);
  if ((head and !(str_equals(head, str_repeat(str1034, len(head)))))) {
    head = head->rstrip(str1035);
  }
  return head;
}

Str* normpath(Str* path) {
  Str* slash;
  Str* dot;
  int initial_slashes;
  List<Str*>* comps;
  List<Str*>* new_comps;

  slash = str1036;
  dot = str1037;
  if (str_equals(path, str1038)) {
    return dot;
  }
  initial_slashes = path->startswith(str1039);
  if ((initial_slashes and (path->startswith(str1040) and !path->startswith(str1041)))) {
    initial_slashes = 2;
  }
  comps = path->split(str1042);
  new_comps = Alloc<List<Str*>>();
  for (ListIter<Str*> it(comps); !it.Done(); it.Next()) {
    Str* comp = it.Value();
    if ((len(comp) == 0 or str_equals(comp, str1043))) {
      continue;
    }
    if ((!(str_equals(comp, str1044)) or ((initial_slashes == 0 and len(new_comps) == 0) or (len(new_comps) and str_equals(new_comps->index(-1), str1045))))) {
      new_comps->append(comp);
    }
    else {
      if (len(new_comps)) {
        new_comps->pop();
      }
    }
  }
  comps = new_comps;
  path = slash->join(comps);
  if (initial_slashes) {
    path = str_concat(str_repeat(slash, initial_slashes), path);
  }
  return len(path) ? path : dot;
}

bool isabs(Str* s) {
  return s->startswith(str1046);
}

Str* abspath(Str* path) {
  Str* cwd;

  if (!isabs(path)) {
    cwd = posix::getcwd();
    path = join(cwd, path);
  }
  return normpath(path);
}

}  // define namespace os_path

namespace qsn_native {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using syntax_asdl::Token;
using types_asdl::lex_mode_e;
using types_asdl::lex_mode_t;

bool _IsWhitespace(Str* s) {
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* ch = it.Value();
    if (!str_contains(str1047, ch)) {
      return false;
    }
  }
  return true;
}

List<syntax_asdl::Token*>* Parse(lexer::Lexer* lexer) {
  syntax_asdl::Token* tok;
  List<syntax_asdl::Token*>* result;
  id_kind_asdl::Kind_t kind;

  tok = lexer->Read(lex_mode_e::QSN);
  result = Alloc<List<syntax_asdl::Token*>>();
  while (true) {
    tok = lexer->Read(lex_mode_e::QSN);
    if (tok->id == Id::Unknown_Tok) {
      p_die(fmt299(), tok);
    }
    kind = consts::GetKind(tok->id);
    if (kind != Kind::Char) {
      break;
    }
    result->append(tok);
  }
  if (tok->id != Id::Right_SingleQuote) {
    p_die(fmt300(), tok);
  }
  tok = lexer->Read(lex_mode_e::SQ_C);
  if (tok->id == Id::Char_Literals) {
    if (!_IsWhitespace(tok->val)) {
      p_die(fmt301(), tok);
    }
    tok = lexer->Read(lex_mode_e::QSN);
  }
  if (tok->id != Id::Eof_Real) {
    p_die(fmt302(), tok);
  }
  return result;
}

}  // define namespace qsn_native

namespace qsn {  // define
int BIT8_UTF8 = 0;
int BIT8_U_ESCAPE = 1;
int BIT8_X_ESCAPE = 2;
int MUST_QUOTE = 4;

bool _encode(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts) {
  if (bit8_display == BIT8_X_ESCAPE) {
    _encode_bytes_x(s, shell_compat, parts);
    return true;
  }
  else {
    return _encode_runes(s, bit8_display, shell_compat, parts);
  }
}

Str* maybe_shell_encode(Str* s) {
  return maybe_shell_encode(s, 0);
}

Str* maybe_shell_encode(Str* s, int flags) {
  int quote;
  int must_quote;
  int bit8_display;
  List<Str*>* parts;
  bool valid_utf8;
  Str* prefix;

  quote = 0;
  must_quote = (flags & 4);
  bit8_display = (flags & 3);
  if (len(s) == 0) {
    quote = 1;
  }
  else {
    for (StrIter it(s); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if ((!must_quote and IsPlainChar(ch))) {
        continue;
      }
      quote = 1;
      if ((str_contains(str1052, ch) or IsUnprintableLow(ch))) {
        quote = 2;
        break;
      }
    }
  }
  if (quote == 0) {
    return s;
  }
  parts = Alloc<List<Str*>>();
  valid_utf8 = _encode(s, bit8_display, true, parts);
  if ((!valid_utf8 or quote == 2)) {
    prefix = str1053;
  }
  else {
    prefix = str1054;
  }
  parts->append(str1055);
  return str_concat(prefix, str1056->join(parts));
}

Str* maybe_encode(Str* s) {
  return maybe_encode(s, BIT8_UTF8);
}

Str* maybe_encode(Str* s, int bit8_display) {
  int quote;
  List<Str*>* parts;

  quote = 0;
  if (len(s) == 0) {
    quote = 1;
  }
  else {
    for (StrIter it(s); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if (IsPlainChar(ch)) {
        continue;
      }
      quote = 1;
    }
  }
  if (!quote) {
    return s;
  }
  parts = Alloc<List<Str*>>();
  parts->append(str1057);
  _encode(s, bit8_display, false, parts);
  parts->append(str1058);
  return str1059->join(parts);
}

Str* encode(Str* s, int bit8_display) {
  List<Str*>* parts;

  parts = Alloc<List<Str*>>();
  parts->append(str1060);
  _encode(s, bit8_display, false, parts);
  parts->append(str1061);
  return str1062->join(parts);
}

void _encode_bytes_x(Str* s, bool shell_compat, List<Str*>* parts) {
  Str* part;

  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* byte = it.Value();
    if (str_equals(byte, str1063)) {
      part = str1064;
    }
    else {
      if (str_equals(byte, str1065)) {
        part = str1066;
      }
      else {
        if (str_equals(byte, str1067)) {
          part = str1068;
        }
        else {
          if (str_equals(byte, str1069)) {
            part = str1070;
          }
          else {
            if (str_equals(byte, str1071)) {
              part = str1072;
            }
            else {
              if (str_equals(byte, str1073)) {
                part = shell_compat ? str1074 : str1075;
              }
              else {
                if (IsUnprintableLow(byte)) {
                  part = XEscape(byte);
                }
                else {
                  if (IsUnprintableHigh(byte)) {
                    part = XEscape(byte);
                  }
                  else {
                    part = byte;
                  }
                }
              }
            }
          }
        }
      }
    }
    parts->append(part);
  }
}
int Ascii = 0;
int Begin2 = 1;
int Begin3 = 2;
int Begin4 = 3;
int Cont = 4;
int Invalid = 5;
int Start = 0;
int B2_1 = 1;
int B3_1 = 2;
int B4_1 = 3;
int B3_2 = 4;
int B4_2 = 5;
int B4_3 = 6;

bool _encode_runes(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts) {
  bool valid_utf8;
  int state;
  Str* r1;
  Str* r2;
  Str* r3;
  int b;
  int typ;
  Str* out;
  int rune;

  valid_utf8 = true;
  state = Start;
  r1 = str1076;
  r2 = str1077;
  r3 = str1078;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* byte = it.Value();
    b = ord(byte);
    if (b < 127) {
      typ = Ascii;
    }
    else {
      if ((b >> 6) == 2) {
        typ = Cont;
      }
      else {
        if ((b >> 5) == 6) {
          typ = Begin2;
        }
        else {
          if ((b >> 4) == 14) {
            typ = Begin3;
          }
          else {
            if ((b >> 3) == 30) {
              typ = Begin4;
            }
            else {
              typ = Invalid;
            }
          }
        }
      }
    }
    if (typ != Cont) {
      if (state >= B2_1) {
        valid_utf8 = false;
        parts->append(XEscape(r1));
      }
      if (state >= B3_2) {
        parts->append(XEscape(r2));
      }
      if (state >= B4_3) {
        parts->append(XEscape(r3));
      }
    }
    if (typ == Ascii) {
      state = Start;
      if (str_equals(byte, str1079)) {
        out = str1080;
      }
      else {
        if (str_equals(byte, str1081)) {
          out = str1082;
        }
        else {
          if (str_equals(byte, str1083)) {
            out = str1084;
          }
          else {
            if (str_equals(byte, str1085)) {
              out = str1086;
            }
            else {
              if (str_equals(byte, str1087)) {
                out = str1088;
              }
              else {
                if (str_equals(byte, str1089)) {
                  out = shell_compat ? str1090 : str1091;
                }
                else {
                  if (IsUnprintableLow(byte)) {
                    if (bit8_display == BIT8_U_ESCAPE) {
                      out = UEscape(ord(byte));
                    }
                    else {
                      out = XEscape(byte);
                    }
                  }
                  else {
                    out = byte;
                  }
                }
              }
            }
          }
        }
      }
      parts->append(out);
    }
    else {
      if (typ == Begin2) {
        state = B2_1;
        r1 = byte;
      }
      else {
        if (typ == Begin3) {
          state = B3_1;
          r1 = byte;
        }
        else {
          if (typ == Begin4) {
            state = B4_1;
            r1 = byte;
          }
          else {
            if (typ == Invalid) {
              state = Start;
              parts->append(XEscape(byte));
              valid_utf8 = false;
            }
            else {
              if (typ == Cont) {
                if (state == Start) {
                  parts->append(XEscape(byte));
                  valid_utf8 = false;
                }
                else {
                  if (state == B2_1) {
                    if (bit8_display == BIT8_UTF8) {
                      out = str_concat(r1, byte);
                    }
                    else {
                      rune = (ord(byte) & 63);
                      rune |= ((ord(r1) & 31) << 6);
                      out = UEscape(rune);
                    }
                    parts->append(out);
                    state = Start;
                  }
                  else {
                    if (state == B3_1) {
                      r2 = byte;
                      state = B3_2;
                    }
                    else {
                      if (state == B3_2) {
                        if (bit8_display == BIT8_UTF8) {
                          out = str_concat(str_concat(r1, r2), byte);
                        }
                        else {
                          rune = (ord(byte) & 63);
                          rune |= ((ord(r2) & 63) << 6);
                          rune |= ((ord(r1) & 15) << 12);
                          out = UEscape(rune);
                        }
                        parts->append(out);
                        state = Start;
                      }
                      else {
                        if (state == B4_1) {
                          r2 = byte;
                          state = B4_2;
                        }
                        else {
                          if (state == B4_2) {
                            r3 = byte;
                            state = B4_3;
                          }
                          else {
                            if (state == B4_3) {
                              if (bit8_display == BIT8_UTF8) {
                                out = str_concat(str_concat(str_concat(r1, r2), r3), byte);
                              }
                              else {
                                rune = (ord(byte) & 63);
                                rune |= ((ord(r3) & 63) << 6);
                                rune |= ((ord(r2) & 63) << 12);
                                rune |= ((ord(r1) & 7) << 18);
                                out = UEscape(rune);
                              }
                              parts->append(out);
                              state = Start;
                            }
                            else {
                              throw Alloc<AssertionError>();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
  if (state >= B2_1) {
    valid_utf8 = false;
    parts->append(XEscape(r1));
  }
  if (state >= B3_2) {
    parts->append(XEscape(r2));
  }
  if (state >= B4_3) {
    parts->append(XEscape(r3));
  }
  return valid_utf8;
}

Str* maybe_tsv_encode(Str* s, int bit8_display) {
  ;  // pass
}

Str* tsv_decode(Str* s) {
  ;  // pass
}

}  // define namespace qsn

namespace builtin_bracket {  // define
namespace Id = id_kind_asdl::Id;
namespace value = runtime_asdl::value;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__String;
namespace bool_expr = syntax_asdl::bool_expr;
using types_asdl::lex_mode_e;

_StringWordEmitter::_StringWordEmitter(runtime_asdl::cmd_value__Argv* cmd_val) {
  this->cmd_val = cmd_val;
  this->i = 0;
  this->n = len(cmd_val->argv);
}

syntax_asdl::word__String* _StringWordEmitter::ReadWord(types_asdl::lex_mode_t unused_lex_mode) {
  syntax_asdl::word__String* w;
  Str* s;
  int left_spid;
  int id_;

  if (this->i == this->n) {
    w = Alloc<word::String>(Id::Eof_Real, str1092, runtime::NO_SPID);
    return w;
  }
  s = this->cmd_val->argv->index(this->i);
  left_spid = this->cmd_val->arg_spids->index(this->i);
  this->i += 1;
  id_ = match::BracketUnary(s);
  if (id_ == Id::Undefined_Tok) {
    id_ = match::BracketBinary(s);
  }
  if (id_ == Id::Undefined_Tok) {
    id_ = match::BracketOther(s);
  }
  if (id_ == Id::Undefined_Tok) {
    id_ = Id::Word_Compound;
  }
  w = Alloc<word::String>(id_, s, left_spid);
  return w;
}

syntax_asdl::word__String* _StringWordEmitter::Read() {
  return this->ReadWord(lex_mode_e::ShCommand);
}

Str* _StringWordEmitter::Peek(int offset) {
  return this->cmd_val->argv->index((this->i + offset));
}

void _StringWordEmitter::Rewind(int offset) {
  this->i -= offset;
}

_WordEvaluator::_WordEvaluator() : word_eval::StringWordEvaluator() {
}

runtime_asdl::value__Str* _WordEvaluator::EvalWordToString(syntax_asdl::word_t* w) {
  return EvalWordToString(w, quote_e::Default);
}

runtime_asdl::value__Str* _WordEvaluator::EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind) {
  word__String* string_word = static_cast<word__String*>(w);
  return Alloc<value::Str>(string_word->s);
}

syntax_asdl::bool_expr_t* _TwoArgs(builtin_bracket::_StringWordEmitter* w_parser) {
  syntax_asdl::word__String* w0;
  syntax_asdl::word__String* w1;
  int unary_id;

  w0 = w_parser->Read();
  w1 = w_parser->Read();
  if (maybe_str_equals(w0->s, str1093)) {
    return Alloc<bool_expr::LogicalNot>(Alloc<bool_expr::WordTest>(w1));
  }
  unary_id = match::BracketUnary(w0->s);
  if (unary_id == Id::Undefined_Tok) {
    p_die(fmt303(w0->s), w0);
  }
  return Alloc<bool_expr::Unary>(unary_id, w1);
}

syntax_asdl::bool_expr_t* _ThreeArgs(builtin_bracket::_StringWordEmitter* w_parser) {
  syntax_asdl::word__String* w0;
  syntax_asdl::word__String* w1;
  syntax_asdl::word__String* w2;
  int binary_id;
  syntax_asdl::bool_expr_t* child;

  w0 = w_parser->Read();
  w1 = w_parser->Read();
  w2 = w_parser->Read();
  binary_id = match::BracketBinary(w1->s);
  if (binary_id != Id::Undefined_Tok) {
    return Alloc<bool_expr::Binary>(binary_id, w0, w2);
  }
  if (maybe_str_equals(w1->s, str1095)) {
    return Alloc<bool_expr::LogicalAnd>(Alloc<bool_expr::WordTest>(w0), Alloc<bool_expr::WordTest>(w2));
  }
  if (maybe_str_equals(w1->s, str1096)) {
    return Alloc<bool_expr::LogicalOr>(Alloc<bool_expr::WordTest>(w0), Alloc<bool_expr::WordTest>(w2));
  }
  if (maybe_str_equals(w0->s, str1097)) {
    w_parser->Rewind(2);
    child = _TwoArgs(w_parser);
    return Alloc<bool_expr::LogicalNot>(child);
  }
  if ((maybe_str_equals(w0->s, str1098) and maybe_str_equals(w2->s, str1099))) {
    return Alloc<bool_expr::WordTest>(w1);
  }
  p_die(fmt304(w1->s), w1);
}

Test::Test(bool need_right_bracket, optview::Exec* exec_opts, state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->need_right_bracket = need_right_bracket;
  this->exec_opts = exec_opts;
  this->mem = mem;
  this->errfmt = errfmt;
}

int Test::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  List<Str*>* strs;
  builtin_bracket::_StringWordEmitter* w_parser;
  bool_parse::BoolParser* b_parser;
  syntax_asdl::bool_expr_t* bool_node;
  int n;
  syntax_asdl::word__String* w;
  Str* a0;
  syntax_asdl::bool_expr_t* child;
  builtin_bracket::_WordEvaluator* word_ev;
  sh_expr_eval::BoolEvaluator* bool_ev;
  bool b;
  int status;

  if (this->need_right_bracket) {
    strs = cmd_val->argv;
    if ((!strs or !(str_equals(strs->index(-1), str1101)))) {
      this->errfmt->Print_(str1102, cmd_val->arg_spids->index(0));
      return 2;
    }
    cmd_val->argv->pop();
    cmd_val->arg_spids->pop();
  }
  w_parser = Alloc<_StringWordEmitter>(cmd_val);
  w_parser->Read();
  b_parser = Alloc<bool_parse::BoolParser>(w_parser);
  bool_node = nullptr;
  n = (len(cmd_val->argv) - 1);
  try {
    if (n == 0) {
      return 1;
    }
    else {
      if (n == 1) {
        w = w_parser->Read();
        bool_node = Alloc<bool_expr::WordTest>(w);
      }
      else {
        if (n == 2) {
          bool_node = _TwoArgs(w_parser);
        }
        else {
          if (n == 3) {
            bool_node = _ThreeArgs(w_parser);
          }
        }
      }
    }
    if (n == 4) {
      a0 = w_parser->Peek(0);
      if (str_equals(a0, str1103)) {
        w_parser->Read();
        child = _ThreeArgs(w_parser);
        bool_node = Alloc<bool_expr::LogicalNot>(child);
      }
      else {
        if ((str_equals(a0, str1104) and str_equals(w_parser->Peek(3), str1105))) {
          w_parser->Read();
          bool_node = _TwoArgs(w_parser);
        }
        else {
          ;  // pass
        }
      }
    }
    if (bool_node == nullptr) {
      bool_node = b_parser->ParseForBuiltin();
    }
  }
  catch (error::Parse* e) {
    this->errfmt->PrettyPrintError(e, str1106);
    return 2;
  }
  word_ev = Alloc<_WordEvaluator>();
  bool_ev = Alloc<sh_expr_eval::BoolEvaluator>(this->mem, this->exec_opts, nullptr, this->errfmt);
  bool_ev->Init_AlwaysStrict();
  bool_ev->word_ev = word_ev;
  bool_ev->CheckCircularDeps();
  try {
    b = bool_ev->EvalB(bool_node);
  }
  catch (error::_ErrorWithLocation* e) {
    this->errfmt->PrettyPrintError(e, str1107);
    return 2;
  }
  status = b ? 0 : 1;
  return status;
}

}  // define namespace builtin_bracket

int main(int argc, char **argv) {
  gc_heap::gHeap.Init(400 << 20);  // 400 MiB matches dumb_alloc.cc
  auto* args = Alloc<List<Str*>>();
  for (int i = 0; i < argc; ++i) {
    args->append(Alloc<Str>(argv[i]));
  }
  int status;

  // For benchmarking
  char* repeat = getenv("REPEAT");
  if (repeat) {
    Str* r = Alloc<Str>(repeat);
    int n = to_int(r);
    log("Running %d times", n);
    for (int i = 0; i < n; ++i) { 
      status = osh_eval::main(args);
    }
    // TODO: clear memory?
  } else {
    status = osh_eval::main(args);
  }

  dumb_alloc::Summarize();
  return status;
}
