/* Automatically generated by po2tbl.sed from ypbind-mt.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"Not enough memory !", 2},
  {"internal error: add_server called with NULL domain.", 3},
  {"add_server() domain: %s, broadcast, slot: 0", 4},
  {"add_server() domain: %s, host: %s, %sbroadcast, slot: %d", 5},
  {"unknown", 6},
  {"no", 7},
  {"Unknown host: %s", 8},
  {"Host name lookup failure", 9},
  {"No address associated with name: %s", 10},
  {"Unknown server error", 11},
  {"gethostbyname: Unknown error", 12},
  {"Answer for domain '%s' from server '%s'", 13},
  {"Answer for domain '%s' from unknown server '%s'", 14},
  {"Answer for domain '%s' from '%s' on illegal port.", 15},
  {"ping host '%s', domain '%s'", 16},
  {"host '%s' doesn't answer.", 17},
  {"clnt_create for server '%s' (domain '%s') failed", 18},
  {"domain '%s' not served by '%s'", 19},
  {"Pinging all active server.", 20},
  {"Check new for fastest server.", 21},
  {"Server for domain '%s' doesn't answer.", 22},
  {"Server '%s' for domain '%s' doesn't answer.", 23},
  {"Trying entry: %s", 24},
  {"parsed domain '%s' server '%s'", 25},
  {"parsed domain '%s' broadcast", 26},
  {"parsed ypserver %s", 27},
  {"Entry \"%s\" is not valid, ignore it !", 28},
  {"No entry found.", 29},
  {"cannot create pidfile %s", 30},
  {"fcntl error: %s", 31},
  {"ypbind-mt already running (pid %d) - exiting", 32},
  {"cannot lock pidfile", 33},
  {"SIGCHLD arrived, what should I do ?", 34},
  {"Signal (%d) for quitting program arrived.", 35},
  {"cannot unlock pidfile", 36},
  {"SIGHUP arrived, reloading config file.", 37},
  {"Unknown signal: %d", 38},
  {"Usage:\n", 39},
  {"\
\typbind [-broadcast | -ypset | -ypsetme] [-p port] [-f configfile]\n\
\t  [-no-ping] [-broken-server] [-debug]\n", 40},
  {"\typbind -c [-f configfile]\n", 41},
  {"\typbind --version\n", 42},
  {"Config file %s is ok.\n", 43},
  {"domainname not set - aborting.\n", 44},
  {"ypbind must be run as root\n", 45},
  {"Could not create %s: %s\n", 46},
  {"Could not change to directory %s: %s\n", 47},
  {"No NIS server and no -broadcast option specified.\n", 48},
  {"Add a NIS server to the %s configuration file,\n", 49},
  {"or start ypbind with the -broadcast option.\n", 50},
  {"Could not block signals.", 51},
  {"Cannot create UDP: %s", 52},
  {"Cannot bind UDP: %s", 53},
  {"Cannot create udp service.", 54},
  {"Unable to register (YPBINDPROG, YPBINDVERS, udp).", 55},
  {"Unable to register (YPBINDPROG, YPBINDOLDVERS, udp).", 56},
  {"Cannot create TCP: %s", 57},
  {"Cannot bind TCP: %s", 58},
  {"Cannot create tcp service.\n", 59},
  {"Unable to register (YPBINDPROG, YPBINDVERS, tcp).", 60},
  {"Unable to register (YPBINDPROG, YPBINDOLDVERS, tcp).", 61},
  {"svc_run returned.", 62},
  {"Domain name '%s' has embedded slash -- rejecting.", 63},
  {"Status: YPBIND_FAIL_VAL", 64},
  {"Status: YPBIND_SUCC_VAL", 65},
  {"User from '%s' try's to change the binding.", 66},
  {"Changing the binding is not allowed.", 67},
  {"SETDOM request doesn't come from reserved port.", 68},
  {"unable to free arguments", 69},
  {"unable to free results", 70},
};

int _msg_tbl_length = 70;
