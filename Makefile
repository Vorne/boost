##############################################################################
#
# This is a dummy Makefile.  It may be extended later if we need to actually
# compile any boost code; for now, it just includes the base Makefile so that
# we can checkpoint the project.
#
##############################################################################

BUILD_DIR ?= ../build-internal
PROJECT_DIR = .

include $(BUILD_DIR)/Makefile.base.mk

