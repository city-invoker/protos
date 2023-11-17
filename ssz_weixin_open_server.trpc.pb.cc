//
// This file was generated by trpc_cpp_plugin which is a self-defined pb compiler plugin, do not edit it!!!
// All rights reserved by Tencent Corporation
//

#include "ssz_weixin_open_server.trpc.pb.h"

#include "trpc/server/rpc_async_method_handler.h"
#include "trpc/server/rpc_method_handler.h"

namespace ssz {

static const std::vector<std::vector<std::string_view>> WeiXinOpenService_method_names = {
  {"/ssz.WeiXinOpenService/GetAccessTokenHandler"},
};

WeiXinOpenService::WeiXinOpenService() {
  for (const std::string_view& method : WeiXinOpenService_method_names[0]) {
    AddRpcServiceMethod(new ::trpc::RpcServiceMethod(method.data(), ::trpc::MethodType::UNARY, new ::trpc::RpcMethodHandler<::ssz::GetAccessTokenReq, ::ssz::GetAccessTokenRsp>(std::bind(&WeiXinOpenService::GetAccessTokenHandler, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3))));
  }
}

::trpc::Status WeiXinOpenService::GetAccessTokenHandler(::trpc::ServerContextPtr context, const ::ssz::GetAccessTokenReq* request, ::ssz::GetAccessTokenRsp* response) {
  (void)context;
  (void)request;
  (void)response;
  return ::trpc::Status(-1, "");
}

AsyncWeiXinOpenService::AsyncWeiXinOpenService() : ::trpc::AsyncRpcServiceImpl() {
  for (const std::string_view& method : WeiXinOpenService_method_names[0]) {
    AddRpcServiceMethod(new ::trpc::RpcServiceMethod(method.data(), ::trpc::MethodType::UNARY, new ::trpc::AsyncRpcMethodHandler<::ssz::GetAccessTokenReq, ::ssz::GetAccessTokenRsp>(std::bind(&AsyncWeiXinOpenService::GetAccessTokenHandler, this, std::placeholders::_1, std::placeholders::_2))));
  }
}

::trpc::Future<::ssz::GetAccessTokenRsp> AsyncWeiXinOpenService::GetAccessTokenHandler(const ::trpc::ServerContextPtr& context, const ::ssz::GetAccessTokenReq* request) {
  return ::trpc::MakeExceptionFuture<::ssz::GetAccessTokenRsp>(::trpc::CommonException("Unimplemented"));
}

::trpc::Status WeiXinOpenServiceServiceProxy::GetAccessTokenHandler(const ::trpc::ClientContextPtr& context, const ::ssz::GetAccessTokenReq& request, ::ssz::GetAccessTokenRsp* response) {
  if (context->GetFuncName().empty()) context->SetFuncName(WeiXinOpenService_method_names[0][0].data());
  return UnaryInvoke<::ssz::GetAccessTokenReq, ::ssz::GetAccessTokenRsp>(context, request, response);
}

::trpc::Future<::ssz::GetAccessTokenRsp> WeiXinOpenServiceServiceProxy::AsyncGetAccessTokenHandler(const ::trpc::ClientContextPtr& context, const ::ssz::GetAccessTokenReq& request) {
  if (context->GetFuncName().empty()) context->SetFuncName(WeiXinOpenService_method_names[0][0].data());
  return AsyncUnaryInvoke<::ssz::GetAccessTokenReq, ::ssz::GetAccessTokenRsp>(context, request);
}

::trpc::Status WeiXinOpenServiceServiceProxy::GetAccessTokenHandler(const ::trpc::ClientContextPtr& context, const ::ssz::GetAccessTokenReq& request) {
  if (context->GetFuncName().empty()) context->SetFuncName(WeiXinOpenService_method_names[0][0].data());
  return OnewayInvoke<::ssz::GetAccessTokenReq>(context, request);
}

::trpc::Future<::ssz::GetAccessTokenRsp> AsyncWeiXinOpenServiceServiceProxy::GetAccessTokenHandler(const ::trpc::ClientContextPtr& context, const ::ssz::GetAccessTokenReq& request) {
  if (context->GetFuncName().empty()) context->SetFuncName(WeiXinOpenService_method_names[0][0].data());
  return AsyncUnaryInvoke<::ssz::GetAccessTokenReq, ::ssz::GetAccessTokenRsp>(context, request);
}

} // end namespace ssz