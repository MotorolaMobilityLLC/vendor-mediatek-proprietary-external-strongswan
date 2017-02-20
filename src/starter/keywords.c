/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'1-2,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/*
 * Copyright (C) 2005 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 184
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 14
#define MAX_HASH_VALUE 385
/* maximum key range = 372, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386,  40,
      189, 386,  52, 386,   8, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386,   4, 386,  78, 386,  83,
       98,   3,  45, 101,  34,   2, 386, 173,   3, 110,
       27,  49,  40, 386,   4,  11,   4, 143,  13,   2,
        3,  18,   8, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386, 386, 386, 386, 386,
      386, 386, 386, 386, 386, 386
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"left",              KW_LEFT},
    {"right",             KW_RIGHT},
    {"lifetime",          KW_KEYLIFE},
    {"rightimei",         KW_RIGHTIMEI},
    {"leftcert",          KW_LEFTCERT},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"rightintsubnet",    KW_RIGHTINTSUBNET},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"rightikeportnatt",  KW_RIGHTIKEPORTNATT},
    {"type",              KW_TYPE},
    {"rekey",             KW_REKEY},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"server_nocert",     KW_SERVER_NOCERT},
    {"leftsigkey",        KW_LEFTSIGKEY},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"rightrsasigkey",    KW_RIGHTSIGKEY},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightsigkey",       KW_RIGHTSIGKEY},
    {"rightidr_apn",      KW_RIGHTIDR_APN},
    {"leftrsasigkey",     KW_LEFTSIGKEY},
    {"retrans_base",      KW_RETRANS_BASE},
    {"leftintsubnet",     KW_LEFTINTSUBNET},
    {"leftdns",           KW_LEFTDNS},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"esp",               KW_ESP},
    {"retrans_tries",     KW_RETRANS_TRIES},
    {"inactivity",        KW_INACTIVITY},
    {"leftnexthop",       KW_LEFT_DEPRECATED},
    {"rightsubnetwithin", KW_RIGHTSUBNET},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"encrkeydisplay",    KW_ENCRKEYDISPLAY},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"plutostart",        KW_SETUP_DEPRECATED},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"rightforcetsifull", KW_RIGHTFORCETSIFULL},
    {"leftforcetsifull",  KW_LEFTFORCETSIFULL},
    {"rightsourceif",     KW_RIGHTSOURCEIF},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"reauth",            KW_REAUTH},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"rightnexthop",      KW_RIGHT_DEPRECATED},
    {"interface",         KW_INTERFACE},
    {"no_initct",         KW_NO_INIT_CONTACT},
    {"fragmentation",     KW_FRAGMENTATION},
    {"retrans_to",        KW_RETRANS_TO},
    {"interfaces",        KW_SETUP_DEPRECATED},
    {"crluri",            KW_CRLURI},
    {"pfs",               KW_PFS_DEPRECATED},
    {"rightpcscf",        KW_RIGHTPCSCF},
    {"rightcert",         KW_RIGHTCERT},
    {"hidetos",           KW_SETUP_DEPRECATED},
    {"certuribase",       KW_CERTURIBASE},
    {"lifepackets",       KW_LIFEPACKETS},
    {"rightcustcpimei",   KW_RIGHTCUSTCPIMEI},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"certreq_critical",    KW_CERTREQ_CRITICAL},
    {"crlcheckinterval",  KW_SETUP_DEPRECATED},
    {"reqid",             KW_REQID},
    {"virtual_private",   KW_SETUP_DEPRECATED},
    {"leftsourceif",      KW_LEFTSOURCEIF},
    {"rightid",           KW_RIGHTID},
    {"rightcustcppcscf6", KW_RIGHTCUSTCPPCSCF6},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"force_keepalive",   KW_SETUP_DEPRECATED},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"rightforcetsi64",   KW_RIGHTFORCETSI64},
    {"forceencaps",       KW_FORCEENCAPS},
    {"xauth",             KW_XAUTH},
    {"leftforcetsi64",    KW_LEFTFORCETSI64},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"rightdns",          KW_RIGHTDNS},
    {"eap",               KW_CONN_DEPRECATED},
    {"nat_traversal",     KW_SETUP_DEPRECATED},
    {"leftimei",          KW_LEFTIMEI},
    {"rightauth",         KW_RIGHTAUTH},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"also",              KW_ALSO},
    {"tfc",               KW_TFC},
    {"crluri1",           KW_CRLURI},
    {"packetdefault",     KW_SETUP_DEPRECATED},
    {"leftidr_apn",       KW_LEFTIDR_APN},
    {"leftpcscf",         KW_LEFTPCSCF},
    {"no_eaponly",        KW_NO_EAP_ONLY},
    {"ocspuri",           KW_OCSPURI},
    {"mediated_by",       KW_MEDIATED_BY},
    {"ah",                KW_AH},
    {"postpluto",         KW_SETUP_DEPRECATED},
    {"hashandurl",        KW_HASHANDURL},
    {"mediation",         KW_MEDIATION},
    {"compress",          KW_COMPRESS},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rightcustcppcscf4", KW_RIGHTCUSTCPPCSCF4},
    {"charonstart",       KW_SETUP_DEPRECATED},
    {"ldaphost",          KW_CA_DEPRECATED},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"leftcustcpimei",    KW_LEFTCUSTCPIMEI},
    {"dpddelay",          KW_DPDDELAY},
    {"leftca",            KW_LEFTCA},
    {"plutostderrlog",    KW_SETUP_DEPRECATED},
    {"mobike",	           KW_MOBIKE},
    {"fast_reauth",       KW_FAST_REAUTH},
    {"leftcustcppcscf6",  KW_LEFTCUSTCPPCSCF6},
    {"rightca",           KW_RIGHTCA},
    {"cacert",            KW_CACERT},
    {"ocsp",              KW_OCSP},
    {"dpdaction",         KW_DPDACTION},
    {"fragicmp",          KW_SETUP_DEPRECATED},
    {"ike",               KW_IKE},
    {"pfsgroup",          KW_PFS_DEPRECATED},
    {"ocspuri1",          KW_OCSPURI},
    {"nocrsend",          KW_SETUP_DEPRECATED},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"ldapbase",          KW_CA_DEPRECATED},
    {"leftauth",          KW_LEFTAUTH},
    {"leftsubnetwithin",  KW_LEFTSUBNET},
    {"uniqueids",         KW_UNIQUEIDS},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"liveness_check",     KW_LIVENESS_CHECK},
    {"rightintnetmask",   KW_RIGHTINTNETMASK},
    {"leftikeportnatt",   KW_LEFTIKEPORTNATT},
    {"closeaction",       KW_CLOSEACTION},
    {"aggressive",        KW_AGGRESSIVE},
    {"rightid2",          KW_RIGHTID2},
    {"leftcert2",         KW_LEFTCERT2},
    {"leftid",            KW_LEFTID},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"leftgroups2",       KW_LEFTGROUPS2},
    {"keepalivedelay",    KW_KEEPALIVEDELAY},
    {"dpd_noreply",       KW_DPD_NOREPLY},
    {"leftcustcppcscf4",  KW_LEFTCUSTCPPCSCF4},
    {"overridemtu",       KW_SETUP_DEPRECATED},
    {"leftintnetmask",    KW_LEFTINTNETMASK},
    {"oostimeout",        KW_OOSTIMEOUT},
    {"me_peerid",         KW_ME_PEERID},
    {"mark_in",           KW_MARK_IN},
    {"margintime",        KW_REKEYMARGIN},
    {"keylife",           KW_KEYLIFE},
    {"ikelifetime",       KW_IKELIFETIME},
    {"skipcheckcert",     KW_SKIPCHECKCERT},
    {"marginbytes",       KW_MARGINBYTES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"wsharkfiledump",    KW_WSHARKFILEDUMP},
    {"prepluto",          KW_SETUP_DEPRECATED},
    {"mark_out",          KW_MARK_OUT},
    {"use_cfg_vip",       KW_USE_CFG_VIP},
    {"plutodebug",        KW_SETUP_DEPRECATED},
    {"dumpdir",           KW_SETUP_DEPRECATED},
    {"charondebug",       KW_CHARONDEBUG},
    {"addrchg_reauth",    KW_ADDRCHG_REAUTH},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"authby",            KW_AUTHBY},
    {"cachecrls",         KW_CACHECRLS},
    {"keep_alive",        KW_SETUP_DEPRECATED},
    {"pkcs11module",      KW_PKCS11_DEPRECATED},
    {"pkcs11keepstate",   KW_PKCS11_DEPRECATED},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"auto",              KW_AUTO},
    {"pkcs11initargs",    KW_PKCS11_DEPRECATED},
    {"leftca2",           KW_LEFTCA2},
    {"pkcs11proxy",       KW_PKCS11_DEPRECATED},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"wdrv_keepalive",    KW_WDRV_KEEPALIVE},
    {"keyingtries",       KW_KEYINGTRIES},
    {"leftid2",           KW_LEFTID2},
    {"ikedscp",           KW_IKEDSCP,},
    {"rightgroups2",      KW_RIGHTGROUPS2},
    {"modeconfig",        KW_MODECONFIG},
    {"skipcheckid",       KW_SKIPCHECKID},
    {"ocspuri2",          KW_OCSPURI2},
    {"leftauth2",         KW_LEFTAUTH2},
    {"mark",              KW_MARK},
    {"klipsdebug",        KW_SETUP_DEPRECATED}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,   0,   1,  -1,  -1,   2,   3,
     -1,   4,  -1,   5,   6,   7,   8,   9,  10,  11,
     12,  13,  14,  -1,  15,  16,  17,  -1,  -1,  18,
     -1,  19,  20,  21,  -1,  -1,  22,  23,  24,  25,
     26,  27,  28,  -1,  -1,  -1,  -1,  29,  30,  31,
     32,  33,  -1,  34,  35,  36,  37,  38,  39,  40,
     41,  42,  -1,  -1,  43,  44,  -1,  -1,  -1,  -1,
     45,  46,  -1,  47,  -1,  48,  49,  -1,  -1,  -1,
     -1,  50,  51,  52,  -1,  53,  -1,  54,  -1,  55,
     -1,  56,  57,  58,  59,  60,  61,  62,  63,  64,
     65,  66,  67,  68,  69,  70,  71,  72,  73,  74,
     75,  76,  77,  78,  79,  80,  81,  82,  -1,  83,
     -1,  -1,  -1,  -1,  84,  85,  86,  -1,  -1,  87,
     -1,  -1,  88,  89,  90,  91,  92,  -1,  93,  -1,
     94,  -1,  95,  96,  97,  98,  -1,  -1,  99, 100,
     -1,  -1, 101, 102,  -1, 103,  -1, 104, 105, 106,
     -1, 107, 108, 109, 110, 111, 112,  -1, 113,  -1,
    114, 115, 116,  -1, 117, 118,  -1, 119,  -1,  -1,
    120, 121, 122, 123, 124, 125, 126,  -1, 127,  -1,
     -1,  -1, 128, 129,  -1, 130,  -1, 131, 132, 133,
    134, 135,  -1,  -1,  -1,  -1, 136, 137, 138,  -1,
    139,  -1, 140, 141, 142,  -1,  -1,  -1, 143,  -1,
     -1, 144,  -1,  -1, 145, 146,  -1, 147,  -1, 148,
    149,  -1,  -1,  -1, 150,  -1,  -1,  -1,  -1, 151,
    152,  -1, 153,  -1, 154,  -1, 155,  -1, 156,  -1,
     -1,  -1, 157, 158, 159,  -1,  -1, 160, 161,  -1,
     -1, 162,  -1, 163, 164,  -1,  -1,  -1, 165,  -1,
    166,  -1, 167, 168, 169, 170, 171,  -1, 172,  -1,
    173,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 174,
    175,  -1,  -1,  -1,  -1, 176,  -1,  -1, 177,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 178,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 179,  -1,  -1,
     -1,  -1,  -1, 180,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 181,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 182,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 183
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct kw_entry *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
