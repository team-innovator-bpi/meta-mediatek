FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append = " \
    ${CMF_GIT_ROOT}/rdkb/devices/raspberrypi/hal;protocol=${CMF_GIT_PROTOCOL};branch=${CMF_GIT_BRANCH};destsuffix=git/source/platform/devices_rpi;name=platformhal-raspberrypi \
"

SRCREV = "${AUTOREV}"

DEPENDS += "utopia-headers"
CFLAGS_append = " \
    -I=${includedir}/utctx \
"

do_configure_prepend(){
    rm ${S}/platform_hal.c
    ln -sf ${S}/devices_rpi/source/platform/platform_hal.c ${S}/platform_hal.c
}
