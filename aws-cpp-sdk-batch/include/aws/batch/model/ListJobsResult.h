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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobSummary.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class AWS_BATCH_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline const Aws::Vector<JobSummary>& GetJobSummaryList() const{ return m_jobSummaryList; }

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline void SetJobSummaryList(const Aws::Vector<JobSummary>& value) { m_jobSummaryList = value; }

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline void SetJobSummaryList(Aws::Vector<JobSummary>&& value) { m_jobSummaryList = value; }

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline ListJobsResult& WithJobSummaryList(const Aws::Vector<JobSummary>& value) { SetJobSummaryList(value); return *this;}

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline ListJobsResult& WithJobSummaryList(Aws::Vector<JobSummary>&& value) { SetJobSummaryList(value); return *this;}

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline ListJobsResult& AddJobSummaryList(const JobSummary& value) { m_jobSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of job summaries that match the request.</p>
     */
    inline ListJobsResult& AddJobSummaryList(JobSummary&& value) { m_jobSummaryList.push_back(value); return *this; }

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future <code>ListJobs</code>
     * request. When the results of a <code>ListJobs</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<JobSummary> m_jobSummaryList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
