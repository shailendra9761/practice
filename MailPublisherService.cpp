#include "MailPublisherService.h"
void MailPublisherService :: PublishMail (MailTopic& topic,
    uint32_t id,
    const std::string& sender,
    const std::string& subject){
        Mail mail;
        mail.u32MailId = id;
        mail.strSender = sender;
        mail.strSubject = subject;
        topic.Publish(mail);

    }