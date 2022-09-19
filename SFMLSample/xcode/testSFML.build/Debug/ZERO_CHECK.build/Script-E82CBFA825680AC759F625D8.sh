#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode
  make -f /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode
  make -f /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode
  make -f /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode
  make -f /Users/stu/msd/CS6010/myGethubRepo/SFMLSample/xcode/CMakeScripts/ReRunCMake.make
fi

