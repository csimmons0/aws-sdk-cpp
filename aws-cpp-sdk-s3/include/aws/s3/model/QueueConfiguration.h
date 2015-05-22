/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Event.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    Container for specifying an configuration when you want Amazon S3 to publish events to an Amazon Simple Queue Service (Amazon SQS) queue.
  */
  class AWS_S3_API QueueConfiguration
  {
  public:
    QueueConfiguration();
    QueueConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    QueueConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }
    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline QueueConfiguration&  WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline QueueConfiguration& WithId(const char* value) { SetId(value); return *this;}

    /*
     Amazon SQS queue ARN to which Amazon S3 will publish a message when it detects events of specified type.
    */
    inline const Aws::String& GetQueueArn() const{ return m_queueArn; }
    /*
     Amazon SQS queue ARN to which Amazon S3 will publish a message when it detects events of specified type.
    */
    inline void SetQueueArn(const Aws::String& value) { m_queueArn = value; }

    /*
     Amazon SQS queue ARN to which Amazon S3 will publish a message when it detects events of specified type.
    */
    inline void SetQueueArn(const char* value) { m_queueArn.assign(value); }

    /*
     Amazon SQS queue ARN to which Amazon S3 will publish a message when it detects events of specified type.
    */
    inline QueueConfiguration&  WithQueueArn(const Aws::String& value) { SetQueueArn(value); return *this;}

    /*
     Amazon SQS queue ARN to which Amazon S3 will publish a message when it detects events of specified type.
    */
    inline QueueConfiguration& WithQueueArn(const char* value) { SetQueueArn(value); return *this;}

    
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }
    
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    
    inline QueueConfiguration&  WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    
    inline QueueConfiguration& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_queueArn;
    Aws::Vector<Event> m_events;
  };

} // namespace Model
} // namespace S3
} // namespace Aws