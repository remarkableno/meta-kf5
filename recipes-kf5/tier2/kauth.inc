DESCRIPTION = "KAuth"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kauth/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kcoreaddons"

GIT_REPO = "git://anongit.kde.org/kauth"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/plugins/kauth/helper/kauth_helper_plugin.so \
    /usr/share/kf5/kauth/*.stub \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Auth/*.cmake \
    ${prefix}/mkspecs/modules/qt_KAuth.pri \
"

FILES_${PN}-dbg += " \
    ${libdir}/plugins/kauth/helper/.debug/kauth_helper_plugin.so \
"
