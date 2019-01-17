struct vmn_library lib_init();
int check_vmn_cache(struct vmn_library *lib, char *str);
int ext_valid(char *ext);
char *get_file_ext(const char *file);
char *get_vmn_cache_path(struct vmn_library *lib, char *line, char *name);
char **line_split(char *str);
int qstrcmp(const void *a, const void *b);
char *read_vmn_cache(char *str, char *match);
void vmn_library_add(struct vmn_library *lib, char *entry);
void vmn_library_destroy_meta(struct vmn_library *lib);
void vmn_library_destroy_path(struct vmn_library *lib);
void vmn_library_metadata(struct vmn_library *lib);
void vmn_library_selections_add(struct vmn_library *lib, const char *entry);
void vmn_library_sort(struct vmn_library *lib);

struct vmn_library {
	mpv_handle *ctx;
	int depth;
	char **files;
	char ****entries;
	ITEM ***items;
	int length;
	MENU **menu;
	int mpv_active;
	int mpv_kill;
	char **selections;
	int *unknown;
	int vmn_quit;
};
