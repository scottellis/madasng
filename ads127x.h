#ifndef ADS127X_H
#define ADS127X_H

#define ADS_BLOCKSIZE 4096

int ads_read(unsigned char *blocks, int num_blocks);

#endif /* ifndef ADS127X_H */
