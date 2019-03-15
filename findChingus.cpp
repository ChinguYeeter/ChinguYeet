#include "facebook.h"
#include "epic.h"
#include <vector>

using namespace std;
using facebook::FacebookUtils;

struct Chingu {
  int chingu_id;
  bool stans_loona;
  bool legal_age;
};

int main() {
  auto facebook = FacebookUtils.getFacebook();
  const auto& chingus = facebook.getChingus();
  vector<Chingus> matches;
  for (const auto& chingu : chingus) {
    if (chingu.stans_loona && chingu.legal_age) {
      matches.push_back(chingu);
    }
  }
  return 0;
}
