#include <gtest/gtest.h>

#include "log.h"
Log::Log* hlog;

GTEST_API_ int main(int argc, char **argv) {
  printf("Auf geats! Running main() from %s\n", __FILE__);
  testing::InitGoogleTest(&argc, argv);

  hlog = new Log::Log(Log::A);
  hlog->setFeature(Log::FEATURE_PRINTFUNNAMES, true);

  int ret = RUN_ALL_TESTS();

  delete hlog;

  return ret;
}
