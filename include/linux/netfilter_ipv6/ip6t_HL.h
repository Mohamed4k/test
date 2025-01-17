/* TTL modification module for IP tables
* (C) 2000 by Harald Welte <laforge@netfilter.org> */
#ifndef _IP6T_HL_H
#define _IP6T_HL_H
#include <linux/types.h>
enum {
    IP6T_HL_SET = 0,
    IP6T_HL_INC,
    IP6T_HL_DEC
};
#define IP6T_HL_MAXMODE IP6T_HL_DEC
struct ip6t_HL_info {
   __u8 mode;
   __u8 hop_limit;
};
#endif
