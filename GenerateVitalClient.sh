#!/usr/bin/env bash

set -e

ABIS=("x86")
BASE_DIR=$(git rev-parse --show-toplevel)
BUILD_DIR=$BASE_DIR/build/GenerateVitalClient
STAGE_NAME="prod"
SWAGGER_FILE_PATH=$BASE_DIR/VitalServices-prod-swagger.json
AWS_CPP_SOURCE_DIR=$BASE_DIR
REST_API_ID=$(cat ~/.my-gateway-id)

aws apigateway get-export --rest-api-id $REST_API_ID --stage-name $STAGE_NAME --export-type swagger $SWAGGER_FILE_PATH
$BASE_DIR/translate-vitalserver-spec.py > \
    $BASE_DIR/code-generation/api-descriptions/vitalservices-2016-11-23.normal.json

