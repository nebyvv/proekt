#pragma once
int compareString(const char* chr1, const char* chr2) {
	while (*chr1 != '\0' && *chr2 != '\0')
	{
		char str1 = *chr1;
		char str2 = *chr2;

		if (str1 >= 'A' && str1 <= 'Z') {
			str1 += 32;
		}
		if (str2 >= 'A' && str2 <= 'Z') {
			str2 += 32;
		}
		if (str1 < str2) {
			return -1;
		}
		else if (str1 > str2) {
			return 1;
		}
		chr1++;
		chr2++;
	}
	if (*chr1 == '\0' && *chr2 == '\0') {
		return 0;
	}
	else if (*chr1 == '\0') {
		return -1;
	}
	else {
		return 1;
	}
}
