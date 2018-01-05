lib_src = [
  'mraheader.c',
  'mrapeerstate.c',
  'mrarray.c',
  'mrchat.c',
  'mrchatlist.c',
  'mrcontact.c',
  'mrdehtml.c',
  'mrhash.c',
  'mrimap.c',
  'mrjob.c',
  'mrkey.c',
  'mrkeyring.c',
  'mrloginparam.c',
  'mrlot.c',
  'mrmailbox.c',
  'mrmailbox_configure.c',
  'mrmailbox_e2ee.c',
  'mrmailbox_imex.c',
  'mrmailbox_log.c',
  'mrmailbox_tools.c',
  'mrmimefactory.c',
  'mrmimeparser.c',
  'mrmsg.c',
  'mrosnative.c',
  'mrparam.c',
  'mrpgp.c',
  'mrsaxparser.c',
  'mrsimplify.c',
  'mrsmtp.c',
  'mrsqlite3.c',
  'mrstock.c',
  'mrtools.c',
]
lib_hdr = [
  'mraheader.h',
  'mrapeerstate.h',
  'mrarray.h',
  'mrchat.h',
  'mrchatlist.h',
  'mrcontact.h',
  'mrdehtml.h',
  'mrevent.h',
  'mrhash.h',
  'mrimap.h',
  'mrjob.h',
  'mrkey.h',
  'mrkeyring.h',
  'mrloginparam.h',
  'mrlot.h',
  'mrmailbox.h',
  'mrmailbox_internal.h',
  'mrmimefactory.h',
  'mrmimeparser.h',
  'mrmsg.h',
  'mrosnative.h',
  'mrparam.h',
  'mrpgp.h',
  'mrpoortext.h',
  'mrsaxparser.h',
  'mrsimplify.h',
  'mrsmtp.h',
  'mrsqlite3.h',
  'mrstock.h',
  'mrtools.h',
]
lib_inc = include_directories('.')


lib = library(
  'deltachat', lib_src,
  dependencies: [zlib, openssl, pthreads, sasl, sqlite, etpan, netpgp],
  include_directories: lib_inc,
  install: true,
)
install_headers(
  lib_hdr,
  subdir: 'deltachat',
)