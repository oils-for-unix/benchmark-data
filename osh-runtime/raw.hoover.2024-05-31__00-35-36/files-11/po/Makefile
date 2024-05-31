# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-1997, 2000-2007, 2009-2010 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file can be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU General Public
# License but which still want to provide support for the GNU gettext
# functionality.
# Please note that the actual code of GNU gettext is covered by the GNU
# General Public License and is *not* in the public domain.
#
# Origin: gettext-0.18.3
GETTEXT_MACRO_VERSION = 0.18

PACKAGE = util-linux
VERSION = 2.40
PACKAGE_BUGREPORT = kzak@redhat.com

SED = /usr/bin/sed
SHELL = /bin/sh


srcdir = /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/po
top_srcdir = /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40
VPATH = /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/po

prefix = /usr
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

# We use $(mkdir_p).
# In automake <= 1.9.x, $(mkdir_p) is defined either as "mkdir -p --" or as
# "$(mkinstalldirs)" or as "$(install_sh) -d". For these automake versions,
# ${SHELL} /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/config/install-sh does not start with $(SHELL), so we add it.
# In automake >= 1.10, $(MKDIR_P) is derived from ${MKDIR_P}, which is defined
# either as "/path/to/mkdir -p" or ".../install-sh -c -d". For these automake
# versions, $(mkinstalldirs) and $(install_sh) are unused.
mkinstalldirs = $(SHELL) ${SHELL} /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/config/install-sh -d
install_sh = $(SHELL) ${SHELL} /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/config/install-sh
MKDIR_P = /usr/bin/mkdir -p
mkdir_p = $(MKDIR_P)

GMSGFMT_ = :
GMSGFMT_no = :
GMSGFMT_yes = :
GMSGFMT = $(GMSGFMT_$(USE_MSGCTXT))
MSGFMT_ = :
MSGFMT_no = :
MSGFMT_yes = :
MSGFMT = $(MSGFMT_$(USE_MSGCTXT))
XGETTEXT_ = :
XGETTEXT_no = :
XGETTEXT_yes = :
XGETTEXT = $(XGETTEXT_$(USE_MSGCTXT))
MSGMERGE = msgmerge
MSGMERGE_UPDATE = : --update
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POFILES =  $(srcdir)/ca.po $(srcdir)/cs.po $(srcdir)/da.po $(srcdir)/de.po $(srcdir)/es.po $(srcdir)/et.po $(srcdir)/eu.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/gl.po $(srcdir)/hr.po $(srcdir)/hu.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/ja.po $(srcdir)/ko.po $(srcdir)/nl.po $(srcdir)/pl.po $(srcdir)/pt.po $(srcdir)/pt_BR.po $(srcdir)/ru.po $(srcdir)/sk.po $(srcdir)/sl.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/zh_TW.po
GMOFILES =  $(srcdir)/ca.gmo $(srcdir)/cs.gmo $(srcdir)/da.gmo $(srcdir)/de.gmo $(srcdir)/es.gmo $(srcdir)/et.gmo $(srcdir)/eu.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/gl.gmo $(srcdir)/hr.gmo $(srcdir)/hu.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/ja.gmo $(srcdir)/ko.gmo $(srcdir)/nl.gmo $(srcdir)/pl.gmo $(srcdir)/pt.gmo $(srcdir)/pt_BR.gmo $(srcdir)/ru.gmo $(srcdir)/sk.gmo $(srcdir)/sl.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/zh_TW.gmo
UPDATEPOFILES =  ca.po-update cs.po-update da.po-update de.po-update es.po-update et.po-update eu.po-update fi.po-update fr.po-update gl.po-update hr.po-update hu.po-update id.po-update it.po-update ja.po-update ko.po-update nl.po-update pl.po-update pt.po-update pt_BR.po-update ru.po-update sk.po-update sl.po-update sr.po-update sv.po-update tr.po-update uk.po-update vi.po-update zh_CN.po-update zh_TW.po-update
DUMMYPOFILES =  ca.nop cs.nop da.nop de.nop es.nop et.nop eu.nop fi.nop fr.nop gl.nop hr.nop hu.nop id.nop it.nop ja.nop ko.nop nl.nop pl.nop pt.nop pt_BR.nop ru.nop sk.nop sl.nop sr.nop sv.nop tr.nop uk.nop vi.nop zh_CN.nop zh_TW.nop
DISTFILES.common = Makefile.in.in remove-potcdate.sin \
$(DISTFILES.common.extra1) $(DISTFILES.common.extra2) $(DISTFILES.common.extra3)
DISTFILES = $(DISTFILES.common) Makevars POTFILES.in \
$(POFILES) $(GMOFILES) \
$(DISTFILES.extra1) $(DISTFILES.extra2) $(DISTFILES.extra3)

