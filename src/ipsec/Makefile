# Makefile.in generated by automake 1.13.3 from Makefile.am.
# src/ipsec/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/strongswan
pkgincludedir = $(includedir)/strongswan
pkglibdir = $(libdir)/strongswan
pkglibexecdir = $(libexecdir)/strongswan
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = i686-pc-linux-gnu
host_triplet = i686-pc-linux-gnu
subdir = src/ipsec
DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/Makefile.am \
	$(dist_man8_MANS)
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/config/libtool.m4 \
	$(top_srcdir)/m4/config/ltoptions.m4 \
	$(top_srcdir)/m4/config/ltsugar.m4 \
	$(top_srcdir)/m4/config/ltversion.m4 \
	$(top_srcdir)/m4/config/lt~obsolete.m4 \
	$(top_srcdir)/m4/macros/split-package-version.m4 \
	$(top_srcdir)/m4/macros/with.m4 \
	$(top_srcdir)/m4/macros/enable-disable.m4 \
	$(top_srcdir)/m4/macros/add-plugin.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(sbindir)" "$(DESTDIR)$(man8dir)"
SCRIPTS = $(sbin_SCRIPTS)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
man8dir = $(mandir)/man8
NROFF = nroff
MANS = $(dist_man8_MANS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/missing aclocal-1.13
ALLOCA = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AUTOCONF = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/missing autoconf
AUTOHEADER = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/missing autoheader
AUTOMAKE = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/missing automake-1.13
AWK = mawk
BFDLIB = 
BTLIB = 
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -include /home/hu/server/tmp/strongswan-5.1.2/config.h
COVERAGE_CFLAGS = 
COVERAGE_LDFLAGS = 
CPP = gcc -E
CPPFLAGS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLIB = -ldl 
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
GENHTML = 
GPERF = /usr/bin/gperf
GPRBUILD = 
GREP = /bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LCOV = 
LD = /usr/bin/ld
LDFLAGS = 
LEX = flex
LEXLIB = -lfl
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
MAKEINFO = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/missing makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
MYSQLCFLAG = 
MYSQLCONFIG = 
MYSQLLIB = 
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = strongswan
PACKAGE_BUGREPORT = 
PACKAGE_NAME = strongSwan
PACKAGE_STRING = strongSwan 5.1.2
PACKAGE_TARNAME = strongswan
PACKAGE_URL = 
PACKAGE_VERSION = 5.1.2
PACKAGE_VERSION_BUILD = 2
PACKAGE_VERSION_MAJOR = 5
PACKAGE_VERSION_MINOR = 1
PACKAGE_VERSION_REVIEW = 
PATH_SEPARATOR = :
PERL = /usr/local/bin/perl
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
PTHREADLIB = -lpthread 
PYTHON = /usr/bin/python
PYTHON_EXEC_PREFIX = ${exec_prefix}
PYTHON_PLATFORM = linux2
PYTHON_PREFIX = ${prefix}
PYTHON_VERSION = 2.6
RANLIB = ranlib
RTLIB = -lrt 
RUBY = 
RUBYINCLUDE = 
RUBYLIB = 
SED = /bin/sed
SET_MAKE = 
SHELL = /bin/bash
SOCKLIB = 
STRIP = strip
UNWINDLIB = 
VERSION = 5.1.2
YACC = bison -y
YFLAGS = 
abs_builddir = /home/hu/server/tmp/strongswan-5.1.2/src/ipsec
abs_srcdir = /home/hu/server/tmp/strongswan-5.1.2/src/ipsec
abs_top_builddir = /home/hu/server/tmp/strongswan-5.1.2
abs_top_srcdir = /home/hu/server/tmp/strongswan-5.1.2
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = tar --format=ustar -chf - "$$tardir"
am__untar = tar -xf -
attest_plugins =  sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
bindir = ${exec_prefix}/bin
build = i686-pc-linux-gnu
build_alias = 
build_cpu = i686
build_os = linux-gnu
build_vendor = pc
builddir = .
c_plugins =  socket-default stroke updown eap-identity eap-sim eap-sim-file eap-aka eap-simaka-reauth eap-mschapv2 xauth-generic
charon_natt_port = 4500
charon_plugins =  aes des rc2 sha1 sha2 md5 random nonce x509 revocation constraints pubkey pkcs1 pkcs7 pkcs8 pkcs12 pgp dnskey sshkey pem fips-prf gmp xcbc cmac hmac attr kernel-netlink resolve socket-default stroke updown eap-identity eap-sim eap-sim-file eap-aka eap-simaka-reauth eap-mschapv2 xauth-generic
charon_udp_port = 500
clearsilver_LIBS = 
cmd_plugins =  aes des rc2 sha1 sha2 md5 random nonce x509 revocation constraints pubkey pkcs1 pkcs7 pkcs8 pkcs12 sshkey pem fips-prf gmp xcbc cmac hmac kernel-netlink resolve socket-default eap-identity eap-mschapv2 xauth-generic
datadir = ${datarootdir}
datarootdir = ${prefix}/share
dbusservicedir = 
dev_headers = no
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
fips_mode = 0
gtk_CFLAGS = 
gtk_LIBS = 
h_plugins =  attr kernel-netlink resolve
host = i686-pc-linux-gnu
host_alias = 
host_cpu = i686
host_os = linux-gnu
host_vendor = pc
htmldir = ${docdir}
imcvdir = ${exec_prefix}/lib/ipsec/imcvs
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/hu/server/tmp/strongswan-5.1.2/install-sh
ipsec_script = ipsec
ipsec_script_upper = IPSEC
ipsecdir = ${exec_prefix}/libexec/ipsec
ipsecgroup = root
ipseclibdir = ${exec_prefix}/lib/ipsec
ipsecuser = root
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
linux_headers = ${top_srcdir}/src/include
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
maemo_CFLAGS = 
maemo_LIBS = 
manager_plugins =  pkcs1 pkcs8 pem gmp
mandir = ${datarootdir}/man
medsrv_plugins =  sha1 sha2 random pkcs1 pkcs8 pem gmp
mkdir_p = $(MKDIR_P)
nm_CFLAGS = 
nm_LIBS = 
nm_ca_dir = /usr/share/ca-certificates
nm_plugins =  aes des rc2 sha1 sha2 md5 random nonce x509 revocation constraints pkcs1 pkcs7 pkcs8 sshkey pem fips-prf gmp xcbc cmac hmac kernel-netlink socket-default eap-identity eap-mschapv2
oldincludedir = /usr/include
openac_plugins =  aes des rc2 sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
pcsclite_CFLAGS = 
pcsclite_LIBS = 
pdfdir = ${docdir}
piddir = /var/run
pkgpyexecdir = ${pyexecdir}/strongswan
pkgpythondir = ${pythondir}/strongswan
pki_plugins =  aes des rc2 sha1 sha2 md5 random x509 pkcs1 pkcs7 pkcs8 pkcs12 dnskey sshkey pem gmp
plugindir = ${exec_prefix}/lib/ipsec/plugins
pool_plugins = 
prefix = /usr
program_transform_name = s,x,x,
psdir = ${docdir}
pyexecdir = ${exec_prefix}/lib/python2.6/dist-packages
pythondir = ${prefix}/lib/python2.6/dist-packages
random_device = /dev/random
resolv_conf = /etc/resolv.conf
routing_table = 220
routing_table_prio = 220
s_plugins =  aes des rc2 sha1 sha2 md5 random nonce x509 revocation constraints pubkey pkcs1 pkcs7 pkcs8 pkcs12 pgp dnskey sshkey pem fips-prf gmp xcbc cmac hmac
sbindir = ${exec_prefix}/sbin
scepclient_plugins =  aes des rc2 sha1 sha2 md5 random x509 pkcs1 pkcs7 pkcs8 pkcs12 pem gmp
scripts_plugins =  aes des rc2 sha1 sha2 md5 random x509 pkcs1 pkcs7 pkcs8 pkcs12 pem gmp hmac
sharedstatedir = ${prefix}/com
soup_CFLAGS = 
soup_LIBS = 
srcdir = .
starter_plugins =  kernel-netlink
strongswan_conf = /etc/strongswan.conf
strongswan_options =  charon charon-logging starter tools
sysconfdir = /etc
systemdsystemunitdir = 
t_plugins = 
target_alias = 
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
urandom_device = /dev/urandom
xml_CFLAGS = 
xml_LIBS = 
sbin_SCRIPTS = _ipsec
CLEANFILES = _ipsec _ipsec.8
dist_man8_MANS = _ipsec.8
EXTRA_DIST = _ipsec.in _ipsec.8.in Android.mk
all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu src/ipsec/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu src/ipsec/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
install-sbinSCRIPTS: $(sbin_SCRIPTS)
	@$(NORMAL_INSTALL)
	@list='$(sbin_SCRIPTS)'; test -n "$(sbindir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(sbindir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(sbindir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  if test -f "$$d$$p"; then echo "$$d$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n' \
	    -e 'h;s|.*|.|' \
	    -e 'p;x;s,.*/,,;$(transform)' | sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1; } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) { files[d] = files[d] " " $$1; \
	      if (++n[d] == $(am__install_max)) { \
		print "f", d, files[d]; n[d] = 0; files[d] = "" } } \
	    else { print "f", d "/" $$4, $$1 } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	     if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	     test -z "$$files" || { \
	       echo " $(INSTALL_SCRIPT) $$files '$(DESTDIR)$(sbindir)$$dir'"; \
	       $(INSTALL_SCRIPT) $$files "$(DESTDIR)$(sbindir)$$dir" || exit $$?; \
	     } \
	; done

uninstall-sbinSCRIPTS:
	@$(NORMAL_UNINSTALL)
	@list='$(sbin_SCRIPTS)'; test -n "$(sbindir)" || exit 0; \
	files=`for p in $$list; do echo "$$p"; done | \
	       sed -e 's,.*/,,;$(transform)'`; \
	dir='$(DESTDIR)$(sbindir)'; $(am__uninstall_files_from_dir)

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-man8: $(dist_man8_MANS)
	@$(NORMAL_INSTALL)
	@list1='$(dist_man8_MANS)'; \
	list2=''; \
	test -n "$(man8dir)" \
	  && test -n "`echo $$list1$$list2`" \
	  || exit 0; \
	echo " $(MKDIR_P) '$(DESTDIR)$(man8dir)'"; \
	$(MKDIR_P) "$(DESTDIR)$(man8dir)" || exit 1; \
	{ for i in $$list1; do echo "$$i"; done;  \
	if test -n "$$list2"; then \
	  for i in $$list2; do echo "$$i"; done \
	    | sed -n '/\.8[a-z]*$$/p'; \
	fi; \
	} | while read p; do \
	  if test -f $$p; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; echo "$$p"; \
	done | \
	sed -e 'n;s,.*/,,;p;h;s,.*\.,,;s,^[^8][0-9a-z]*$$,8,;x' \
	      -e 's,\.[0-9a-z]*$$,,;$(transform);G;s,\n,.,' | \
	sed 'N;N;s,\n, ,g' | { \
	list=; while read file base inst; do \
	  if test "$$base" = "$$inst"; then list="$$list $$file"; else \
	    echo " $(INSTALL_DATA) '$$file' '$(DESTDIR)$(man8dir)/$$inst'"; \
	    $(INSTALL_DATA) "$$file" "$(DESTDIR)$(man8dir)/$$inst" || exit $$?; \
	  fi; \
	done; \
	for i in $$list; do echo "$$i"; done | $(am__base_list) | \
	while read files; do \
	  test -z "$$files" || { \
	    echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(man8dir)'"; \
	    $(INSTALL_DATA) $$files "$(DESTDIR)$(man8dir)" || exit $$?; }; \
	done; }

uninstall-man8:
	@$(NORMAL_UNINSTALL)
	@list='$(dist_man8_MANS)'; test -n "$(man8dir)" || exit 0; \
	files=`{ for i in $$list; do echo "$$i"; done; \
	} | sed -e 's,.*/,,;h;s,.*\.,,;s,^[^8][0-9a-z]*$$,8,;x' \
	      -e 's,\.[0-9a-z]*$$,,;$(transform);G;s,\n,.,'`; \
	dir='$(DESTDIR)$(man8dir)'; $(am__uninstall_files_from_dir)
tags TAGS:

ctags CTAGS:

cscope cscopelist:


distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(SCRIPTS) $(MANS)
installdirs:
	for dir in "$(DESTDIR)$(sbindir)" "$(DESTDIR)$(man8dir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-man
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) install-data-hook
install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-sbinSCRIPTS
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) install-exec-hook
install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man: install-man8

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-man uninstall-sbinSCRIPTS
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) uninstall-hook
uninstall-man: uninstall-man8

