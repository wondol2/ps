void encode(char map[10000][10000], char data[150000]) {
    register unsigned short* sdata = (unsigned short *)data;
    register int top = -1;
    int BLOCK_SIZE = 80000;
    char *mmap = *map;

    for (register int i = 0; i < 100000000; ++i) {
    // for (register int ii = 0; ii < 100000000; ii += BLOCK_SIZE) {
    //     int i_block_end = ii + BLOCK_SIZE;

    //     for (register int i = ii; i < i_block_end; ++i) {
            if (*(mmap + i) & 1) {
                int dj = i + 1, di = i + 10000;

                while (dj < 100000000 && (*(mmap + dj))) dj++;
                while (di < 100000000 && (*(mmap + di))) {
                    mmap[di] = 2;
                    di += 10000;
                }

                int lenj = dj - i, leni = (di - i) / 10000;

                sdata[++top] = i % 10000, sdata[++top] = i / 10000;

                sdata[++top] = lenj;
                if (leni > 1) sdata[++top] = 16384 ^ leni;

                i = dj;
            }
        // }
    }
    sdata[++top] = 32768;
}


void decode(char result[10000][10000], char data[150000]) {
    register unsigned short* sdata = (unsigned short *)data;
    char *mresult = *result;

    for (register int i = 0; sdata[i] ^ 32768; ++i) {
        int x = sdata[i];
        int y = sdata[i + 1];
        int xlen = sdata[i + 2];
        int ylen = sdata[i + 3];
        int next = 2;
        
        int start = y*10000 + x;
        int x_end = start + xlen;
        for (register int j = start; j ^ x_end; ++j) {
            mresult[j] = 1;
        }

        if (ylen & 16384) {
            ylen ^= 16384;
            int y_end = start + ylen*10000;
            for (register int j = start; j ^ y_end; j+=10000) {
                mresult[j] = 1;
            }
            next = 3;
        }

        i += next;
    }
}
