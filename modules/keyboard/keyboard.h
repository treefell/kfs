#ifndef KEYBOARD_H
# define KEYBOARD_H

#define KEY_NAME_LEN 16

#define UNKN_ASCII			'?'
#define KEY(name, ascii)		{#name, ascii}
#define KEY_SPECIAL(name)		{name, UNKN_ASCII}
#define KEY_UNKNOWN			{"Unknown", UNKN_ASCII}

struct kb_key_info {
	char	name[KEY_NAME_LEN];
	char	ascii;
};

struct kb_log_entry	{
	struct kb_key_info	info;
	int			status; /* Pressed 1 or Released 0 */
//	time_t			time_seconds;
//	struct tm		tm;
	char			scancode;
//	struct list_head	kb_log_entry_list;
//	char			log_msg[100];
};

void	Kb(void);
void	SetKeyCodes(void);
#endif
