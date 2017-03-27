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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentPermissionType.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeDocumentPermissionRequest : public SSMRequest
  {
  public:
    DescribeDocumentPermissionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline DescribeDocumentPermissionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline DescribeDocumentPermissionRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline DescribeDocumentPermissionRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline const DocumentPermissionType& GetPermissionType() const{ return m_permissionType; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline void SetPermissionType(const DocumentPermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline void SetPermissionType(DocumentPermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline DescribeDocumentPermissionRequest& WithPermissionType(const DocumentPermissionType& value) { SetPermissionType(value); return *this;}

    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline DescribeDocumentPermissionRequest& WithPermissionType(DocumentPermissionType&& value) { SetPermissionType(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    DocumentPermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
