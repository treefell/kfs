#include "utils.h"
#include "keyboard.h"

/* 
 * Info about keyboard masks and I/O port:
 * https://stackoverflow.com/questions/33836541/linux-kernel-how-to-capture-a-key-press-and-replace-it-with-another-key
*/
#define KB_PORT 0x60
#define KB_STATUS_MASK 0x80
#define KB_SCANCODE_MASK 0x7f /* this is the same as ~KB_STATUS_MASK or NOT(KB_STATUS_MASK) */

extern struct kb_key_info	sc_to_kc[];

void	Kb(void)
{
	struct kb_log_entry	key_log;
	unsigned int i		= 0;

	SetKeyCodes();
	key_log.scancode = inportb(KB_PORT);
	key_log.status = key_log.scancode & KB_STATUS_MASK;
	key_log.info = sc_to_kc[(int)key_log.scancode];
	while (i <= 0XFF)
	{
//		PrintText(sc_to_kc[i].name);
		PutChar(sc_to_kc[i].ascii);
		i++;
	}
//	if (key_log.status == 1)
//	{
//		PutChar(key_log.info.ascii);
//	}
}

//size_t		nb_interrupt = 0;
//size_t		nb_pressed = 0;
//static LIST_HEAD(kb_key_list);
//char		*full_log_buf = NULL;//Set on Global so that previous allocation can be kfreed


/*
static irqreturn_t	kb_irq_handler(int irq, void *dev_id)
{
	unsigned long		flags;
	struct kb_log_entry	*key_log;

	nb_interrupt++;
	key_log = (struct kb_log_entry *)kmalloc(sizeof(*key_log), GFP_ATOMIC);
	if (!key_log)
	{
		printk(KERN_ERR "%s: failed to kmalloc\n", __func__);
		return IRQ_NONE;
	}
	spin_lock_irqsave(&kb_lock, flags);
	list_add_tail(&key_log->kb_log_entry_list, &kb_key_list);
	key_log->scancode = inb(KB_PORT);
	key_log->status = key_log->scancode & KB_STATUS_MASK;
	key_log->scancode &= KB_SCANCODE_MASK;
	key_log->time_seconds = get_seconds();
	key_log->info = sc_to_kc[(int)key_log->scancode];
	time_to_tm(key_log->time_seconds, (-sys_tz.tz_minuteswest * 60), &key_log->tm);
	snprintf(key_log->log_msg, 100, RED "[key log]" RESET " %.2d:%.2d:%.2d \"%s\" (0x%x) %s", key_log->tm.tm_hour + 2, key_log->tm.tm_min, key_log->tm.tm_sec, key_log->info.name, key_log->scancode, key_log->status ? CYAN "Released" RESET : GREEN "Pressed" RESET);//Paris (UTC + 2) heure ete et UTC + 1 heure hiver
	spin_unlock_irqrestore(&kb_lock, flags);
	if (!key_log->status)
		nb_pressed++;
	return IRQ_HANDLED;
}
*/
/*
static ssize_t	read_dev(struct file *dev_file, char __user *buf, size_t nbyte, loff_t *offset)
{
	struct list_head	*cur_elem = NULL;
	size_t			buf_size = 0;
	char			*ptr = NULL;

	if (full_log_buf)
	{
		kfree(full_log_buf);
		full_log_buf = NULL;
	}
	list_for_each(cur_elem, &kb_key_list) {
		struct kb_log_entry	*cur_key_log = list_entry(cur_elem, struct kb_log_entry, kb_log_entry_list);
		buf_size += strlen(cur_key_log->log_msg);
		buf_size++;//For each \n
	}
	buf_size++;//For terminating \0
	full_log_buf = (char *)kmalloc(sizeof(char) * buf_size, GFP_KERNEL | __GFP_ZERO);
	if (!full_log_buf)
		return -ENOMEM;
	ptr = full_log_buf;
	list_for_each(cur_elem, &kb_key_list) {
		struct kb_log_entry	*cur_key_log = list_entry(cur_elem, struct kb_log_entry, kb_log_entry_list);
		snprintf(ptr, buf_size - strlen(full_log_buf), "%s", cur_key_log->log_msg);
		ptr += strlen(cur_key_log->log_msg);
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (simple_read_from_buffer(buf, nbyte, offset, full_log_buf, buf_size));
}

static void __exit kb_logger_cleanup(void)
{
	struct list_head	*cur_elem;
	size_t			buf_size = 0;
	char			*exit_log_buf = NULL;
	char			*ptr = NULL;

	printk(KERN_INFO MAGENTA "<<<<PRINTING ALL KEYBOARD ENTRY DURING MODULE SESSION>>>>\n" RESET);
	list_for_each(cur_elem, &kb_key_list) {
		struct kb_log_entry	*cur_key_log = list_entry(cur_elem, struct kb_log_entry, kb_log_entry_list);
		if (!cur_key_log->status)
			buf_size += strlen(cur_key_log->info.name);
	}
	buf_size++;//For terminating \0
	exit_log_buf = (char *)kmalloc(sizeof(char) * buf_size, GFP_KERNEL | __GFP_ZERO);
	if (exit_log_buf)
	{
		ptr = exit_log_buf;
		list_for_each(cur_elem, &kb_key_list) {
			struct kb_log_entry	*cur_key_log = list_entry(cur_elem, struct kb_log_entry, kb_log_entry_list);
			if (!cur_key_log->status)
			{
				snprintf(ptr, buf_size - strlen(exit_log_buf), "%s", cur_key_log->info.name);
				ptr += strlen(cur_key_log->info.name);
			}
		}
		*ptr = '\0';
		printk(KERN_INFO YELLOW "%s\n" RESET, exit_log_buf);
		printk(KERN_INFO "lenght exit_log_buf = %ld\n", strlen(exit_log_buf));
		printk(KERN_INFO "Total number of keyboard interrupt = %ld\n", nb_interrupt);
		printk(KERN_INFO "Total number of key pressed = %ld\n", nb_pressed);
		printk(KERN_INFO "Total number of key released = %ld\n", nb_interrupt - nb_pressed);
	}
	printk(KERN_INFO "Cleaning up module.\n");
	free_irq(KB_IRQ_NB, &my_dev_id);
	kfree(exit_log_buf);
	list_for_each(cur_elem, &kb_key_list) {
		struct kb_log_entry	*cur_key_log = list_entry(cur_elem, struct kb_log_entry, kb_log_entry_list);
		kfree(cur_key_log);
	}
}
*/
