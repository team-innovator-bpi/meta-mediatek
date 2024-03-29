SRC_URI_append = " \
    ${CMF_GIT_ROOT}/rdkb/devices/raspberrypi/hal;protocol=${CMF_GIT_PROTOCOL};branch=${CMF_GIT_BRANCH};destsuffix=git/source/ethsw/devices_rpi;name=ethswhal-raspberrypi \
"
SRCREV = "${AUTOREV}"

CFLAGS_append = "${@bb.utils.contains('DISTRO_FEATURES', 'rdkb_wan_manager', ' -DFEATURE_RDKB_WAN_MANAGER ', '', d)}"

CFLAGS_append_mt7988 = " -DTHREE_GMACS_SUPPORT" 

do_configure_prepend(){
 ln -sf ${S}/devices_rpi/source/hal-ethsw/ccsp_hal_ethsw.c ${S}/ccsp_hal_ethsw.c
}
