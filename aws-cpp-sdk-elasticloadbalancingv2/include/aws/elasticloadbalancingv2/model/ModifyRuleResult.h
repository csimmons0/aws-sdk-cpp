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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/Rule.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class AWS_ELASTICLOADBALANCINGV2_API ModifyRuleResult
  {
  public:
    ModifyRuleResult();
    ModifyRuleResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyRuleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the rule.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>Information about the rule.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <p>Information about the rule.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = value; }

    /**
     * <p>Information about the rule.</p>
     */
    inline ModifyRuleResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the rule.</p>
     */
    inline ModifyRuleResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(value); return *this;}

    /**
     * <p>Information about the rule.</p>
     */
    inline ModifyRuleResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>Information about the rule.</p>
     */
    inline ModifyRuleResult& AddRules(Rule&& value) { m_rules.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ModifyRuleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyRuleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Rule> m_rules;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws