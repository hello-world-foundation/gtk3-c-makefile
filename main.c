#include <gtk/gtk.h>

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);
    GtkWidget* win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget* label = gtk_button_new_with_label("Hello World");
    gtk_container_add(GTK_CONTAINER(win), label);
    gtk_widget_show_all(win);
    gtk_main();
    return 0;
}