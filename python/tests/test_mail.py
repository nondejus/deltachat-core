from deltachat.cutil import as_dc_charpointer
from deltachat.capi import lib
from textwrap import dedent
from time import time
from conftest import wait_configuration_progress


def test_send_mail(acfactory):
    ac1 = acfactory.get_online_configuring_account()
    ac2 = acfactory.get_online_configuring_account()
    wait_configuration_progress(ac1, 1000)
    wait_configuration_progress(ac2, 1000)

    sender = ac1.get_config("addr")
    recipient = ac2.get_config("addr")

    mail = dedent("""\
        From: {sender}
        To: {recipient}
        Subject: Testing dc_send_mail

        A very simple mail.
        """).replace("\n", "\r\n").format(sender=sender, recipient=recipient)
    mail = as_dc_charpointer(mail)

    recipients = "{}\x1e{}".format(sender, recipient)
    msg_id = "{}{}".format(int(time()), sender)

    assert lib.dc_send_mail(ac1._dc_context, mail, len(mail),
                            as_dc_charpointer(recipients),
                            as_dc_charpointer(msg_id)) == 1