POTFILES = \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/addpart.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/blockdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/cfdisk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/cramfs_common.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/cramfs.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/delpart.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdformat.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdisk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdisk.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdisk-list.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdisk-list.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fdisk-menu.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fsck.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fsck.cramfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/fsck.minix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/isosize.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/minix_programs.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/mkfs.bfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/mkfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/mkfs.cramfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/mkfs.minix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/mkswap.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/partx.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/raw.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/resizepart.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/sfdisk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/disk-utils/swaplabel.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/all-io.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/audit-arch.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/bitops.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/blkdev.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/buffer.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/canonicalize.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/caputils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/carefulputc.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/cctype.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/c.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/closestream.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/color-names.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/colors.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/column-list-table.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/coverage.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/cpuset.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/crc32c.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/crc32.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/crc64.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/c_strtod.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/debug.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/debugobj.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/encode.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/env.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/exec_shell.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/exitcodes.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/fileeq.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/fileutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/fuzz.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/idcache.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/ismounted.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/iso9660.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/jsonwrt.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/linux_version.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/list.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/logindefs.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/loopdev.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/mangle.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/match.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/mbsalign.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/mbsedit.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/md5.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/minix.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/monotonic.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/mount-api-utils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/namespace.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/nls.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/optutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pager.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/partx.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/path.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pathnames.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pidfd-utils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/plymouth-ctrl.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/procfs.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-bsd.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-gpt-partnames.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-mbr.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-mbr-partnames.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-sgi.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pt-sun.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pty-session.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/pwdutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/randutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/rpmatch.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/selinux-utils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/sha1.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/sha256.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/shells.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/signames.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/statfs_magic.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/strutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/strv.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/swapheader.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/swapprober.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/sysfs.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/timer.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/timeutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/ttyutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/widechar.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/xalloc.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/include/xxhash.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/blkdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/blkidP.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/cache.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/config.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/dev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/devname.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/devno.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/encode.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/evaluate.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/fuzz.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/getsize.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/init.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/aix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/aix.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/atari.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/bsd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/dos.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/gpt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/mac.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/minix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/partitions.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/partitions.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/sgi.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/solaris_x86.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/sun.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/ultrix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/partitions/unixware.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/probe.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/read.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/resolve.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/save.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/adaptec_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/apfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/bcache.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/befs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/bfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/bitlocker.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/bluestore.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/btrfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/cramfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/cs_fvault2.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ddf_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/drbd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/drbdmanage.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/drbdproxy_datalog.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/erofs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/exfat.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/exfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ext.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/f2fs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/gfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/hfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/highpoint_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/hpfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/iso9660.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/isw_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/jfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/jmicron_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/linux_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/lsi_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/luks.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/lvm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/minix.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/mpool.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/netware.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/nilfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ntfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/nvidia_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ocfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/promise_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/refs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/reiserfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/romfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/silicon_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/squashfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/stratis.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/superblocks.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/superblocks.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/swap.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/sysv.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ubi.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ubifs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/udf.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/ufs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/vdo.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/vfat.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/via_raid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/vmfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/vxfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/xfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/zfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/superblocks/zonefs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/tag.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/dm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/evms.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/ioctl.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/lvm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/md.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/sysfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/topology.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/topology/topology.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/verify.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libblkid/src/version.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/buffer.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/canonicalize.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/caputils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/color-names.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/colors.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/cpuset.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/crc32.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/crc32c.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/crc64.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/c_strtod.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/encode.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/env.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/exec_shell.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/alignment.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/ask.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/bsd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/context.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/dos.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/fdiskP.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/field.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/gpt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/init.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/item.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/iter.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/label.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/partition.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/parttype.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/script.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/sgi.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/sun.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/table.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/test.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/utils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/version.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libfdisk/src/wipe.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/fileeq.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/fileutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/idcache.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/ismounted.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/jsonwrt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/langinfo.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/lastlog2.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/lastlog2.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/lastlog2P.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_dlopen.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_pam_lastlog2_output.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_remove_entry.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_rename_user.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_write_read_user.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_y2038_ll2_read_all.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/liblastlog2/src/tests/tst_y2038_sqlite3_time.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/linux_version.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/logindefs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/loopdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/mangle.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/match.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/mbsalign.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/mbsedit.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/md5.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/monotonic.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/python/context.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/python/fs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/python/pylibmount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/python/pylibmount.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/python/tab.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/btrfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/cache.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/context.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/context_mount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/context_umount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/fs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/fuzz.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_idmap.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_loopdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_mkdir.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_mount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_mount_legacy.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_owner.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hooks.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_selinux.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_subdir.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/hook_veritydev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/init.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/iter.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/lock.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/monitor.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/mountP.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/optlist.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/optmap.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/optstr.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/tab.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/tab_diff.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/tab_parse.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/tab_update.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/test.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/utils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libmount/src/version.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/pager.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/path.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/plymouth-ctrl.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/procfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/pty-session.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/pwdutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/randutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/selinux-utils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/sha1.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/sha256.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/shells.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/signames.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/calculate.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/cell.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/column.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/filter.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/filter-expr.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/filter-param.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/grouping.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/init.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/iter.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/line.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/print-api.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/print.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/smartcolsP.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/symbols.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/table.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/version.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libsmartcols/src/walk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/strutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/strv.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/swapprober.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/sysfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/timer.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/timeutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/ttyutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/clear.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/compare.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/copy.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/gen_uuid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/isnull.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/pack.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/parse.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/predefined.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/test_uuid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/unpack.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/unparse.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/uuidd.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/uuid.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/uuidP.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/libuuid/src/uuid_time.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/lib/xxhash.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/auth.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/auth.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/ch-common.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/ch-common.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/chfn.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/chsh.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/islocal.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/islocal.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/last.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/libuser.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/libuser.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/login.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/lslogins.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/newgrp.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/nologin.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/runuser.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/setpwnam.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/setpwnam.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/su.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/su-common.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/su-common.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/sulogin.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/sulogin-consoles.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/sulogin-consoles.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/utmpdump.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/login-utils/vipw.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/blkid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/cal.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/enosys.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/exch.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/fadvise.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/fincore.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/findfs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/findmnt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/findmnt.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/findmnt-verify.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/getopt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/hardlink.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/kill.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lastlog2.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/logger.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/look.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsblk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsblk-devtree.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsblk.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsblk-mnt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsblk-properties.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsclocks.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-bdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-cdev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-decode-file-flags.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-fifo.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-file.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-sock.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-sock.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-sock-xinfo.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lsfd-unkn.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/lslocks.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/mcookie.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/namei.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/pipesz.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/rename.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/test_uuidd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/uuidd.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/uuidgen.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/uuidparse.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/waitpid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/whereis.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/misc-utils/wipefs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/pam_lastlog2/src/pam_lastlog2.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/schedutils/chrt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/schedutils/ionice.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/schedutils/sched_attr.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/schedutils/taskset.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/schedutils/uclampset.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/blkdiscard.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/blkpr.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/blkzone.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/chcpu.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/chmem.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/choom.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ctrlaltdel.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/dmesg.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/eject.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/fallocate.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/flock.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/fsfreeze.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/fstrim.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/hwclock.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/hwclock-cmos.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/hwclock.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/hwclock-rtc.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ipcmk.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ipcrm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ipcs.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ipcutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ipcutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/irq-common.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/irq-common.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/irqtop.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/ldattach.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/losetup.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-arm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-cpu.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-cputype.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-dmi.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-topology.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lscpu-virt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lsipc.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lsirq.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lsmem.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/lsns.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/mount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/mountpoint.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/nsenter.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/pivot_root.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/prlimit.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/readprofile.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/renice.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/rfkill.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/rtcwake.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setarch.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setpgid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setpriv.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setpriv-landlock.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setpriv-landlock.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/setsid.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/swapoff.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/swapon.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/swapon-common.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/swapon-common.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/switch_root.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/tunelp.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/umount.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/unshare.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/wdctl.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/sys-utils/zramctl.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/agetty.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/mesg.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/script.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/scriptlive.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/script-playutils.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/script-playutils.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/scriptreplay.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/setterm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/ttymsg.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/ttymsg.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/wall.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/term-utils/write.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/col.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/colcrt.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/colrm.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/column.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/hexdump.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/hexdump-conv.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/hexdump-display.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/hexdump.h \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/hexdump-parse.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/line.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/more.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/pg.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/rev.c \
     /home/andy/git/oilshell/oil/_deps/osh-runtime/util-linux-2.40/text-utils/ul.c

