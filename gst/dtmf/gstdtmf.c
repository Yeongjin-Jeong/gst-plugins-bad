
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "gstdtmfsrc.h"
#include "gstrtpdtmfsrc.h"


static gboolean
plugin_init (GstPlugin * plugin)
{
  if (!gst_dtmf_src_plugin_init (plugin))
    return FALSE;

  if (!gst_rtp_dtmf_src_plugin_init (plugin))
    return FALSE;


  return TRUE;
}

GST_PLUGIN_DEFINE (GST_VERSION_MAJOR,
    GST_VERSION_MINOR,
    "dtmf",
    "DTMF plugins",
    plugin_init, "0.1" , "LGPL", "DTMF", "");
