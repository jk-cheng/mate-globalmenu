/* menu.c generated by valac, the Vala compiler
 * generated from menu.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>


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

#define GNOMENU_TYPE_MENU (gnomenu_menu_get_type ())
#define GNOMENU_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU, GnomenuMenu))
#define GNOMENU_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU, GnomenuMenuClass))
#define GNOMENU_IS_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU))
#define GNOMENU_IS_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU))
#define GNOMENU_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU, GnomenuMenuClass))

typedef struct _GnomenuMenu GnomenuMenu;
typedef struct _GnomenuMenuClass GnomenuMenuClass;
typedef struct _GnomenuMenuPrivate GnomenuMenuPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

#define GNOMENU_TYPE_MENU_ITEM (gnomenu_menu_item_get_type ())
#define GNOMENU_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItem))
#define GNOMENU_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItemClass))
#define GNOMENU_IS_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNOMENU_TYPE_MENU_ITEM))
#define GNOMENU_IS_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNOMENU_TYPE_MENU_ITEM))
#define GNOMENU_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GNOMENU_TYPE_MENU_ITEM, GnomenuMenuItemClass))

typedef struct _GnomenuMenuItem GnomenuMenuItem;
typedef struct _GnomenuMenuItemClass GnomenuMenuItemClass;

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

struct _GnomenuMenu {
	GtkMenu parent_instance;
	GnomenuMenuPrivate * priv;
};

struct _GnomenuMenuClass {
	GtkMenuClass parent_class;
};

struct _GnomenuMenuPrivate {
	gboolean _use_rgba_colormap;
	gboolean _is_topmost;
};


extern gboolean gnomenu_menu_default_use_rgba_colormap;
gboolean gnomenu_menu_default_use_rgba_colormap = FALSE;
static gpointer gnomenu_menu_parent_class = NULL;
static GnomenuShellIface* gnomenu_menu_gnomenu_shell_parent_iface = NULL;

GType gnomenu_item_type_get_type (void) G_GNUC_CONST;
GType gnomenu_item_state_get_type (void) G_GNUC_CONST;
GType gnomenu_item_get_type (void) G_GNUC_CONST;
GType gnomenu_shell_get_type (void) G_GNUC_CONST;
GType gnomenu_menu_get_type (void) G_GNUC_CONST;
#define GNOMENU_MENU_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GNOMENU_TYPE_MENU, GnomenuMenuPrivate))
enum  {
	GNOMENU_MENU_DUMMY_PROPERTY,
	GNOMENU_MENU_IS_TOPMOST,
	GNOMENU_MENU_USE_RGBA_COLORMAP,
	GNOMENU_MENU_OWNER,
	GNOMENU_MENU_LENGTH
};
GnomenuMenu* gnomenu_menu_new (void);
GnomenuMenu* gnomenu_menu_construct (GType object_type);
void gtk_menu_shell_remove_all (GtkMenuShell* menushell);
static void gnomenu_menu_real_destroy (GtkObject* base);
GtkMenuItem* gtk_menu_shell_get_item (GtkMenuShell* menu_shell, gint position);
static GnomenuItem* gnomenu_menu_real_get_item (GnomenuShell* base, gint position);
const char* gnomenu_item_get_item_id (GnomenuItem* self);
static GnomenuItem* gnomenu_menu_real_get_item_by_id (GnomenuShell* base, const char* id);
gint gtk_menu_shell_get_item_position (GtkMenuShell* menu_shell, GtkMenuItem* item);
GType gnomenu_menu_item_get_type (void) G_GNUC_CONST;
static gint gnomenu_menu_real_get_item_position (GnomenuShell* base, GnomenuItem* item);
gboolean gnomenu_menu_get_is_topmost (GnomenuMenu* self);
void gnomenu_menu_set_is_topmost (GnomenuMenu* self, gboolean value);
gboolean gnomenu_menu_get_use_rgba_colormap (GnomenuMenu* self);
void gnomenu_menu_set_use_rgba_colormap (GnomenuMenu* self, gboolean value);
gint gtk_menu_shell_get_length (GtkMenuShell* menushell);
void gtk_menu_shell_set_length (GtkMenuShell* menushell, gint length);
static GObject * gnomenu_menu_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void gnomenu_menu_finalize (GObject* obj);
GnomenuItem* gnomenu_shell_get_owner (GnomenuShell* self);
gint gnomenu_shell_get_length (GnomenuShell* self);
static void gnomenu_menu_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
void gnomenu_shell_set_length (GnomenuShell* self, gint value);
static void gnomenu_menu_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static int _vala_strcmp0 (const char * str1, const char * str2);



GnomenuMenu* gnomenu_menu_construct (GType object_type) {
	GnomenuMenu * self;
	self = g_object_newv (object_type, 0, NULL);
	return self;
}


GnomenuMenu* gnomenu_menu_new (void) {
	return gnomenu_menu_construct (GNOMENU_TYPE_MENU);
}


static void gnomenu_menu_real_destroy (GtkObject* base) {
	GnomenuMenu * self;
	self = (GnomenuMenu*) base;
	gtk_menu_shell_remove_all (self);
	GTK_OBJECT_CLASS (gnomenu_menu_parent_class)->destroy ((GtkObject*) GTK_MENU (self));
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static GnomenuItem* gnomenu_menu_real_get_item (GnomenuShell* base, gint position) {
	GnomenuMenu * self;
	GnomenuItem* result = NULL;
	GtkMenuItem* _tmp0_;
	self = (GnomenuMenu*) base;
	result = _g_object_ref0 ((_tmp0_ = gtk_menu_shell_get_item (self, position), GNOMENU_IS_ITEM (_tmp0_) ? ((GnomenuItem*) _tmp0_) : NULL));
	return result;
}


static GnomenuItem* gnomenu_menu_real_get_item_by_id (GnomenuShell* base, const char* id) {
	GnomenuMenu * self;
	GnomenuItem* result = NULL;
	self = (GnomenuMenu*) base;
	g_return_val_if_fail (id != NULL, NULL);
	{
		GList* child_collection;
		GList* child_it;
		child_collection = gtk_container_get_children ((GtkContainer*) self);
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
			GtkWidget* child;
			child = (GtkWidget*) child_it->data;
			{
				GtkWidget* _tmp0_;
				GnomenuItem* item;
				item = _g_object_ref0 ((_tmp0_ = child, GNOMENU_IS_ITEM (_tmp0_) ? ((GnomenuItem*) _tmp0_) : NULL));
				if (item == NULL) {
					_g_object_unref0 (item);
					continue;
				}
				if (_vala_strcmp0 (gnomenu_item_get_item_id (item), id) == 0) {
					result = item;
					_g_list_free0 (child_collection);
					return result;
				}
				_g_object_unref0 (item);
			}
		}
		_g_list_free0 (child_collection);
	}
	result = NULL;
	return result;
}


static gint gnomenu_menu_real_get_item_position (GnomenuShell* base, GnomenuItem* item) {
	GnomenuMenu * self;
	gint result = 0;
	GnomenuItem* _tmp0_;
	self = (GnomenuMenu*) base;
	g_return_val_if_fail (item != NULL, 0);
	result = gtk_menu_shell_get_item_position (self, (_tmp0_ = item, GNOMENU_IS_MENU_ITEM (_tmp0_) ? ((GnomenuMenuItem*) _tmp0_) : NULL));
	return result;
}


gboolean gnomenu_menu_get_is_topmost (GnomenuMenu* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_topmost;
	return result;
}


void gnomenu_menu_set_is_topmost (GnomenuMenu* self, gboolean value) {
	g_return_if_fail (self != NULL);
	self->priv->_is_topmost = value;
	g_object_notify ((GObject *) self, "is-topmost");
}


gboolean gnomenu_menu_get_use_rgba_colormap (GnomenuMenu* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_use_rgba_colormap;
	return result;
}


void gnomenu_menu_set_use_rgba_colormap (GnomenuMenu* self, gboolean value) {
	GdkScreen* screen;
	GdkColormap* colormap;
	g_return_if_fail (self != NULL);
	if (self->priv->_use_rgba_colormap == value) {
		return;
	}
	self->priv->_use_rgba_colormap = value;
	screen = _g_object_ref0 (gtk_widget_get_screen (((GtkMenu*) self)->toplevel));
	colormap = _g_object_ref0 (gdk_screen_get_rgba_colormap (screen));
	if (colormap != NULL) {
		gtk_widget_set_colormap (((GtkMenu*) self)->toplevel, colormap);
		gtk_widget_set_colormap ((GtkWidget*) self, colormap);
	}
	_g_object_unref0 (colormap);
	_g_object_unref0 (screen);
	g_object_notify ((GObject *) self, "use-rgba-colormap");
}


static GnomenuItem* gnomenu_menu_real_get_owner (GnomenuShell* base) {
	GnomenuItem* result;
	GnomenuMenu* self;
	GtkWidget* _tmp0_;
	self = (GnomenuMenu*) base;
	if (self->priv->_is_topmost) {
		result = NULL;
		return result;
	}
	result = (_tmp0_ = gtk_menu_get_attach_widget ((GtkMenu*) self), GNOMENU_IS_ITEM (_tmp0_) ? ((GnomenuItem*) _tmp0_) : NULL);
	return result;
}


static gint gnomenu_menu_real_get_length (GnomenuShell* base) {
	gint result;
	GnomenuMenu* self;
	self = (GnomenuMenu*) base;
	result = gtk_menu_shell_get_length (self);
	return result;
}


static void gnomenu_menu_real_set_length (GnomenuShell* base, gint value) {
	GnomenuMenu* self;
	self = (GnomenuMenu*) base;
	gtk_menu_shell_set_length (self, value);
	g_object_notify ((GObject *) self, "length");
}


static GObject * gnomenu_menu_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	GnomenuMenu * self;
	parent_class = G_OBJECT_CLASS (gnomenu_menu_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = GNOMENU_MENU (obj);
	{
		gnomenu_menu_set_use_rgba_colormap (self, gnomenu_menu_default_use_rgba_colormap);
	}
	return obj;
}


static void gnomenu_menu_class_init (GnomenuMenuClass * klass) {
	gnomenu_menu_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GnomenuMenuPrivate));
	GTK_OBJECT_CLASS (klass)->destroy = gnomenu_menu_real_destroy;
	G_OBJECT_CLASS (klass)->get_property = gnomenu_menu_get_property;
	G_OBJECT_CLASS (klass)->set_property = gnomenu_menu_set_property;
	G_OBJECT_CLASS (klass)->constructor = gnomenu_menu_constructor;
	G_OBJECT_CLASS (klass)->finalize = gnomenu_menu_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_MENU_IS_TOPMOST, g_param_spec_boolean ("is-topmost", "is-topmost", "is-topmost", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GNOMENU_MENU_USE_RGBA_COLORMAP, g_param_spec_boolean ("use-rgba-colormap", "use-rgba-colormap", "use-rgba-colormap", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_override_property (G_OBJECT_CLASS (klass), GNOMENU_MENU_OWNER, "owner");
	g_object_class_override_property (G_OBJECT_CLASS (klass), GNOMENU_MENU_LENGTH, "length");
	{
		GnomenuMenuItem* _include_menu_item_definiation;
		_include_menu_item_definiation = NULL;
		_g_object_unref0 (_include_menu_item_definiation);
	}
}


static void gnomenu_menu_gnomenu_shell_interface_init (GnomenuShellIface * iface) {
	gnomenu_menu_gnomenu_shell_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_item = gnomenu_menu_real_get_item;
	iface->get_item_by_id = gnomenu_menu_real_get_item_by_id;
	iface->get_item_position = gnomenu_menu_real_get_item_position;
	iface->get_owner = gnomenu_menu_real_get_owner;
	iface->get_length = gnomenu_menu_real_get_length;
	iface->set_length = gnomenu_menu_real_set_length;
}


static void gnomenu_menu_instance_init (GnomenuMenu * self) {
	self->priv = GNOMENU_MENU_GET_PRIVATE (self);
	self->priv->_use_rgba_colormap = FALSE;
	self->priv->_is_topmost = FALSE;
}


static void gnomenu_menu_finalize (GObject* obj) {
	GnomenuMenu * self;
	self = GNOMENU_MENU (obj);
	G_OBJECT_CLASS (gnomenu_menu_parent_class)->finalize (obj);
}


GType gnomenu_menu_get_type (void) {
	static volatile gsize gnomenu_menu_type_id__volatile = 0;
	if (g_once_init_enter (&gnomenu_menu_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GnomenuMenuClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gnomenu_menu_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GnomenuMenu), 0, (GInstanceInitFunc) gnomenu_menu_instance_init, NULL };
		static const GInterfaceInfo gnomenu_shell_info = { (GInterfaceInitFunc) gnomenu_menu_gnomenu_shell_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType gnomenu_menu_type_id;
		gnomenu_menu_type_id = g_type_register_static (GTK_TYPE_MENU, "GnomenuMenu", &g_define_type_info, 0);
		g_type_add_interface_static (gnomenu_menu_type_id, GNOMENU_TYPE_SHELL, &gnomenu_shell_info);
		g_once_init_leave (&gnomenu_menu_type_id__volatile, gnomenu_menu_type_id);
	}
	return gnomenu_menu_type_id__volatile;
}


static void gnomenu_menu_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GnomenuMenu * self;
	self = GNOMENU_MENU (object);
	switch (property_id) {
		case GNOMENU_MENU_IS_TOPMOST:
		g_value_set_boolean (value, gnomenu_menu_get_is_topmost (self));
		break;
		case GNOMENU_MENU_USE_RGBA_COLORMAP:
		g_value_set_boolean (value, gnomenu_menu_get_use_rgba_colormap (self));
		break;
		case GNOMENU_MENU_OWNER:
		g_value_set_object (value, gnomenu_shell_get_owner ((GnomenuShell*) self));
		break;
		case GNOMENU_MENU_LENGTH:
		g_value_set_int (value, gnomenu_shell_get_length ((GnomenuShell*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void gnomenu_menu_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GnomenuMenu * self;
	self = GNOMENU_MENU (object);
	switch (property_id) {
		case GNOMENU_MENU_IS_TOPMOST:
		gnomenu_menu_set_is_topmost (self, g_value_get_boolean (value));
		break;
		case GNOMENU_MENU_USE_RGBA_COLORMAP:
		gnomenu_menu_set_use_rgba_colormap (self, g_value_get_boolean (value));
		break;
		case GNOMENU_MENU_LENGTH:
		gnomenu_shell_set_length ((GnomenuShell*) self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static int _vala_strcmp0 (const char * str1, const char * str2) {
	if (str1 == NULL) {
		return -(str1 != str2);
	}
	if (str2 == NULL) {
		return str1 != str2;
	}
	return strcmp (str1, str2);
}




