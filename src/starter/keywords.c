/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'2-3,6,$' */

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
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
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

#define TOTAL_KEYWORDS 195
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 416
/* maximum key range = 408, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417,  13,
      210, 417,  10, 417,  13, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417,  40, 417,  22,   5, 141,
       51,   4,   9,   0, 136,   0, 417, 169,  73, 103,
       18,  92,  56,   2,  13,   0,  12, 184,  16, 417,
        0,  50,   1, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417, 417, 417, 417, 417,
      417, 417, 417, 417, 417, 417
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"rightimei",         KW_RIGHTIMEI},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"pfs",               KW_PFS_DEPRECATED},
    {"aggressive",        KW_AGGRESSIVE},
    {"right",             KW_RIGHT},
    {"lifetime",          KW_KEYLIFE},
    {"rightsourceif",     KW_RIGHTSOURCEIF},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightintsubnet",    KW_RIGHTINTSUBNET},
    {"rightimeiformat",   KW_RIGHTIMEIFORMAT},
    {"rightikeportnatt",  KW_RIGHTIKEPORTNATT},
    {"left",              KW_LEFT},
    {"rightidr_apn",      KW_RIGHTIDR_APN},
    {"uniqueids",         KW_UNIQUEIDS},
    {"rightforcetsi64",   KW_RIGHTFORCETSI64},
    {"rightsubnetwithin", KW_RIGHTSUBNET},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftcert",          KW_LEFTCERT},
    {"leftdns",           KW_LEFTDNS},
    {"max_redirects",   KW_MAX_REDIRECTS },
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"lifepackets",       KW_LIFEPACKETS},
    {"keep_alive",        KW_SETUP_DEPRECATED},
    {"certuribase",       KW_CERTURIBASE},
    {"retrans_tries",     KW_RETRANS_TRIES},
    {"interfaces",        KW_SETUP_DEPRECATED},
    {"retrans_base",      KW_RETRANS_BASE},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"interface",         KW_INTERFACE},
    {"virtual_private",   KW_SETUP_DEPRECATED},
    {"server_nocert",     KW_SERVER_NOCERT},
    {"leftintsubnet",     KW_LEFTINTSUBNET},
    {"rightid",           KW_RIGHTID},
    {"rightdns",          KW_RIGHTDNS},
    {"mark_in",           KW_MARK_IN},
    {"rightsigkey",       KW_RIGHTSIGKEY},
    {"reqid",             KW_REQID},
    {"leftca",            KW_LEFTCA},
    {"marginbytes",       KW_MARGINBYTES},
    {"keyingtries",       KW_KEYINGTRIES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"margintime",        KW_REKEYMARGIN},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"fragmentation",     KW_FRAGMENTATION},
    {"leftsigkey",        KW_LEFTSIGKEY},
    {"keylife",           KW_KEYLIFE},
    {"rightpcscf",        KW_RIGHTPCSCF},
    {"leftrsasigkey",     KW_LEFTSIGKEY},
    {"rightrsasigkey",    KW_RIGHTSIGKEY},
    {"redirect_enable",   KW_REDIRECT_ENABLE },
    {"use_cfg_vip",       KW_USE_CFG_VIP},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"leftnexthop",       KW_LEFT_DEPRECATED},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightnexthop",      KW_RIGHT_DEPRECATED},
    {"device_identity",   KW_DEVICE_IDENTITY},
    {"redirect_loop_detect",  KW_REDIRECT_LOOP_DETECT},
    {"crluri",            KW_CRLURI},
    {"leftidr_apn",       KW_LEFTIDR_APN},
    {"mediation",         KW_MEDIATION},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightforcetsifull", KW_RIGHTFORCETSIFULL},
    {"inactivity",        KW_INACTIVITY},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"crluri1",           KW_CRLURI},
    {"ldapbase",          KW_CA_DEPRECATED},
    {"me_peerid",         KW_ME_PEERID},
    {"certreq_critical",  KW_CERTREQ_CRITICAL},
    {"mobike",	           KW_MOBIKE},
    {"send_del_ike_auth_ntfy_err", KW_SEND_DEL_IKE_AUTH_NTFY_ERR},
    {"type",              KW_TYPE},
    {"esp",               KW_ESP},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"forceencaps",       KW_FORCEENCAPS},
    {"leftid",            KW_LEFTID},
    {"hashandurl",        KW_HASHANDURL},
    {"leftimei",          KW_LEFTIMEI},
    {"leftsourceif",      KW_LEFTSOURCEIF},
    {"mediated_by",       KW_MEDIATED_BY},
    {"leftforcetsi64",    KW_LEFTFORCETSI64},
    {"nat_traversal",     KW_SETUP_DEPRECATED},
    {"klipsdebug",        KW_SETUP_DEPRECATED},
    {"retrans_to",        KW_RETRANS_TO},
    {"eap",               KW_CONN_DEPRECATED},
    {"leftimeiformat",    KW_LEFTIMEIFORMAT},
    {"keepalivedelay",    KW_KEEPALIVEDELAY},
    {"dpdaction",         KW_DPDACTION},
    {"mark_out",          KW_MARK_OUT},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"hidetos",           KW_SETUP_DEPRECATED},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"no_initct",         KW_NO_INIT_CONTACT},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"rightcustcpimei",   KW_RIGHTCUSTCPIMEI},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"ocspuri",           KW_OCSPURI},
    {"rightcert",         KW_RIGHTCERT},
    {"force_keepalive",   KW_SETUP_DEPRECATED},
    {"pfsgroup",          KW_PFS_DEPRECATED},
    {"wifi_ho_ip_change", KW_WIFI_HO_IP_CHANGE},
    {"rightauth",         KW_RIGHTAUTH},
    {"rightcustcppcscf4", KW_RIGHTCUSTCPPCSCF4},
    {"also",              KW_ALSO},
    {"rightca",           KW_RIGHTCA},
    {"rightcustcppcscf6", KW_RIGHTCUSTCPPCSCF6},
    {"leftpcscf",         KW_LEFTPCSCF},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"ocspuri1",          KW_OCSPURI},
    {"reauth_mbb",        KW_REAUTH_MBB},
    {"detach_timeout",    KW_DETACH_TIMEOUT},
    {"crlcheckinterval",  KW_SETUP_DEPRECATED},
    {"ike",               KW_IKE},
    {"fast_reauth",       KW_FAST_REAUTH},
    {"rightintnetmask",   KW_RIGHTINTNETMASK},
    {"ldaphost",          KW_CA_DEPRECATED},
    {"charondebug",       KW_CHARONDEBUG},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"cacert",            KW_CACERT},
    {"leftforcetsifull",  KW_LEFTFORCETSIFULL},
    {"ikelifetime",       KW_IKELIFETIME},
    {"pcscf_restore",     KW_PCSCF_RESTORE},
    {"charonstart",       KW_SETUP_DEPRECATED},
    {"packetdefault",     KW_SETUP_DEPRECATED},
    {"ocsp",              KW_OCSP},
    {"liveness_check",    KW_LIVENESS_CHECK},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"compress",          KW_COMPRESS},
    {"mark",              KW_MARK},
    {"leftikeportnatt",   KW_LEFTIKEPORTNATT},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"leftcustcpimei",    KW_LEFTCUSTCPIMEI},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"leftintnetmask",    KW_LEFTINTNETMASK},
    {"overridemtu",       KW_SETUP_DEPRECATED},
    {"closeaction",       KW_CLOSEACTION},
    {"oostimeout",        KW_OOSTIMEOUT},
    {"rightid2",          KW_RIGHTID2},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightgroups2",      KW_RIGHTGROUPS2},
    {"leftcustcppcscf4",  KW_LEFTCUSTCPPCSCF4},
    {"leftcustcppcscf6",  KW_LEFTCUSTCPPCSCF6},
    {"encrkeydisplay",    KW_ENCRKEYDISPLAY},
    {"rekey",             KW_REKEY},
    {"leftsubnetwithin",  KW_LEFTSUBNET},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"leftcert2",         KW_LEFTCERT2},
    {"dpddelay",          KW_DPDDELAY},
    {"fragicmp",          KW_SETUP_DEPRECATED},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"modeconfig",        KW_MODECONFIG},
    {"leftgroups2",       KW_LEFTGROUPS2},
    {"no_eaponly",        KW_NO_EAP_ONLY},
    {"wdrv_keepalive",    KW_WDRV_KEEPALIVE},
    {"leftca2",           KW_LEFTCA2},
    {"dpd_noreply",       KW_DPD_NOREPLY},
    {"postpluto",         KW_SETUP_DEPRECATED},
    {"plutostderrlog",    KW_SETUP_DEPRECATED},
    {"ah",                KW_AH},
    {"plutostart",        KW_SETUP_DEPRECATED},
    {"leftid2",           KW_LEFTID2},
    {"auto",              KW_AUTO},
    {"tfc",               KW_TFC},
    {"nocrsend",          KW_SETUP_DEPRECATED},
    {"prepluto",          KW_SETUP_DEPRECATED},
    {"authby",            KW_AUTHBY},
    {"crluri2",           KW_CRLURI2},
    {"reauth",            KW_REAUTH},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"dumpdir",           KW_SETUP_DEPRECATED},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"cachecrls",         KW_CACHECRLS},
    {"plutodebug",        KW_SETUP_DEPRECATED},
    {"skipcheckcert",     KW_SKIPCHECKCERT},
    {"pkcs11initargs",    KW_PKCS11_DEPRECATED},
    {"pkcs11module",      KW_PKCS11_DEPRECATED},
    {"leftauth",          KW_LEFTAUTH},
    {"pkcs11keepstate",   KW_PKCS11_DEPRECATED},
    {"xauth",             KW_XAUTH},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"skipcheckid",       KW_SKIPCHECKID},
    {"ocspuri2",          KW_OCSPURI2},
    {"wsharkfiledump",    KW_WSHARKFILEDUMP},
    {"ikedscp",           KW_IKEDSCP,},
    {"pkcs11proxy",       KW_PKCS11_DEPRECATED},
    {"addrchg_reauth",    KW_ADDRCHG_REAUTH},
    {"leftauth2",         KW_LEFTAUTH2}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
     -1,   1,   2,  -1,   3,  -1,  -1,   4,  -1,  -1,
     -1,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,  15,  -1,  -1,  16,  17,  18,  19,  20,  21,
     -1,  22,  23,  -1,  24,  25,  -1,  26,  -1,  27,
     28,  29,  30,  -1,  31,  32,  33,  -1,  34,  35,
     36,  37,  38,  39,  40,  41,  42,  43,  44,  45,
     46,  -1,  -1,  47,  48,  49,  50,  51,  52,  -1,
     53,  54,  55,  -1,  56,  57,  58,  -1,  -1,  59,
     -1,  60,  61,  62,  63,  64,  -1,  65,  66,  67,
     68,  -1,  69,  -1,  -1,  -1,  70,  71,  72,  -1,
     73,  74,  75,  -1,  76,  77,  -1,  -1,  -1,  78,
     79,  80,  -1,  81,  82,  -1,  83,  -1,  84,  85,
     -1,  -1,  -1,  86,  87,  -1,  88,  89,  -1,  -1,
     -1,  -1,  90,  -1,  -1,  91,  92,  93,  94,  -1,
     95,  96,  -1,  97,  98,  -1,  99, 100,  -1,  -1,
     -1, 101, 102,  -1, 103, 104, 105, 106, 107, 108,
    109, 110, 111, 112,  -1, 113,  -1, 114, 115, 116,
    117,  -1, 118,  -1, 119, 120,  -1, 121,  -1,  -1,
     -1, 122, 123, 124, 125,  -1,  -1, 126, 127, 128,
    129, 130,  -1, 131,  -1, 132, 133, 134, 135, 136,
    137, 138,  -1, 139, 140, 141, 142, 143, 144, 145,
     -1,  -1, 146, 147,  -1,  -1, 148, 149, 150,  -1,
     -1, 151, 152,  -1,  -1,  -1, 153,  -1, 154,  -1,
    155,  -1, 156,  -1,  -1, 157,  -1, 158, 159,  -1,
     -1, 160, 161,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    162,  -1,  -1,  -1,  -1,  -1, 163,  -1,  -1,  -1,
     -1, 164,  -1,  -1, 165,  -1,  -1,  -1,  -1, 166,
     -1, 167,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 168,  -1, 169,  -1, 170,  -1,  -1,  -1,
     -1, 171, 172, 173, 174, 175,  -1, 176,  -1,  -1,
    177,  -1,  -1, 178,  -1,  -1,  -1,  -1, 179,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    180,  -1,  -1,  -1,  -1,  -1,  -1, 181,  -1, 182,
     -1, 183, 184,  -1,  -1,  -1,  -1, 185,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 186,
     -1, 187,  -1,  -1,  -1,  -1,  -1, 188,  -1,  -1,
     -1,  -1, 189,  -1,  -1, 190,  -1, 191,  -1,  -1,
     -1,  -1,  -1,  -1, 192,  -1,  -1,  -1, 193,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 194
  };

const struct kw_entry *
in_word_set (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
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
