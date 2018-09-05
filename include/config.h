int check_cfg(char *cfg_file);
void check_dir();
struct vmn_config cfg_init();
char *get_cfg();
char *get_cfg_dir();
char *get_cfg_lib();
int read_cfg_int(struct vmn_config *vmn, char *file, const char *opt);
const char *read_cfg_str(struct vmn_config *vmn, char *file, const char *opt);

struct vmn_config {
	int select;
	int select_pos;
	const char *library;
	const char *mpv_cfg_dir;
	const char *mpv_cfg;
};