CATALOGS =  ca.gmo cs.gmo da.gmo de.gmo es.gmo et.gmo eu.gmo fi.gmo fr.gmo gl.gmo hr.gmo hu.gmo id.gmo it.gmo ja.gmo ko.gmo nl.gmo pl.gmo pt.gmo pt_BR.gmo ru.gmo sk.gmo sl.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo zh_TW.gmo

# Makevars gets inserted here. (Don't remove this line!)
# Makefile variables for PO directory in any package using GNU gettext.

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = --keyword=_ --keyword=N_ --keyword=P_:1,2

# This option gets passed to msgmerge.
MSGMERGE_OPTIONS = --no-wrap --previous

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = Karel Zak <kzak@redhat.com>

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = util-linux@vger.kernel.org

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES =

.SUFFIXES:
.SUFFIXES: .po .gmo .mo .sed .sin .nop .po-create .po-update

.po.mo:
	@echo "$(MSGFMT) -c -o $@ $<"; \
	$(MSGFMT) -c -o t-$@ $< && mv t-$@ $@

.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o $${lang}.gmo $${lang}.po"; \
	cd $(srcdir) && rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o t-$${lang}.gmo $${lang}.po && mv t-$${lang}.gmo $${lang}.gmo

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@


all: all-yes

all-yes: stamp-po
all-no:

