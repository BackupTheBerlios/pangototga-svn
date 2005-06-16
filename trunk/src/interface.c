/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *vbox1;
  GtkWidget *fontselection1;
  GtkWidget *frame1;
  GtkWidget *hbox2;
  GtkWidget *vbox2;
  GtkWidget *hbox7;
  GtkWidget *vbox4;
  GtkWidget *label4;
  GtkWidget *entry3;
  GtkWidget *vbox5;
  GtkWidget *label5;
  GtkWidget *entry4;
  GtkWidget *vbox3;
  GtkWidget *hbox4;
  GtkWidget *label2;
  GtkWidget *entry1;
  GtkWidget *hbox5;
  GtkWidget *label3;
  GtkWidget *entry2;
  GtkWidget *label1;
  GtkWidget *image1;
  GtkWidget *hbox3;
  GtkWidget *button2;
  GtkWidget *button3;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("Pango To TGA"));

  vbox1 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (window1), vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (vbox1), 8);

  fontselection1 = gtk_font_selection_new ();
  gtk_widget_show (fontselection1);
  gtk_box_pack_start (GTK_BOX (vbox1), fontselection1, TRUE, TRUE, 0);
  gtk_font_selection_set_preview_text (GTK_FONT_SELECTION (fontselection1), _("Allegro"));

  frame1 = gtk_frame_new (NULL);
  gtk_widget_show (frame1);
  gtk_box_pack_start (GTK_BOX (vbox1), frame1, TRUE, TRUE, 0);
  gtk_frame_set_label_align (GTK_FRAME (frame1), 0.5, 0.5);

  hbox2 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (frame1), hbox2);
  gtk_container_set_border_width (GTK_CONTAINER (hbox2), 8);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (hbox2), vbox2, TRUE, TRUE, 0);

  hbox7 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox7);
  gtk_box_pack_start (GTK_BOX (vbox2), hbox7, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox7), 8);

  vbox4 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox4);
  gtk_box_pack_start (GTK_BOX (hbox7), vbox4, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox4), 8);

  label4 = gtk_label_new (_("Min Color (1..254)"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (vbox4), label4, FALSE, FALSE, 0);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_box_pack_start (GTK_BOX (vbox4), entry3, FALSE, FALSE, 0);
  gtk_entry_set_text (GTK_ENTRY (entry3), _("1"));
  gtk_entry_set_width_chars (GTK_ENTRY (entry3), 3);

  vbox5 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox5);
  gtk_box_pack_start (GTK_BOX (hbox7), vbox5, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox5), 8);

  label5 = gtk_label_new (_("Max Color (1..254)"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (vbox5), label5, FALSE, FALSE, 0);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_box_pack_start (GTK_BOX (vbox5), entry4, FALSE, FALSE, 0);
  gtk_entry_set_text (GTK_ENTRY (entry4), _("254"));
  gtk_entry_set_width_chars (GTK_ENTRY (entry4), 3);

  vbox3 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox3);
  gtk_box_pack_start (GTK_BOX (hbox2), vbox3, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox3), 8);

  hbox4 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (vbox3), hbox4, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox4), 8);

  label2 = gtk_label_new (_("Min Char\n(unicode)"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox4), label2, FALSE, FALSE, 0);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_box_pack_start (GTK_BOX (hbox4), entry1, TRUE, TRUE, 0);
  gtk_widget_set_size_request (entry1, 60, -1);
  gtk_entry_set_text (GTK_ENTRY (entry1), _("0x20"));
  gtk_entry_set_width_chars (GTK_ENTRY (entry1), 3);

  hbox5 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox5);
  gtk_box_pack_start (GTK_BOX (vbox3), hbox5, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox5), 8);

  label3 = gtk_label_new (_("Max Char\n(unicode)"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox5), label3, FALSE, FALSE, 0);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_box_pack_start (GTK_BOX (hbox5), entry2, TRUE, TRUE, 0);
  gtk_widget_set_size_request (entry2, 60, -1);
  gtk_entry_set_text (GTK_ENTRY (entry2), _("0x7f"));
  gtk_entry_set_width_chars (GTK_ENTRY (entry2), 3);

  label1 = gtk_label_new (_("Output"));
  gtk_widget_show (label1);
  gtk_frame_set_label_widget (GTK_FRAME (frame1), label1);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_CENTER);

  image1 = gtk_image_new_from_stock ("gtk-italic", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_end (GTK_BOX (vbox1), image1, TRUE, TRUE, 0);
  gtk_widget_set_size_request (image1, 21, 21);

  hbox3 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox3);
  gtk_box_pack_end (GTK_BOX (vbox1), hbox3, FALSE, FALSE, 0);

  button2 = gtk_button_new_with_mnemonic (_("Export TGA"));
  gtk_widget_show (button2);
  gtk_box_pack_start (GTK_BOX (hbox3), button2, TRUE, TRUE, 0);

  button3 = gtk_button_new_with_mnemonic (_("Quit"));
  gtk_widget_show (button3);
  gtk_box_pack_start (GTK_BOX (hbox3), button3, TRUE, TRUE, 0);

  g_signal_connect ((gpointer) window1, "delete_event",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window1, fontselection1, "fontselection1");
  GLADE_HOOKUP_OBJECT (window1, frame1, "frame1");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (window1, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window1, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (window1, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (window1, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (window1, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");

  return window1;
}

GtkWidget*
create_filechooserdialog1 (void)
{
  GtkWidget *filechooserdialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *dialog_action_area1;
  GtkWidget *button4;
  GtkWidget *button5;

  filechooserdialog1 = gtk_file_chooser_dialog_new (_("Export as TGA"), NULL, GTK_FILE_CHOOSER_ACTION_SAVE, NULL);
  g_object_set (filechooserdialog1,
                "local-only", FALSE,
                "show-hidden", TRUE,
                NULL);
  gtk_window_set_type_hint (GTK_WINDOW (filechooserdialog1), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (filechooserdialog1)->vbox;
  gtk_widget_show (dialog_vbox1);

  dialog_action_area1 = GTK_DIALOG (filechooserdialog1)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  button4 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (button4);
  gtk_dialog_add_action_widget (GTK_DIALOG (filechooserdialog1), button4, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (button4, GTK_CAN_DEFAULT);

  button5 = gtk_button_new_from_stock ("gtk-save-as");
  gtk_widget_show (button5);
  gtk_dialog_add_action_widget (GTK_DIALOG (filechooserdialog1), button5, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (button5, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) filechooserdialog1, "delete_event",
                    G_CALLBACK (on_filechooserdialog1_delete_event),
                    NULL);
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);
  g_signal_connect ((gpointer) button5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (filechooserdialog1, filechooserdialog1, "filechooserdialog1");
  GLADE_HOOKUP_OBJECT_NO_REF (filechooserdialog1, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT_NO_REF (filechooserdialog1, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (filechooserdialog1, button4, "button4");
  GLADE_HOOKUP_OBJECT (filechooserdialog1, button5, "button5");

  gtk_widget_grab_default (button5);
  return filechooserdialog1;
}

