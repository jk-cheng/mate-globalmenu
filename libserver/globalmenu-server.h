/* globalmenu-server.h generated by valac, the Vala compiler, do not modify */


#ifndef __GLOBALMENU_SERVER_H__
#define __GLOBALMENU_SERVER_H__

#include <glib.h>
#include <gtk/gtk.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>

G_BEGIN_DECLS


#define GNOMENU_TYPE_SHELL (gnomenu_shell_get_type ())
#define GNOMENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_SHELL, GnomenuShell))
#define GNOMENU_IS_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_SHELL))
#define GNOMENU_SHELL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GNOMENU_TYPE_SHELL, GnomenuShellIface))

typedef struct _GnomenuShell GnomenuShell;
typedef struct _GnomenuShellIface GnomenuShellIface;

#define GNOMENU_TYPE_ITEM (gnomenu_item_get_type ())
#define GNOMENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_ITEM, GnomenuItem))
#define GNOMENU_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_ITEM))
#define GNOMENU_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GNOMENU_TYPE_ITEM, GnomenuItemIface))

typedef struct _GnomenuItem GnomenuItem;
typedef struct _GnomenuItemIface GnomenuItemIface;

#define GNOMENU_TYPE_ITEM_TYPE (gnomenu_item_type_get_type ())

#define GNOMENU_TYPE_ITEM_STATE (gnomenu_item_state_get_type ())

#define GNOMENU_TYPE_MENU_BAR (gnomenu_menu_bar_get_type ())
#define GNOMENU_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU_BAR, GnomenuMenuBar))
#define GNOMENU_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU_BAR, GnomenuMenuBarClass))
#define GNOMENU_IS_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU_BAR))
#define GNOMENU_IS_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU_BAR))
#define GNOMENU_MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU_BAR, GnomenuMenuBarClass))

typedef struct _GnomenuMenuBar GnomenuMenuBar;
typedef struct _GnomenuMenuBarClass GnomenuMenuBarClass;
typedef struct _GnomenuMenuBarPrivate GnomenuMenuBarPrivate;

#define GNOMENU_TYPE_GLOBAL_MENU_BAR (gnomenu_global_menu_bar_get_type ())
#define GNOMENU_GLOBAL_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_GLOBAL_MENU_BAR, GnomenuGlobalMenuBar))
#define GNOMENU_GLOBAL_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_GLOBAL_MENU_BAR, GnomenuGlobalMenuBarClass))
#define GNOMENU_IS_GLOBAL_MENU_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_GLOBAL_MENU_BAR))
#define GNOMENU_IS_GLOBAL_MENU_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_GLOBAL_MENU_BAR))
#define GNOMENU_GLOBAL_MENU_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_GLOBAL_MENU_BAR, GnomenuGlobalMenuBarClass))

typedef struct _GnomenuGlobalMenuBar GnomenuGlobalMenuBar;
typedef struct _GnomenuGlobalMenuBarClass GnomenuGlobalMenuBarClass;
typedef struct _GnomenuGlobalMenuBarPrivate GnomenuGlobalMenuBarPrivate;

#define GNOMENU_TYPE_WINDOW (gnomenu_window_get_type ())
#define GNOMENU_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_WINDOW, GnomenuWindow))
#define GNOMENU_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_WINDOW, GnomenuWindowClass))
#define GNOMENU_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_WINDOW))
#define GNOMENU_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_WINDOW))
#define GNOMENU_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_WINDOW, GnomenuWindowClass))

typedef struct _GnomenuWindow GnomenuWindow;
typedef struct _GnomenuWindowClass GnomenuWindowClass;

#define GNOMENU_TYPE_GLOBAL_MENU_ITEM (gnomenu_global_menu_item_get_type ())
#define GNOMENU_GLOBAL_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_GLOBAL_MENU_ITEM, GnomenuGlobalMenuItem))
#define GNOMENU_GLOBAL_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_GLOBAL_MENU_ITEM, GnomenuGlobalMenuItemClass))
#define GNOMENU_IS_GLOBAL_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_GLOBAL_MENU_ITEM))
#define GNOMENU_IS_GLOBAL_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_GLOBAL_MENU_ITEM))
#define GNOMENU_GLOBAL_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_GLOBAL_MENU_ITEM, GnomenuGlobalMenuItemClass))

