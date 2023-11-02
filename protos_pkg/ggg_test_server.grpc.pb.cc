// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ggg_test_server.proto

#include "ggg_test_server.pb.h"
#include "ggg_test_server.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace ggg_test_server {

static const char* GggTestServer_method_names[] = {
  "/ggg_test_server.GggTestServer/TestReqService",
};

std::unique_ptr< GggTestServer::Stub> GggTestServer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GggTestServer::Stub> stub(new GggTestServer::Stub(channel, options));
  return stub;
}

GggTestServer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_TestReqService_(GggTestServer_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GggTestServer::Stub::TestReqService(::grpc::ClientContext* context, const ::ggg_test_server::TestReq& request, ::ggg_test_server::TestRsp* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ggg_test_server::TestReq, ::ggg_test_server::TestRsp, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TestReqService_, context, request, response);
}

void GggTestServer::Stub::async::TestReqService(::grpc::ClientContext* context, const ::ggg_test_server::TestReq* request, ::ggg_test_server::TestRsp* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ggg_test_server::TestReq, ::ggg_test_server::TestRsp, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TestReqService_, context, request, response, std::move(f));
}

void GggTestServer::Stub::async::TestReqService(::grpc::ClientContext* context, const ::ggg_test_server::TestReq* request, ::ggg_test_server::TestRsp* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TestReqService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ggg_test_server::TestRsp>* GggTestServer::Stub::PrepareAsyncTestReqServiceRaw(::grpc::ClientContext* context, const ::ggg_test_server::TestReq& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ggg_test_server::TestRsp, ::ggg_test_server::TestReq, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TestReqService_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ggg_test_server::TestRsp>* GggTestServer::Stub::AsyncTestReqServiceRaw(::grpc::ClientContext* context, const ::ggg_test_server::TestReq& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTestReqServiceRaw(context, request, cq);
  result->StartCall();
  return result;
}

GggTestServer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GggTestServer_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GggTestServer::Service, ::ggg_test_server::TestReq, ::ggg_test_server::TestRsp, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GggTestServer::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ggg_test_server::TestReq* req,
             ::ggg_test_server::TestRsp* resp) {
               return service->TestReqService(ctx, req, resp);
             }, this)));
}

GggTestServer::Service::~Service() {
}

::grpc::Status GggTestServer::Service::TestReqService(::grpc::ServerContext* context, const ::ggg_test_server::TestReq* request, ::ggg_test_server::TestRsp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ggg_test_server

