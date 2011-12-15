#include <iostream>
#include <tulip/Graph.h>

using namespace std;
using namespace tlp;

int main(void)
{
  node n;
  tlp::Graph* g = tlp::loadGraph("tuto1.tlp");
  cout << g  << endl;
  // forEach(n, g->getNodes())
  //   {
  //     cout << n  << endl;
  //   }

  return 0;
}
