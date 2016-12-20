﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/vitalservices/VitalServicesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API scheduleAppointmentRequest : public VitalServicesRequest
  {
  public:
    scheduleAppointmentRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline scheduleAppointmentRequest& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline scheduleAppointmentRequest& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    
    inline scheduleAppointmentRequest& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline scheduleAppointmentRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline scheduleAppointmentRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline scheduleAppointmentRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

    
    inline const Aws::String& GetBillVersion() const{ return m_billVersion; }

    
    inline void SetBillVersion(const Aws::String& value) { m_billVersionHasBeenSet = true; m_billVersion = value; }

    
    inline void SetBillVersion(Aws::String&& value) { m_billVersionHasBeenSet = true; m_billVersion = value; }

    
    inline void SetBillVersion(const char* value) { m_billVersionHasBeenSet = true; m_billVersion.assign(value); }

    
    inline scheduleAppointmentRequest& WithBillVersion(const Aws::String& value) { SetBillVersion(value); return *this;}

    
    inline scheduleAppointmentRequest& WithBillVersion(Aws::String&& value) { SetBillVersion(value); return *this;}

    
    inline scheduleAppointmentRequest& WithBillVersion(const char* value) { SetBillVersion(value); return *this;}

    
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    
    inline scheduleAppointmentRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    
    inline scheduleAppointmentRequest& WithServiceId(Aws::String&& value) { SetServiceId(value); return *this;}

    
    inline scheduleAppointmentRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}

  private:
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
    Aws::String m_billVersion;
    bool m_billVersionHasBeenSet;
    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws