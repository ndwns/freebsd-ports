ProjectsToBuild = glafp-utils hslibs ghc
GhcLibHcOpts = -O -split-objs -odir $*
SRC_HAPPY_OPTS += -c
GhcLibWays=
GhcLibsWithReadline = YES
