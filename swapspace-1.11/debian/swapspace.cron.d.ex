#
# Regular cron jobs for the swapspace package
#
0 4	* * *	root	[ -x /usr/bin/swapspace_maintenance ] && /usr/bin/swapspace_maintenance
