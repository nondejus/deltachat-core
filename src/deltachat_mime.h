#ifndef __DELTACHAT_MIME_H__
#define __DELTACHAT_MIME_H__
#ifdef __cplusplus
extern "C" {
#endif


#include <libetpan/libetpan.h>
#include "deltachat.h"


/**
 * Callback for low-level processing of incoming messages.
 * 
 * @memberof dc_context_t
 * @param context The context object as returned by dc_context_new().
 * @param mime A parsed LibEtPan MIME structure of the recieved mail.
 *   Warning: The type of this parameter depends on the underlying mail library,
 *   so if DeltaChat Core switches libraries, the low-level callbacks will also
 *   change.
 */
typedef void (*dc_receive_cb_t) (dc_context_t* context, struct mailmime* mime);


void dc_set_receive_cb (dc_context_t*, dc_receive_cb_t receive_cb);


#ifdef __cplusplus
}
#endif
#endif // __DELTACHAT_MIME_H__
