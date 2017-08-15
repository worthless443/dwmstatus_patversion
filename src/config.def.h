/* Status bar refresh rates on battery and on AC */
static const unsigned int rrate_battery	= 30;
static const unsigned int rrate_ac	= 3;


/* Hardcoded file locations */

/* File indicating AC is present */
#define AC_FILE		"/sys/class/power_supply/AC/online"

/* File with battery value */
#define BAT_CAPFILE	"/sys/class/power_supply/BAT0/capacity"

/* File with current frequency of first core */
#define CPU_FREQFILE	"/sys/devices/system/cpu/cpufreq/policy0/scaling_cur_freq"

/* File with current temperature of first core */
#define CPU_TEMPFILE	"/sys/devices/platform/coretemp.0/hwmon/hwmon0/temp1_input"

/* File with current connectivity status of (wired) network interface */
#define ETH_CARFILE	"/sys/class/net/enp0s25/carrier"

/* File with current connectivity status of (wireless) network interface */
#define WLAN_CARFILE	"/sys/class/net/wlp4s0/carrier"

/* File with volume of speakers (hex value) */
#define SOUNDFILE	"/proc/asound/card1/codec#0"

/* Directory for battery presence */
#define BAT_DIR		"/sys/class/power_supply/BAT0"
