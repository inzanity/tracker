/* empty-gobject.c generated by valac, the Vala compiler
 * generated from empty-gobject.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define TYPE_EMPTY_OBJECT (empty_object_get_type ())
#define EMPTY_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_EMPTY_OBJECT, EmptyObject))
#define EMPTY_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_EMPTY_OBJECT, EmptyObjectClass))
#define IS_EMPTY_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_EMPTY_OBJECT))
#define IS_EMPTY_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_EMPTY_OBJECT))
#define EMPTY_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_EMPTY_OBJECT, EmptyObjectClass))

typedef struct _EmptyObject EmptyObject;
typedef struct _EmptyObjectClass EmptyObjectClass;
typedef struct _EmptyObjectPrivate EmptyObjectPrivate;

struct _EmptyObject {
	GObject parent_instance;
	EmptyObjectPrivate * priv;
};

struct _EmptyObjectClass {
	GObjectClass parent_class;
};

struct _EmptyObjectPrivate {
	gint _id;
};


static gpointer empty_object_parent_class = NULL;

GType empty_object_get_type (void);
#define EMPTY_OBJECT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_EMPTY_OBJECT, EmptyObjectPrivate))
enum  {
	EMPTY_OBJECT_DUMMY_PROPERTY,
	EMPTY_OBJECT_ID
};
EmptyObject* empty_object_new (void);
EmptyObject* empty_object_construct (GType object_type);
gint empty_object_get_id (EmptyObject* self);
void empty_object_set_id (EmptyObject* self, gint value);
static void empty_object_finalize (GObject* obj);
static void empty_object_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void empty_object_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);



EmptyObject* empty_object_construct (GType object_type) {
	EmptyObject * self;
	self = (EmptyObject*) g_object_new (object_type, NULL);
	return self;
}


EmptyObject* empty_object_new (void) {
	return empty_object_construct (TYPE_EMPTY_OBJECT);
}


gint empty_object_get_id (EmptyObject* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_id;
	return result;
}


void empty_object_set_id (EmptyObject* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_id = value;
	g_object_notify ((GObject *) self, "id");
}


static void empty_object_class_init (EmptyObjectClass * klass) {
	empty_object_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (EmptyObjectPrivate));
	G_OBJECT_CLASS (klass)->get_property = empty_object_get_property;
	G_OBJECT_CLASS (klass)->set_property = empty_object_set_property;
	G_OBJECT_CLASS (klass)->finalize = empty_object_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), EMPTY_OBJECT_ID, g_param_spec_int ("id", "id", "id", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void empty_object_instance_init (EmptyObject * self) {
	self->priv = EMPTY_OBJECT_GET_PRIVATE (self);
}


static void empty_object_finalize (GObject* obj) {
	EmptyObject * self;
	self = EMPTY_OBJECT (obj);
	G_OBJECT_CLASS (empty_object_parent_class)->finalize (obj);
}


GType empty_object_get_type (void) {
	static GType empty_object_type_id = 0;
	if (empty_object_type_id == 0) {
		static const GTypeInfo g_define_type_info = { sizeof (EmptyObjectClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) empty_object_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (EmptyObject), 0, (GInstanceInitFunc) empty_object_instance_init, NULL };
		empty_object_type_id = g_type_register_static (G_TYPE_OBJECT, "EmptyObject", &g_define_type_info, 0);
	}
	return empty_object_type_id;
}


static void empty_object_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	EmptyObject * self;
	self = EMPTY_OBJECT (object);
	switch (property_id) {
		case EMPTY_OBJECT_ID:
		g_value_set_int (value, empty_object_get_id (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void empty_object_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	EmptyObject * self;
	self = EMPTY_OBJECT (object);
	switch (property_id) {
		case EMPTY_OBJECT_ID:
		empty_object_set_id (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}




