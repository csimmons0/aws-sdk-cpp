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
#include <aws/vitalservices/model/ClientDoctorSpecialty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VitalServices
{
namespace Model
{

ClientDoctorSpecialty::ClientDoctorSpecialty() : 
    m_idHasBeenSet(false),
    m_isCommon(false),
    m_isCommonHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ClientDoctorSpecialty::ClientDoctorSpecialty(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_isCommon(false),
    m_isCommonHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ClientDoctorSpecialty& ClientDoctorSpecialty::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isCommon"))
  {
    m_isCommon = jsonValue.GetBool("isCommon");

    m_isCommonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientDoctorSpecialty::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_isCommonHasBeenSet)
  {
   payload.WithBool("isCommon", m_isCommon);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace VitalServices
} // namespace Aws