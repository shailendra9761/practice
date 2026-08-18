#ifndef MAIL_PUBLISHER_SERVICE_H
#define MAIL_PUBLISHER_SERVICE_H

#include "MailTopic.h"

class MailPublisherService
{
public:
    void PublishMail(
        MailTopic& topic,
        uint32_t id,
        const std::string& sender,
        const std::string& subject);
};

#endif