#include <stdio.h>
#include <string.h>
#include <time.h>

static char map[10000][10000];
static char map_org[10000][10000];
static char result[10000][10000];
static char data[150000];

static unsigned short random(void) {
	static unsigned long long seed = 5;
	return ((unsigned short)((seed = seed * 25214903917ULL + 11ULL) >> 16));
}

static void build() {
	register int sx, sy, ex, ey;
	memset(map, 0, sizeof(map));
	memset(map_org, 0, sizeof(map_org));

	for (register int c = 0; c < 10000; ++c) {
		sx = random() % 10000;
		sy = random() % 10000;
		ex = random() % 10000;
		ey = random() % 10000;

		if (sx >= ex || sy >= ey){
			c--;
			continue;
		}

		for (register int x = sx; x <= ex; ++x) {
			map[sy][x] = map_org[sy][x] = 1;
			map[ey][x] = map_org[ey][x] = 1;
		}

		for (register int y = sy + 1; y <= ey - 1; ++y) {
			map[y][sx] = map_org[y][sx] = 1;
			map[y][ex] = map_org[y][ex] = 1;
		}
	}
}

static bool verify() {
	if (memcmp(result, map_org, sizeof(map_org)) != 0) return false;
	return true;
}

extern void encode(char map[10000][10000], char data[150000]);
extern void decode(char result[10000][10000], char data[150000]);

int main() {
	int tmp;
	scanf("%d", &tmp);
	build();
	time_t SCORE = clock();
	encode(map, data);
	memset(map, 0, sizeof(map));
	decode(result, data);
	SCORE = (clock() - SCORE) / (CLOCKS_PER_SEC / 1000);
	if (!verify()) SCORE = 100000000;
	if (SCORE != 100000000) printf("PASS\n");
	else printf("FAIL\n");
}