typedef struct _GnomenuGlobalMenuItem GnomenuGlobalMenuItem;
typedef struct _GnomenuGlobalMenuItemClass GnomenuGlobalMenuItemClass;
typedef struct _GnomenuGlobalMenuItemPrivate GnomenuGlobalMenuItemPrivate;

#define GNOMENU_TYPE_ADAPTER (gnomenu_adapter_get_type ())
#define GNOMENU_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_ADAPTER, GnomenuAdapter))
#define GNOMENU_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_ADAPTER, GnomenuAdapterClass))
#define GNOMENU_IS_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_ADAPTER))
#define GNOMENU_IS_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_ADAPTER))
#define GNOMENU_ADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_ADAPTER, GnomenuAdapterClass))

typedef struct _GnomenuAdapter GnomenuAdapter;
typedef struct _GnomenuAdapterClass GnomenuAdapterClass;
typedef struct _GnomenuAdapterPrivate GnomenuAdapterPrivate;

#define GNOMENU_TYPE_GLOBAL_MENU_ADAPTER (gnomenu_global_menu_adapter_get_type ())
#define GNOMENU_GLOBAL_MENU_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_GLOBAL_MENU_ADAPTER, GnomenuGlobalMenuAdapter))
#define GNOMENU_GLOBAL_MENU_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_GLOBAL_MENU_ADAPTER, GnomenuGlobalMenuAdapterClass))
#define GNOMENU_IS_GLOBAL_MENU_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_GLOBAL_MENU_ADAPTER))
#define GNOMENU_IS_GLOBAL_MENU_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_GLOBAL_MENU_ADAPTER))
#define GNOMENU_GLOBAL_MENU_ADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_GLOBAL_MENU_ADAPTER, GnomenuGlobalMenuAdapterClass))

typedef struct _GnomenuGlobalMenuAdapter GnomenuGlobalMenuAdapter;
typedef struct _GnomenuGlobalMenuAdapterClass GnomenuGlobalMenuAdapterClass;
typedef struct _GnomenuGlobalMenuAdapterPrivate GnomenuGlobalMenuAdapterPrivate;

#define GNOMENU_TYPE_BACKGROUND_TYPE (gnomenu_background_type_get_type ())

#define GNOMENU_TYPE_GRAVITY (gnomenu_gravity_get_type ())
typedef struct _GnomenuWindowPrivate GnomenuWindowPrivate;

#define GNOMENU_TYPE_PARSER (gnomenu_parser_get_type ())
#define GNOMENU_PARSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_PARSER, GnomenuParser))
#define GNOMENU_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_PARSER, GnomenuParserClass))
#define GNOMENU_IS_PARSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_PARSER))
#define GNOMENU_IS_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_PARSER))
#define GNOMENU_PARSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_PARSER, GnomenuParserClass))

typedef struct _GnomenuParser GnomenuParser;
typedef struct _GnomenuParserClass GnomenuParserClass;
typedef struct _GnomenuParserPrivate GnomenuParserPrivate;

#define GNOMENU_TYPE_SERIALIZER (gnomenu_serializer_get_type ())
#define GNOMENU_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_SERIALIZER, GnomenuSerializer))
#define GNOMENU_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_SERIALIZER, GnomenuSerializerClass))
#define GNOMENU_IS_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_SERIALIZER))
#define GNOMENU_IS_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_SERIALIZER))
#define GNOMENU_SERIALIZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_SERIALIZER, GnomenuSerializerClass))

typedef struct _GnomenuSerializer GnomenuSerializer;
typedef struct _GnomenuSerializerClass GnomenuSerializerClass;
typedef struct _GnomenuSerializerPrivate GnomenuSerializerPrivate;

#define GNOMENU_TYPE_MENU (gnomenu_menu_get_type ())
#define GNOMENU_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU, GnomenuMenu))
#define GNOMENU_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU, GnomenuMenuClass))
#define GNOMENU_IS_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU))
#define GNOMENU_IS_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU))
#define GNOMENU_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU, GnomenuMenuClass))

typedef struct _GnomenuMenu GnomenuMenu;
typedef struct _GnomenuMenuClass GnomenuMenuClass;
typedef struct _GnomenuMenuPrivate GnomenuMenuPrivate;

#define GNOMENU_TYPE_BACKGROUND (gnomenu_background_get_type ())
#define GNOMENU_BACKGROUND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_BACKGROUND, GnomenuBackground))
#define GNOMENU_BACKGROUND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_BACKGROUND, GnomenuBackgroundClass))
#define GNOMENU_IS_BACKGROUND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_BACKGROUND))
#define GNOMENU_IS_BACKGROUND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_BACKGROUND))
#define GNOMENU_BACKGROUND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_BACKGROUND, GnomenuBackgroundClass))

