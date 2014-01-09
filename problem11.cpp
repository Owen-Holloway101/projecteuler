#include <iostream>
#include <fstream>

using namespace std;

int no[20][20];

int main() {

	std::ifstream infile("problem11.in");

	int line = 0;
	int  a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;
	while (infile >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p >> q >> r >> s >> t) {
		no[line][0] = a;
		no[line][1] = b;
		no[line][2] = c;
		no[line][3] = d;
		no[line][4] = e;
		no[line][5] = f;
		no[line][6] = g;
		no[line][7] = h;
		no[line][8] = i;
		no[line][9] = j;
		no[line][10] = k;
		no[line][11] = l;
		no[line][12] = m;
		no[line][13] = n;
		no[line][14] = o;
		no[line][15] = p;
		no[line][16] = q;
		no[line][17] = r;
		no[line][18] = s;
		no[line][19] = t;
		++line;
	}

	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			cout << no[i][j] << ":";
		}
		cout << endl;
	}

}