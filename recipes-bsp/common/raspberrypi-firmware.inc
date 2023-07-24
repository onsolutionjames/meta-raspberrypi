RPIFW_DATE ?= "20230405"

RPIFW_SRC_URI ?= "https://archive.raspberrypi.com/debian/pool/main/r/raspberrypi-firmware/raspberrypi-firmware_1.${RPIFW_DATE}.orig.tar.xz"
RPIFW_S ?= "${WORKDIR}/raspberrypi-firmware-1.${RPIFW_DATE}"

SRC_URI = "${RPIFW_SRC_URI}"
SRC_URI[sha256sum] = "89fa175753264c8199bc7b1cc7e8dad033a8c7dfc57a6014cc59cb77a5c7abc6"

PV = "${RPIFW_DATE}"