typedef struct _GnomenuBackground GnomenuBackground;
typedef struct _GnomenuBackgroundClass GnomenuBackgroundClass;
typedef struct _GnomenuBackgroundPrivate GnomenuBackgroundPrivate;

#define GNOMENU_TYPE_MENU_ITEM (gnomenu_menu_item_get_type ())
#define GNOMENU_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItem))
#define GNOMENU_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItemClass))
#define GNOMENU_IS_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU_ITEM))
#define GNOMENU_IS_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU_ITEM))
#define GNOMENU_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItemClass))

typedef struct _GnomenuMenuItem GnomenuMenuItem;
typedef struct _GnomenuMenuItemClass GnomenuMenuItemClass;
typedef struct _GnomenuMenuItemPrivate GnomenuMenuItemPrivate;

#define GNOMENU_TYPE_MENU_BAR_BOX (gnomenu_menu_bar_box_get_type ())
#define GNOMENU_MENU_BAR_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU_BAR_BOX, GnomenuMenuBarBox))
#define GNOMENU_MENU_BAR_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU_BAR_BOX, GnomenuMenuBarBoxClass))
#define GNOMENU_IS_MENU_BAR_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU_BAR_BOX))
#define GNOMENU_IS_MENU_BAR_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU_BAR_BOX))
#define GNOMENU_MENU_BAR_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU_BAR_BOX, GnomenuMenuBarBoxClass))

typedef struct _GnomenuMenuBarBox GnomenuMenuBarBox;
typedef struct _GnomenuMenuBarBoxClass GnomenuMenuBarBoxClass;
typedef struct _GnomenuMenuBarBoxPrivate GnomenuMenuBarBoxPrivate;

#define GNOMENU_TYPE_MENU_LABEL (gnomenu_menu_label_get_type ())
#define GNOMENU_MENU_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU_LABEL, GnomenuMenuLabel))
#define GNOMENU_MENU_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU_LABEL, GnomenuMenuLabelClass))
#define GNOMENU_IS_MENU_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU_LABEL))
#define GNOMENU_IS_MENU_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU_LABEL))
#define GNOMENU_MENU_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU_LABEL, GnomenuMenuLabelClass))

typedef struct _GnomenuMenuLabel GnomenuMenuLabel;
typedef struct _GnomenuMenuLabelClass GnomenuMenuLabelClass;
typedef struct _GnomenuMenuLabelPrivate GnomenuMenuLabelPrivate;

typedef enum  {
	GNOMENU_ITEM_TYPE_NORMAL = 0,
	GNOMENU_ITEM_TYPE_CHECK = 1,
	GNOMENU_ITEM_TYPE_RADIO = 2,
	GNOMENU_ITEM_TYPE_IMAGE = 3,
	GNOMENU_ITEM_TYPE_SEPARATOR = 4,
	GNOMENU_ITEM_TYPE_ARROW = 5,
	GNOMENU_ITEM_TYPE_ICON = 6
} GnomenuItemType;

typedef enum  {
	GNOMENU_ITEM_STATE_UNTOGGLED = 0,
	GNOMENU_ITEM_STATE_TOGGLED = 1,
	GNOMENU_ITEM_STATE_TRISTATE = 2
} GnomenuItemState;

