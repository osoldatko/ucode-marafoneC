#include <stdlib.h>

void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
int mx_count_words(const char *str, char delimiter);

char **mx_strsplit(char const *s, char c) {
	int count_w = mx_count_words(s, c);
	int j = 0;
	char **result = (char **)malloc(8 * count_w);
	for (int i = 0; i < count_w; i++) {
		int word_l = 0;
		int start = 0;
		for (; s[j]; j++) {
			if (s[j] != c) {
				word_l += 1;
				if (start == 0) {
					start = j;
                }
			}
			else if (s[j] == c && word_l) {
				break;
            }
		}
		char* new_wor = mx_strnew(word_l);
		for (int k = 0, m = start; m < j; k++, m++)
			new_wor[k] = s[m];
		result[i] = new_wor;
	}
	result[count_w] = NULL;
	return result;
}