.MAKE: install-am install-data-am install-exec-am install-strip \
	uninstall-am

.PHONY: all all-am check check-am clean clean-generic clean-libtool \
	cscopelist-am ctags-am distclean distclean-generic \
	distclean-libtool distdir dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am \
	install-data-hook install-dvi install-dvi-am install-exec \
	install-exec-am install-exec-hook install-html install-html-am \
	install-info install-info-am install-man install-man8 \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-sbinSCRIPTS install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-generic mostlyclean-libtool pdf pdf-am \
	ps ps-am tags-am uninstall uninstall-am uninstall-hook \
	uninstall-man uninstall-man8 uninstall-sbinSCRIPTS


_ipsec.8 : _ipsec.8.in
	$(AM_V_GEN) \
	sed \
	-e "s:@IPSEC_VERSION@:$(PACKAGE_VERSION):" \
	-e "s:@IPSEC_SCRIPT@:$(ipsec_script):g" \
	-e "s:@IPSEC_SCRIPT_UPPER@:$(ipsec_script_upper):g" \
	-e "s:@IPSEC_DIR@:$(ipsecdir):" \
	$(srcdir)/$@.in > $@

_ipsec : _ipsec.in
	$(AM_V_GEN) \
	sed \
	-e "s:@IPSEC_SHELL@:/bin/sh:" \
	-e "s:@IPSEC_VERSION@:$(PACKAGE_VERSION):" \
	-e "s:@IPSEC_NAME@:$(PACKAGE_NAME):" \
	-e "s:@IPSEC_DISTRO@::" \
	-e "s:@IPSEC_DIR@:$(ipsecdir):" \
	-e "s:@IPSEC_SCRIPT@:$(ipsec_script):" \
	-e "s:@IPSEC_BINDIR@:$(bindir):" \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	-e "s:@IPSEC_CONFDIR@:$(sysconfdir):" \
	-e "s:@IPSEC_PIDDIR@:$(piddir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@

install-exec-hook:
	mv $(DESTDIR)$(sbindir)/_ipsec $(DESTDIR)$(sbindir)/$(ipsec_script)

install-data-hook:
	mv $(DESTDIR)$(man8dir)/_ipsec.8 $(DESTDIR)$(man8dir)/$(ipsec_script).8

uninstall-hook:
	rm -f $(DESTDIR)$(sbindir)/$(ipsec_script)
	rm -f $(DESTDIR)$(man8dir)/$(ipsec_script).8

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