struct _GnomenuItemIface {
	GTypeInterface parent_iface;
	GnomenuShell* (*get_shell) (GnomenuItem* self);
	GnomenuShell* (*get_sub_shell) (GnomenuItem* self);
	gboolean (*get_has_sub_shell) (GnomenuItem* self);
	void (*set_has_sub_shell) (GnomenuItem* self, gboolean value);
	gboolean (*get_client_side_sub_shell) (GnomenuItem* self);
	void (*set_client_side_sub_shell) (GnomenuItem* self, gboolean value);
	const char* (*get_item_id) (GnomenuItem* self);
	void (*set_item_id) (GnomenuItem* self, const char* value);
	GnomenuItemType (*get_item_type) (GnomenuItem* self);
	void (*set_item_type) (GnomenuItem* self, GnomenuItemType value);
	gboolean (*get_item_use_underline) (GnomenuItem* self);
	void (*set_item_use_underline) (GnomenuItem* self, gboolean value);
	gboolean (*get_item_sensitive) (GnomenuItem* self);
	void (*set_item_sensitive) (GnomenuItem* self, gboolean value);
	gboolean (*get_item_visible) (GnomenuItem* self);
	void (*set_item_visible) (GnomenuItem* self, gboolean value);
	GnomenuItemState (*get_item_state) (GnomenuItem* self);
	void (*set_item_state) (GnomenuItem* self, GnomenuItemState value);
	const char* (*get_item_label) (GnomenuItem* self);
	void (*set_item_label) (GnomenuItem* self, const char* value);
	const char* (*get_item_icon) (GnomenuItem* self);
	void (*set_item_icon) (GnomenuItem* self, const char* value);
	const char* (*get_item_accel_text) (GnomenuItem* self);
	void (*set_item_accel_text) (GnomenuItem* self, const char* value);
	const char* (*get_item_font) (GnomenuItem* self);
	void (*set_item_font) (GnomenuItem* self, const char* value);
};

struct _GnomenuShellIface {
	GTypeInterface parent_iface;
	GnomenuItem* (*get_item) (GnomenuShell* self, gint position);
	GnomenuItem* (*get_item_by_id) (GnomenuShell* self, const char* id);
	gint (*get_item_position) (GnomenuShell* self, GnomenuItem* item);
	GnomenuItem* (*get_owner) (GnomenuShell* self);
	gint (*get_length) (GnomenuShell* self);
	void (*set_length) (GnomenuShell* self, gint value);
};

struct _GnomenuMenuBar {
	GtkMenuBar parent_instance;
	GnomenuMenuBarPrivate * priv;
};

struct _GnomenuMenuBarClass {
	GtkMenuBarClass parent_class;
};

struct _GnomenuGlobalMenuBar {
	GnomenuMenuBar parent_instance;
	GnomenuGlobalMenuBarPrivate * priv;
	gboolean _grab_menu_key;
};

struct _GnomenuGlobalMenuBarClass {
	GnomenuMenuBarClass parent_class;
};

struct _GnomenuGlobalMenuItem {
	GtkMenuItem parent_instance;
	GnomenuGlobalMenuItemPrivate * priv;
};

struct _GnomenuGlobalMenuItemClass {
	GtkMenuItemClass parent_class;
};

struct _GnomenuAdapter {
	GObject parent_instance;
	GnomenuAdapterPrivate * priv;
};

struct _GnomenuAdapterClass {
	GObjectClass parent_class;
};

struct _GnomenuGlobalMenuAdapter {
	GnomenuAdapter parent_instance;
	GnomenuGlobalMenuAdapterPrivate * priv;
};

struct _GnomenuGlobalMenuAdapterClass {
	GnomenuAdapterClass parent_class;
};

typedef enum  {
	GNOMENU_BACKGROUND_TYPE_NONE = 0,
	GNOMENU_BACKGROUND_TYPE_COLOR = 1,
	GNOMENU_BACKGROUND_TYPE_PIXMAP = 2
} GnomenuBackgroundType;

typedef enum  {
	GNOMENU_GRAVITY_DOWN = 0,
	GNOMENU_GRAVITY_UP = 1,
	GNOMENU_GRAVITY_LEFT = 2,
	GNOMENU_GRAVITY_RIGHT = 3
} GnomenuGravity;

struct _GnomenuWindow {
	GObject parent_instance;
	GnomenuWindowPrivate * priv;
};

struct _GnomenuWindowClass {
	GObjectClass parent_class;
	void (*property_notify_event) (GnomenuWindow* self, const char* prop);
};

struct _GnomenuParser {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GnomenuParserPrivate * priv;
};

struct _GnomenuParserClass {
	GTypeClass parent_class;
	void (*finalize) (GnomenuParser *self);
};

struct _GnomenuSerializer {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GnomenuSerializerPrivate * priv;
};

struct _GnomenuSerializerClass {
	GTypeClass parent_class;
	void (*finalize) (GnomenuSerializer *self);
};

struct _GnomenuMenu {
	GtkMenu parent_instance;
	GnomenuMenuPrivate * priv;
};

struct _GnomenuMenuClass {
	GtkMenuClass parent_class;
};

struct _GnomenuBackground {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GnomenuBackgroundPrivate * priv;
	GnomenuBackgroundType type;
	GdkPixmap* pixmap;
	GdkColor color;
	gint offset_x;
	gint offset_y;
};