# Ensure that the gettext macros and this Makefile.in.in are in sync.
CHECK_MACRO_VERSION = \
	test "$(GETTEXT_MACRO_VERSION)" = "0.18" \
	  || { echo "*** error: gettext infrastructure mismatch: using a Makefile.in.in from gettext version $(GETTEXT_MACRO_VERSION) but the autoconf macros are from gettext version 0.18" 1>&2; \
	       exit 1; \
	     }

# $(srcdir)/$(DOMAIN).pot is only created when needed. When xgettext finds no
# internationalized messages, no $(srcdir)/$(DOMAIN).pot is created (because
# we don't want to bother translators with empty POT files). We assume that
# LINGUAS is empty in this case, i.e. $(POFILES) and $(GMOFILES) are empty.
# In this case, stamp-po is a nop (i.e. a phony target).

# stamp-po is a timestamp denoting the last time at which the CATALOGS have
# been loosely updated. Its purpose is that when a developer or translator
# checks out the package via CVS, and the $(DOMAIN).pot file is not in CVS,
# "make" will update the $(DOMAIN).pot and the $(CATALOGS), but subsequent
# invocations of "make" will do nothing. This timestamp would not be necessary
# if updating the $(CATALOGS) would always touch them; however, the rule for
# $(POFILES) has been designed to not touch files that don't need to be
# changed.
stamp-po: $(srcdir)/$(DOMAIN).pot
	@$(CHECK_MACRO_VERSION)
	test ! -f $(srcdir)/$(DOMAIN).pot || \
	  test -z "$(GMOFILES)" || $(MAKE) $(GMOFILES)
	@test ! -f $(srcdir)/$(DOMAIN).pot || { \
	  echo "touch stamp-po" && \
	  echo timestamp > stamp-poT && \
	  mv stamp-poT stamp-po; \
	}

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
# The determination of whether the package xyz is a GNU one is based on the
# heuristic whether some file in the top level directory mentions "GNU xyz".
# If GNU 'find' is available, we avoid grepping through monster files.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in remove-potcdate.sed
	if { if (LC_ALL=C find --version) 2>/dev/null | grep GNU >/dev/null; then \
	       LC_ALL=C find -L $(top_srcdir) -maxdepth 1 -type f -size -10000000c -exec grep 'GNU util-linux' /dev/null '{}' ';' 2>/dev/null; \
	     else \
	       LC_ALL=C grep 'GNU util-linux' $(top_srcdir)/* 2>/dev/null; \
	     fi; \
	   } | grep -v 'libtool:' >/dev/null; then \
	  package_gnu='GNU '; \
	else \
	  package_gnu=''; \
	fi; \
	if test -n '$(MSGID_BUGS_ADDRESS)' || test '$(PACKAGE_BUGREPORT)' = '@'PACKAGE_BUGREPORT'@'; then \
	  msgid_bugs_address='$(MSGID_BUGS_ADDRESS)'; \
	else \
	  msgid_bugs_address='$(PACKAGE_BUGREPORT)'; \
	fi; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_gnu}util-linux" \
	      --package-version='2.40' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	esac
	test ! -f $(DOMAIN).po || { \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	if test -f "$(srcdir)/$${lang}.po"; then \
	  test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	  echo "$${cdcmd}$(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot"; \
	  cd $(srcdir) \
	    && { case `$(MSGMERGE_UPDATE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	           '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) $${lang}.po $(DOMAIN).pot;; \
	           *) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot;; \
	         esac; \
	       }; \
	else \
	  $(MAKE) $${lang}.po-create; \
	fi


install: install-exec install-data
install-exec:
install-data: install-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    $(INSTALL_DATA) $(srcdir)/$$file \
			    $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data: installdirs-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	else \
	  : ; \
	fi
installdirs-data-no:
installdirs-data-yes:
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data: uninstall-data-yes
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f stamp-po $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir:
	$(MAKE) update-po
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: stamp-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  dists="$$dists Makevars.template"; \
	fi; \
	if test -f $(srcdir)/$(DOMAIN).pot; then \
	  dists="$$dists $(DOMAIN).pot stamp-po"; \
	fi; \
	if test -f $(srcdir)/ChangeLog; then \
	  dists="$$dists ChangeLog"; \
	fi; \
	for i in 0 1 2 3 4 5 6 7 8 9; do \
	  if test -f $(srcdir)/ChangeLog.$$i; then \
	    dists="$$dists ChangeLog.$$i"; \
	  fi; \
	done; \
	if test -f $(srcdir)/LINGUAS; then dists="$$dists LINGUAS"; fi; \
	for file in $$dists; do \
	  if test -f $$file; then \
	    cp -p $$file $(distdir) || exit 1; \
	  else \
	    cp -p $(srcdir)/$$file $(distdir) || exit 1; \
	  fi; \
	done

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for creating PO files.

.nop.po-create:
	@lang=`echo $@ | sed -e 's/\.po-create$$//'`; \
	echo "File $$lang.po does not exist. If you are a translator, you can create it through 'msginit'." 1>&2; \
	exit 1

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if { case `$(MSGMERGE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	       '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       *) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	     esac; \
	   }; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

# Recreate Makefile by invoking config.status. Explicitly invoke the shell,
# because execution permission bits may not work on the current file system.
# Use /bin/bash, which is the shell determined by autoconf for the use by its
# scripts, not $(SHELL) which is hardwired to /bin/sh and may be deficient.
Makefile: Makefile.in.in Makevars $(top_builddir)/config.status POTFILES.in LINGUAS
	cd $(top_builddir) \
	  && /bin/bash ./config.status $(subdir)/$@.in po-directories

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
# Special Makefile rules for English message catalogs with quotation marks.

DISTFILES.common.extra1 = quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot

.SUFFIXES: .insert-header .po-update-en

en@quot.po-create:
	$(MAKE) en@quot.po-update
en@boldquot.po-create:
	$(MAKE) en@boldquot.po-update

en@quot.po-update: en@quot.po-update-en
en@boldquot.po-update: en@boldquot.po-update-en

.insert-header.po-update-en:
	@lang=`echo $@ | sed -e 's/\.po-update-en$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) $(SED) -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@quot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@quot.header/g' $(srcdir)/insert-header.sin > en@quot.insert-header

en@boldquot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@boldquot.header/g' $(srcdir)/insert-header.sin > en@boldquot.insert-header

mostlyclean: mostlyclean-quot
mostlyclean-quot:
	rm -f *.insert-header
