/* slstatus configuration */
/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* output formats */
static const struct arg args[] = {
	/* function, format, argument */
  { netspeed_rx, "%sB/s   ", "wlp3s0" },
	{ run_command, "%s    ", "find /home/ak/.mail/Inbox/new -type f -printf . | wc -c" },
  { cpu_perc,     "%s     ", "NULL" },
  { ram_used,   "%s    ", "NULL" },
  { temp,   "%sC     ",  "/sys/class/thermal/thermal_zone0/temp" },
	{ wifi_essid, "%s    ", "wlp3s0" },
	{ battery_state, "%s ", "BAT0" },
	{ battery_perc, "%3s%%     ", "BAT0" },
  { battery_remaining, "%s   ", "BAT0" },
	{ datetime, "%s", "%a %d %H:%M" },
};