struct _GnomenuBackgroundClass {
	GTypeClass parent_class;
	void (*finalize) (GnomenuBackground *self);
};

struct _GnomenuMenuItem {
	GtkMenuItem parent_instance;
	GnomenuMenuItemPrivate * priv;
	GnomenuMenu* _submenu_cache;
};

struct _GnomenuMenuItemClass {
	GtkMenuItemClass parent_class;
};

struct _GnomenuMenuBarBox {
	GtkContainer parent_instance;
	GnomenuMenuBarBoxPrivate * priv;
};

struct _GnomenuMenuBarBoxClass {
	GtkContainerClass parent_class;
};

struct _GnomenuMenuLabel {
	GtkContainer parent_instance;
	GnomenuMenuLabelPrivate * priv;
};

struct _GnomenuMenuLabelClass {
	GtkContainerClass parent_class;
};


GType gnomenu_item_type_get_type (void) G_GNUC_CONST;
GType gnomenu_item_state_get_type (void) G_GNUC_CONST;
GType gnomenu_item_get_type (void) G_GNUC_CONST;
GType gnomenu_shell_get_type (void) G_GNUC_CONST;
GType gnomenu_menu_bar_get_type (void) G_GNUC_CONST;
GType gnomenu_global_menu_bar_get_type (void) G_GNUC_CONST;
GnomenuGlobalMenuBar* gnomenu_global_menu_bar_new (void);
GnomenuGlobalMenuBar* gnomenu_global_menu_bar_construct (GType object_type);
gboolean gnomenu_global_menu_bar_get_per_monitor_mode (GnomenuGlobalMenuBar* self);
void gnomenu_global_menu_bar_set_per_monitor_mode (GnomenuGlobalMenuBar* self, gboolean value);
gboolean gnomenu_global_menu_bar_get_grab_keys (GnomenuGlobalMenuBar* self);
void gnomenu_global_menu_bar_set_grab_keys (GnomenuGlobalMenuBar* self, gboolean value);
gboolean gnomenu_global_menu_bar_get_grab_menu_key (GnomenuGlobalMenuBar* self);
void gnomenu_global_menu_bar_set_grab_menu_key (GnomenuGlobalMenuBar* self, gboolean value);
GType gnomenu_window_get_type (void) G_GNUC_CONST;
GnomenuWindow* gnomenu_global_menu_bar_get_active_window (GnomenuGlobalMenuBar* self);
GType gnomenu_global_menu_item_get_type (void) G_GNUC_CONST;
GnomenuGlobalMenuItem* gnomenu_global_menu_item_new (void);
GnomenuGlobalMenuItem* gnomenu_global_menu_item_construct (GType object_type);
gboolean gnomenu_global_menu_item_get_per_monitor_mode (GnomenuGlobalMenuItem* self);
void gnomenu_global_menu_item_set_per_monitor_mode (GnomenuGlobalMenuItem* self, gboolean value);
GnomenuWindow* gnomenu_global_menu_item_get_active_window (GnomenuGlobalMenuItem* self);
GType gnomenu_adapter_get_type (void) G_GNUC_CONST;
GType gnomenu_global_menu_adapter_get_type (void) G_GNUC_CONST;
GnomenuGlobalMenuAdapter* gnomenu_global_menu_adapter_new (GtkMenuShell* gtk_shell);
GnomenuGlobalMenuAdapter* gnomenu_global_menu_adapter_construct (GType object_type, GtkMenuShell* gtk_shell);
GnomenuWindow* gnomenu_global_menu_adapter_get_active_window (GnomenuGlobalMenuAdapter* self);
GnomenuAdapter* gnomenu_adapter_new (GtkMenuShell* gtk_shell);
GnomenuAdapter* gnomenu_adapter_construct (GType object_type, GtkMenuShell* gtk_shell);
GnomenuAdapter* gnomenu_adapter_get_adapter (GtkMenuShell* gtk_shell);
GtkMenuShell* gnomenu_adapter_get_gtk_shell (GnomenuAdapter* self);
void gnomenu_adapter_set_gtk_shell (GnomenuAdapter* self, GtkMenuShell* value);
gboolean gnomenu_adapter_get_is_topmost (GnomenuAdapter* self);
void gnomenu_adapter_set_is_topmost (GnomenuAdapter* self, gboolean value);
#define GNOMENU_NET_GLOBALMENU_MENU_CONTEXT "_NET_GLOBALMENU_MENU_CONTEXT"
#define GNOMENU_NET_GLOBALMENU_MENU_EVENT "_NET_GLOBALMENU_MENU_EVENT"
#define GNOMENU_NET_GLOBALMENU_MENU_SELECT "_NET_GLOBALMENU_MENU_SELECT"
#define GNOMENU_NET_GLOBALMENU_MENU_DESELECT "_NET_GLOBALMENU_MENU_DESELECT"
GType gnomenu_background_type_get_type (void) G_GNUC_CONST;
GType gnomenu_gravity_get_type (void) G_GNUC_CONST;
gboolean gnomenu_window_is_on_active_workspace (GnomenuWindow* self);
gint gnomenu_window_get_monitor_num (GnomenuWindow* self);
guint gnomenu_window_get_xid (GnomenuWindow* self);
GnomenuWindow* gnomenu_window_new (GdkWindow* window);
GnomenuWindow* gnomenu_window_construct (GType object_type, GdkWindow* window);
GnomenuWindow* gnomenu_window_foreign_new (gulong xid);
void gnomenu_window_set_key_widget (GnomenuWindow* self, GtkWidget* widget);
char* gnomenu_window_get (GnomenuWindow* self, const char* property_name);
void gnomenu_window_set (GnomenuWindow* self, const char* property_name, const char* value);
char* gnomenu_window_get_by_atom (GnomenuWindow* self, GdkAtom atom);
void gnomenu_window_set_by_atom (GnomenuWindow* self, GdkAtom atom, const char* value);
char* gnomenu_window_get_menu_context (GnomenuWindow* self);
void gnomenu_window_set_menu_context (GnomenuWindow* self, const char* value);
void gnomenu_window_emit_menu_event (GnomenuWindow* self, const char* path);
void gnomenu_window_emit_menu_select (GnomenuWindow* self, const char* path, const char* pos);
void gnomenu_window_emit_menu_deselect (GnomenuWindow* self, const char* path);
gboolean gnomenu_window_grab_key (GnomenuWindow* self, guint keyval, GdkModifierType state);
gboolean gnomenu_window_ungrab_key (GnomenuWindow* self, guint keyval, GdkModifierType state);
GdkWindow* gnomenu_window_get_window (GnomenuWindow* self);
void gnomenu_window_set_window (GnomenuWindow* self, GdkWindow* value);
GnomenuWindow* gnomenu_window_get_transient (GnomenuWindow* self);
void gnomenu_window_set_transient (GnomenuWindow* self, GnomenuWindow* value);
void gnomenu_window_property_notify_event (GnomenuWindow* self, const char* prop);
gpointer gnomenu_parser_ref (gpointer instance);
void gnomenu_parser_unref (gpointer instance);
GParamSpec* gnomenu_param_spec_parser (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gnomenu_value_set_parser (GValue* value, gpointer v_object);
void gnomenu_value_take_parser (GValue* value, gpointer v_object);
gpointer gnomenu_value_get_parser (const GValue* value);
GType gnomenu_parser_get_type (void) G_GNUC_CONST;
void gnomenu_parser_parse (GnomenuShell* shell, const char* description, GError** error);
gpointer gnomenu_serializer_ref (gpointer instance);
void gnomenu_serializer_unref (gpointer instance);
GParamSpec* gnomenu_param_spec_serializer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gnomenu_value_set_serializer (GValue* value, gpointer v_object);
void gnomenu_value_take_serializer (GValue* value, gpointer v_object);
gpointer gnomenu_value_get_serializer (const GValue* value);
GType gnomenu_serializer_get_type (void) G_GNUC_CONST;
char* gnomenu_serializer_to_string (GObject* obj, gboolean pretty_print);
GnomenuItem* gnomenu_shell_get_item (GnomenuShell* self, gint position);
GnomenuItem* gnomenu_shell_get_item_by_id (GnomenuShell* self, const char* id);
gint gnomenu_shell_get_item_position (GnomenuShell* self, GnomenuItem* item);
GnomenuItem* gnomenu_shell_get_item_by_path (GnomenuShell* self, const char* path);
GnomenuItem* gnomenu_shell_get_owner (GnomenuShell* self);
gint gnomenu_shell_get_length (GnomenuShell* self);
void gnomenu_shell_set_length (GnomenuShell* self, gint value);
GnomenuShell* gnomenu_shell_get_topmost_shell (GnomenuShell* self);
gboolean gnomenu_item_is_child_of (GnomenuItem* self, GnomenuItem* possible_parent);
GnomenuItemState gnomenu_item_state_from_string (const char* str);
const char* gnomenu_item_state_to_string (GnomenuItemState state);
GnomenuItemType gnomenu_item_type_from_string (const char* str);
gboolean gnomenu_item_type_has_label (GnomenuItemType type);
const char* gnomenu_item_type_to_string (GnomenuItemType type);
GnomenuShell* gnomenu_item_get_shell (GnomenuItem* self);
GnomenuShell* gnomenu_item_get_sub_shell (GnomenuItem* self);
gboolean gnomenu_item_get_has_sub_shell (GnomenuItem* self);
void gnomenu_item_set_has_sub_shell (GnomenuItem* self, gboolean value);
gboolean gnomenu_item_get_client_side_sub_shell (GnomenuItem* self);
void gnomenu_item_set_client_side_sub_shell (GnomenuItem* self, gboolean value);
GnomenuShell* gnomenu_item_get_topmost_shell (GnomenuItem* self);
gint gnomenu_item_get_item_position (GnomenuItem* self);
const char* gnomenu_item_get_item_id (GnomenuItem* self);
void gnomenu_item_set_item_id (GnomenuItem* self, const char* value);
GnomenuItemType gnomenu_item_get_item_type (GnomenuItem* self);
void gnomenu_item_set_item_type (GnomenuItem* self, GnomenuItemType value);
gboolean gnomenu_item_get_item_use_underline (GnomenuItem* self);
void gnomenu_item_set_item_use_underline (GnomenuItem* self, gboolean value);
gboolean gnomenu_item_get_item_sensitive (GnomenuItem* self);
void gnomenu_item_set_item_sensitive (GnomenuItem* self, gboolean value);
gboolean gnomenu_item_get_item_visible (GnomenuItem* self);
void gnomenu_item_set_item_visible (GnomenuItem* self, gboolean value);
GnomenuItemState gnomenu_item_get_item_state (GnomenuItem* self);
void gnomenu_item_set_item_state (GnomenuItem* self, GnomenuItemState value);
const char* gnomenu_item_get_item_label (GnomenuItem* self);
void gnomenu_item_set_item_label (GnomenuItem* self, const char* value);
const char* gnomenu_item_get_item_icon (GnomenuItem* self);
void gnomenu_item_set_item_icon (GnomenuItem* self, const char* value);
const char* gnomenu_item_get_item_accel_text (GnomenuItem* self);
void gnomenu_item_set_item_accel_text (GnomenuItem* self, const char* value);
const char* gnomenu_item_get_item_font (GnomenuItem* self);
void gnomenu_item_set_item_font (GnomenuItem* self, const char* value);
char* gnomenu_item_get_item_path_name (GnomenuItem* self);
char* gnomenu_item_get_item_path (GnomenuItem* self);
GType gnomenu_menu_get_type (void) G_GNUC_CONST;
extern gboolean gnomenu_menu_default_use_rgba_colormap;
GnomenuMenu* gnomenu_menu_new (void);
GnomenuMenu* gnomenu_menu_construct (GType object_type);
gboolean gnomenu_menu_get_is_topmost (GnomenuMenu* self);
void gnomenu_menu_set_is_topmost (GnomenuMenu* self, gboolean value);
gboolean gnomenu_menu_get_use_rgba_colormap (GnomenuMenu* self);
void gnomenu_menu_set_use_rgba_colormap (GnomenuMenu* self, gboolean value);
gpointer gnomenu_background_ref (gpointer instance);
void gnomenu_background_unref (gpointer instance);
GParamSpec* gnomenu_param_spec_background (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gnomenu_value_set_background (GValue* value, gpointer v_object);
void gnomenu_value_take_background (GValue* value, gpointer v_object);
gpointer gnomenu_value_get_background (const GValue* value);
GType gnomenu_background_get_type (void) G_GNUC_CONST;
GnomenuBackground* gnomenu_background_clone (GnomenuBackground* self);
GnomenuBackground* gnomenu_background_new (void);
GnomenuBackground* gnomenu_background_construct (GType object_type);
GnomenuMenuBar* gnomenu_menu_bar_new (void);
GnomenuMenuBar* gnomenu_menu_bar_construct (GType object_type);
GType gnomenu_menu_item_get_type (void) G_GNUC_CONST;
GnomenuMenuItem* gnomenu_menu_bar_get (GnomenuMenuBar* self, const char* path);
GnomenuBackground* gnomenu_menu_bar_get_background (GnomenuMenuBar* self);
void gnomenu_menu_bar_set_background (GnomenuMenuBar* self, GnomenuBackground* value);
GnomenuGravity gnomenu_menu_bar_get_gravity (GnomenuMenuBar* self);
void gnomenu_menu_bar_set_gravity (GnomenuMenuBar* self, GnomenuGravity value);
gboolean gnomenu_menu_bar_get_overflown (GnomenuMenuBar* self);
GnomenuMenuItem* gnomenu_menu_item_new (void);
GnomenuMenuItem* gnomenu_menu_item_construct (GType object_type);
GtkShadowType gnomenu_menu_item_item_state_to_shadow_type (GnomenuItemState state);
gint gnomenu_menu_item_get_max_width_chars (GnomenuMenuItem* self);
void gnomenu_menu_item_set_max_width_chars (GnomenuMenuItem* self, gint value);
GnomenuGravity gnomenu_menu_item_get_gravity (GnomenuMenuItem* self);
void gnomenu_menu_item_set_gravity (GnomenuMenuItem* self, GnomenuGravity value);
gboolean gnomenu_menu_item_get_show_underline (GnomenuMenuItem* self);
void gnomenu_menu_item_set_show_underline (GnomenuMenuItem* self, gboolean value);
gboolean gnomenu_menu_item_get_truncated (GnomenuMenuItem* self);
void gnomenu_menu_item_set_truncated (GnomenuMenuItem* self, gboolean value);
GtkImage* gnomenu_menu_item_get_image (GnomenuMenuItem* self);
GType gnomenu_menu_bar_box_get_type (void) G_GNUC_CONST;
GnomenuMenuBarBox* gnomenu_menu_bar_box_new (void);
GnomenuMenuBarBox* gnomenu_menu_bar_box_construct (GType object_type);
gint* gnomenu_menu_bar_box_get_size_hints (GnomenuMenuBarBox* self, int* result_length1);
GtkPackDirection gnomenu_menu_bar_box_get_pack_direction (GnomenuMenuBarBox* self);
void gnomenu_menu_bar_box_set_pack_direction (GnomenuMenuBarBox* self, GtkPackDirection value);
GtkPackDirection gnomenu_menu_bar_box_get_child_pack_direction (GnomenuMenuBarBox* self);
void gnomenu_menu_bar_box_set_child_pack_direction (GnomenuMenuBarBox* self, GtkPackDirection value);
GnomenuGravity gnomenu_menu_bar_box_get_gravity (GnomenuMenuBarBox* self);
void gnomenu_menu_bar_box_set_gravity (GnomenuMenuBarBox* self, GnomenuGravity value);
void gnomenu_menu_bar_box_set_background (GnomenuMenuBarBox* self, GnomenuBackground* value);
GType gnomenu_menu_label_get_type (void) G_GNUC_CONST;
GnomenuMenuLabel* gnomenu_menu_label_new (void);
GnomenuMenuLabel* gnomenu_menu_label_construct (GType object_type);
const char* gnomenu_menu_label_get_accel (GnomenuMenuLabel* self);
void gnomenu_menu_label_set_accel (GnomenuMenuLabel* self, const char* value);
gboolean gnomenu_menu_label_get_use_underline (GnomenuMenuLabel* self);
void gnomenu_menu_label_set_use_underline (GnomenuMenuLabel* self, gboolean value);
gint gnomenu_menu_label_get_max_width_chars (GnomenuMenuLabel* self);
void gnomenu_menu_label_set_max_width_chars (GnomenuMenuLabel* self, gint value);
const char* gnomenu_menu_label_get_label (GnomenuMenuLabel* self);
void gnomenu_menu_label_set_label (GnomenuMenuLabel* self, const char* value);
GnomenuGravity gnomenu_menu_label_get_gravity (GnomenuMenuLabel* self);
void gnomenu_menu_label_set_gravity (GnomenuMenuLabel* self, GnomenuGravity value);
GtkLabel* gnomenu_menu_label_get_label_widget (GnomenuMenuLabel* self);
guint gnomenu_menu_label_get_mnemonic_keyval (GnomenuMenuLabel* self);


G_END_DECLS

#endif
